// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// AddBlendableParameter @ 14d597990

void __thiscall
FCustomCameraNodeParameterInfos::AddBlendableParameter
          (FCustomCameraNodeParameterInfos *this,FCustomCameraNodeBlendableParameter *param_1,
          uchar *param_2)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FName local_38;
  FNameEntryId FStack_30;
  uint uStack_2c;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  UScriptStruct *pUStack_20;
  FCameraVariableID *local_18;
  undefined8 uStack_10;
  
  local_38 = param_1->ParameterName;
  FStack_30.Value = param_1->ParameterType;
  local_28 = (param_1->BlendableStructType).field0_0x0;
  local_18 = (FCameraVariableID *)0x0;
  if ((param_1->OverrideVariable).field0_0x0.DebugPtr == (UCameraVariableAsset *)0x0) {
    local_18 = &param_1->OverrideVariableID;
  }
  uStack_10 = 0;
  pFVar2 = (FName *)(this->BlendableParameters).AllocatorInstance.Data;
  pUStack_20 = (UScriptStruct *)param_2;
  if ((pFVar2 <= &local_38) &&
     (&local_38 < pFVar2 + (longlong)(this->BlendableParameters).ArrayMax * 6)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->BlendableParameters).ArrayNum;
  piVar1 = &(this->BlendableParameters).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  FVar5.Number = uStack_2c;
  FVar5.ComparisonIndex.Value = FStack_30.Value;
  lVar8 = (longlong)iVar7;
  (this->BlendableParameters).ArrayNum = iVar7 + 1;
  pFVar3 = (this->BlendableParameters).AllocatorInstance.Data;
  *(FName *)(pFVar3 + lVar8 * 0x30) = local_38;
  ((FName *)(pFVar3 + lVar8 * 0x30))[1] = FVar5;
  *(TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar3 + lVar8 * 0x30 + 0x10) = local_28;
  ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar3 + lVar8 * 0x30 + 0x10))[1].DebugPtr = pUStack_20;
  *(FCameraVariableID **)(pFVar3 + lVar8 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x20 + 8) = uStack_10;
  return;
}

// AddBlendableParameter @ 14d597aa0

void __thiscall
FCustomCameraNodeParameterInfos::AddBlendableParameter
          (FCustomCameraNodeParameterInfos *this,FName param_1,ECameraVariableType param_2,
          UScriptStruct *param_3,uchar *param_4,FCameraVariableID *param_5)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FName local_38;
  FNameEntryId FStack_30;
  uint uStack_2c;
  UScriptStruct *local_28;
  uchar *puStack_20;
  FCameraVariableID *local_18;
  undefined8 uStack_10;
  
  puStack_20 = param_4;
  local_18 = param_5;
  pFVar2 = (FName *)(this->BlendableParameters).AllocatorInstance.Data;
  uStack_10 = 0;
  local_38 = param_1;
  FStack_30.Value = param_2;
  local_28 = param_3;
  if ((pFVar2 <= &local_38) &&
     (&local_38 < pFVar2 + (longlong)(this->BlendableParameters).ArrayMax * 6)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->BlendableParameters).ArrayNum;
  piVar1 = &(this->BlendableParameters).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)this,piVar1);
  }
  FVar5.Number = uStack_2c;
  FVar5.ComparisonIndex.Value = FStack_30.Value;
  lVar8 = (longlong)iVar7;
  (this->BlendableParameters).ArrayNum = iVar7 + 1;
  pFVar3 = (this->BlendableParameters).AllocatorInstance.Data;
  *(FName *)(pFVar3 + lVar8 * 0x30) = local_38;
  ((FName *)(pFVar3 + lVar8 * 0x30))[1] = FVar5;
  *(UScriptStruct **)(pFVar3 + lVar8 * 0x30 + 0x10) = local_28;
  *(uchar **)(pFVar3 + lVar8 * 0x30 + 0x10 + 8) = puStack_20;
  *(FCameraVariableID **)(pFVar3 + lVar8 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x20 + 8) = uStack_10;
  return;
}

// AddDataParameter @ 14d597eb0

void __thiscall
FCustomCameraNodeParameterInfos::AddDataParameter
          (FCustomCameraNodeParameterInfos *this,FCustomCameraNodeDataParameter *param_1,
          uchar *param_2)

{
  TArray<FCustomCameraNodeParameterInfos::FDataParameterInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FName local_38;
  FNameEntryId FStack_30;
  ECameraContextDataContainerType EStack_2c;
  TObjectPtr<UObject_const_>_u_0 local_28;
  UObject *pUStack_20;
  FCameraContextDataID *local_18;
  
  local_38 = param_1->ParameterName;
  pTVar1 = &this->DataParameters;
  FStack_30.Value = param_1->ParameterType;
  EStack_2c = param_1->ParameterContainerType;
  local_28 = (param_1->ParameterTypeObject).field0_0x0;
  local_18 = &param_1->OverrideDataID;
  pFVar3 = (FName *)(pTVar1->AllocatorInstance).Data;
  pUStack_20 = (UObject *)param_2;
  if ((pFVar3 <= &local_38) && (&local_38 < pFVar3 + (longlong)(this->DataParameters).ArrayMax * 5))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DataParameters).ArrayNum;
  piVar2 = &(this->DataParameters).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  FVar6.Number = EStack_2c;
  FVar6.ComparisonIndex.Value = FStack_30.Value;
  lVar9 = (longlong)iVar8;
  (this->DataParameters).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(FName *)(pFVar4 + lVar9 * 0x28) = local_38;
  ((FName *)(pFVar4 + lVar9 * 0x28))[1] = FVar6;
  *(TObjectPtr<UObject_const_>_u_0 *)(pFVar4 + lVar9 * 0x28 + 0x10) = local_28;
  ((TObjectPtr<UObject_const_>_u_0 *)(pFVar4 + lVar9 * 0x28 + 0x10))[1].DebugPtr = pUStack_20;
  *(FCameraContextDataID **)(pFVar4 + lVar9 * 0x28 + 0x20) = local_18;
  return;
}

// AddDataParameter @ 14d597fb0

void __thiscall
FCustomCameraNodeParameterInfos::AddDataParameter
          (FCustomCameraNodeParameterInfos *this,FName param_1,ECameraContextDataType param_2,
          ECameraContextDataContainerType param_3,UObject *param_4,uchar *param_5,
          FCameraContextDataID *param_6)

{
  TArray<FCustomCameraNodeParameterInfos::FDataParameterInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FName local_38;
  FNameEntryId FStack_30;
  ECameraContextDataContainerType EStack_2c;
  UObject *local_28;
  uchar *puStack_20;
  FCameraContextDataID *local_18;
  
  pTVar1 = &this->DataParameters;
  local_28 = param_4;
  puStack_20 = param_5;
  local_18 = param_6;
  pFVar3 = (FName *)(pTVar1->AllocatorInstance).Data;
  local_38 = param_1;
  FStack_30.Value = param_2;
  EStack_2c = param_3;
  if ((pFVar3 <= &local_38) && (&local_38 < pFVar3 + (longlong)(this->DataParameters).ArrayMax * 5))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->DataParameters).ArrayNum;
  piVar2 = &(this->DataParameters).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  FVar6.Number = EStack_2c;
  FVar6.ComparisonIndex.Value = FStack_30.Value;
  lVar9 = (longlong)iVar8;
  (this->DataParameters).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(FName *)(pFVar4 + lVar9 * 0x28) = local_38;
  ((FName *)(pFVar4 + lVar9 * 0x28))[1] = FVar6;
  *(UObject **)(pFVar4 + lVar9 * 0x28 + 0x10) = local_28;
  *(uchar **)(pFVar4 + lVar9 * 0x28 + 0x10 + 8) = puStack_20;
  *(FCameraContextDataID **)(pFVar4 + lVar9 * 0x28 + 0x20) = local_18;
  return;
}

// FindBlendableParameter @ 14d5a3d90

bool __thiscall
FCustomCameraNodeParameterInfos::FindBlendableParameter
          (FCustomCameraNodeParameterInfos *this,FName param_1,
          FCustomCameraNodeBlendableParameter *param_2)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BlendableParameters).ArrayNum;
  pFVar4 = (FName *)(this->BlendableParameters).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar1 * 6;
  while( true ) {
    if ((this->BlendableParameters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCustomCameraNodeParameterInfos::FBlendableParameterInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    if (*pFVar4 == param_1) {
      param_2->ParameterName = *pFVar4;
      param_2->ParameterType = pFVar4[1].ComparisonIndex.Value;
      FVar2 = pFVar4[2];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar2 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar2);
      }
      (param_2->BlendableStructType).field0_0x0.DebugPtr = (UScriptStruct *)FVar2;
      if (pFVar4[4] != (FName)0x0) {
        (param_2->OverrideVariableID).Value = *(uint *)pFVar4[4];
      }
      return true;
    }
    pFVar4 = pFVar4 + 6;
  }
  return false;
}

// FindDataParameter @ 14d5a3f40

bool __thiscall
FCustomCameraNodeParameterInfos::FindDataParameter
          (FCustomCameraNodeParameterInfos *this,FName param_1,
          FCustomCameraNodeDataParameter *param_2)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->DataParameters).ArrayNum;
  pFVar4 = (FName *)(this->DataParameters).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->DataParameters).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCustomCameraNodeParameterInfos::FDataParameterInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*pFVar4 == param_1) {
      param_2->ParameterName = *pFVar4;
      param_2->ParameterType = pFVar4[1].ComparisonIndex.Value;
      param_2->ParameterContainerType = pFVar4[1].Number;
      FVar3 = pFVar4[2];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      (param_2->ParameterTypeObject).field0_0x0.DebugPtr = (UObject *)FVar3;
      if (pFVar4[4] != (FName)0x0) {
        (param_2->OverrideDataID).Value = *(uint *)pFVar4[4];
      }
      return true;
    }
    pFVar4 = pFVar4 + 5;
  }
  return false;
}

// GetBlendableParameters @ 14d5a67f0

void __thiscall
FCustomCameraNodeParameterInfos::GetBlendableParameters
          (FCustomCameraNodeParameterInfos *this,
          TArray<FCustomCameraNodeBlendableParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BlendableParameters).ArrayNum;
  pFVar6 = (this->BlendableParameters).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->BlendableParameters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCustomCameraNodeParameterInfos::FBlendableParameterInfo_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    lVar5 = (longlong)iVar4;
    param_1->ArrayNum = iVar4 + 1;
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar5 * 0x28 + 8) = 0;
    *(undefined4 *)(pFVar2 + lVar5 * 0x28 + 0x1c) = 0;
    *(undefined8 *)(pFVar2 + lVar5 * 0x28) = 0;
    pFVar2 = pFVar2 + lVar5 * 0x28;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    *(undefined4 *)(pFVar2 + 0x18) = 0xffffffff;
    *(undefined8 *)(pFVar2 + 0x20) = 0;
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar6;
    *(undefined4 *)(pFVar2 + 8) = *(undefined4 *)(pFVar6 + 8);
    pUVar3 = *(UObject **)(pFVar6 + 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(UObject **)(pFVar2 + 0x10) = pUVar3;
    pUVar3 = *(UObject **)(pFVar6 + 0x28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(UObject **)(pFVar2 + 0x20) = pUVar3;
    if (*(undefined4 **)(pFVar6 + 0x20) != (undefined4 *)0x0) {
      *(undefined4 *)(pFVar2 + 0x18) = **(undefined4 **)(pFVar6 + 0x20);
    }
    pFVar6 = pFVar6 + 0x30;
  }
  return;
}

// GetDataParameters @ 14d5a73e0

void __thiscall
FCustomCameraNodeParameterInfos::GetDataParameters
          (FCustomCameraNodeParameterInfos *this,
          TArray<FCustomCameraNodeDataParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->DataParameters).ArrayNum;
  pFVar5 = (this->DataParameters).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->DataParameters).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCustomCameraNodeParameterInfos::FDataParameterInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
    *(undefined4 *)(pFVar6 + 0x1c) = 0;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined4 *)(pFVar6 + 0x18) = 0xffffffff;
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar5;
    *(undefined4 *)(pFVar6 + 8) = *(undefined4 *)(pFVar5 + 8);
    *(undefined4 *)(pFVar6 + 0xc) = *(undefined4 *)(pFVar5 + 0xc);
    pUVar3 = *(UObject **)(pFVar5 + 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(UObject **)(pFVar6 + 0x10) = pUVar3;
    if (*(undefined4 **)(pFVar5 + 0x20) != (undefined4 *)0x0) {
      *(undefined4 *)(pFVar6 + 0x18) = **(undefined4 **)(pFVar5 + 0x20);
    }
    pFVar5 = pFVar5 + 0x28;
  }
  return;
}

