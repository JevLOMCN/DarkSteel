// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// CanExecuteOnlyOnMainThread @ 149c01900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPointFromMeshElement::CanExecuteOnlyOnMainThread
          (FPCGPointFromMeshElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149c152f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPointFromMeshElement::ExecuteInternal(FPCGPointFromMeshElement *this,FPCGContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPCGPointFromMeshSettings *pUVar6;
  UStaticMesh *this_00;
  UClass *pUVar7;
  UPCGBasePointData *pUVar8;
  TBox<double> *pTVar9;
  double *pdVar10;
  FText *this_01;
  FPCGDataPtrWrapper *this_02;
  UStaticMesh *this_03;
  UStaticMesh *pUVar11;
  bool bVar12;
  undefined1 auStack_178 [32];
  FString local_140;
  FString local_130;
  FText local_120 [4];
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 local_d8 [56];
  undefined1 local_a0 [16];
  double local_90;
  double dStack_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  TBox<double> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_178;
  pUVar11 = (UStaticMesh *)0x0;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId89,"FPCGPointFromMeshElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
               ,0x59);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId89);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
                         ,0x5b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar6 = FPCGContext::GetInputSettings<UPCGPointFromMeshSettings>(param_1);
  if ((pUVar6 == (UPCGPointFromMeshSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
                         ,0x5e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(longlong *)&(pUVar6->Mesh).SoftObjectPtr.field_0x8 != 0) {
    this_00 = (UStaticMesh *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar6->Mesh);
    if (this_00 != (UStaticMesh *)0x0) {
      pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar5 = (int)pUVar7->_padding_;
      if (((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar7->_padding_)) ||
         (bVar3 = UObjectBaseUtility::IsA<USkeletalMesh>((UObjectBaseUtility *)this_00), bVar3)) {
        pUVar8 = FPCGContext::NewPointData_AnyThread(param_1);
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        iVar5 = (param_1->OutputData).TaggedData.ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar5 + 1;
        this_02 = (FPCGDataPtrWrapper *)
                  ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar5 * 0x78)
        ;
        this_02[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_02->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_02->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_02[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_02[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_02[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_02[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_02[4].Data.field0_0x0 + 4) = 0;
        this_02[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_02[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_02[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_02[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_02,(UPCGData *)pUVar8);
        (**(code **)(pUVar8->_padding_ + 0x490))(pUVar8,1,1);
        local_70 = local_70 & 0xffffffffffffff00;
        pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
        iVar5 = (int)pUVar7->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
           (this_03 = this_00,
           (longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
           &pUVar7->_padding_)) {
          this_03 = pUVar11;
        }
        if (this_03 == (UStaticMesh *)0x0) {
          pUVar7 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar5 = (int)pUVar7->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar7->_padding_)) {
            this_00 = pUVar11;
          }
          if (this_00 == (UStaticMesh *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
                               ,0x85,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          else {
            pdVar10 = (double *)(**(code **)(this_00->_padding_ + 0x3e0))(this_00,local_d8);
            local_e0 = 1;
            local_90 = pdVar10[2] - pdVar10[5];
            dStack_88 = *pdVar10 + pdVar10[3];
            local_70 = CONCAT71(uStack_df,1);
            local_a0._8_4_ = SUB84(pdVar10[1] - pdVar10[4],0);
            local_a0._0_8_ = *pdVar10 - pdVar10[3];
            local_a0._12_4_ = (int)((ulonglong)(pdVar10[1] - pdVar10[4]) >> 0x20);
            local_80._8_4_ = SUB84(pdVar10[2] + pdVar10[5],0);
            local_80._0_8_ = pdVar10[1] + pdVar10[4];
            local_80._12_4_ = (int)((ulonglong)(pdVar10[2] + pdVar10[5]) >> 0x20);
          }
        }
        else {
          pTVar9 = UStaticMesh::GetBoundingBox(this_03,&local_68);
          local_a0 = *(undefined1 (*) [16])&(pTVar9->Min).field0_0x0;
          local_90 = (pTVar9->Min).field0_0x0._s_0.Z;
          dStack_88 = (pTVar9->Max).field0_0x0._s_0.X;
          local_80 = *(undefined1 (*) [16])((longlong)&(pTVar9->Max).field0_0x0 + 8);
          local_70._0_1_ = pTVar9->IsValid;
          local_70._1_1_ = pTVar9->Pad[0];
          local_70._2_1_ = pTVar9->Pad[1];
          local_70._3_1_ = pTVar9->Pad[2];
          local_70._4_1_ = pTVar9->Pad[3];
          local_70._5_1_ = pTVar9->Pad[4];
          local_70._6_1_ = pTVar9->Pad[5];
          local_70._7_1_ = pTVar9->Pad[6];
        }
        (**(code **)(pUVar8->_padding_ + 0x550))(pUVar8,local_a0);
        (**(code **)(pUVar8->_padding_ + 0x558))(pUVar8,&dStack_88);
        if ((pUVar8->_padding_ == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutPointData->Metadata",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
                               ,0x8c,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        UPCGMetadata::CreateSoftObjectPathAttribute
                  ((UPCGMetadata *)pUVar8->_padding_,pUVar6->MeshPathAttributeName,
                   (FSoftObjectPath *)&(pUVar6->Mesh).SoftObjectPtr.field_0x8,false,true);
        goto LAB_149c157a0;
      }
    }
    if (1 < (byte)LogPCG._0_1_) {
      this_01 = FText::AsLocalizable_Advanced_LocText
                          (local_120,L"PCGPointFromMeshElement",L"LoadStaticMeshFailed",
                           L"Failed to load StaticMesh/SkeletalMesh");
      FText::ToString(this_01);
      if (param_1 != (FPCGContext *)0x0) {
        FPCGContext::GetTaskName(param_1,&local_130);
        pUVar11 = (UStaticMesh *)&DAT_00000003;
        FPCGContext::GetExecutionSourceName(param_1,&local_140);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar11 & 2) != 0) &&
         (pUVar11 = (UStaticMesh *)(ulonglong)((uint)pUVar11 & 0xfffffffd),
         local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar11 & 1) != 0) &&
         (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_120[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120[0].TextData.Reference + 0x10))();
      }
    }
  }
LAB_149c157a0:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// PrepareDataInternal @ 149c301b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPointFromMeshElement::PrepareDataInternal(FPCGPointFromMeshElement *this,FPCGContext *param_1)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGPointFromMeshSettings *pUVar4;
  size_t _Size;
  bool bVar5;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_48;
  FSoftObjectPath local_38;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId65,"FPCGPointFromMeshElement::PrepareData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
               ,0x41);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId65);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGPointFromMeshSettings>(param_1);
  if ((pUVar4 == (UPCGPointFromMeshSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointFromMeshElement.cpp"
                         ,0x46,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((*(longlong *)&(pUVar4->Mesh).SoftObjectPtr.field_0x8 == 0) ||
     (*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = pUVar4->bSynchronousLoad;
    local_38.AssetPath.PackageName.ComparisonIndex.Value =
         *(uint *)&(pUVar4->Mesh).SoftObjectPtr.field_0x8;
    local_38.AssetPath.PackageName.Number = *(uint *)&(pUVar4->Mesh).SoftObjectPtr.field_0xc;
    local_38.AssetPath.AssetName.ComparisonIndex.Value =
         *(uint *)&(pUVar4->Mesh).SoftObjectPtr.field_0x10;
    local_38.AssetPath.AssetName.Number = *(uint *)&(pUVar4->Mesh).SoftObjectPtr.field_0x14;
    local_38.SubPathString.Data.ArrayNum = *(int *)&(pUVar4->Mesh).SoftObjectPtr.field_0x20;
    _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
    _Src = *(void **)&(pUVar4->Mesh).SoftObjectPtr.field_0x18;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      local_38.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_38.SubPathString,local_38.SubPathString.Data.ArrayNum,
                 &local_38.SubPathString.Data.ArrayMax);
      memcpy(local_38.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_48.AllocatorInstance.Data,&local_38,1)
    ;
    bVar2 = IPCGAsyncLoadingContext::RequestResourceLoad
                      ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_48,bVar2 == false);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FSoftObjectPath *)local_48.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// SupportsBasePointDataInputs @ 149c35800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPointFromMeshElement::SupportsBasePointDataInputs
          (FPCGPointFromMeshElement *this,FPCGContext *param_1)

{
  return true;
}

