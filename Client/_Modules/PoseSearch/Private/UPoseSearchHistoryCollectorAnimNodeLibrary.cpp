// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 18

// StaticClass @ 14a8d6f10

UClass * __cdecl UPoseSearchHistoryCollectorAnimNodeLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchHistoryCollectorAnimNodeLibrary",
               &Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton
               ,StaticRegisterNativesUPoseSearchHistoryCollectorAnimNodeLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchHistoryCollectorAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchHistoryCollectorAnimNodeLibrary>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton;
}

// UPoseSearchHistoryCollectorAnimNodeLibrary @ 14a8e2a90

UPoseSearchHistoryCollectorAnimNodeLibrary * __thiscall
UPoseSearchHistoryCollectorAnimNodeLibrary::UPoseSearchHistoryCollectorAnimNodeLibrary
          (UPoseSearchHistoryCollectorAnimNodeLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchHistoryCollectorAnimNodeLibrary__6B_;
  return this;
}

// UPoseSearchHistoryCollectorAnimNodeLibrary @ 14a8e2ac0

UPoseSearchHistoryCollectorAnimNodeLibrary * __thiscall
UPoseSearchHistoryCollectorAnimNodeLibrary::UPoseSearchHistoryCollectorAnimNodeLibrary
          (UPoseSearchHistoryCollectorAnimNodeLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchHistoryCollectorAnimNodeLibrary__6B_;
  return this;
}

// ~UPoseSearchHistoryCollectorAnimNodeLibrary @ 14a8e30d0

void __thiscall
UPoseSearchHistoryCollectorAnimNodeLibrary::~UPoseSearchHistoryCollectorAnimNodeLibrary
          (UPoseSearchHistoryCollectorAnimNodeLibrary *this)

{
  *(undefined ***)this = &___7UPoseSearchHistoryCollectorAnimNodeLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToPoseHistoryNode @ 14a8ee950

FPoseSearchHistoryCollectorAnimNodeReference * __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::ConvertToPoseHistoryNode
          (FPoseSearchHistoryCollectorAnimNodeReference *__return_storage_ptr__,
          FAnimNodeReference *param_1,EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    pUVar3 = FAnimNode_PoseSearchHistoryCollector::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *param_2 = Succeeded;
        pUVar4 = param_1->AnimNodeStruct;
        pUVar3 = (UScriptStruct *)param_1->AnimNode;
        goto LAB_14a8ee9ba;
      }
    }
  }
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar3 = pUVar4;
LAB_14a8ee9ba:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar3;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// ConvertToPoseHistoryNodePure @ 14a8ee9e0

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::ConvertToPoseHistoryNodePure
          (FAnimNodeReference *param_1,FPoseSearchHistoryCollectorAnimNodeReference *param_2,
          bool *param_3)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  
  pUVar3 = param_1->AnimNodeStruct;
  if (pUVar3 != (UScriptStruct *)0x0) {
    pUVar2 = FAnimNode_PoseSearchHistoryCollector::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar3 = param_1->AnimNodeStruct;
        bVar4 = true;
        pUVar2 = (UScriptStruct *)param_1->AnimNode;
        goto LAB_14a8eea46;
      }
    }
  }
  bVar4 = false;
  pUVar3 = (UScriptStruct *)0x0;
  pUVar2 = pUVar3;
LAB_14a8eea46:
  *(UScriptStruct **)param_2 = pUVar2;
  *(UScriptStruct **)&param_2->field_0x8 = pUVar3;
  *param_3 = bVar4;
  return;
}

// GetPoseHistoryNodeTrajectory @ 14a8fb6b0

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::GetPoseHistoryNodeTrajectory
          (FPoseSearchHistoryCollectorAnimNodeReference *param_1,FPoseSearchQueryTrajectory *param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAnimNode_PoseSearchHistoryCollector *pFVar4;
  FTransformTrajectory *pFVar5;
  FPoseSearchQueryTrajectory local_18;
  
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>
                     ((FAnimNodeReference *)param_1);
  if (pFVar4 != (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    if ((pFVar4->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PoseHistoryPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                           ,0x75,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = (FTransformTrajectory *)(**(code **)(*(longlong *)pFVar4->_padding_ + 0x18))();
    FPoseSearchQueryTrajectory::FPoseSearchQueryTrajectory(&local_18,pFVar5);
    if (param_2 != &local_18) {
      pFVar1 = (param_2->Samples).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Samples).AllocatorInstance.Data = local_18.Samples.AllocatorInstance.Data;
      (param_2->Samples).ArrayNum = local_18.Samples.ArrayNum;
      (param_2->Samples).ArrayMax = local_18.Samples.ArrayMax;
      local_18.Samples.ArrayNum = 0;
      local_18.Samples.ArrayMax = 0;
      local_18.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Samples.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPoseHistoryNodeTransformTrajectory @ 14a8fb780

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::GetPoseHistoryNodeTransformTrajectory
          (FPoseSearchHistoryCollectorAnimNodeReference *param_1,FTransformTrajectory *param_2)

{
  code *pcVar1;
  bool bVar2;
  FAnimNode_PoseSearchHistoryCollector *pFVar3;
  FTransformTrajectory *pFVar4;
  
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>
                     ((FAnimNodeReference *)param_1);
  if (pFVar3 != (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    if (pFVar3->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (FTransformTrajectory *)(**(code **)(*(longlong *)pFVar3->_padding_ + 0x18))();
    FTransformTrajectory::operator=(param_2,pFVar4);
  }
  return;
}

// GetPoseHistoryReference @ 14a8fb800

FPoseHistoryReference * __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::GetPoseHistoryReference
          (FPoseHistoryReference *__return_storage_ptr__,
          FPoseSearchHistoryCollectorAnimNodeReference *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FAnimNode_PoseSearchHistoryCollector *pFVar4;
  FPoseHistoryReference *pFVar5;
  
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>
                     ((FAnimNodeReference *)param_1);
  if (pFVar4 == (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    (__return_storage_ptr__->PoseHistory).Object = (IPoseHistory *)0x0;
    (__return_storage_ptr__->PoseHistory).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (pFVar4->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x77,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPoseHistoryReference *)(*pcVar2)();
        return pFVar5;
      }
    }
    (__return_storage_ptr__->PoseHistory).Object = (IPoseHistory *)pFVar4->_padding_;
    pTVar1 = (TReferenceControllerBase<1> *)pFVar4->_padding_;
    (__return_storage_ptr__->PoseHistory).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a8fccf0

UClass * __cdecl UPoseSearchHistoryCollectorAnimNodeLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchHistoryCollectorAnimNodeLibrary",
               &Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton
               ,StaticRegisterNativesUPoseSearchHistoryCollectorAnimNodeLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchHistoryCollectorAnimNodeLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchHistoryCollectorAnimNodeLibrary>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary.InnerSingleton;
}

// SetPoseHistoryNodeTrajectory @ 14a908710

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::SetPoseHistoryNodeTrajectory
          (FPoseSearchHistoryCollectorAnimNodeReference *param_1,FPoseSearchQueryTrajectory *param_2
          )

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FAnimNode_PoseSearchHistoryCollector *pFVar4;
  FTransformTrajectory *pFVar5;
  FTransformTrajectory local_18;
  
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>
                     ((FAnimNodeReference *)param_1);
  if (pFVar4 != (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    if (pFVar4->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x75,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    plVar1 = (longlong *)pFVar4->_padding_;
    pcVar2 = *(code **)(*plVar1 + 0x20);
    pFVar5 = FPoseSearchQueryTrajectory::operator_FTransformTrajectory(param_2,&local_18);
    (*pcVar2)(plVar1,pFVar5,__real_3f800000);
    if (local_18.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Samples.AllocatorInstance.Data);
    }
  }
  return;
}

// SetPoseHistoryNodeTransformTrajectory @ 14a9087b0

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::SetPoseHistoryNodeTransformTrajectory
          (FPoseSearchHistoryCollectorAnimNodeReference *param_1,FTransformTrajectory *param_2)

{
  code *pcVar1;
  bool bVar2;
  FAnimNode_PoseSearchHistoryCollector *pFVar3;
  
  pFVar3 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>
                     ((FAnimNodeReference *)param_1);
  if (pFVar3 != (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    if (pFVar3->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(*(longlong *)pFVar3->_padding_ + 0x20))
              ((longlong *)pFVar3->_padding_,param_2,__real_3f800000);
  }
  return;
}

// StaticRegisterNativesUPoseSearchHistoryCollectorAnimNodeLibrary @ 14a908e50

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::
StaticRegisterNativesUPoseSearchHistoryCollectorAnimNodeLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToPoseHistoryNode @ 14a90b550

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::execConvertToPoseHistoryNode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar local_res10 [8];
  uchar local_28 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar7 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_28;
  if (puVar7 != (uchar *)0x0) {
    puVar8 = puVar7;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar7 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)(puVar8 + 8);
  if ((lVar3 != 0) &&
     (pUVar6 = FAnimNode_PoseSearchHistoryCollector::StaticStruct(), pUVar6 != (UScriptStruct *)0x0)
     ) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      *puVar7 = '\x01';
      uVar4 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)param_3 = *(undefined8 *)puVar8;
      *(undefined8 *)((longlong)param_3 + 8) = uVar4;
      return;
    }
  }
  *puVar7 = '\0';
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execConvertToPoseHistoryNodePure @ 14a90b6a0

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::execConvertToPoseHistoryNodePure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  uchar uVar6;
  UScriptStruct *pUVar7;
  undefined8 uVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 uVar11;
  uchar *puVar12;
  uchar local_res10 [8];
  uchar local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar8 = 0;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar9 = local_38;
  if (puVar10 != (uchar *)0x0) {
    puVar9 = puVar10;
  }
  local_28 = 0;
  uStack_20 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = (uchar *)&local_28;
  if (puVar10 != (uchar *)0x0) {
    puVar12 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(puVar9 + 8);
  if (lVar4 != 0) {
    pUVar7 = FAnimNode_PoseSearchHistoryCollector::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar6 = '\x01';
        uVar8 = *(undefined8 *)puVar9;
        uVar11 = *(undefined8 *)(puVar9 + 8);
        goto LAB_14a90b806;
      }
    }
  }
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14a90b806:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetPoseHistoryNodeTransformTrajectory @ 14a90b830

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::execGetPoseHistoryNodeTransformTrajectory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAnimNode_PoseSearchHistoryCollector *pFVar4;
  FTransformTrajectory *pFVar5;
  FAnimNodeReference *this;
  FTransformTrajectory *this_00;
  FTransformTrajectory local_28;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Samples.ArrayNum = 0;
  local_28.Samples.ArrayMax = 0;
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this_00 = &local_28;
  if ((FTransformTrajectory *)param_2->MostRecentPropertyAddress != (FTransformTrajectory *)0x0) {
    this_00 = (FTransformTrajectory *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>(this);
  if (pFVar4 != (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    if (pFVar4->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x75,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (FTransformTrajectory *)(**(code **)(*(longlong *)pFVar4->_padding_ + 0x18))();
    FTransformTrajectory::operator=(this_00,pFVar5);
  }
  if (local_28.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Samples.AllocatorInstance.Data);
  }
  return;
}

// execGetPoseHistoryReference @ 14a90b990

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::execGetPoseHistoryReference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAnimNode_PoseSearchHistoryCollector *pFVar4;
  FAnimNodeReference *this;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  FAnimNodeReference local_18;
  
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>(this);
  if (pFVar4 == (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (pFVar4->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x77,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)pFVar4->_padding_;
    local_28 = pFVar4->_padding_;
    if (FStack_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (param_3 != &local_28) {
    *(longlong *)param_3 = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return;
}

// execSetPoseHistoryNodeTransformTrajectory @ 14a90bad0

void __cdecl
UPoseSearchHistoryCollectorAnimNodeLibrary::execSetPoseHistoryNodeTransformTrajectory
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAnimNode_PoseSearchHistoryCollector *pFVar4;
  FAnimNodeReference *this;
  void **ppvVar5;
  void *local_28;
  undefined8 local_20;
  FAnimNodeReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.AnimNode = (FAnimNode_Base *)0x0;
  local_18.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  this = &local_18;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar5 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimNodeReference::GetAnimNodePtr<FAnimNode_PoseSearchHistoryCollector>(this);
  if (pFVar4 != (FAnimNode_PoseSearchHistoryCollector *)0x0) {
    if (pFVar4->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x75,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(*(longlong *)pFVar4->_padding_ + 0x20))
              ((longlong *)pFVar4->_padding_,ppvVar5,__real_3f800000);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

