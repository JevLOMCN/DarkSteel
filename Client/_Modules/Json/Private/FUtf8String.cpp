// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 3

// ~FUtf8String @ 141dc6630

void __thiscall FUtf8String::~FUtf8String(FUtf8String *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 141dc6780

FUtf8String * __thiscall FUtf8String::operator=(FUtf8String *this,FUtf8String *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Data).ArrayMax;
    piVar1 = &(this->Data).ArrayMax;
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar3 = (param_1->Data).ArrayNum;
    (this->Data).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
    }
  }
  return this;
}

// Equals @ 141dd4100

bool __thiscall FUtf8String::Equals(FUtf8String *this,FUtf8String *param_1,Type param_2)

{
  int iVar1;
  FScriptContainerElement *_Str2;
  FScriptContainerElement *_Str1;
  int iVar2;
  
  iVar2 = (this->Data).ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    _Str2 = (param_1->Data).AllocatorInstance.Data;
    _Str1 = (this->Data).AllocatorInstance.Data;
    if (param_2 == CaseSensitive) {
      iVar2 = strcmp((char *)_Str1,(char *)_Str2);
      return iVar2 == 0;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((uchar *)_Str1,(uchar *)_Str2);
    return iVar2 == 0;
  }
  return true;
}

