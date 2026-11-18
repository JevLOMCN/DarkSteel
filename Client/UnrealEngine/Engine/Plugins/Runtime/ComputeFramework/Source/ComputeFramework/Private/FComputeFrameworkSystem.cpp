// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 3

// CreateWorkers @ 1494cbff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FComputeFrameworkSystem::CreateWorkers
          (FComputeFrameworkSystem *this,FSceneInterface *param_1,
          TArray<IComputeTaskWorker_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UWorld *pUVar5;
  FComputeViewExtension *this_00;
  FAutoRegister local_res8 [8];
  FSceneInterface *local_res10;
  TPairInitializer<FSceneInterface_const_*_const_&,FComputeGraphTaskWorker_*_const_&> local_res18;
  undefined8 *local_98;
  undefined8 *local_90;
  TRawPtrProxy<FComputeViewExtension> local_88 [2];
  TSharedRef<FComputeViewExtension,1> local_78;
  FSceneInterface **local_68;
  undefined8 **local_60;
  TSharedRef<ISceneViewExtension,1> local_58;
  FSceneInterface **local_48;
  FComputeViewExtension **local_40;
  FComputeViewExtension *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  local_res10 = param_1;
  local_90 = ::operator_new(0xb8);
  if (local_90 == (undefined8 *)0x0) {
    local_90 = (undefined8 *)0x0;
  }
  else {
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[8] = 0;
    local_90[10] = 0;
    *local_90 = &___7FComputeGraphTaskWorker__6B_;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[5] = 0;
    *(undefined4 *)(local_90 + 6) = 0;
    *(undefined4 *)((longlong)local_90 + 0x34) = 0x80;
    *(undefined4 *)(local_90 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)local_90 + 0x3c) = 0;
    local_90[9] = 0;
    local_90[0xb] = 0;
    local_90[0xc] = 0;
    local_90[0xd] = 0;
    local_90[0xe] = 0;
    local_90[0xf] = 0;
    local_90[0x10] = 0;
    local_90[0x11] = 0;
    local_90[0x12] = 0;
    local_90[0x13] = 0;
    local_90[0x14] = 0;
    local_90[0x15] = 0;
    local_90[0x16] = 0;
  }
  local_68 = &local_res10;
  local_60 = &local_90;
  TSet<TTuple<FSceneInterface_const_*,FComputeGraphTaskWorker_*>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FSceneInterface_const_*_const_&,FComputeGraphTaskWorker_*_const_&>_>
            ((TSet<TTuple<FSceneInterface_const_*,FComputeGraphTaskWorker_*>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>,FDefaultSetAllocator>
              *)&this->ComputeWorkers,&local_res18,(bool *)&local_68);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_98 = local_90;
  if ((pFVar1 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(undefined8 **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_98;
  pUVar5 = (UWorld *)(**(code **)(local_res10->_padding_ + 0x410))();
  if (pUVar5 != (UWorld *)0x0) {
    this_00 = ::operator_new(0x40);
    if (this_00 == (FComputeViewExtension *)0x0) {
      this_00 = (FComputeViewExtension *)0x0;
    }
    else {
      FWorldSceneViewExtension::FWorldSceneViewExtension
                ((FWorldSceneViewExtension *)this_00,local_res8,pUVar5);
      this_00->_padding_ = (longlong)&___7FComputeViewExtension__6B_;
      (this_00->ComputeWorkers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->ComputeWorkers).ArrayNum = 0;
      (this_00->ComputeWorkers).ArrayMax = 0;
      if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
         (0 < *(int *)(this_00->_padding_ + 8))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    local_88[0].Object = this_00;
    TSharedRef<FComputeViewExtension,1>::TSharedRef<FComputeViewExtension,1><FComputeViewExtension>
              (&local_78,local_88);
    local_58.Object = (ISceneViewExtension *)local_78.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSceneViewExtensions::RegisterExtension(&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    local_38 = local_78.Object;
    pTStack_30 = local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = &local_res10;
    local_40 = &local_38;
    TSet<TTuple<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>_>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FSceneInterface_const_*_const_&,TSharedPtr<FComputeViewExtension,1>_&&>_>
              ((TSet<TTuple<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>_>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>,0>,FDefaultSetAllocator>
                *)&this->ViewExtensions,
               (TPairInitializer<FSceneInterface_const_*_const_&,TSharedPtr<FComputeViewExtension,1>_&&>
                *)&local_res18.Value,(bool *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// DestroyWorkers @ 1494cc960

void __thiscall
FComputeFrameworkSystem::DestroyWorkers
          (FComputeFrameworkSystem *this,FSceneInterface *param_1,
          TArray<IComputeTaskWorker_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FComputeGraphTaskWorker **ppFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FSceneInterface *local_res8;
  FSceneInterface *local_res10;
  
  ppFVar6 = TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
            ::Find((TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
                    *)&this->ComputeWorkers,param_1);
  if (ppFVar6 != (FComputeGraphTaskWorker **)0x0) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    for (pFVar8 = pFVar1; pFVar8 != pFVar1 + (longlong)param_2->ArrayNum * 8; pFVar8 = pFVar8 + 8) {
      if (*(FComputeGraphTaskWorker **)pFVar8 == *ppFVar6) {
        uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar1 >> 3);
        if (uVar7 != 0xffffffff) {
          uVar4 = 0;
          if ((int)uVar7 < param_2->ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data;
          iVar5 = param_2->ArrayNum + ~uVar7;
          if (1 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            memmove(pFVar1 + (longlong)(int)uVar7 * 8,
                    pFVar1 + (longlong)(param_2->ArrayNum - iVar5) * 8,(longlong)iVar5 << 3);
          }
          param_2->ArrayNum = param_2->ArrayNum + -1;
        }
        break;
      }
    }
    local_res8 = param_1;
    if (*(int *)&(this->ComputeWorkers).field_0x8 != *(int *)&(this->ComputeWorkers).field_0x34) {
      uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      TSet<TTuple<FSceneInterface_const_*,FComputeGraphTaskWorker_*>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FSceneInterface_const_*>
                ((TSet<TTuple<FSceneInterface_const_*,FComputeGraphTaskWorker_*>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>,FDefaultSetAllocator>
                  *)&this->ComputeWorkers,uVar7 >> 0x10 ^ uVar7,&local_res8);
    }
  }
  if (*(int *)&(this->ViewExtensions).field_0x8 != *(int *)&(this->ViewExtensions).field_0x34) {
    uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    local_res10 = param_1;
    TSet<TTuple<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>_>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FSceneInterface_const_*>
              ((TSet<TTuple<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>_>,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,TSharedPtr<FComputeViewExtension,1>,0>,FDefaultSetAllocator>
                *)&this->ViewExtensions,uVar7 >> 0x10 ^ uVar7,&local_res10);
  }
  return;
}

// GetComputeWorker @ 1494cf2f0

FComputeGraphTaskWorker * __thiscall
FComputeFrameworkSystem::GetComputeWorker(FComputeFrameworkSystem *this,FSceneInterface *param_1)

{
  FComputeGraphTaskWorker **ppFVar1;
  
  ppFVar1 = TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
            ::Find((TMapBase<FSceneInterface_const_*,FComputeGraphTaskWorker_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneInterface_const_*,FComputeGraphTaskWorker_*,0>_>
                    *)&this->ComputeWorkers,param_1);
  if (ppFVar1 != (FComputeGraphTaskWorker **)0x0) {
    return *ppFVar1;
  }
  return (FComputeGraphTaskWorker *)0x0;
}

