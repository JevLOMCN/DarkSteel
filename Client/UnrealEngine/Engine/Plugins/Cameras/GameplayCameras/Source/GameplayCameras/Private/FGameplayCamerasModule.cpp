// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// StartupModule @ 14d5e19d0

void __thiscall FGameplayCamerasModule::StartupModule(FGameplayCamerasModule *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  
  pcVar1 = *(code **)(this->_padding_ + 0x40);
  pUVar2 = FCameraFramingZone::StaticStruct();
  (*pcVar1)(this,pUVar2,FCameraFramingZone::TypeErasedInterpolate);
  UE::Cameras::FCameraDebugColors::RegisterBuiltinColorSchemes();
  return;
}

// ShutdownModule @ 14d5e1a10

void __thiscall FGameplayCamerasModule::ShutdownModule(FGameplayCamerasModule *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  bVar2 = UObjectInitialized();
  if (bVar2) {
    pcVar1 = *(code **)(this->_padding_ + 0x50);
    pUVar3 = FCameraFramingZone::StaticStruct();
    (*pcVar1)(this,pUVar3);
  }
  return;
}

// RegisterBlendableStruct @ 14d5e1a50

void __thiscall
FGameplayCamerasModule::RegisterBlendableStruct
          (FGameplayCamerasModule *this,UScriptStruct *param_1,
          _func___cdecl_void_uchar_ptr_uchar_ptr_float *param_2)

{
  TArray<UE::Cameras::FBlendableStructInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1->StructFlags & STRUCT_IsPlainOldData) == STRUCT_NoFlags) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5921143339918294986>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameplayCamerasModule.cpp"
                       ,0x36,"EnumHasAllFlags(StructType->StructFlags, STRUCT_IsPlainOldData)");
    if (!bVar3) {
      return;
    }
  }
  else {
    iVar4 = (this->BlendableStructs).ArrayNum;
    pTVar1 = &this->BlendableStructs;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
    while( true ) {
      if (pFVar5 == pFVar6) {
        if (iVar4 == (this->BlendableStructs).ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar1->AllocatorInstance,&(this->BlendableStructs).ArrayMax);
        }
        (this->BlendableStructs).ArrayNum = iVar4 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)(pFVar5 + 8) = 0;
        *(undefined8 *)pFVar5 = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        *(UScriptStruct **)pFVar5 = param_1;
        *(_func___cdecl_void_uchar_ptr_uchar_ptr_float **)(pFVar5 + 8) = param_2;
        return;
      }
      if (*(UScriptStruct **)pFVar5 == (UScriptStruct *)0x0) {
        bVar3 = param_1 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = *(UScriptStruct **)pFVar5 == param_1;
      }
      if (bVar3) break;
      pFVar5 = pFVar5 + 0x10;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5921143339918294977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameplayCamerasModule.cpp"
                       ,0x3f,"!bAlreadyRegistered");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetBlendableStructs @ 14d5e1ba0

TArrayView<UE::Cameras::FBlendableStructInfo_const_,int> * __thiscall
FGameplayCamerasModule::GetBlendableStructs
          (FGameplayCamerasModule *this,
          TArrayView<UE::Cameras::FBlendableStructInfo_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Cameras::FBlendableStructInfo_const_,int> *pTVar4;
  
  iVar1 = (this->BlendableStructs).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FBlendableStructInfo *)(this->BlendableStructs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Cameras::FBlendableStructInfo_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// UnregisterBlendableStruct @ 14d5e1c10

void __thiscall
FGameplayCamerasModule::UnregisterBlendableStruct
          (FGameplayCamerasModule *this,UScriptStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  iVar7 = (this->BlendableStructs).ArrayNum;
  lVar3 = (longlong)iVar7;
  if (iVar7 != 0) {
    iVar7 = 0;
    pFVar1 = (this->BlendableStructs).AllocatorInstance.Data;
    if (*(UScriptStruct **)pFVar1 == (UScriptStruct *)0x0) {
      bVar8 = param_1 == (UScriptStruct *)0x0;
    }
    else {
      bVar8 = *(UScriptStruct **)pFVar1 == param_1;
    }
    bVar8 = !bVar8;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar3) {
        pFVar2 = pFVar1 + lVar4 * 0x10;
        do {
          if (*(UScriptStruct **)pFVar2 == (UScriptStruct *)0x0) {
            bVar9 = param_1 == (UScriptStruct *)0x0;
          }
          else {
            bVar9 = *(UScriptStruct **)pFVar2 == param_1;
          }
          if (bVar8 != !bVar9) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          pFVar2 = pFVar2 + 0x10;
        } while (lVar4 < lVar3);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          memmove(pFVar1 + (longlong)iVar7 * 0x10,pFVar1 + (longlong)iVar5 * 0x10,
                  (longlong)(iVar6 - iVar5) << 4);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar3);
    (this->BlendableStructs).ArrayNum = iVar7;
  }
  return;
}

