// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 6

// ~TOptional<FDistortionInfo> @ 14d6ab870

void __thiscall
TOptional<FDistortionInfo>::~TOptional<FDistortionInfo>(TOptional<FDistortionInfo> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  if ((this->bIsSet != false) &&
     (pFVar1 = (this->TypedValue).Parameters.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
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
  return;
}

// operator= @ 14d6ad1c0

TOptional<FDistortionInfo> * __thiscall
TOptional<FDistortionInfo>::operator=(TOptional<FDistortionInfo> *this,FDistortionInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if ((TOptional<FDistortionInfo> *)param_1 != this) {
    if ((this->bIsSet != false) &&
       (pFVar1 = (this->TypedValue).Parameters.AllocatorInstance.Data,
       pFVar1 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar1);
    }
    (this->TypedValue).Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).Parameters.AllocatorInstance.Data =
         (param_1->Parameters).AllocatorInstance.Data;
    (param_1->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TypedValue).Parameters.ArrayNum = (param_1->Parameters).ArrayNum;
    (this->TypedValue).Parameters.ArrayMax = (param_1->Parameters).ArrayMax;
    (param_1->Parameters).ArrayNum = 0;
    (param_1->Parameters).ArrayMax = 0;
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 14d6ad220

TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> * __thiscall
TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_>::operator=
          (TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> *this,
          TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if (param_1 != (TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *)this) {
    pFVar1 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->field0_0x0).TypedValue.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->field0_0x0).TypedValue.ArrayNum = param_1->ArrayNum;
    (this->field0_0x0).TypedValue.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar2)();
        return pTVar4;
      }
    }
  }
  return this;
}

// operator= @ 14d6ad2a0

TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> * __thiscall
TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_>::operator=
          (TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> *this,
          TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  if (param_1 != (TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *)this) {
    pFVar3 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = param_1->ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->field0_0x0).TypedValue.ArrayMax;
    (this->field0_0x0).TypedValue.ArrayNum = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
      memcpy((this->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar3,(longlong)iVar2 << 3);
    }
    if (*piVar1 == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> *)
                 (*pcVar4)();
        return pTVar6;
      }
    }
  }
  return this;
}

// operator* @ 14d6ad810

TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> * __thiscall
TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_>::operator*
          (TOptional<TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<UTextureRenderTarget2D_*,TSizedDefaultAllocator<32>_> *)this;
}

// GetValue @ 14d6dc780

FDistortionInfo * __thiscall TOptional<FDistortionInfo>::GetValue(TOptional<FDistortionInfo> *this)

{
  code *pcVar1;
  bool bVar2;
  FDistortionInfo *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDistortionInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

