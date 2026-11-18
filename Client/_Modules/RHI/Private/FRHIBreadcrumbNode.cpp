// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 6

// FRHIBreadcrumbNode @ 145c86650

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbNode::FRHIBreadcrumbNode(FRHIBreadcrumbNode *this,FRHIBreadcrumbData *param_1)

{
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->Parent = Sentinel;
  this->ListLink = (FRHIBreadcrumbNode *)0x0;
  (this->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (this->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  this->Allocator = (FRHIBreadcrumbAllocator *)0x0;
  this->TraceCpuSpecId = 0;
  this->TraceCpuMetadataId = 0;
  this->ID = 0;
  this->BeginPipes = (atomic<unsigned_char>)0x0;
  this->EndPipes = (atomic<unsigned_char>)0x0;
  this->Data = param_1;
  return this;
}

// FindCommonAncestor @ 145ca4590

FRHIBreadcrumbNode * __cdecl
FRHIBreadcrumbNode::FindCommonAncestor(FRHIBreadcrumbNode *param_1,FRHIBreadcrumbNode *param_2)

{
  FRHIBreadcrumbNode *pFVar1;
  FRHIBreadcrumbNode *pFVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar3 = 0;
  uVar4 = 0;
  for (pFVar1 = param_1; pFVar2 = param_2, pFVar1 != (FRHIBreadcrumbNode *)0x0;
      pFVar1 = pFVar1->Parent) {
    uVar4 = uVar4 + 1;
  }
  for (; pFVar2 != (FRHIBreadcrumbNode *)0x0; pFVar2 = pFVar2->Parent) {
    uVar3 = uVar3 + 1;
  }
  bVar6 = false;
  if (uVar4 < uVar3) {
    uVar5 = (ulonglong)(uVar3 - uVar4);
    do {
      param_2 = param_2->Parent;
      uVar3 = uVar3 - 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    bVar6 = uVar4 < uVar3;
  }
  if (!bVar6 && uVar4 != uVar3) {
    uVar5 = (ulonglong)(uVar4 - uVar3);
    do {
      param_1 = param_1->Parent;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_1 != param_2) {
    do {
      param_1 = param_1->Parent;
      param_2 = param_2->Parent;
    } while (param_1 != param_2);
  }
  return param_1;
}

// GetFullPath @ 145ca9290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FRHIBreadcrumbNode::GetFullPath(FRHIBreadcrumbNode *this,FString *__return_storage_ptr__)

{
  wchar_t *_Str;
  size_t sVar1;
  undefined1 auStack_158 [32];
  <lambda_1> local_138;
  FBuffer local_118;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_138.Buffer = &local_118;
  if ((this != (FRHIBreadcrumbNode *)0x0) && (this != Sentinel)) {
    local_138.Result = __return_storage_ptr__;
    local_138.__this = this;
    `FRHIBreadcrumbNode::GetFullPath'::__l2::<lambda_1>::
    operator()<_FRHIBreadcrumbNode::GetFullPath_::__l2::<lambda_1>_>
              (&local_138,&local_138,this->Parent);
    _Str = (wchar_t *)(**(code **)(this->_padding_ + 0x10))(this,local_138.Buffer);
    sVar1 = wcslen(_Str);
    ::FString::AppendChars(local_138.Result,_Str,(int)sVar1);
    if (this != local_138.__this) {
      ::FString::AppendChars(local_138.Result,L"/",1);
    }
  }
  return __return_storage_ptr__;
}

// GetLevel @ 145ca96a0

uint __cdecl FRHIBreadcrumbNode::GetLevel(FRHIBreadcrumbNode *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != (FRHIBreadcrumbNode *)0x0; param_1 = param_1->Parent) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

// GetNonNullRoot @ 145caa410

FRHIBreadcrumbNode * __cdecl FRHIBreadcrumbNode::GetNonNullRoot(FRHIBreadcrumbNode *param_1)

{
  FRHIBreadcrumbNode *pFVar1;
  FRHIBreadcrumbNode *pFVar2;
  
  if ((param_1 != (FRHIBreadcrumbNode *)0x0) && (param_1 != Sentinel)) {
    pFVar2 = param_1->Parent;
    while ((pFVar1 = pFVar2, pFVar1 != (FRHIBreadcrumbNode *)0x0 && (pFVar1 != Sentinel))) {
      param_1 = pFVar1;
      pFVar2 = pFVar1->Parent;
    }
    return param_1;
  }
  return (FRHIBreadcrumbNode *)0x0;
}

// WriteCrashData @ 145ccd670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHIBreadcrumbNode::WriteCrashData
          (FRHIBreadcrumbNode *this,FCrashContextExtendedWriter *param_1,wchar_t *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_2258 [32];
  int local_2238;
  undefined1 local_2228 [256];
  wchar_t local_2128 [128];
  wchar_t local_2028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x145ccd682;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2258;
  iVar1 = TCString<wchar_t>::SnprintfImpl(local_2028,0x1000,L"Breadcrumbs \'%s\'\n");
  for (uVar2 = (ulonglong)iVar1; (this != (FRHIBreadcrumbNode *)0x0 && (uVar2 < 0x1000));
      uVar2 = uVar2 + (longlong)iVar1) {
    (**(code **)(this->_padding_ + 0x10))(this,local_2228);
    iVar1 = TCString<wchar_t>::SnprintfImpl(local_2028 + uVar2,0x1000 - (int)uVar2,L" - %s\n");
    this = this->Parent;
  }
  local_2238 = ReportID;
  ReportID = ReportID + 1;
  TCString<wchar_t>::SnprintfImpl(local_2128,0x80,L"Breadcrumbs_%s_%d");
  (**(code **)((longlong)*param_1 + 0x10))(param_1,local_2128,local_2028);
  if (1 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

