// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ReportError @ 143c12090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FErrorReporter::ReportError(FErrorReporter *this,wchar_t *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  
  if ((this->Prefix).Data.ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(this->Prefix).Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,"");
  if (iVar1 == 0) {
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_Chaos::FErrorReporter::ReportWarning(wchar_t_const*___ptr64)___ptr64'
                  ::__l26::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else if (2 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_Chaos::FErrorReporter::ReportWarning(wchar_t_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  this->bEncountedErrors = true;
  this->bUnhandledErrors = true;
  return;
}

// FErrorReporter @ 144012710

FErrorReporter * __thiscall
Chaos::FErrorReporter::FErrorReporter(FErrorReporter *this,FErrorReporter *param_1)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pFVar1 = &this->Prefix;
  this->bEncountedErrors = param_1->bEncountedErrors;
  this->bUnhandledErrors = param_1->bUnhandledErrors;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Prefix).Data.ArrayMax;
  iVar3 = (param_1->Prefix).Data.ArrayNum;
  _Src = (param_1->Prefix).Data.AllocatorInstance.Data;
  (this->Prefix).Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  return this;
}

