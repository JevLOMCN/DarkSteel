// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 6

// ~FAppleImageUtilsConversionTaskBase @ 14cfa8410

void __thiscall
FAppleImageUtilsConversionTaskBase::~FAppleImageUtilsConversionTaskBase
          (FAppleImageUtilsConversionTaskBase *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FAppleImageUtilsConversionTaskBase__6B_;
  pFVar1 = (this->Error).Data.AllocatorInstance.Data;
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

// GetConvertedImageSize @ 14cfa8e00

TIntPoint<int> __thiscall
FAppleImageUtilsConversionTaskBase::GetConvertedImageSize(FAppleImageUtilsConversionTaskBase *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetElapsedTime @ 14cfa8e40

float __thiscall
FAppleImageUtilsConversionTaskBase::GetElapsedTime(FAppleImageUtilsConversionTaskBase *this)

{
  return (float)(this->EndTime - this->StartTime) * __real_447a0000;
}

// GetErrorReason @ 14cfa8e60

FString * __thiscall
FAppleImageUtilsConversionTaskBase::GetErrorReason
          (FAppleImageUtilsConversionTaskBase *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  iVar2 = (this->Error).Data.ArrayNum;
  _Src = (this->Error).Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// HadError @ 14cfa91d0

bool __thiscall
FAppleImageUtilsConversionTaskBase::HadError(FAppleImageUtilsConversionTaskBase *this)

{
  return this->bHadError != (FThreadSafeBool)0x0;
}

// IsDone @ 14cfa9210

bool __thiscall FAppleImageUtilsConversionTaskBase::IsDone(FAppleImageUtilsConversionTaskBase *this)

{
  return this->bIsDone != (FThreadSafeBool)0x0;
}

