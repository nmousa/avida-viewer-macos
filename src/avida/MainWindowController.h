//
//  MainWindowController.h
//  avida/apps/viewer-macos
//
//  Created by David M. Bryson on 10/21/10.
//  Copyright 2010-2013 Michigan State University. All rights reserved.
//  http://avida.devosoft.org/viewer-macos
//
//  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
//  following conditions are met:
//  
//  1.  Redistributions of source code must retain the above copyright notice, this list of conditions and the
//      following disclaimer.
//  2.  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
//      following disclaimer in the documentation and/or other materials provided with the distribution.
//  3.  Neither the name of Michigan State University, nor the names of contributors may be used to endorse or promote
//      products derived from this software without specific prior written permission.
//  
//  THIS SOFTWARE IS PROVIDED BY MICHIGAN STATE UNIVERSITY AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
//  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL MICHIGAN STATE UNIVERSITY OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
//  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
//  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
//  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//  Authors: David M. Bryson <david@programerror.com>
//

#import <Cocoa/Cocoa.h>

@class AvidaController;

@class ActivityListViewController;
@class ConfigEditViewController;
@class GraphingViewController;
@class OrganismAnalysisViewController;
@class PopulationViewController;
@class StatsViewController;


// MainWindowController Interface
// --------------------------------------------------------------------------------------------------------------

@interface MainWindowController : NSWindowController <NSWindowDelegate, NSToolbarDelegate>
{
  AvidaController* avidaCtlr;
  
  IBOutlet NSToolbar* toolbar;
  IBOutlet NSView* tbViewShowWorkspace;
  IBOutlet NSView* tbViewViewSelect;
  IBOutlet NSView* tbViewStatusPanel;
  
  IBOutlet NSSplitView* splitMain;
  
  ConfigEditViewController* viewConfigEditCtlr;
  GraphingViewController* viewGraphingCtlr;
  OrganismAnalysisViewController* viewOrganismAnalysisCtlr;
  PopulationViewController* viewPopulationCtlr;
  StatsViewController* viewStatsCtlr;
}


// Init and Dealloc Methods
// --------------------------------------------------------------------------------------------------------------
#pragma mark - Init and Dealloc Methods

- (id) initWithAvidaController:(AvidaController*)ctlr;


// NSWindowController
// --------------------------------------------------------------------------------------------------------------
#pragma mark - NSWindowController
- (void) windowDidLoad;


// NSWindowDelegate
// --------------------------------------------------------------------------------------------------------------
#pragma mark - NSWindowDelegate

- (void) windowWillClose:(NSNotification*)notification;


// NSToolbarDelegate
// --------------------------------------------------------------------------------------------------------------
#pragma mark - NSToolbarDelegate

- (NSToolbarItem*) toolbar:(NSToolbar*)toolbar itemForItemIdentifier:(NSString*)itemIdentifier willBeInsertedIntoToolbar:(BOOL)flag;
- (NSArray*) toolbarDefaultItemIdentifiers:(NSToolbar*)toolbar;
- (NSArray*) toolbarAllowedItemIdentifiers:(NSToolbar*)toolbar;


// --------------------------------------------------------------------------------------------------------------
@end
