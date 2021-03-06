// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Debugger API (clouddebugger/v2)
// Description:
//   Examines the call stack and variables of a running application without
//   stopping or slowing it down.
// Documentation:
//   http://cloud.google.com/debugger

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudDebugger_Breakpoint;
@class GTLRCloudDebugger_RegisterDebuggeeRequest;
@class GTLRCloudDebugger_UpdateActiveBreakpointRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// actionValue

/** Value: "CAPTURE" */
GTLR_EXTERN NSString * const kGTLRCloudDebuggerActionValueCapture;
/** Value: "LOG" */
GTLR_EXTERN NSString * const kGTLRCloudDebuggerActionValueLog;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Cloud Debugger query classes.
 */
@interface GTLRCloudDebuggerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Returns the list of all active breakpoints for the debuggee.
 *  The breakpoint specification (`location`, `condition`, and `expressions`
 *  fields) is semantically immutable, although the field values may
 *  change. For example, an agent may update the location line number
 *  to reflect the actual line where the breakpoint was set, but this
 *  doesn't change the breakpoint semantics.
 *  This means that an agent does not need to check if a breakpoint has changed
 *  when it encounters the same breakpoint on a successive call.
 *  Moreover, an agent should remember the breakpoints that are completed
 *  until the controller removes them from the active list to avoid
 *  setting those breakpoints again.
 *
 *  Method: clouddebugger.controller.debuggees.breakpoints.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_ControllerDebuggeesBreakpointsList : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForControllerDebuggeesBreakpointsListWithdebuggeeId:]

/** Identifies the debuggee. */
@property(nonatomic, copy, nullable) NSString *debuggeeId;

/**
 *  If set to `true` (recommended), returns `google.rpc.Code.OK` status and
 *  sets the `wait_expired` response field to `true` when the server-selected
 *  timeout has expired.
 *  If set to `false` (deprecated), returns `google.rpc.Code.ABORTED` status
 *  when the server-selected timeout has expired.
 */
@property(nonatomic, assign) BOOL successOnTimeout;

/**
 *  A token that, if specified, blocks the method call until the list
 *  of active breakpoints has changed, or a server-selected timeout has
 *  expired. The value should be set from the `next_wait_token` field in
 *  the last response. The initial value should be set to `"init"`.
 */
@property(nonatomic, copy, nullable) NSString *waitToken;

/**
 *  Fetches a @c GTLRCloudDebugger_ListActiveBreakpointsResponse.
 *
 *  Returns the list of all active breakpoints for the debuggee.
 *  The breakpoint specification (`location`, `condition`, and `expressions`
 *  fields) is semantically immutable, although the field values may
 *  change. For example, an agent may update the location line number
 *  to reflect the actual line where the breakpoint was set, but this
 *  doesn't change the breakpoint semantics.
 *  This means that an agent does not need to check if a breakpoint has changed
 *  when it encounters the same breakpoint on a successive call.
 *  Moreover, an agent should remember the breakpoints that are completed
 *  until the controller removes them from the active list to avoid
 *  setting those breakpoints again.
 *
 *  @param debuggeeId Identifies the debuggee.
 *
 *  @returns GTLRCloudDebuggerQuery_ControllerDebuggeesBreakpointsList
 */
+ (instancetype)queryWithDebuggeeId:(NSString *)debuggeeId;

@end

/**
 *  Updates the breakpoint state or mutable fields.
 *  The entire Breakpoint message must be sent back to the controller service.
 *  Updates to active breakpoint fields are only allowed if the new value
 *  does not change the breakpoint specification. Updates to the `location`,
 *  `condition` and `expressions` fields should not alter the breakpoint
 *  semantics. These may only make changes such as canonicalizing a value
 *  or snapping the location to the correct line of code.
 *
 *  Method: clouddebugger.controller.debuggees.breakpoints.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_ControllerDebuggeesBreakpointsUpdate : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForControllerDebuggeesBreakpointsUpdateWithObject:debuggeeId:identifier:]

/** Identifies the debuggee being debugged. */
@property(nonatomic, copy, nullable) NSString *debuggeeId;

/**
 *  Breakpoint identifier, unique in the scope of the debuggee.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Fetches a @c GTLRCloudDebugger_UpdateActiveBreakpointResponse.
 *
 *  Updates the breakpoint state or mutable fields.
 *  The entire Breakpoint message must be sent back to the controller service.
 *  Updates to active breakpoint fields are only allowed if the new value
 *  does not change the breakpoint specification. Updates to the `location`,
 *  `condition` and `expressions` fields should not alter the breakpoint
 *  semantics. These may only make changes such as canonicalizing a value
 *  or snapping the location to the correct line of code.
 *
 *  @param object The @c GTLRCloudDebugger_UpdateActiveBreakpointRequest to
 *    include in the query.
 *  @param debuggeeId Identifies the debuggee being debugged.
 *  @param identifier Breakpoint identifier, unique in the scope of the
 *    debuggee.
 *
 *  @returns GTLRCloudDebuggerQuery_ControllerDebuggeesBreakpointsUpdate
 */
+ (instancetype)queryWithObject:(GTLRCloudDebugger_UpdateActiveBreakpointRequest *)object
                     debuggeeId:(NSString *)debuggeeId
                     identifier:(NSString *)identifier;

@end

/**
 *  Registers the debuggee with the controller service.
 *  All agents attached to the same application must call this method with
 *  exactly the same request content to get back the same stable `debuggee_id`.
 *  Agents should call this method again whenever `google.rpc.Code.NOT_FOUND`
 *  is returned from any controller method.
 *  This protocol allows the controller service to disable debuggees, recover
 *  from data loss, or change the `debuggee_id` format. Agents must handle
 *  `debuggee_id` value changing upon re-registration.
 *
 *  Method: clouddebugger.controller.debuggees.register
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_ControllerDebuggeesRegister : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForControllerDebuggeesRegisterWithObject:]

/**
 *  Fetches a @c GTLRCloudDebugger_RegisterDebuggeeResponse.
 *
 *  Registers the debuggee with the controller service.
 *  All agents attached to the same application must call this method with
 *  exactly the same request content to get back the same stable `debuggee_id`.
 *  Agents should call this method again whenever `google.rpc.Code.NOT_FOUND`
 *  is returned from any controller method.
 *  This protocol allows the controller service to disable debuggees, recover
 *  from data loss, or change the `debuggee_id` format. Agents must handle
 *  `debuggee_id` value changing upon re-registration.
 *
 *  @param object The @c GTLRCloudDebugger_RegisterDebuggeeRequest to include in
 *    the query.
 *
 *  @returns GTLRCloudDebuggerQuery_ControllerDebuggeesRegister
 */
+ (instancetype)queryWithObject:(GTLRCloudDebugger_RegisterDebuggeeRequest *)object;

@end

/**
 *  Deletes the breakpoint from the debuggee.
 *
 *  Method: clouddebugger.debugger.debuggees.breakpoints.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsDelete : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForDebuggerDebuggeesBreakpointsDeleteWithdebuggeeId:breakpointId:]

/** ID of the breakpoint to delete. */
@property(nonatomic, copy, nullable) NSString *breakpointId;

/**
 *  The client version making the call.
 *  Schema: `domain/type/version` (e.g., `google.com/intellij/v1`).
 */
@property(nonatomic, copy, nullable) NSString *clientVersion;

/** ID of the debuggee whose breakpoint to delete. */
@property(nonatomic, copy, nullable) NSString *debuggeeId;

/**
 *  Fetches a @c GTLRCloudDebugger_Empty.
 *
 *  Deletes the breakpoint from the debuggee.
 *
 *  @param debuggeeId ID of the debuggee whose breakpoint to delete.
 *  @param breakpointId ID of the breakpoint to delete.
 *
 *  @returns GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsDelete
 */
+ (instancetype)queryWithDebuggeeId:(NSString *)debuggeeId
                       breakpointId:(NSString *)breakpointId;

@end

/**
 *  Gets breakpoint information.
 *
 *  Method: clouddebugger.debugger.debuggees.breakpoints.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsGet : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForDebuggerDebuggeesBreakpointsGetWithdebuggeeId:breakpointId:]

/** ID of the breakpoint to get. */
@property(nonatomic, copy, nullable) NSString *breakpointId;

/**
 *  The client version making the call.
 *  Schema: `domain/type/version` (e.g., `google.com/intellij/v1`).
 */
@property(nonatomic, copy, nullable) NSString *clientVersion;

/** ID of the debuggee whose breakpoint to get. */
@property(nonatomic, copy, nullable) NSString *debuggeeId;

/**
 *  Fetches a @c GTLRCloudDebugger_GetBreakpointResponse.
 *
 *  Gets breakpoint information.
 *
 *  @param debuggeeId ID of the debuggee whose breakpoint to get.
 *  @param breakpointId ID of the breakpoint to get.
 *
 *  @returns GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsGet
 */
+ (instancetype)queryWithDebuggeeId:(NSString *)debuggeeId
                       breakpointId:(NSString *)breakpointId;

@end

/**
 *  Lists all breakpoints for the debuggee.
 *
 *  Method: clouddebugger.debugger.debuggees.breakpoints.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsList : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForDebuggerDebuggeesBreakpointsListWithdebuggeeId:]

/**
 *  Only breakpoints with the specified action will pass the filter.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudDebuggerActionValueCapture Value "CAPTURE"
 *    @arg @c kGTLRCloudDebuggerActionValueLog Value "LOG"
 */
@property(nonatomic, copy, nullable) NSString *actionValue;

/**
 *  The client version making the call.
 *  Schema: `domain/type/version` (e.g., `google.com/intellij/v1`).
 */
@property(nonatomic, copy, nullable) NSString *clientVersion;

/** ID of the debuggee whose breakpoints to list. */
@property(nonatomic, copy, nullable) NSString *debuggeeId;

/**
 *  When set to `true`, the response includes the list of breakpoints set by
 *  any user. Otherwise, it includes only breakpoints set by the caller.
 */
@property(nonatomic, assign) BOOL includeAllUsers;

/**
 *  When set to `true`, the response includes active and inactive
 *  breakpoints. Otherwise, it includes only active breakpoints.
 */
@property(nonatomic, assign) BOOL includeInactive;

/**
 *  This field is deprecated. The following fields are always stripped out of
 *  the result: `stack_frames`, `evaluated_expressions` and `variable_table`.
 */
@property(nonatomic, assign) BOOL stripResults;

/**
 *  A wait token that, if specified, blocks the call until the breakpoints
 *  list has changed, or a server selected timeout has expired. The value
 *  should be set from the last response. The error code
 *  `google.rpc.Code.ABORTED` (RPC) is returned on wait timeout, which
 *  should be called again with the same `wait_token`.
 */
@property(nonatomic, copy, nullable) NSString *waitToken;

/**
 *  Fetches a @c GTLRCloudDebugger_ListBreakpointsResponse.
 *
 *  Lists all breakpoints for the debuggee.
 *
 *  @param debuggeeId ID of the debuggee whose breakpoints to list.
 *
 *  @returns GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsList
 */
+ (instancetype)queryWithDebuggeeId:(NSString *)debuggeeId;

@end

/**
 *  Sets the breakpoint to the debuggee.
 *
 *  Method: clouddebugger.debugger.debuggees.breakpoints.set
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsSet : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForDebuggerDebuggeesBreakpointsSetWithObject:debuggeeId:]

/**
 *  The client version making the call.
 *  Schema: `domain/type/version` (e.g., `google.com/intellij/v1`).
 */
@property(nonatomic, copy, nullable) NSString *clientVersion;

/** ID of the debuggee where the breakpoint is to be set. */
@property(nonatomic, copy, nullable) NSString *debuggeeId;

/**
 *  Fetches a @c GTLRCloudDebugger_SetBreakpointResponse.
 *
 *  Sets the breakpoint to the debuggee.
 *
 *  @param object The @c GTLRCloudDebugger_Breakpoint to include in the query.
 *  @param debuggeeId ID of the debuggee where the breakpoint is to be set.
 *
 *  @returns GTLRCloudDebuggerQuery_DebuggerDebuggeesBreakpointsSet
 */
+ (instancetype)queryWithObject:(GTLRCloudDebugger_Breakpoint *)object
                     debuggeeId:(NSString *)debuggeeId;

@end

/**
 *  Lists all the debuggees that the user has access to.
 *
 *  Method: clouddebugger.debugger.debuggees.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudDebuggerCloudDebugger
 *    @c kGTLRAuthScopeCloudDebuggerCloudPlatform
 */
@interface GTLRCloudDebuggerQuery_DebuggerDebuggeesList : GTLRCloudDebuggerQuery
// Previous library name was
//   +[GTLQueryCloudDebugger queryForDebuggerDebuggeesList]

/**
 *  The client version making the call.
 *  Schema: `domain/type/version` (e.g., `google.com/intellij/v1`).
 */
@property(nonatomic, copy, nullable) NSString *clientVersion;

/**
 *  When set to `true`, the result includes all debuggees. Otherwise, the
 *  result includes only debuggees that are active.
 */
@property(nonatomic, assign) BOOL includeInactive;

/** Project number of a Google Cloud project whose debuggees to list. */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  Fetches a @c GTLRCloudDebugger_ListDebuggeesResponse.
 *
 *  Lists all the debuggees that the user has access to.
 *
 *  @returns GTLRCloudDebuggerQuery_DebuggerDebuggeesList
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
