// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 240

// CurlRequestOptions'' @ 140f4c3c0

void __cdecl `dynamic_initializer_for_'FCurlHttpManager::CurlRequestOptions__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FCurlHttpManager::CurlRequestOptions__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultUserAgentCommentsEnabled'' @ 140f4c3e0

void __cdecl _dynamic_initializer_for__CVarDefaultUserAgentCommentsEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDefaultUserAgentCommentsEnabled,L"http.DefaultUserAgentCommentsEnabled",local_res8
             ,L"Whether comments are supported in the defualt user agent string",0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultUserAgentCommentsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarHttpAlwaysSetContentLengthEnabled'' @ 140f4c430

void __cdecl _dynamic_initializer_for__CVarHttpAlwaysSetContentLengthEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHttpAlwaysSetContentLengthEnabled,L"http.AlwaysSetContentLengthEnabled",local_res8
             ,
             L"Always set Content-Length header even if there is no content to upload when do the http request"
             ,0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarHttpAlwaysSetContentLengthEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarHttpCurlAllowHTTP2'' @ 140f4c480

void __cdecl _dynamic_initializer_for__CVarHttpCurlAllowHTTP2__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHttpCurlAllowHTTP2,L"http.CurlAllowHTTP2",local_res8,
             L"Whether to allow HTTP/2 for curl requests",0);
  atexit(_dynamic_atexit_destructor_for__CVarHttpCurlAllowHTTP2__);
  return;
}

// `dynamic_initializer_for_'CVarHttpCurlReuseConnectionEnabled'' @ 140f4c4d0

void __cdecl _dynamic_initializer_for__CVarHttpCurlReuseConnectionEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHttpCurlReuseConnectionEnabled,L"http.CurlReuseConnectionEnabled",local_res8,
             L"Whether to reuse connection by default",0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarHttpCurlReuseConnectionEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarHttpDurationInQueueToWarnInSeconds'' @ 140f4c520

void __cdecl _dynamic_initializer_for__CVarHttpDurationInQueueToWarnInSeconds__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHttpDurationInQueueToWarnInSeconds,L"http.DurationInQueueToWarnInSeconds",
             local_res8,
             L"If http request waited more than this duration in the queue, output a warning before starting"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHttpDurationInQueueToWarnInSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarHttpEventLoopEnableChance'' @ 140f4c570

void __cdecl _dynamic_initializer_for__CVarHttpEventLoopEnableChance__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHttpEventLoopEnableChance,L"http.CurlEventLoopEnableChance",local_res8,
             L"Enable chance of event loop, from 0 to 100",0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarHttpEventLoopEnableChance__);
  return;
}

// `dynamic_initializer_for_'CVarHttpInsecureProtocolEnabled'' @ 140f4c5c0

void __cdecl _dynamic_initializer_for__CVarHttpInsecureProtocolEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHttpInsecureProtocolEnabled,L"Http.InsecureProtocolEnabled",local_res8,
             L"Enable insecure http protocol",0);
  atexit(_dynamic_atexit_destructor_for__CVarHttpInsecureProtocolEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarHttpLogJsonResponseOnly'' @ 140f4c610

void __cdecl
UE::HttpRequestCommon::Private::_dynamic_initializer_for__CVarHttpLogJsonResponseOnly__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHttpLogJsonResponseOnly,L"http.LogJsonResponseOnly",local_res8,
             L"When log response payload, log json content only",0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarHttpLogJsonResponseOnly__);
  return;
}

// `dynamic_initializer_for_'CVarHttpMaxConcurrentRequests'' @ 140f4c660

void __cdecl _dynamic_initializer_for__CVarHttpMaxConcurrentRequests__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x100;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarHttpMaxConcurrentRequests,L"http.MaxConcurrentRequests",local_res8,
             L"The max number of http requests to run in parallel",0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarHttpMaxConcurrentRequests__);
  return;
}

// `dynamic_initializer_for_'CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread'' @ 140f4c6b0

void __cdecl
_dynamic_initializer_for__CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread,
             L"http.RemoveRequestUsingHttpThreadPolicyOnHttpThread",local_res8,
             L"When enabled, if http request use CompleteOnHttpThread, once complete it will be removed from http manager on http thread"
             ,0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread__);
  return;
}

// `dynamic_initializer_for_'CVarHttpRequestPriorityEnabled'' @ 140f4c700

void __cdecl _dynamic_initializer_for__CVarHttpRequestPriorityEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarHttpRequestPriorityEnabled,L"http.RequestPriorityEnabled",local_res8,
             L"Whether to enable http request priority in the queue when max requests limit reached."
             ,0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarHttpRequestPriorityEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarHttpThreadPriority'' @ 140f4c750

void __cdecl _dynamic_initializer_for__CVarHttpThreadPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHttpThreadPriority,L"http.ThreadPriority",&GHttpThreadPriorityIndex,
             L"Thread priority of the Http Manager thread: 0=Lowest, 1=BelowNormal, 2=SlightlyBelowNormal, 3=Normal, 4=AboveNormal\nNote that this is switchable at runtime"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHttpThreadPriority__);
  return;
}

// `dynamic_initializer_for_'CVarHttpUrlPatternsToDisableFailedLog'' @ 140f4c7a0

void __cdecl _dynamic_initializer_for__CVarHttpUrlPatternsToDisableFailedLog__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarHttpUrlPatternsToDisableFailedLog,L"http.UrlPatternsToDisableFailedLog",&local_18,
             L"List of url patterns to disable failed log: \"epicgames.com unrealengine.com ...\"",0
            );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarHttpUrlPatternsToDisableFailedLog__);
  return;
}

// `dynamic_initializer_for_'CVarHttpUrlPatternsToLogResponse'' @ 140f4c810

void __cdecl _dynamic_initializer_for__CVarHttpUrlPatternsToLogResponse__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarHttpUrlPatternsToLogResponse,L"http.UrlPatternsToLogResponse",&local_18,
             L"List of url patterns to log headers and json content: \"epicgames.com unrealengine.com ...\""
             ,0x2000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarHttpUrlPatternsToLogResponse__);
  return;
}

// `dynamic_initializer_for_'CVarHttpUrlPatternsToMockResponse'' @ 140f4c880

void __cdecl _dynamic_initializer_for__CVarHttpUrlPatternsToMockResponse__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarHttpUrlPatternsToMockResponse,L"http.UrlPatternsToMockResponse",&local_18,
             L"List of url patterns to mock failure with response code, 0 indicates ConnectionError: \"epicgames.com->0 unrealengine.com->503 ...\""
             ,0x2000);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarHttpUrlPatternsToMockResponse__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 140f4c8f0

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 140f4c920

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_HTTP'' @ 140f4c940

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_HTTP__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_HTTP,L"HTTP",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogHttp'' @ 140f4c990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHttp__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHttp,L"LogHttp",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogHttp__);
  return;
}

// `dynamic_initializer_for_'LogWinHttp'' @ 140f4c9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWinHttp__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogWinHttp,L"LogWinHttp",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWinHttp__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantHTTP'' @ 140f4ca10

void __cdecl _dynamic_initializer_for__ModuleRegistrantHTTP__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "HTTP";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"HTTP",4);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FHttpModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 140f4ca60

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_ActiveSleep'' @ 140f4ca80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_ActiveSleep__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_ActiveSleep ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_ActiveSleep>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_ActiveSleep");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_ActiveSleep,*pFVar1,
               L"ActiveSleep","STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_CompleteThreadedRequest'' @ 140f4cb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_CompleteThreadedRequest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_CompleteThreadedRequest ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_CompleteThreadedRequest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_CompleteThreadedRequest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_CompleteThreadedRequest,*pFVar1
               ,L"CompleteThreadedRequest","STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_HttpThreadTick'' @ 140f4cba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_HttpThreadTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_HttpThreadTick ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_HttpThreadTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_HttpThreadTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_HttpThreadTick,*pFVar1,
               L"HttpThreadTick","STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_IdleSleep'' @ 140f4cc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_IdleSleep__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_IdleSleep ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_IdleSleep>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_IdleSleep");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_IdleSleep,*pFVar1,L"IdleSleep",
               "STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_IsThreadedRequestComplete'' @ 140f4ccc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_IsThreadedRequestComplete__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_IsThreadedRequestComplete ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_IsThreadedRequestComplete>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_IsThreadedRequestComplete");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_IsThreadedRequestComplete,
               *pFVar1,L"IsThreadedRequestComplete","STATGROUP_HTTPThread","STATCAT_Advanced",
               L"HTTP Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_Process'' @ 140f4cd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_Process__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_Process == (FThreadSafeStaticStat<FStat_STAT_HTTPThread_Process>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_Process");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_Process,*pFVar1,L"Process",
               "STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_StartThreadedRequest'' @ 140f4cde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_StartThreadedRequest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_StartThreadedRequest ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_StartThreadedRequest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_StartThreadedRequest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_StartThreadedRequest,*pFVar1,
               L"StartThreadedRequest","STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_HTTPThread_TickThreadedRequest'' @ 140f4ce70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_HTTPThread_TickThreadedRequest__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_HTTPThread_TickThreadedRequest ==
      (FThreadSafeStaticStat<FStat_STAT_HTTPThread_TickThreadedRequest>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_HTTPThread_TickThreadedRequest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HTTPThread_TickThreadedRequest,*pFVar1,
               L"TickThreadedRequest","STATGROUP_HTTPThread","STATCAT_Advanced",L"HTTP Thread",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 140f4cf00

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_HttpManager'' @ 140f4cf20

void __cdecl _dynamic_initializer_for___GCsvCategory_HttpManager__(void)

{
  FString::operator=(&_GCsvCategory_HttpManager.Name,L"HttpManager");
  _GCsvCategory_HttpManager.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_HttpManager.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_HttpManager__);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_BandwidthMbps'' @ 140f4cf70

void __cdecl _dynamic_initializer_for___GCsvStat_BandwidthMbps__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_BandwidthMbps.Name,L"BandwidthMbps");
  _GCsvStat_BandwidthMbps.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_BandwidthMbps.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_DownloadedMB'' @ 140f4cfb0

void __cdecl _dynamic_initializer_for___GCsvStat_DownloadedMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_DownloadedMB.Name,L"DownloadedMB");
  _GCsvStat_DownloadedMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_DownloadedMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_DurationMsAvg'' @ 140f4cff0

void __cdecl _dynamic_initializer_for___GCsvStat_DurationMsAvg__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_DurationMsAvg.Name,L"DurationMsAvg");
  _GCsvStat_DurationMsAvg.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_DurationMsAvg.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_MaxRequestsInFlight'' @ 140f4d030

void __cdecl _dynamic_initializer_for___GCsvStat_MaxRequestsInFlight__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_MaxRequestsInFlight.Name,L"MaxRequestsInFlight");
  _GCsvStat_MaxRequestsInFlight.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_MaxRequestsInFlight.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_MaxRequestsInQueue'' @ 140f4d070

void __cdecl _dynamic_initializer_for___GCsvStat_MaxRequestsInQueue__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_MaxRequestsInQueue.Name,L"MaxRequestsInQueue");
  _GCsvStat_MaxRequestsInQueue.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_MaxRequestsInQueue.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_MaxTimeToWaitInQueue'' @ 140f4d0b0

void __cdecl _dynamic_initializer_for___GCsvStat_MaxTimeToWaitInQueue__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_MaxTimeToWaitInQueue.Name,L"MaxTimeToWaitInQueue");
  _GCsvStat_MaxTimeToWaitInQueue.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_MaxTimeToWaitInQueue.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_RequestsInFlight'' @ 140f4d0f0

void __cdecl _dynamic_initializer_for___GCsvStat_RequestsInFlight__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_RequestsInFlight.Name,L"RequestsInFlight");
  _GCsvStat_RequestsInFlight.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_RequestsInFlight.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_RequestsInQueue'' @ 140f4d130

void __cdecl _dynamic_initializer_for___GCsvStat_RequestsInQueue__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_HttpManager.Index;
  FName::FName(&_GCsvStat_RequestsInQueue.Name,L"RequestsInQueue");
  _GCsvStat_RequestsInQueue.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_RequestsInQueue.Name,uVar1);
  return;
}

// `scalar_deleting_destructor' @ 1431497a0

void * __thiscall FHttpModule::_scalar_deleting_destructor_(FHttpModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->AllowedDomains).AllocatorInstance.Data,
             (this->AllowedDomains).ArrayNum);
  pFVar1 = (this->AllowedDomains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HttpNoProxy).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProxyAddress).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DefaultHeaders).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DefaultHeaders).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultHeaders);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14314985c

/* [thunk]:public: virtual void * __ptr64 __cdecl FHttpModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FHttpModule::_vector_deleting_destructor__adjustor_8__(FHttpModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FHttpModule *)&this[-1].AllowedDomains.ArrayNum,param_1);
  return pvVar1;
}

// ConstructItems<TSharedRef<IHttpRequest,1>,TSharedRef<IHttpRequest,1>,int> @ 14314a870

void __cdecl
ConstructItems<TSharedRef<IHttpRequest,1>,TSharedRef<IHttpRequest,1>,int>
          (void *param_1,TSharedRef<IHttpRequest,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IHttpRequest **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>,int> @ 14314ab50

void __cdecl
DestructItems<TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>,int>
          (TTuple<FHttpManager::FUrlToMatch,FHttpManager::FMockResponse> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    UE::Core::Private::Tuple::
    TTupleBase<TIntegerSequence<unsigned_int,0,1>,FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>
    ::
    ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>
              ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,FHttpManager::FUrlToMatch,FHttpManager::FMockResponse>
                *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,int> @ 14314ab90

void __cdecl
DestructItems<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,int>
          (FHttpRetryRequestEntry *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Request).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<IHttpRequest,1>,int> @ 14314abd0

void __cdecl
DestructItems<TSharedRef<IHttpRequest,1>,int>(TSharedRef<IHttpRequest,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniqueFunction<void___cdecl(void)>,int> @ 14314ac10

void __cdecl
DestructItems<TUniqueFunction<void___cdecl(void)>,int>
          (TUniqueFunction<void___cdecl(void)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEach<TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_>_&,`UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce'::__l14::<lambda_2>_> @ 14314b7a0

void __cdecl
Algo::
ForEach<TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_>_&,_UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce_::__l14::<lambda_2>_>
          (TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_2> param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TUniqueFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(void **)pFVar5 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
      pcVar2 = *(code **)pFVar5;
      pFVar4 = pFVar5 + 0x10;
      if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
      }
      uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
      (*pcVar2)(uVar3);
    }
    pFVar5 = pFVar5 + 0x30;
  }
  return;
}

// ForEach<TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_>_&,`UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce'::__l14::<lambda_2>_> @ 14314b830

void __cdecl
Algo::
ForEach<TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_>_&,_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce_::__l14::<lambda_2>_>
          (TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_2> param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TUniqueFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(void **)pFVar5 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
      pcVar2 = *(code **)pFVar5;
      pFVar4 = pFVar5 + 0x10;
      if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
      }
      uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
      (*pcVar2)(uVar3);
    }
    pFVar5 = pFVar5 + 0x30;
  }
  return;
}

// ForEach<TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_>_&,`UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce'::__l14::<lambda_2>_> @ 14314b8c0

void __cdecl
Algo::
ForEach<TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_>_&,_UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::RunOnce_::__l14::<lambda_2>_>
          (TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_2> param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TUniqueFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(void **)pFVar5 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
      pcVar2 = *(code **)pFVar5;
      pFVar4 = pFVar5 + 0x10;
      if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
      }
      uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
      (*pcVar2)(uVar3);
    }
    pFVar5 = pFVar5 + 0x30;
  }
  return;
}

// HeapSiftDown<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,FIdentityFunctor,TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>_> @ 14314b950

void __cdecl
AlgoImpl::
HeapSiftDown<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,int,FIdentityFunctor,TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>_>
          (TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
           *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TDereferenceWrapper<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>,UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder>
          *param_5)

{
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  *pTVar1;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  *pTVar2;
  int iVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_38;
  TManagedStorageInternalHandle<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>_>
  local_28;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar3 = param_2 * 2;
    iVar9 = iVar3 + 1;
    if (iVar3 + 2 < param_3) {
      pTVar1 = param_1 + (longlong)iVar3 + 2;
      local_38.ExternalHandle.ID = (pTVar1->ExternalHandle).ID;
      local_38.InternalIndex = pTVar1->InternalIndex;
      local_38._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
      pTVar1 = param_1 + iVar9;
      local_28.ExternalHandle.ID = (pTVar1->ExternalHandle).ID;
      local_28.InternalIndex = pTVar1->InternalIndex;
      local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
      bVar8 = UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::
              FTimerHeapOrder::operator()(param_5->Predicate,&local_28,&local_38);
      if (bVar8) {
        iVar9 = iVar3;
      }
      iVar9 = iVar9 + 1;
    }
    pTVar1 = param_1 + param_2;
    local_28.ExternalHandle.ID = (pTVar1->ExternalHandle).ID;
    local_28.InternalIndex = pTVar1->InternalIndex;
    local_28._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    pTVar1 = param_1 + iVar9;
    local_38.ExternalHandle.ID = (pTVar1->ExternalHandle).ID;
    local_38.InternalIndex = pTVar1->InternalIndex;
    local_38._12_4_ = *(undefined4 *)&pTVar1->field_0xc;
    bVar8 = UE::EventLoop::TTimerManager<UE::EventLoop::FTimerManagerDefaultTraits>::FTimerHeapOrder
            ::operator()(param_5->Predicate,&local_38,&local_28);
    if (!bVar8) break;
    pTVar1 = param_1 + param_2;
    uVar4 = (pTVar1->ExternalHandle).ID;
    iVar6 = pTVar1->InternalIndex;
    uVar7 = *(undefined4 *)&pTVar1->field_0xc;
    pTVar1 = param_1 + iVar9;
    iVar3 = pTVar1->InternalIndex;
    uVar5 = *(undefined4 *)&pTVar1->field_0xc;
    pTVar2 = param_1 + param_2;
    (pTVar2->ExternalHandle).ID = (pTVar1->ExternalHandle).ID;
    pTVar2->InternalIndex = iVar3;
    *(undefined4 *)&pTVar2->field_0xc = uVar5;
    pTVar1 = param_1 + iVar9;
    (pTVar1->ExternalHandle).ID = uVar4;
    pTVar1->InternalIndex = iVar6;
    *(undefined4 *)&pTVar1->field_0xc = uVar7;
    param_2 = iVar9;
  }
  return;
}

// TransformIf<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,`FDefaultUserAgentBuilder::BuildCommentString'::__l2::<lambda_1>,`FDefaultUserAgentBuilder::BuildCommentString'::__l2::<lambda_2>_> @ 14314be70

/* WARNING: Removing unreachable block (ram,0x00014314c092) */

void __cdecl
Algo::
TransformIf<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_FDefaultUserAgentBuilder::BuildCommentString_::__l2::<lambda_1>,_FDefaultUserAgentBuilder::BuildCommentString_::__l2::<lambda_2>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3,<lambda_2> param_4
          )

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FString local_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar9) {
      return;
    }
    if (param_3.AllowedCommentsFilter ==
        (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0) {
LAB_14314bf10:
      _Src = *(void **)&pFVar8->field_0x0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar5 = *(int *)(pFVar8 + 8);
      local_38.Data.ArrayNum = iVar5;
      if (iVar5 == 0) {
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)&local_38,iVar5,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
      }
      ::FString::ReplaceInline(&local_38,L"(",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_38,L")",L"",IgnoreCase);
      ::FString::ReplaceInline(&local_38,L";",L"",IgnoreCase);
      pFVar7 = (param_2->AllocatorInstance).Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
      *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
    }
    else {
      iVar5 = *(int *)(pFVar8 + 8) + -1;
      if (*(int *)(pFVar8 + 8) == 0) {
        pwVar6 = L"";
        iVar5 = 0;
      }
      else {
        pwVar6 = *(wchar_t **)&pFVar8->field_0x0;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
      iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(param_3.AllowedCommentsFilter,uVar4,(FString *)pFVar8);
      if (iVar5 != -1) goto LAB_14314bf10;
    }
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_> @ 14314c100

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_> @ 14314c110

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_> @ 14314c120

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_> @ 14314c130

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_> @ 14314c140

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_> @ 14314c150

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_> @ 14314c160

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *param_1
          )

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_> @ 14314c170

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *param_1
          )

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_> @ 14314c180

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_> @ 14314c190

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>_> @ 14314c1a0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>_> @ 14314c1b0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>_>
          (_Atomic_padded<TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> @ 14314c1c0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TMpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*> @ 14314c1d0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*> @ 14314c1e0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> @ 14314c1f0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*> @ 14314c200

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TSpscQueue<FHttpRequestCommon_*,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*> @ 14314c210

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,TSpscQueue<TTuple<FString,FString>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FLegacyHttpThread::AddHttpThreadTask'::__l2::<lambda_1>_> @ 14314c220

TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_protected:_virtual_class_TSharedPtr<IHttpTaskTimerHandle,1>___cdecl_FLegacyHttpThread::AddHttpThreadTask(TFunction<void___cdecl(void)>_&&,float)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FLegacyHttpThread::AddHttpThreadTask'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FLegacyHttpThread::AddHttpThreadTask_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_protected:_virtual_class_TSharedPtr<IHttpTaskTimerHandle,1>___cdecl_FLegacyHttpThread::AddHttpThreadTask(TFunction<void___cdecl(void)>_&&,float)_::_2_::<lambda_1>_>
          *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FLegacyHttpThread::AddHttpThreadTask'::`2'::<lambda_1>_>
        ::_vftable_;
  *(FLegacyHttpThread **)((longlong)this + 0x20) = (param_1->Functor).__this;
  lVar1 = *(longlong *)&(param_1->Functor).Task;
  *(longlong *)((longlong)this + 0x30) = lVar1;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->Functor).Task.field_0x28;
    puVar3 = (undefined8 *)&(param_1->Functor).Task.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)(puVar3,(longlong)this + 0x40);
  }
  return this;
}

// ~TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,0,0> @ 14314f3c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FHttpRequestCommon::CancelRequest_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::`2'::<lambda_1>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,1,0> @ 14314f3e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FCurlMultiPollEventLoopHttpThread::CreateEventLoop_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,0,1> @ 14314f400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay_::__l2::<lambda_1>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014314f42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,1,0> @ 14314f440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FEventLoopHttpThread::ResetTickTimer_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::`2'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,0,1> @ 14314f460

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FHttpRetrySystem::FManager::RetryHttpRequestWithDelay_::__l2::<lambda_1>,0,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014314f48a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,0,0> @ 14314f4a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FHttpRequestCommon::StartActivityTimeoutTimerBy_::__l2::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014314f4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,0,0> @ 14314f4e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FHttpRequestCommon::StartTotalTimeoutTimer_::__l2::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::`2'::<lambda_1>,0,0>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014314f50a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,1,0> @ 14314f520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FEventLoopHttpThread::AddRequest_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,1,0> @ 14314f540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FEventLoopHttpThread::CancelRequest_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,0,0> @ 14314f560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNullHttpRequest::CancelRequest_::__l5::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::`5'::<lambda_1>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,1,0> @ 14314f580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FEventLoopHttpThread::StopThread_::__l5::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`5'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,0,0> @ 14314f5a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FHttpRequestCommon::TriggerMockResponse_::__l8::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::`8'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,0,1> @ 14314f5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_FHttpRequestCommon::TriggerStatusCodeReceivedDelegate_::__l9::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,0,0> @ 14314f5e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FHttpRequestCommon::FinishRequestNotInHttpManager_::__l10::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`10'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,1,0> @ 14314f600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback_::__l23::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::`23'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,1,0> @ 14314f620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback_::__l23::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::`23'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,1,0> @ 14314f640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FEventLoopHttpThread::StopThread_::__l5::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`5'::<lambda_2>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,0,0> @ 14314f660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FHttpRequestCommon::FinishRequestNotInHttpManager_::__l17::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`17'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,1,0> @ 14314f680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,1,0>::
~TFunction_OwnedObject<_FEventLoopHttpThread::StopThread_::__l15::<lambda_3>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`15'::<lambda_3>,1,0>::_vftable_;
  return;
}

// operator| @ 143152120

EStatFlags __cdecl operator|(EStatFlags param_1,EStatFlags param_2)

{
  return param_1 | param_2;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14315212c

/* [thunk]:public: virtual void * __ptr64 __cdecl FCurlHttpThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FCurlHttpThread::_vector_deleting_destructor__adjustor_8__(FCurlHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FCurlHttpThread *)&this[-1].HandlesToRequests.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14315213c

/* [thunk]:public: virtual void * __ptr64 __cdecl FCurlMultiPollEventLoopHttpThread::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FCurlMultiPollEventLoopHttpThread::_vector_deleting_destructor__adjustor_8__
          (FCurlMultiPollEventLoopHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FCurlMultiPollEventLoopHttpThread *)&this[-1].HandlesToRequests.field_0x48,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14315214c

/* [thunk]:public: virtual void * __ptr64 __cdecl FCurlSocketEventLoopHttpThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FCurlSocketEventLoopHttpThread::_vector_deleting_destructor__adjustor_8__
          (FCurlSocketEventLoopHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FCurlSocketEventLoopHttpThread *)&this[-1].EventLoop.bIsSet,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14315215c

/* [thunk]:public: virtual void * __ptr64 __cdecl FEventLoopHttpThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FEventLoopHttpThread::_vector_deleting_destructor__adjustor_8__
          (FEventLoopHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FEventLoopHttpThread *)&this[-1].RequestTickTimer,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14315216c

/* [thunk]:public: virtual void * __ptr64 __cdecl FHttpThreadBase::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FHttpThreadBase::_vector_deleting_destructor__adjustor_8__(FHttpThreadBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FHttpThreadBase *)&this[-1].CompletedThreadedRequests.NumElems,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14315217c

/* [thunk]:public: virtual void * __ptr64 __cdecl FLegacyHttpThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FLegacyHttpThread::_vector_deleting_destructor__adjustor_8__(FLegacyHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FLegacyHttpThread *)&this[-1].Ticker.Elements.ArrayNum,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 143152190

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431521c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431521f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152220

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152250

void * __thiscall
IBaseDelegateInstance<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152280

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`FHttpRequestCommon::ProcessRequestUntilComplete'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431522b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy,`FHttpModule::HandleHTTPCommand'::__l55::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431522e0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FLegacyHttpThread::AddHttpThreadTask'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152340

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FHttpManager::AddGameThreadTask'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431523a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpRetrySystem::FManager::FHttpLogVerbosityTracker,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431523d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpManager,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152400

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152430

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FHttpTest,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152460

void * __thiscall
TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FUserAgentImpl,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152490

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431524f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152550

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431525b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152610

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152640

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152670

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431526a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431526d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152700

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(wchar_t_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152730

void * __thiscall
UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
_scalar_deleting_destructor_
          (TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits> *this,
          uint param_1)

{
  ~TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x5a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152770

void * __thiscall
UE::EventLoop::
TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
_scalar_deleting_destructor_
          (TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
           *this,uint param_1)

{
  ~TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>(this)
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x548);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431527b0

void * __thiscall
UE::EventLoop::TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>::
_scalar_deleting_destructor_
          (TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits> *this,
          uint param_1)

{
  ~TEventLoop<UE::EventLoop::FIOManagerNull,UE::EventLoop::FEventLoopDefaultTraits>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x540);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431527f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<FString_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_AVFString__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::CancelRequest'::`2'::<lambda_1>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCurlMultiPollEventLoopHttpThread::CreateEventLoop'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431528c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRetrySystem::FManager::HttpRequestTimeoutAfterDelay'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::ResetTickTimer'::`2'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRetrySystem::FManager::RetryHttpRequestWithDelay'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431529e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::StartActivityTimeoutTimerBy'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::StartTotalTimeoutTimer'::`2'::<lambda_1>,0,0>::
        _vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::AddRequest'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::CancelRequest'::`5'::<lambda_1>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNullHttpRequest::CancelRequest'::`5'::<lambda_1>,0,0>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`5'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::__l8::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::TriggerMockResponse'::`8'::<lambda_1>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::__l9::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::TriggerStatusCodeReceivedDelegate'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l10::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`10'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::__l23::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlSocketCallback'::`23'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::__l23::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCurlSocketEventLoopHttpThread::HandleCurlTimerCallback'::`23'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l5::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`5'::<lambda_2>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::__l17::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FHttpRequestCommon::FinishRequestNotInHttpManager'::`17'::<lambda_2>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::__l15::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FEventLoopHttpThread::StopThread'::`15'::<lambda_3>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152e10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FArchiveWithDelegateV2,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FArchiveWithDelegateV2,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152e50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FTransactionallySafeHttpRequest::FClosedHttpRequest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTransactionallySafeHttpRequest::FClosedHttpRequest,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152e90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCurlHttpResponse,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FCurlHttpResponse,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152ed0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpTaskTimerHandleEventLoop,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FHttpTaskTimerHandleEventLoop,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152f10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpTaskTimerHandleFTSTicker,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FHttpTaskTimerHandleFTSTicker,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152f50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNullHttpRequest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FNullHttpRequest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152f90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTransactionallySafeHttpRequest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTransactionallySafeHttpRequest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143152fd0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHttpRetrySystem::FRequest,SharedPointerInternals::DefaultDeleter<FHttpRetrySystem::FRequest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FHttpRetrySystem::FRequest,SharedPointerInternals::DefaultDeleter<FHttpRetrySystem::FRequest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153010

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWinHttpConnectionHttp,SharedPointerInternals::DefaultDeleter<FWinHttpConnectionHttp>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FWinHttpConnectionHttp,SharedPointerInternals::DefaultDeleter<FWinHttpConnectionHttp>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153050

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IHttpRequest,SharedPointerInternals::DefaultDeleter<IHttpRequest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<IHttpRequest,SharedPointerInternals::DefaultDeleter<IHttpRequest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153090

void * __thiscall
FArchiveWithDelegateV2::_scalar_deleting_destructor_(FArchiveWithDelegateV2 *this,uint param_1)

{
  ~FArchiveWithDelegateV2(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431530d0

void * __thiscall
FTransactionallySafeHttpRequest::FClosedHttpRequest::_scalar_deleting_destructor_
          (FClosedHttpRequest *this,uint param_1)

{
  ~FClosedHttpRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153110

void * __thiscall
FCurlHttpManager::_scalar_deleting_destructor_(FCurlHttpManager *this,uint param_1)

{
  FHttpManager::~FHttpManager((FHttpManager *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153150

void * __thiscall
FCurlHttpRequest::_scalar_deleting_destructor_(FCurlHttpRequest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FCurlHttpRequest__6B_;
  if (FCurlHttpManager::GMultiHandle == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCurlHttpManager::IsInit()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                       ,0xd3,L"Curl request was held after the library was shutdown.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if (this->EasyHandle != (void *)0x0) {
    curl_easy_cleanup();
    this->EasyHandle = (void *)0x0;
  }
  if (this->HeaderList != (curl_slist *)0x0) {
    curl_slist_free_all();
    this->HeaderList = (curl_slist *)0x0;
  }
  DestructItems<FString,int>((FString *)&this->InfoMessageCache,(this->InfoMessageCache).ArrayNum);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InfoMessageCacheCriticalSection);
  TSpscQueue<TTuple<FString,FString>,FMemory>::~TSpscQueue<TTuple<FString,FString>,FMemory>
            (&this->NewlyReceivedHeaders);
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  pvVar4 = *(void **)&(this->Headers).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Headers);
  pFVar1 = (this->Verb).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FHttpRequestCommon::~FHttpRequestCommon((FHttpRequestCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153270

void * __thiscall
FCurlHttpResponse::_scalar_deleting_destructor_(FCurlHttpResponse *this,uint param_1)

{
  FHttpResponseCommon::~FHttpResponseCommon((FHttpResponseCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431532b0

void * __thiscall FCurlHttpThread::_scalar_deleting_destructor_(FCurlHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->HandlesToRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HandlesToRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlesToRequests);
  this->_padding_ = (longlong)&FLegacyHttpThread::_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&FLegacyHttpThread::_vftable__for__FSingleThreadRunnable__;
  FTSTicker::~FTSTicker((FTSTicker *)&this->_padding_);
  FHttpThreadBase::~FHttpThreadBase((FHttpThreadBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153340

void * __thiscall
FCurlMultiPollEventLoopHttpThread::_scalar_deleting_destructor_
          (FCurlMultiPollEventLoopHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->HandlesToRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HandlesToRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlesToRequests);
  if ((this->EventLoop).bIsSet != false) {
    UE::EventLoop::TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>::
    ~TEventLoop<FCurlMultiPollIOManager,UE::EventLoop::FEventLoopDefaultTraits>
              (&(this->EventLoop).TypedValue);
  }
  this->_padding_ = (longlong)&FEventLoopHttpThread::_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&FEventLoopHttpThread::_vftable__for__FSingleThreadRunnable__;
  FHttpThreadBase::~FHttpThreadBase((FHttpThreadBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431533e0

void * __thiscall
FCurlMultiPollIOManager::_scalar_deleting_destructor_(FCurlMultiPollIOManager *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->Params).ProcessCurlRequests != 0) {
    plVar1 = *(longlong **)&(this->Params).ProcessCurlRequests.field_0x28;
    plVar2 = (longlong *)&(this->Params).ProcessCurlRequests.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153440

void * __thiscall
FCurlSocketEventLoopHttpThread::_scalar_deleting_destructor_
          (FCurlSocketEventLoopHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  if ((this->EventLoop).bIsSet != false) {
    UE::EventLoop::
    TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>::
    ~TEventLoop<UE::EventLoop::FIOManagerBSDSocketSelect,UE::EventLoop::FEventLoopDefaultTraits>
              (&(this->EventLoop).TypedValue);
  }
  *(undefined4 *)&(this->HandlesToRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HandlesToRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlesToRequests);
  this->_padding_ = (longlong)&FEventLoopHttpThread::_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&FEventLoopHttpThread::_vftable__for__FSingleThreadRunnable__;
  FHttpThreadBase::~FHttpThreadBase((FHttpThreadBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x648);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431534e0

void * __thiscall
FEventLoopHttpThread::_scalar_deleting_destructor_(FEventLoopHttpThread *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FHttpThreadBase::~FHttpThreadBase((FHttpThreadBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153530

void * __thiscall
FGenericPlatformHttpRequest::_scalar_deleting_destructor_
          (FGenericPlatformHttpRequest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->EffectiveURL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FHttpRequestImpl::~FHttpRequestImpl((FHttpRequestImpl *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153590

void * __thiscall FHttpManager::_scalar_deleting_destructor_(FHttpManager *this,uint param_1)

{
  ~FHttpManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431535d0

void * __thiscall
FHttpRequestAdapterBase::_scalar_deleting_destructor_(FHttpRequestAdapterBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FHttpRequestAdapterBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HttpRequest).SharedReferenceCount.ReferenceController);
  FHttpRequestImpl::~FHttpRequestImpl((FHttpRequestImpl *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153630

void * __thiscall
FHttpRequestCommon::_scalar_deleting_destructor_(FHttpRequestCommon *this,uint param_1)

{
  ~FHttpRequestCommon(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153670

void * __thiscall
FHttpRequestImpl::_scalar_deleting_destructor_(FHttpRequestImpl *this,uint param_1)

{
  ~FHttpRequestImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431536b0

void * __thiscall
FHttpResponseCommon::_scalar_deleting_destructor_(FHttpResponseCommon *this,uint param_1)

{
  ~FHttpResponseCommon(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431536f0

void * __thiscall
FHttpTaskTimerHandleEventLoop::_scalar_deleting_destructor_
          (FHttpTaskTimerHandleEventLoop *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHttpTaskTimerHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153730

void * __thiscall
FHttpTaskTimerHandleFTSTicker::_scalar_deleting_destructor_
          (FHttpTaskTimerHandleFTSTicker *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Handle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IHttpTaskTimerHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431537a0

void * __thiscall FHttpThreadBase::_scalar_deleting_destructor_(FHttpThreadBase *this,uint param_1)

{
  ~FHttpThreadBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431537e0

void * __thiscall
UE::EventLoop::FIOManagerNull::_scalar_deleting_destructor_(FIOManagerNull *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153810

void * __thiscall
FLegacyHttpThread::_scalar_deleting_destructor_(FLegacyHttpThread *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FTSTicker::~FTSTicker(&this->Ticker);
  FHttpThreadBase::~FHttpThreadBase((FHttpThreadBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153870

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FHttpRetrySystem::FManager::_scalar_deleting_destructor_(FManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FHttpLogVerbosityTracker *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->RequestListLock;
  this->_padding_ = (longlong)&___7FManager_FHttpRetrySystem__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->RequestList).ArrayNum;
    pFVar5 = (this->RequestList).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((this->RequestList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      if (*(int *)(pFVar5 + 4) != 0) {
        this_00 = FHttpLogVerbosityTracker::Get();
        FHttpLogVerbosityTracker::DecrementRetriedRequests(this_00);
      }
      pFVar5 = pFVar5 + 0x30;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<FHttpRetrySystem::FManager::FHttpRetryRequestEntry,int>
              ((FHttpRetryRequestEntry *)(this->RequestList).AllocatorInstance.Data,
               (this->RequestList).ArrayNum);
    pFVar5 = (this->RequestList).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    plVar3 = (longlong *)this->_padding_;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x78);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `scalar_deleting_destructor' @ 143153980

void * __thiscall
FNullHttpRequest::_scalar_deleting_destructor_(FNullHttpRequest *this,uint param_1)

{
  ~FNullHttpRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431539c0

void * __thiscall
FHttpRetrySystem::FRequest::_scalar_deleting_destructor_(FRequest *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastResponse).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->RetryManager).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->OriginalUrl).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RetryDomains).SharedReferenceCount.ReferenceController);
  (this->RetryVerbs).HashSize = 0;
  FVar5 = (this->RetryVerbs).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RetryVerbs).Elements);
  (this->RetryResponseCodes).HashSize = 0;
  FVar5 = (this->RetryResponseCodes).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RetryResponseCodes).Elements);
  this->_padding_ = (longlong)&___7FHttpRequestAdapterBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FHttpRequestImpl::~FHttpRequestImpl((FHttpRequestImpl *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153ac0

void * __thiscall FRequestPayload::_scalar_deleting_destructor_(FRequestPayload *this,uint param_1)

{
  *this = (FRequestPayload)&___7FRequestPayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153b00

void * __thiscall
FRequestPayloadInFileStream::_scalar_deleting_destructor_
          (FRequestPayloadInFileStream *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRequestPayloadInFileStream__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->File).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRequestPayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153b70

void * __thiscall
FRequestPayloadInMemory::_scalar_deleting_destructor_(FRequestPayloadInMemory *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRequestPayloadInMemory__6B_;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRequestPayload__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153bd0

void * __thiscall
FTransactionallySafeHttpRequest::_scalar_deleting_destructor_
          (FTransactionallySafeHttpRequest *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InnerRequest).SharedReferenceCount.ReferenceController);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153c40

void * __thiscall
FWinHttpConnectionHttp::_scalar_deleting_destructor_(FWinHttpConnectionHttp *this,uint param_1)

{
  ~FWinHttpConnectionHttp(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153c80

void * __thiscall
FWinHttpHttpManager::_scalar_deleting_destructor_(FWinHttpHttpManager *this,uint param_1)

{
  bool bVar1;
  
  bVar1 = GWinHttpManager == this;
  *(undefined ***)this = &___7FWinHttpHttpManager__6B_;
  if (bVar1) {
    GWinHttpManager = (FWinHttpHttpManager *)0x0;
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153ce0

void * __thiscall
UE::EventLoop::IEventLoop::_scalar_deleting_destructor_(IEventLoop *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153d40

void * __thiscall IHttpBase::_scalar_deleting_destructor_(IHttpBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153d70

void * __thiscall IHttpRequest::_scalar_deleting_destructor_(IHttpRequest *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153dd0

void * __thiscall IHttpResponse::_scalar_deleting_destructor_(IHttpResponse *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153e00

void * __thiscall
IHttpTaskTimerHandle::_scalar_deleting_destructor_(IHttpTaskTimerHandle *this,uint param_1)

{
  *this = (IHttpTaskTimerHandle)&___7IHttpTaskTimerHandle__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143153e40

void * __thiscall
IWinHttpConnection::_scalar_deleting_destructor_(IWinHttpConnection *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// CurlCalloc @ 14315b930

void * __cdecl `anonymous_namespace'::CurlCalloc(ulong64 param_1,ulong64 param_2)

{
  void *_Dst;
  ulong64 _Size;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  _Size = param_1 * param_2;
  if (_Size != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < `CurlCalloc'::`5'::_TSS0) {
      _Init_thread_header(&`CurlCalloc'::`5'::_TSS0);
      if (`CurlCalloc'::`5'::_TSS0 == -1) {
        ::FName::FName(&`CurlCalloc'::`5'::LLMScope_Name121,L"Networking/Curl");
        _Init_thread_footer(&`CurlCalloc'::`5'::_TSS0);
      }
    }
    FLLMScope::FLLMScope(local_res8,`CurlCalloc'::`5'::LLMScope_Name121,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,&`CurlCalloc'::`5'::LLMScope_Name121,true);
    _Dst = FMemory::Malloc(_Size,0);
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,_Size);
    }
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
    return _Dst;
  }
  return (void *)0x0;
}

// CurlFree @ 14315ba30

void __cdecl `anonymous_namespace'::CurlFree(void *param_1)

{
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `CurlFree'::`2'::_TSS0) {
    _Init_thread_header(&`CurlFree'::`2'::_TSS0);
    if (`CurlFree'::`2'::_TSS0 == -1) {
      ::FName::FName(&`CurlFree'::`2'::LLMScope_Name59,L"Networking/Curl");
      _Init_thread_footer(&`CurlFree'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,`CurlFree'::`2'::LLMScope_Name59,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&`CurlFree'::`2'::LLMScope_Name59,true);
  FMemory::Free(param_1);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// CurlMalloc @ 14315bb00

void * __cdecl `anonymous_namespace'::CurlMalloc(ulong64 param_1)

{
  void *pvVar1;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < `CurlMalloc'::`2'::_TSS0) {
    _Init_thread_header(&`CurlMalloc'::`2'::_TSS0);
    if (`CurlMalloc'::`2'::_TSS0 == -1) {
      ::FName::FName(&`CurlMalloc'::`2'::LLMScope_Name48,L"Networking/Curl");
      _Init_thread_footer(&`CurlMalloc'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,`CurlMalloc'::`2'::LLMScope_Name48,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&`CurlMalloc'::`2'::LLMScope_Name48,true);
  pvVar1 = FMemory::Malloc(param_1,0);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return pvVar1;
}

// CurlRealloc @ 14315bbd0

void * __cdecl `anonymous_namespace'::CurlRealloc(void *param_1,ulong64 param_2)

{
  void *pvVar1;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  if (param_2 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < `CurlRealloc'::`5'::_TSS0) {
      _Init_thread_header(&`CurlRealloc'::`5'::_TSS0);
      if (`CurlRealloc'::`5'::_TSS0 == -1) {
        ::FName::FName(&`CurlRealloc'::`5'::LLMScope_Name76,L"Networking/Curl");
        _Init_thread_footer(&`CurlRealloc'::`5'::_TSS0);
      }
    }
    FLLMScope::FLLMScope(local_res10,`CurlRealloc'::`5'::LLMScope_Name76,false,None,Default,true);
    FMemScope::FMemScope(local_res18,&`CurlRealloc'::`5'::LLMScope_Name76,true);
    pvVar1 = FMemory::Realloc(param_1,param_2,0);
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res10);
    return pvVar1;
  }
  return (void *)0x0;
}

// CurlStrdup @ 14315bcf0

char * __cdecl `anonymous_namespace'::CurlStrdup(char *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  longlong lVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (param_1 != (char *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < `CurlStrdup'::`12'::_TSS0) {
      _Init_thread_header(&`CurlStrdup'::`12'::_TSS0);
      if (`CurlStrdup'::`12'::_TSS0 == -1) {
        ::FName::FName(&`CurlStrdup'::`12'::LLMScope_Name95,L"Networking/Curl");
        _Init_thread_footer(&`CurlStrdup'::`12'::_TSS0);
      }
    }
    FLLMScope::FLLMScope(local_res8,`CurlStrdup'::`12'::LLMScope_Name95,false,None,Default,true);
    FMemScope::FMemScope(&local_res10,&`CurlStrdup'::`12'::LLMScope_Name95,true);
    sVar5 = strlen(param_1);
    lVar6 = (longlong)(int)sVar5;
    pcVar4 = FMemory::Malloc(lVar6 + 1,0);
    if (pcVar4 != (char *)0x0) {
      strncpy(pcVar4,param_1,lVar6 + 1);
      pcVar4[lVar6] = '\0';
      iVar3 = strcmp(pcVar4,param_1);
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FCStringAnsi::Strcmp(Copy, ZeroTerminatedString) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.h"
                           ,0x66,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pcVar4 = (char *)(*pcVar1)();
          return pcVar4;
        }
      }
    }
    FMemScope::~FMemScope(&local_res10);
    FLLMScope::~FLLMScope(local_res8);
    return pcVar4;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ZeroTerminatedString",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.h"
                     ,0x5c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pcVar4 = (char *)(*pcVar1)();
    return pcVar4;
  }
  return (char *)0x0;
}

// Free @ 143160820

void __cdecl LibCryptoMemHooks::Free(void *param_1,char *param_2,int param_3)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// IsValidIPv4Address @ 14316cf70

bool __cdecl IsValidIPv4Address(FString *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar12 = false;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FString::FString(&local_38,L".");
  bVar2 = FString::Split(param_1,&local_38,&local_58,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    FString::FString(&local_38,L".");
    bVar2 = FString::Split(&local_48,&local_38,&local_68,&local_48);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      FString::FString(&local_38,L".");
      bVar2 = FString::Split(&local_48,&local_38,&local_78,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        FString::FString(&local_38,L":");
        bVar2 = FString::Split(&local_48,&local_38,&local_88,&local_98);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          iVar1 = local_58.Data.ArrayNum;
          uVar9 = (ulonglong)local_58.Data.ArrayNum;
          FVar10.Data = local_58.Data.AllocatorInstance.Data;
          pFVar11 = local_58.Data.AllocatorInstance.Data + uVar9 * 2 + -2;
          if (local_58.Data.ArrayNum == 0) {
            pFVar11 = local_58.Data.AllocatorInstance.Data + uVar9 * 2;
          }
          while( true ) {
            if ((int)uVar9 != iVar1) {
              `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (FVar10.Data == pFVar11) {
              iVar1 = local_68.Data.ArrayNum;
              uVar9 = (ulonglong)local_68.Data.ArrayNum;
              FVar10.Data = local_68.Data.AllocatorInstance.Data;
              pFVar11 = local_68.Data.AllocatorInstance.Data + uVar9 * 2 + -2;
              if (local_68.Data.ArrayNum == 0) {
                pFVar11 = local_68.Data.AllocatorInstance.Data + uVar9 * 2;
              }
              goto LAB_14316d125;
            }
            iVar3 = iswdigit(*(wchar_t *)FVar10.Data);
            if (iVar3 == 0) break;
            uVar9 = local_58.Data._8_8_ & 0xffffffff;
            FVar10.Data = FVar10.Data + 2;
          }
        }
      }
    }
  }
LAB_14316d2fd:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar12;
LAB_14316d125:
  if ((int)uVar9 != iVar1) {
    `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (FVar10.Data == pFVar11) {
    iVar1 = local_78.Data.ArrayNum;
    uVar9 = (ulonglong)local_78.Data.ArrayNum;
    FVar10.Data = local_78.Data.AllocatorInstance.Data;
    pFVar11 = local_78.Data.AllocatorInstance.Data + uVar9 * 2 + -2;
    if (local_78.Data.ArrayNum == 0) {
      pFVar11 = local_78.Data.AllocatorInstance.Data + uVar9 * 2;
    }
    goto LAB_14316d170;
  }
  iVar3 = iswdigit(*(wchar_t *)FVar10.Data);
  if (iVar3 == 0) goto LAB_14316d2fd;
  uVar9 = local_68.Data._8_8_ & 0xffffffff;
  FVar10.Data = FVar10.Data + 2;
  goto LAB_14316d125;
LAB_14316d170:
  if ((int)uVar9 != iVar1) {
    `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (FVar10.Data == pFVar11) {
    iVar1 = local_88.Data.ArrayNum;
    uVar9 = (ulonglong)local_88.Data.ArrayNum;
    FVar10.Data = local_88.Data.AllocatorInstance.Data;
    pFVar11 = local_88.Data.AllocatorInstance.Data + uVar9 * 2 + -2;
    if (local_88.Data.ArrayNum == 0) {
      pFVar11 = local_88.Data.AllocatorInstance.Data + uVar9 * 2;
    }
    goto LAB_14316d1b5;
  }
  iVar3 = iswdigit(*(wchar_t *)FVar10.Data);
  if (iVar3 == 0) goto LAB_14316d2fd;
  uVar9 = local_78.Data._8_8_ & 0xffffffff;
  FVar10.Data = FVar10.Data + 2;
  goto LAB_14316d170;
LAB_14316d1b5:
  if ((int)uVar9 != iVar1) {
    `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (FVar10.Data == pFVar11) {
    iVar1 = local_98.Data.ArrayNum;
    uVar9 = (ulonglong)local_98.Data.ArrayNum;
    FVar10.Data = local_98.Data.AllocatorInstance.Data;
    pFVar11 = local_98.Data.AllocatorInstance.Data + uVar9 * 2 + -2;
    if (local_98.Data.ArrayNum == 0) {
      pFVar11 = local_98.Data.AllocatorInstance.Data + uVar9 * 2;
    }
    goto LAB_14316d200;
  }
  iVar3 = iswdigit(*(wchar_t *)FVar10.Data);
  if (iVar3 == 0) goto LAB_14316d2fd;
  uVar9 = local_88.Data._8_8_ & 0xffffffff;
  FVar10.Data = FVar10.Data + 2;
  goto LAB_14316d1b5;
LAB_14316d200:
  if ((int)uVar9 != iVar1) {
    `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (FVar10.Data == pFVar11) {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    lVar4 = _wtoi64((wchar_t *)FVar10.Data);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
    }
    lVar5 = _wtoi64((wchar_t *)FVar10.Data);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
    }
    lVar6 = _wtoi64((wchar_t *)FVar10.Data);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar10.Data = local_88.Data.AllocatorInstance.Data;
    }
    lVar7 = _wtoi64((wchar_t *)FVar10.Data);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar10.Data = local_98.Data.AllocatorInstance.Data;
    }
    lVar8 = _wtoi64((wchar_t *)FVar10.Data);
    if (((((uint)lVar4 < 0x100) && ((uint)lVar5 < 0x100)) && ((uint)lVar6 < 0x100)) &&
       ((uint)lVar7 < 0x100)) {
      bVar12 = false;
      if ((uint)lVar8 < 0x10000) {
        bVar12 = true;
      }
    }
    goto LAB_14316d2fd;
  }
  iVar3 = iswdigit(*(wchar_t *)FVar10.Data);
  if (iVar3 == 0) goto LAB_14316d2fd;
  uVar9 = local_98.Data._8_8_ & 0xffffffff;
  FVar10.Data = FVar10.Data + 2;
  goto LAB_14316d200;
}

// IsValidStatus @ 14316d420

bool __cdecl IsValidStatus(EWinHttpCallbackStatus param_1)

{
  bool bVar1;
  
  if (param_1 < (Redirect|ResolvingName)) {
    if (param_1 == Redirect) {
      return true;
    }
    if (param_1 < (ReceivingResponse|ResolvingName)) {
      if (param_1 != ReceivingResponse) {
        switch(param_1) {
        case ResolvingName:
        case NameResolved:
        case ConnectingToServer:
        case ConnectedToServer:
        case SendingRequest:
        case RequestSent:
          goto switchD_14316d45d_caseD_1;
        default:
          return false;
        }
      }
      return true;
    }
    if (param_1 == HandleCreated) {
      return true;
    }
    if (param_1 == ResponseReceived) {
      return true;
    }
    if (param_1 == ClosingConnection) {
      return true;
    }
    if (param_1 == ConnectionClosed) {
      return true;
    }
    if (param_1 == HandleClosing) {
      return true;
    }
    bVar1 = param_1 == DetectingProxy;
  }
  else if (param_1 < (RequestError|ResolvingName)) {
    if (param_1 == RequestError) {
      return true;
    }
    if (param_1 == DataAvailable) {
      return true;
    }
    if (param_1 == IntermediateResponse) {
      return true;
    }
    if (param_1 == SecureFailure) {
      return true;
    }
    if (param_1 == HeadersAvailable) {
      return true;
    }
    if (param_1 == ReadComplete) {
      return true;
    }
    bVar1 = param_1 == WriteComplete;
  }
  else {
    if (ShutdownComplete < param_1) {
      if (param_1 == SettingsWriteComplete) {
        return true;
      }
      return param_1 == SettingsReadComplete;
    }
    if (param_1 == ShutdownComplete) {
      return true;
    }
    if (param_1 == SendRequestComplete) {
      return true;
    }
    if (param_1 == GetProxyForUrlComplete) {
      return true;
    }
    bVar1 = param_1 == CloseComplete;
  }
  if (bVar1) {
switchD_14316d45d_caseD_1:
    return true;
  }
  return false;
}

// LexToString @ 14316d550

wchar_t * __cdecl LexToString(EHttpFlushReason *param_1)

{
  EHttpFlushReason EVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  EVar1 = *param_1;
  if (EVar1 == Default) {
    return L"Default";
  }
  if (EVar1 == Shutdown) {
    return L"Shutdown";
  }
  if (EVar1 == FullFlush) {
    return L"FullFlush";
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\HttpManager.cpp"
                     ,0x43,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pwVar4 = (wchar_t *)(*pcVar2)();
    return pwVar4;
  }
  return L"Invalid";
}

// LexToString @ 14316d5d0

wchar_t * __cdecl LexToString(EHttpFailureReason param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == None) {
    return L"None";
  }
  if (param_1 == ConnectionError) {
    return L"ConnectionError";
  }
  if (param_1 == Cancelled) {
    return L"Cancelled";
  }
  if (param_1 != TimedOut) {
    if (param_1 == Other) {
      return L"Other";
    }
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\Interfaces\\IHttpBase.h"
                       ,0x52,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Invalid";
  }
  return L"TimedOut";
}

// LexToString @ 14316d670

wchar_t * __cdecl LexToString(EHttpRequestMode param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == ThreadedRequest) {
    return L"ThreadedRequest";
  }
  if (param_1 != ImmediateRequest) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Interfaces\\IHttpRequest.cpp"
                       ,0xd,L"Please, implement new modes here");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Unknown";
  }
  return L"ImmediateRequest";
}

// LexToString @ 14316d6d0

wchar_t * __cdecl LexToString(EWinHttpCallbackStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 < (Redirect|ResolvingName)) {
    if (param_1 == Redirect) {
      return L"REDIRECT";
    }
    if (param_1 < (ReceivingResponse|ResolvingName)) {
      if (param_1 == ReceivingResponse) {
        return L"RECEIVING_RESPONSE";
      }
      switch(param_1) {
      case ResolvingName:
        return L"RESOLVING_NAME";
      case NameResolved:
        return L"NAME_RESOLVED";
      case ConnectingToServer:
        return L"CONNECTING_TO_SERVER";
      case ConnectedToServer:
        return L"CONNECTED_TO_SERVER";
      case SendingRequest:
        return L"SENDING_REQUEST";
      case RequestSent:
        return L"REQUEST_SENT";
      }
    }
    else if (param_1 < (HandleCreated|ResolvingName)) {
      if (param_1 == HandleCreated) {
        return L"HANDLE_CREATED";
      }
      if (param_1 == ResponseReceived) {
        return L"RESPONSE_RECEIVED";
      }
      if (param_1 == ClosingConnection) {
        return L"CLOSING_CONNECTION";
      }
      if (param_1 == ConnectionClosed) {
        return L"CONNECTION_CLOSED";
      }
    }
    else {
      if (param_1 == HandleClosing) {
        return L"HANDLE_CLOSING";
      }
      if (param_1 == DetectingProxy) {
        return L"DETECTING_PROXY";
      }
    }
  }
  else if (param_1 < (RequestError|ResolvingName)) {
    if (param_1 == RequestError) {
      return L"REQUEST_ERROR";
    }
    if (param_1 < (DataAvailable|ResolvingName)) {
      if (param_1 == DataAvailable) {
        return L"DATA_AVAILABLE";
      }
      if (param_1 == IntermediateResponse) {
        return L"INTERMEDIATE_RESPONSE";
      }
      if (param_1 == SecureFailure) {
        return L"SECURE_FAILURE";
      }
      if (param_1 == HeadersAvailable) {
        return L"HEADERS_AVAILABLE";
      }
    }
    else {
      if (param_1 == ReadComplete) {
        return L"READ_COMPLETE";
      }
      if (param_1 == WriteComplete) {
        return L"WRITE_COMPLETE";
      }
    }
  }
  else if (param_1 < (ShutdownComplete|ResolvingName)) {
    if (param_1 == ShutdownComplete) {
      return L"SHUTDOWN_COMPLETE";
    }
    if (param_1 == SendRequestComplete) {
      return L"SENDREQUEST_COMPLETE";
    }
    if (param_1 == GetProxyForUrlComplete) {
      return L"GETPROXYFORURL_COMPLETE";
    }
    if (param_1 == CloseComplete) {
      return L"CLOSE_COMPLETE";
    }
  }
  else {
    if (param_1 == SettingsWriteComplete) {
      return L"SETTINGS_WRITE_COMPLETE";
    }
    if (param_1 == SettingsReadComplete) {
      return L"SETTINGS_READ_COMPLETE";
    }
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\WinHttp\\Support\\WinHttpTypes.cpp"
                     ,0x28,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"";
}

// MallocWithInit @ 14316f9f0

void * __cdecl LibCryptoMemHooks::MallocWithInit(ulong64 param_1,char *param_2,int param_3)

{
  void *_Dst;
  
  _Dst = FMemory::Malloc(param_1,0);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}

// ReallocWithInit @ 143176440

void * __cdecl
LibCryptoMemHooks::ReallocWithInit(void *param_1,ulong64 param_2,char *param_3,int param_4)

{
  ulong64 uVar1;
  void *pvVar2;
  
  uVar1 = FMemory::GetAllocSize(param_1);
  pvVar2 = FMemory::Realloc(param_1,param_2,0);
  if ((pvVar2 != (void *)0x0) && (uVar1 < param_2)) {
    memset((void *)((longlong)pvVar2 + uVar1),0,param_2 - uVar1);
  }
  return pvVar2;
}

// SetMemoryHooks @ 14317eaf0

void __cdecl LibCryptoMemHooks::SetMemoryHooks(void)

{
  bMemoryHooksSet = true;
  return;
}

// ShouldLaunchUrl @ 143181ea0

bool __cdecl ShouldLaunchUrl(wchar_t *param_1)

{
  FHttpManager *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FHttpModule *pFVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar2 = FParse::SchemeNameFromURI(param_1,&local_28);
  if (bVar2) {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"http");
    if (iVar4 != 0) {
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"https");
      if (iVar4 != 0) goto LAB_143181f77;
    }
    pFVar5 = FHttpModule::Get();
    if (pFVar5->HttpManager == (FHttpManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("HttpManager != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                         ,0x50,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    this = pFVar5->HttpManager;
    FString::FString(&local_18,param_1);
    bVar2 = FHttpManager::IsDomainAllowed(this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_143181f77:
    bVar2 = true;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Split @ 143182ba0

bool __cdecl
`anonymous_namespace'::Split
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,TStringView<wchar_t> *param_3
          ,TStringView<wchar_t> *param_4)

{
  wchar_t *pwVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uStack_3c;
  
  if (((param_1->Size != 0) && (iVar8 = param_2->Size, iVar8 != 0)) && (iVar8 <= param_1->Size)) {
    iVar12 = 0;
    lVar11 = 0;
    iVar7 = iVar12;
    do {
      lVar10 = 0;
      iVar9 = iVar12;
      if (iVar8 < 1) {
LAB_143182ca1:
        iVar8 = param_1->Size;
        pwVar1 = param_1->DataPtr;
        iVar9 = param_2->Size;
        iVar3 = iVar8;
        if (iVar7 < iVar8) {
          iVar3 = iVar7;
        }
        iVar6 = iVar12;
        if (0 < iVar3) {
          iVar6 = iVar3;
        }
        param_3->DataPtr = pwVar1;
        *(ulonglong *)&param_3->Size = CONCAT44(uStack_3c,iVar6);
        iVar7 = (iVar8 - iVar9) - iVar7;
        iVar9 = iVar8;
        if (iVar7 < iVar8) {
          iVar9 = iVar7;
        }
        if (0 < iVar9) {
          iVar12 = iVar9;
        }
        param_4->DataPtr = pwVar1 + ((longlong)iVar8 - (longlong)iVar12);
        *(ulonglong *)&param_4->Size = CONCAT44(uStack_3c,iVar12);
        return true;
      }
      while( true ) {
        if (((iVar9 + iVar7 < 0) || (param_1->Size <= iVar9 + iVar7)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pwVar1 = param_1->DataPtr;
        if (((iVar9 < 0) || (param_2->Size <= iVar9)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (*(short *)(lVar11 + lVar10 + (longlong)pwVar1) !=
            *(short *)(lVar10 + (longlong)param_2->DataPtr)) break;
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 2;
        if (param_2->Size <= iVar9) goto LAB_143182ca1;
      }
      iVar8 = param_2->Size;
      iVar7 = iVar7 + 1;
      lVar11 = lVar11 + 2;
    } while (iVar8 + iVar7 <= param_1->Size);
  }
  return false;
}

// SslCertVerify @ 143182d60

int __cdecl SslCertVerify(int param_1,x509_store_ctx_st *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FSslModule *pFVar8;
  undefined4 uStack_2c;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1 != 1) {
    return param_1;
  }
  uVar4 = SSL_get_ex_data_X509_STORE_CTX_idx();
  lVar6 = X509_STORE_CTX_get_ex_data(param_2,uVar4);
  if ((lVar6 == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Handle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x2d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  lVar6 = SSL_get_SSL_CTX(lVar6);
  if ((lVar6 == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("SslContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x30,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  puVar7 = (undefined8 *)SSL_CTX_get_ex_data(lVar6,0);
  if ((puVar7 == (undefined8 *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Request",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttp.cpp"
                         ,0x33,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  puVar7 = (undefined8 *)(**(code **)*puVar7)(puVar7);
  local_18.DataPtr = (wchar_t *)*puVar7;
  iVar5 = *(int *)(puVar7 + 1) + -1;
  if (*(int *)(puVar7 + 1) == 0) {
    iVar5 = 0;
  }
  local_18._12_4_ = uStack_2c;
  local_18.Size = iVar5;
  FGenericPlatformHttp::GetUrlDomain(&local_28,&local_18);
  pFVar8 = FSslModule::Get();
  if ((pFVar8->CertificateManagerPtr == (ISslCertificateManager *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("CertificateManagerPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                         ,0x2c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  cVar3 = (**(code **)((longlong)*pFVar8->CertificateManagerPtr + 0x40))
                    (pFVar8->CertificateManagerPtr,param_2,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (uint)(cVar3 != '\0');
}

// UE_WinHttpStatusHttpCallback @ 143188e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE_WinHttpStatusHttpCallback
          (void *param_1,ulong64 param_2,ulong param_3,void *param_4,ulong param_5)

{
  bool bVar1;
  
  if (param_3 < 0x4001) {
    if (param_3 == 0x4000) goto switchD_143188e9d_caseD_1;
    if (param_3 < 0x41) {
      if (param_3 != 0x40) {
        switch(param_3) {
        case 1:
        case 2:
        case 4:
        case 8:
        case 0x10:
        case 0x20:
          goto switchD_143188e9d_caseD_1;
        }
        goto switchD_143188e9d_caseD_3;
      }
      goto switchD_143188e9d_caseD_1;
    }
    if (((param_3 == 0x400) || (param_3 == 0x80)) ||
       ((param_3 == 0x100 || ((param_3 == 0x200 || (param_3 == 0x800))))))
    goto switchD_143188e9d_caseD_1;
    bVar1 = param_3 == 0x1000;
  }
  else {
    if (((((((param_3 == 0x200000) || (param_3 == 0x40000)) || (param_3 == 0x8000)) ||
          ((param_3 == 0x10000 || (param_3 == 0x20000)))) ||
         ((param_3 == 0x80000 || ((param_3 == 0x100000 || (param_3 == 0x4000000)))))) ||
        (param_3 == 0x400000)) ||
       (((param_3 == 0x1000000 || (param_3 == 0x2000000)) || (param_3 == 0x10000000))))
    goto switchD_143188e9d_caseD_1;
    bVar1 = param_3 == 0x20000000;
  }
  if (!bVar1) {
switchD_143188e9d_caseD_3:
    if ((byte)LogWinHttp._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    return;
  }
switchD_143188e9d_caseD_1:
  if (param_2 == 0) {
    return;
  }
  FWinHttpConnectionHttp::HandleHttpStatusCallback
            ((FWinHttpConnectionHttp *)param_2,param_1,param_3,param_4,param_5);
  return;
}

// UnsetMemoryHooks @ 143189250

void __cdecl LibCryptoMemHooks::UnsetMemoryHooks(void)

{
  if (bMemoryHooksSet) {
    bMemoryHooksSet = false;
    ChainedMalloc = (_func___cdecl_void_ptr_ulong64_char_ptr_int *)0x0;
    ChainedRealloc = (_func___cdecl_void_ptr_void_ptr_ulong64_char_ptr_int *)0x0;
    ChainedFree = (_func___cdecl_void_void_ptr_char_ptr_int *)0x0;
  }
  return;
}

// sslctx_function @ 14318c0d0

CURLcode __cdecl sslctx_function(void *param_1,void *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  CURLcode CVar3;
  undefined4 uVar4;
  FSslModule *pFVar5;
  
  pFVar5 = FSslModule::Get();
  if (pFVar5->CertificateManagerPtr == (ISslCertificateManager *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CertificateManagerPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      CVar3 = (*pcVar1)();
      return CVar3;
    }
  }
  (**(code **)((longlong)*pFVar5->CertificateManagerPtr + 8))(pFVar5->CertificateManagerPtr,param_2)
  ;
  if (FCurlHttpManager::CurlRequestOptions.bVerifyPeer != false) {
    uVar4 = SSL_CTX_get_verify_mode(param_2);
    SSL_CTX_set_verify(param_2,uVar4,SslCertVerify);
    SSL_CTX_set_ex_data(param_2,0,param_3);
  }
  return CURLE_OK;
}

// IMPLEMENT_MODULE_HTTP @ 14318c170

void __cdecl IMPLEMENT_MODULE_HTTP(void)

{
  return;
}

// CurlRequestOptions'' @ 150360550

void __cdecl `dynamic_atexit_destructor_for_'FCurlHttpManager::CurlRequestOptions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FCurlHttpManager::CurlRequestOptions.LocalHostAddr.Data.AllocatorInstance.Data;
  if (FCurlHttpManager::CurlRequestOptions.LocalHostAddr.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FCurlHttpManager::CurlRequestOptions.LocalHostAddr.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultUserAgentCommentsEnabled'' @ 150360570

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultUserAgentCommentsEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDefaultUserAgentCommentsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpAlwaysSetContentLengthEnabled'' @ 150360590

void __cdecl _dynamic_atexit_destructor_for__CVarHttpAlwaysSetContentLengthEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHttpAlwaysSetContentLengthEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpCurlAllowHTTP2'' @ 1503605b0

void __cdecl _dynamic_atexit_destructor_for__CVarHttpCurlAllowHTTP2__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpCurlAllowHTTP2);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpCurlReuseConnectionEnabled'' @ 1503605d0

void __cdecl _dynamic_atexit_destructor_for__CVarHttpCurlReuseConnectionEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpCurlReuseConnectionEnabled)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpDurationInQueueToWarnInSeconds'' @ 1503605f0

void __cdecl _dynamic_atexit_destructor_for__CVarHttpDurationInQueueToWarnInSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHttpDurationInQueueToWarnInSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpEventLoopEnableChance'' @ 150360610

void __cdecl _dynamic_atexit_destructor_for__CVarHttpEventLoopEnableChance__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpEventLoopEnableChance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpInsecureProtocolEnabled'' @ 150360630

void __cdecl _dynamic_atexit_destructor_for__CVarHttpInsecureProtocolEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpInsecureProtocolEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpLogJsonResponseOnly'' @ 150360650

void __cdecl
UE::HttpRequestCommon::Private::_dynamic_atexit_destructor_for__CVarHttpLogJsonResponseOnly__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpLogJsonResponseOnly);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpMaxConcurrentRequests'' @ 150360670

void __cdecl _dynamic_atexit_destructor_for__CVarHttpMaxConcurrentRequests__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpMaxConcurrentRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread'' @ 150360690

void __cdecl
_dynamic_atexit_destructor_for__CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHttpRemoveRequestUsingHttpThreadPolicyOnHttpThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpRequestPriorityEnabled'' @ 1503606b0

void __cdecl _dynamic_atexit_destructor_for__CVarHttpRequestPriorityEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpRequestPriorityEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpThreadPriority'' @ 1503606d0

void __cdecl _dynamic_atexit_destructor_for__CVarHttpThreadPriority__(void)

{
  CVarHttpThreadPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpThreadPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpUrlPatternsToDisableFailedLog'' @ 1503606f0

void __cdecl _dynamic_atexit_destructor_for__CVarHttpUrlPatternsToDisableFailedLog__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarHttpUrlPatternsToDisableFailedLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpUrlPatternsToLogResponse'' @ 150360710

void __cdecl _dynamic_atexit_destructor_for__CVarHttpUrlPatternsToLogResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpUrlPatternsToLogResponse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarHttpUrlPatternsToMockResponse'' @ 150360730

void __cdecl _dynamic_atexit_destructor_for__CVarHttpUrlPatternsToMockResponse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHttpUrlPatternsToMockResponse);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultRetryVerbs'' @ 150360750

void __cdecl
`FHttpRetrySystem::FManager::ShouldRetry'::__l2::_dynamic_atexit_destructor_for__DefaultRetryVerbs__
          (void)

{
  DefaultRetryVerbs.HashSize = 0;
  if (DefaultRetryVerbs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)DefaultRetryVerbs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&DefaultRetryVerbs.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyContent'' @ 150360790

void __cdecl
`FCurlHttpRequest::GetContent'::__l2::_dynamic_atexit_destructor_for__EmptyContent__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyContent.AllocatorInstance.Data;
  if (EmptyContent.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyContent.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 1503607b0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ExtensionMimeTypeMap'' @ 1503607d0

void __cdecl
`FGenericPlatformHttp::GetMimeType'::__l2::_dynamic_atexit_destructor_for__ExtensionMimeTypeMap__
          (void)

{
  ExtensionMimeTypeMap._72_4_ = 0;
  if (ExtensionMimeTypeMap._64_8_ != 0) {
    FMemory::Free((void *)ExtensionMimeTypeMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ExtensionMimeTypeMap);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 150360810

void __cdecl `FUserAgentImpl::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  if (`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2::
      Instance.CachedUserAgent.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::
                  __l2::Instance.CachedUserAgent.Data.AllocatorInstance.Data);
  }
  FDefaultUserAgentBuilder::~FDefaultUserAgentBuilder
            (&`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::__l2
              ::Instance.Builder);
  BVar2 = TryAcquireSRWLockExclusive
                    ((PSRWLOCK)
                     &`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'
                      ::__l2::Instance);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00015036084d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive
              ((PSRWLOCK)
               &`public:_static_class_FUserAgentImpl&___ptr64___cdecl_FUserAgentImpl::Get(void)'::
                __l2::Instance);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogHttp'' @ 150360890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHttp__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHttp);
  return;
}

// `dynamic_atexit_destructor_for_'LogWinHttp'' @ 1503608b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWinHttp__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWinHttp);
  return;
}

// `dynamic_atexit_destructor_for_'NotSupported'' @ 1503608d0

void __cdecl
`FRequestPayloadInFileStream::GetContent'::__l2::_dynamic_atexit_destructor_for__NotSupported__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NotSupported.AllocatorInstance.Data;
  if (NotSupported.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NotSupported.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Temp'' @ 1503608f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FGenericPlatformHttpRequest::GetContent'::__l2::_dynamic_atexit_destructor_for__Temp__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _Temp;
  if (_Temp == (void *)0x0) {
    return;
  }
  if (_Temp != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Tracker'' @ 150360910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FHttpRetrySystem::FManager::FHttpLogVerbosityTracker::Get'::__l2::
_dynamic_atexit_destructor_for__Tracker__(void)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this;
  
  this = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
         FCoreDelegates::TSOnConfigSectionsChanged();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this,&Tracker);
                    /* WARNING: Could not recover jumptable at 0x000150360933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&Tracker.NumRetriedRequestsLock);
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_HttpManager'' @ 150360940

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_HttpManager__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_HttpManager.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_HttpManager.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (_GCsvCategory_HttpManager.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

