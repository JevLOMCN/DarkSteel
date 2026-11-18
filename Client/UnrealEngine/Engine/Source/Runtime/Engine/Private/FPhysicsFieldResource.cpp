// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FPhysicsFieldResource @ 14834a820

FPhysicsFieldResource * __thiscall
FPhysicsFieldResource::FPhysicsFieldResource
          (FPhysicsFieldResource *this,int param_1,
          TArray<EFieldPhysicsType,TSizedDefaultAllocator<32>_> *param_2,
          TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *param_3,
          TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *param_4,
          TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *param_5,
          TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *param_6,
          TStaticArray<UE::Core::TAlignedElement<UE::Math::TIntVector4<int>,16>,32,4294967295>
          *param_7,bool param_8)

{
  int *piVar1;
  TArray<EFieldPhysicsType,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  undefined4 uVar5;
  TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *pTVar6;
  TStaticArray<UE::Core::TAlignedElement<UE::Math::TIntVector4<int>,16>,32,4294967295> *pTVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined3 in_stack_00000049;
  TIntVector4<int>_u_0 local_28;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FPhysicsFieldResource__6B_;
  lVar10 = 4;
  (this->ClipmapBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  piVar1 = &(this->FieldInfos).TargetTypes.ArrayMax;
  (this->ClipmapBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->ClipmapBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ClipmapBuffer).NumBytes = 0;
  (this->ClipmapBuffer).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClipmapBuffer).ClassName.Number = 0;
  (this->ClipmapBuffer).OwnerName.Number = 0;
  (this->NodesParams).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->NodesParams).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->NodesParams).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->NodesParams).NumBytes = 0;
  (this->NodesParams).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->NodesParams).ClassName.Number = 0;
  (this->NodesParams).OwnerName.Number = 0;
  (this->NodesOffsets).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->NodesOffsets).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->NodesOffsets).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->NodesOffsets).NumBytes = 0;
  (this->NodesOffsets).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->NodesOffsets).ClassName.Number = 0;
  (this->NodesOffsets).OwnerName.Number = 0;
  (this->TargetsOffsets).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->TargetsOffsets).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->TargetsOffsets).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->TargetsOffsets).NumBytes = 0;
  (this->TargetsOffsets).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TargetsOffsets).ClassName.Number = 0;
  (this->TargetsOffsets).OwnerName.Number = 0;
  (this->CellsOffsets).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->CellsOffsets).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CellsOffsets).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CellsOffsets).NumBytes = 0;
  (this->CellsOffsets).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CellsOffsets).ClassName.Number = 0;
  (this->CellsOffsets).OwnerName.Number = 0;
  (this->CellsMin).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->CellsMin).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CellsMin).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CellsMin).NumBytes = 0;
  (this->CellsMin).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CellsMin).ClassName.Number = 0;
  (this->CellsMin).OwnerName.Number = 0;
  (this->CellsMax).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->CellsMax).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CellsMax).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CellsMax).NumBytes = 0;
  (this->CellsMax).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CellsMax).ClassName.Number = 0;
  (this->CellsMax).OwnerName.Number = 0;
  (this->BoundsMin).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BoundsMin).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->BoundsMin).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BoundsMin).NumBytes = 0;
  (this->BoundsMin).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BoundsMin).ClassName.Number = 0;
  (this->BoundsMin).OwnerName.Number = 0;
  (this->BoundsMax).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BoundsMax).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->BoundsMax).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BoundsMax).NumBytes = 0;
  (this->BoundsMax).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BoundsMax).ClassName.Number = 0;
  (this->BoundsMax).OwnerName.Number = 0;
  (this->FieldInfos).TargetTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldInfos).TargetTypes.ArrayNum = 0;
  *piVar1 = 0;
  (this->FieldInfos).TargetCount = 1;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.Y = (double)uVar4;
  (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->FieldInfos).ClipmapDistance = 10000.0;
  (this->FieldInfos).ValidCount = 0;
  (this->FieldInfos).ClipmapCount = 4;
  (this->FieldInfos).ClipmapExponent = 2;
  (this->FieldInfos).ClipmapResolution = 0x40;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FieldInfos).ViewOrigin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FieldInfos).ViewOrigin.field0_0x0._s_0.Y = (double)uVar4;
  (this->FieldInfos).ViewOrigin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->FieldInfos).CellsOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &(this->FieldInfos).TargetTypes;
  (this->FieldInfos).CellsOffsets.ArrayNum = 0;
  (this->FieldInfos).CellsOffsets.ArrayMax = 0;
  (this->FieldInfos).CellsMin.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldInfos).CellsMin.ArrayNum = 0;
  (this->FieldInfos).CellsMin.ArrayMax = 0;
  (this->FieldInfos).CellsMax.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldInfos).CellsMax.ArrayNum = 0;
  (this->FieldInfos).CellsMax.ArrayMax = 0;
  (this->FieldInfos).TargetCount = param_1;
  if (pTVar2 != param_2) {
    iVar9 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    iVar3 = (this->FieldInfos).TargetTypes.ArrayMax;
    (this->FieldInfos).TargetTypes.ArrayNum = iVar9;
    if ((iVar9 == 0) && (iVar3 == 0)) {
      (this->FieldInfos).TargetTypes.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,iVar3,&pTVar2->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar9 << 2);
      }
    }
  }
  lVar8 = 4;
  pTVar6 = &(this->FieldInfos).VectorTargets;
  do {
    uVar5 = *(undefined4 *)&param_3->Elements[0].field_0x4;
    uVar4 = *(undefined8 *)&param_3->Elements[0].field_0x8;
    pTVar6->Elements[0].Value = param_3->Elements[0].Value;
    *(undefined4 *)&pTVar6->Elements[0].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[0].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x10))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x10))->field_0x8;
    pTVar6->Elements[1].Value = ((TAlignedElement<int,16> *)((longlong)param_3 + 0x10))->Value;
    *(undefined4 *)&pTVar6->Elements[1].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[1].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x20))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x20))->field_0x8;
    pTVar6->Elements[2].Value = ((TAlignedElement<int,16> *)((longlong)param_3 + 0x20))->Value;
    *(undefined4 *)&pTVar6->Elements[2].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[2].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x30))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x30))->field_0x8;
    pTVar6->Elements[3].Value = ((TAlignedElement<int,16> *)((longlong)param_3 + 0x30))->Value;
    *(undefined4 *)&pTVar6->Elements[3].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[3].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x40))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x40))->field_0x8;
    pTVar6->Elements[4].Value = ((TAlignedElement<int,16> *)((longlong)param_3 + 0x40))->Value;
    *(undefined4 *)&pTVar6->Elements[4].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[4].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x50))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x50))->field_0x8;
    pTVar6->Elements[5].Value = ((TAlignedElement<int,16> *)((longlong)param_3 + 0x50))->Value;
    *(undefined4 *)&pTVar6->Elements[5].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[5].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x60))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x60))->field_0x8;
    pTVar6->Elements[6].Value = ((TAlignedElement<int,16> *)((longlong)param_3 + 0x60))->Value;
    *(undefined4 *)&pTVar6->Elements[6].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[6].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x70))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_3 + 0x70))->field_0x8;
    pTVar6->Elements[7].Value = ((TAlignedElement<int,16> *)((longlong)param_3 + 0x70))->Value;
    *(undefined4 *)&pTVar6->Elements[7].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[7].field_0x8 = uVar4;
    lVar8 = lVar8 + -1;
    pTVar6 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)(pTVar6->Elements + 8)
    ;
    param_3 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)
              ((longlong)param_3 + 0x80);
  } while (lVar8 != 0);
  lVar8 = 4;
  pTVar6 = &(this->FieldInfos).ScalarTargets;
  do {
    uVar5 = *(undefined4 *)&param_4->Elements[0].field_0x4;
    uVar4 = *(undefined8 *)&param_4->Elements[0].field_0x8;
    pTVar6->Elements[0].Value = param_4->Elements[0].Value;
    *(undefined4 *)&pTVar6->Elements[0].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[0].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x10))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x10))->field_0x8;
    pTVar6->Elements[1].Value = ((TAlignedElement<int,16> *)((longlong)param_4 + 0x10))->Value;
    *(undefined4 *)&pTVar6->Elements[1].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[1].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x20))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x20))->field_0x8;
    pTVar6->Elements[2].Value = ((TAlignedElement<int,16> *)((longlong)param_4 + 0x20))->Value;
    *(undefined4 *)&pTVar6->Elements[2].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[2].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x30))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x30))->field_0x8;
    pTVar6->Elements[3].Value = ((TAlignedElement<int,16> *)((longlong)param_4 + 0x30))->Value;
    *(undefined4 *)&pTVar6->Elements[3].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[3].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x40))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x40))->field_0x8;
    pTVar6->Elements[4].Value = ((TAlignedElement<int,16> *)((longlong)param_4 + 0x40))->Value;
    *(undefined4 *)&pTVar6->Elements[4].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[4].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x50))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x50))->field_0x8;
    pTVar6->Elements[5].Value = ((TAlignedElement<int,16> *)((longlong)param_4 + 0x50))->Value;
    *(undefined4 *)&pTVar6->Elements[5].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[5].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x60))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x60))->field_0x8;
    pTVar6->Elements[6].Value = ((TAlignedElement<int,16> *)((longlong)param_4 + 0x60))->Value;
    *(undefined4 *)&pTVar6->Elements[6].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[6].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x70))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_4 + 0x70))->field_0x8;
    pTVar6->Elements[7].Value = ((TAlignedElement<int,16> *)((longlong)param_4 + 0x70))->Value;
    *(undefined4 *)&pTVar6->Elements[7].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[7].field_0x8 = uVar4;
    lVar8 = lVar8 + -1;
    pTVar6 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)(pTVar6->Elements + 8)
    ;
    param_4 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)
              ((longlong)param_4 + 0x80);
  } while (lVar8 != 0);
  lVar8 = 4;
  pTVar6 = &(this->FieldInfos).IntegerTargets;
  do {
    uVar5 = *(undefined4 *)&param_5->Elements[0].field_0x4;
    uVar4 = *(undefined8 *)&param_5->Elements[0].field_0x8;
    pTVar6->Elements[0].Value = param_5->Elements[0].Value;
    *(undefined4 *)&pTVar6->Elements[0].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[0].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x10))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x10))->field_0x8;
    pTVar6->Elements[1].Value = ((TAlignedElement<int,16> *)((longlong)param_5 + 0x10))->Value;
    *(undefined4 *)&pTVar6->Elements[1].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[1].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x20))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x20))->field_0x8;
    pTVar6->Elements[2].Value = ((TAlignedElement<int,16> *)((longlong)param_5 + 0x20))->Value;
    *(undefined4 *)&pTVar6->Elements[2].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[2].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x30))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x30))->field_0x8;
    pTVar6->Elements[3].Value = ((TAlignedElement<int,16> *)((longlong)param_5 + 0x30))->Value;
    *(undefined4 *)&pTVar6->Elements[3].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[3].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x40))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x40))->field_0x8;
    pTVar6->Elements[4].Value = ((TAlignedElement<int,16> *)((longlong)param_5 + 0x40))->Value;
    *(undefined4 *)&pTVar6->Elements[4].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[4].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x50))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x50))->field_0x8;
    pTVar6->Elements[5].Value = ((TAlignedElement<int,16> *)((longlong)param_5 + 0x50))->Value;
    *(undefined4 *)&pTVar6->Elements[5].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[5].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x60))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x60))->field_0x8;
    pTVar6->Elements[6].Value = ((TAlignedElement<int,16> *)((longlong)param_5 + 0x60))->Value;
    *(undefined4 *)&pTVar6->Elements[6].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[6].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x70))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_5 + 0x70))->field_0x8;
    pTVar6->Elements[7].Value = ((TAlignedElement<int,16> *)((longlong)param_5 + 0x70))->Value;
    *(undefined4 *)&pTVar6->Elements[7].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[7].field_0x8 = uVar4;
    lVar8 = lVar8 + -1;
    pTVar6 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)(pTVar6->Elements + 8)
    ;
    param_5 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)
              ((longlong)param_5 + 0x80);
  } while (lVar8 != 0);
  lVar8 = 4;
  pTVar6 = &(this->FieldInfos).PhysicsTargets;
  do {
    uVar5 = *(undefined4 *)&param_6->Elements[0].field_0x4;
    uVar4 = *(undefined8 *)&param_6->Elements[0].field_0x8;
    pTVar6->Elements[0].Value = param_6->Elements[0].Value;
    *(undefined4 *)&pTVar6->Elements[0].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[0].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x10))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x10))->field_0x8;
    pTVar6->Elements[1].Value = ((TAlignedElement<int,16> *)((longlong)param_6 + 0x10))->Value;
    *(undefined4 *)&pTVar6->Elements[1].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[1].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x20))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x20))->field_0x8;
    pTVar6->Elements[2].Value = ((TAlignedElement<int,16> *)((longlong)param_6 + 0x20))->Value;
    *(undefined4 *)&pTVar6->Elements[2].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[2].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x30))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x30))->field_0x8;
    pTVar6->Elements[3].Value = ((TAlignedElement<int,16> *)((longlong)param_6 + 0x30))->Value;
    *(undefined4 *)&pTVar6->Elements[3].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[3].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x40))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x40))->field_0x8;
    pTVar6->Elements[4].Value = ((TAlignedElement<int,16> *)((longlong)param_6 + 0x40))->Value;
    *(undefined4 *)&pTVar6->Elements[4].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[4].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x50))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x50))->field_0x8;
    pTVar6->Elements[5].Value = ((TAlignedElement<int,16> *)((longlong)param_6 + 0x50))->Value;
    *(undefined4 *)&pTVar6->Elements[5].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[5].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x60))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x60))->field_0x8;
    pTVar6->Elements[6].Value = ((TAlignedElement<int,16> *)((longlong)param_6 + 0x60))->Value;
    *(undefined4 *)&pTVar6->Elements[6].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[6].field_0x8 = uVar4;
    uVar5 = *(undefined4 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x70))->field_0x4;
    uVar4 = *(undefined8 *)&((TAlignedElement<int,16> *)((longlong)param_6 + 0x70))->field_0x8;
    pTVar6->Elements[7].Value = ((TAlignedElement<int,16> *)((longlong)param_6 + 0x70))->Value;
    *(undefined4 *)&pTVar6->Elements[7].field_0x4 = uVar5;
    *(undefined8 *)&pTVar6->Elements[7].field_0x8 = uVar4;
    lVar8 = lVar8 + -1;
    pTVar6 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)(pTVar6->Elements + 8)
    ;
    param_6 = (TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> *)
              ((longlong)param_6 + 0x80);
  } while (lVar8 != 0);
  pTVar7 = &(this->FieldInfos).PhysicsBounds;
  do {
    uVar4 = *(undefined8 *)&param_7->Elements[0].field_0x8;
    *(undefined8 *)pTVar7->Elements = *(undefined8 *)param_7;
    *(undefined8 *)&pTVar7->Elements[0].field_0x8 = uVar4;
    uVar4 = *(undefined8 *)
             &((TAlignedElement<UE::Math::TIntVector4<int>,16> *)((longlong)param_7 + 0x10))->
              field_0x8;
    *(undefined8 *)(pTVar7->Elements + 1) = *(undefined8 *)((longlong)param_7 + 0x10);
    *(undefined8 *)&pTVar7->Elements[1].field_0x8 = uVar4;
    uVar4 = *(undefined8 *)
             &((TAlignedElement<UE::Math::TIntVector4<int>,16> *)((longlong)param_7 + 0x20))->
              field_0x8;
    *(undefined8 *)(pTVar7->Elements + 2) = *(undefined8 *)((longlong)param_7 + 0x20);
    *(undefined8 *)&pTVar7->Elements[2].field_0x8 = uVar4;
    uVar4 = *(undefined8 *)
             &((TAlignedElement<UE::Math::TIntVector4<int>,16> *)((longlong)param_7 + 0x30))->
              field_0x8;
    *(undefined8 *)(pTVar7->Elements + 3) = *(undefined8 *)((longlong)param_7 + 0x30);
    *(undefined8 *)&pTVar7->Elements[3].field_0x8 = uVar4;
    uVar4 = *(undefined8 *)
             &((TAlignedElement<UE::Math::TIntVector4<int>,16> *)((longlong)param_7 + 0x40))->
              field_0x8;
    *(undefined8 *)(pTVar7->Elements + 4) = *(undefined8 *)((longlong)param_7 + 0x40);
    *(undefined8 *)&pTVar7->Elements[4].field_0x8 = uVar4;
    uVar4 = *(undefined8 *)
             &((TAlignedElement<UE::Math::TIntVector4<int>,16> *)((longlong)param_7 + 0x50))->
              field_0x8;
    *(undefined8 *)(pTVar7->Elements + 5) = *(undefined8 *)((longlong)param_7 + 0x50);
    *(undefined8 *)&pTVar7->Elements[5].field_0x8 = uVar4;
    uVar4 = *(undefined8 *)
             &((TAlignedElement<UE::Math::TIntVector4<int>,16> *)((longlong)param_7 + 0x60))->
              field_0x8;
    *(undefined8 *)(pTVar7->Elements + 6) = *(undefined8 *)((longlong)param_7 + 0x60);
    *(undefined8 *)&pTVar7->Elements[6].field_0x8 = uVar4;
    uVar4 = *(undefined8 *)
             &((TAlignedElement<UE::Math::TIntVector4<int>,16> *)((longlong)param_7 + 0x70))->
              field_0x8;
    *(undefined8 *)(pTVar7->Elements + 7) = *(undefined8 *)((longlong)param_7 + 0x70);
    *(undefined8 *)&pTVar7->Elements[7].field_0x8 = uVar4;
    lVar10 = lVar10 + -1;
    pTVar7 = (TStaticArray<UE::Core::TAlignedElement<UE::Math::TIntVector4<int>,16>,32,4294967295> *
             )(pTVar7->Elements + 8);
    param_7 = (TStaticArray<UE::Core::TAlignedElement<UE::Math::TIntVector4<int>,16>,32,4294967295>
               *)((longlong)param_7 + 0x80);
  } while (lVar10 != 0);
  (this->FieldInfos).bBuildClipmap = param_8;
  (this->FieldInfos).bShowFields = false;
  _param_8 = 0;
  (this->FieldInfos).ClipmapExponent = (int)GPhysicsFieldClipmapExponent;
  iVar9 = GPhysicsFieldClipmapCount;
  (this->FieldInfos).ClipmapCount = GPhysicsFieldClipmapCount;
  (this->FieldInfos).ClipmapDistance = GPhysicsFieldClipmapDistance;
  (this->FieldInfos).ClipmapResolution = GPhysicsFieldClipmapResolution;
  iVar9 = iVar9 * 0x14;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&(this->FieldInfos).CellsOffsets,(int *)&param_8,iVar9 + 1);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>::Init
            (&(this->FieldInfos).CellsMin,(TIntVector4<int> *)&local_28._s_0,iVar9);
  local_28._s_0.Y = (this->FieldInfos).ClipmapResolution;
  local_28._s_0.X = local_28._s_0.Y;
  local_28._s_0.W = local_28._s_0.Y;
  local_28._s_0.Z = local_28._s_0.Y;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>::Init
            (&(this->FieldInfos).CellsMax,(TIntVector4<int> *)&local_28._s_0,iVar9);
  (this->FieldInfos).BoundsOffsets.Elements[0].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[1].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[2].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[3].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[4].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[5].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[6].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[7].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[8].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[9].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[10].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0xb].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0xc].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0xd].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0xe].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0xf].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x10].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x11].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x12].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x13].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x14].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x15].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x16].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x17].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x18].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x19].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x1a].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x1b].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x1c].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x1d].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x1e].Value = 0;
  (this->FieldInfos).BoundsOffsets.Elements[0x1f].Value = 0;
  (this->FieldInfos).TimeSeconds = 0.0;
  return this;
}

// InitRHI @ 14838d7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPhysicsFieldResource::InitRHI(FPhysicsFieldResource *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_PhysicsFields_UpdateResource_RT> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  uint uVar12;
  LARGE_INTEGER local_res8;
  FName local_res18;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined2 local_54;
  FRHITransitionInfo_u_8 local_50;
  EType local_48;
  ERHIAccess local_44;
  ERHIAccess local_40;
  EResourceTransitionFlags local_3c;
  bool local_30;
  
  FVar9 = StatPtr_STAT_PhysicsFields_UpdateResource_RT;
  if (StatPtr_STAT_PhysicsFields_UpdateResource_RT ==
      (FThreadSafeStaticStat<FStat_STAT_PhysicsFields_UpdateResource_RT>)0x0) {
    pFVar8 = ::FName::FName(&local_res18,"STAT_PhysicsFields_UpdateResource_RT");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_PhysicsFields_UpdateResource_RT>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PhysicsFields_UpdateResource_RT,
                       *pFVar8,L"UpdateResource [RT]","STATGROUP_PhysicsFields","STATCAT_Advanced",
                       L"PhysicsFields",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar5 = false;
  bVar7 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar12 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
                   ,0x1a7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar6 = true;
      goto LAB_14838d8df;
    }
  }
  bVar6 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14838d8df:
  iVar2 = (this->FieldInfos).TargetCount;
  iVar3 = (this->FieldInfos).ClipmapCount;
  InitInternalBuffer<int,1,29>(param_1,L"PhysicsField_TargetOffsets",0x15,&this->TargetsOffsets);
  InitInternalBuffer<UE::Math::TVector4<float>,1,1>
            (param_1,L"PhysicsField_BoundsMin",1,&this->BoundsMin);
  InitInternalBuffer<UE::Math::TVector4<float>,1,1>
            (param_1,L"PhysicsField_BoundsMax",1,&this->BoundsMax);
  InitInternalBuffer<float,1,13>(param_1,L"PhysicsField_NodesParams",1,&this->NodesParams);
  InitInternalBuffer<int,1,29>(param_1,L"PhysicsField_NodesOffsets",1,&this->NodesOffsets);
  if ((this->FieldInfos).bBuildClipmap != false) {
    iVar4 = (this->FieldInfos).ClipmapResolution;
    uVar12 = (this->FieldInfos).ClipmapCount * 0x14;
    InitInternalBuffer<float,1,13>
              (param_1,L"PhysicsField_ClipmapBuffer",iVar4 * iVar4 * iVar4 * iVar2 * iVar3,
               &this->ClipmapBuffer);
    InitInternalBuffer<int,1,29>
              (param_1,L"PhysicsField_CellsOffsets",uVar12 + 1,&this->CellsOffsets);
    InitInternalBuffer<UE::Math::TIntVector4<int>,1,48>
              (param_1,L"PhysicsField_CellsMin",uVar12,&this->CellsMin);
    InitInternalBuffer<UE::Math::TIntVector4<int>,1,48>
              (param_1,L"PhysicsField_CellsMax",uVar12,&this->CellsMax);
    local_68._8_4_ = 1;
    local_58 = 0xffffffff;
    local_54 = 0xffff;
    local_50 = (FRHITransitionInfo_u_8)(this->ClipmapBuffer).UAV.Reference;
    local_68._0_8_ = &local_58;
    local_48 = UAV;
    local_44 = SRVCompute;
    local_40 = SRVMask;
    local_3c = None;
    local_30 = false;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_68,None);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68._8_8_ = (ulonglong)FVar11 & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(&local_res8);
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[0] = local_res8.s.LowPart._0_1_;
      local_68[1] = local_res8.s.LowPart._1_1_;
      local_68[2] = local_res8.s.LowPart._2_1_;
      local_68[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ReleaseRHI @ 14839dba0

void __thiscall FPhysicsFieldResource::ReleaseRHI(FPhysicsFieldResource *this)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  
  (this->NodesParams).NumBytes = 0;
  pFVar1 = (this->NodesParams).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->NodesParams).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->NodesParams).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->NodesParams).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->NodesParams).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->NodesParams).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->NodesOffsets).NumBytes = 0;
  pFVar1 = (this->NodesOffsets).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->NodesOffsets).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->NodesOffsets).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->NodesOffsets).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->NodesOffsets).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->NodesOffsets).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->TargetsOffsets).NumBytes = 0;
  pFVar1 = (this->TargetsOffsets).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->TargetsOffsets).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->TargetsOffsets).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->TargetsOffsets).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->TargetsOffsets).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->TargetsOffsets).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->BoundsMin).NumBytes = 0;
  pFVar1 = (this->BoundsMin).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->BoundsMin).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->BoundsMin).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->BoundsMin).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->BoundsMin).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->BoundsMin).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->BoundsMax).NumBytes = 0;
  pFVar1 = (this->BoundsMax).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->BoundsMax).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->BoundsMax).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    (this->BoundsMax).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->BoundsMax).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->BoundsMax).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  if ((this->FieldInfos).bBuildClipmap != false) {
    (this->ClipmapBuffer).NumBytes = 0;
    pFVar1 = (this->ClipmapBuffer).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->ClipmapBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->ClipmapBuffer).UAV.Reference;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      (this->ClipmapBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = (this->ClipmapBuffer).SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->ClipmapBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    (this->CellsOffsets).NumBytes = 0;
    pFVar1 = (this->CellsOffsets).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->CellsOffsets).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->CellsOffsets).UAV.Reference;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      (this->CellsOffsets).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = (this->CellsOffsets).SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->CellsOffsets).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    (this->CellsMin).NumBytes = 0;
    pFVar1 = (this->CellsMin).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->CellsMin).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->CellsMin).UAV.Reference;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      (this->CellsMin).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = (this->CellsMin).SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->CellsMin).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    (this->CellsMax).NumBytes = 0;
    pFVar1 = (this->CellsMax).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->CellsMax).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->CellsMax).UAV.Reference;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      (this->CellsMax).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = (this->CellsMax).SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->CellsMax).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  return;
}

// UpdateBounds @ 1483b2e00

void __thiscall
FPhysicsFieldResource::UpdateBounds
          (FPhysicsFieldResource *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TStaticArray<int,21,4294967295> *param_3,TStaticArray<int,21,4294967295> *param_4)

{
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_res18;
  TStaticArray<int,21,4294967295> *local_res20;
  int local_168;
  int local_164;
  uint local_160;
  uint local_15c;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  TIntVector4<int>_u_0 local_148;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  TIntVector4<int>_u_0 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  
  local_164 = 0;
  iVar17 = (this->FieldInfos).ClipmapCount * 0x14;
  uVar23 = iVar17 + 1;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_15c = uVar23;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&(this->FieldInfos).CellsOffsets,&local_164,uVar23);
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>::Init
            (&(this->FieldInfos).CellsMin,(TIntVector4<int> *)&local_120._s_0,iVar17);
  local_148._s_0.X = (this->FieldInfos).ClipmapResolution;
  local_148._s_0.Y = local_148._s_0.X;
  local_148._s_0.Z = local_148._s_0.X;
  local_148._s_0.W = local_148._s_0.X;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>::Init
            (&(this->FieldInfos).CellsMax,(TIntVector4<int> *)&local_148._s_0,iVar17);
  if (GPhysicsFieldEnableCulling == 1) {
    uVar35 = SUB84(__real_3ff0000000000000,0);
    uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    (this->FieldInfos).ValidCount = 0;
    local_160 = (this->FieldInfos).TargetTypes.ArrayNum;
    uVar16 = (ulonglong)(int)local_160;
    pFVar26 = (this->FieldInfos).TargetTypes.AllocatorInstance.Data;
    pFVar22 = pFVar26 + uVar16 * 4;
    local_128 = pFVar22;
    while( true ) {
      local_158 = pFVar26;
      if ((this->FieldInfos).TargetTypes.ArrayNum != (int)uVar16) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<enum_EFieldPhysicsType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      uVar23 = local_15c;
      if (pFVar26 == pFVar22) break;
      if (0 < param_3->Elements[*(uint *)pFVar26 + 1] - param_3->Elements[*(uint *)pFVar26]) {
        iVar17 = (this->FieldInfos).ClipmapCount;
        local_168 = 0;
        if (0 < iVar17) {
          do {
            fVar27 = powf((float)(this->FieldInfos).ClipmapExponent,
                          (float)((local_168 - iVar17) + 1));
            fVar27 = fVar27 * (this->FieldInfos).ClipmapDistance;
            iVar5 = (this->FieldInfos).ClipmapResolution;
            dVar11 = (double)fVar27;
            dVar31 = (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.Z;
            uVar23 = iVar17 * (this->FieldInfos).ValidCount + local_168;
            uVar18 = *(uint *)pFVar26;
            lVar19 = (longlong)(int)uVar18;
            uVar25 = 0;
            if ((int)uVar18 < param_1->ArrayNum) {
              uVar25 = ~uVar18 >> 0x1f;
            }
            dVar13 = dVar31 - dVar11;
            dVar32 = (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.Y;
            dVar28 = dVar11 + dVar32;
            dVar32 = dVar32 - dVar11;
            dVar2 = (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.X;
            dVar30 = dVar11 + dVar2;
            dVar2 = dVar2 - dVar11;
            dVar11 = dVar11 + dVar31;
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_150 = (param_1->AllocatorInstance).Data;
            uVar18 = *(uint *)pFVar26;
            lVar20 = (longlong)(int)uVar18;
            uVar25 = 0;
            if ((int)uVar18 < param_2->ArrayNum) {
              uVar25 = ~uVar18 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar22 = (param_2->AllocatorInstance).Data;
            uVar25 = ~uVar23 >> 0x1f;
            local_110 = 0;
            uStack_108 = 0;
            uVar18 = 0;
            if ((int)uVar23 < (this->FieldInfos).CellsMin.ArrayNum) {
              uVar18 = uVar25;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar21 = (longlong)(int)uVar23 * 0x10;
            pFVar26 = (this->FieldInfos).CellsMin.AllocatorInstance.Data + lVar21;
            *(undefined8 *)pFVar26 = 0;
            *(undefined8 *)(pFVar26 + 8) = 0;
            local_100 = 0;
            uStack_f8 = 0;
            uVar18 = 0;
            if ((int)uVar23 < (this->FieldInfos).CellsMax.ArrayNum) {
              uVar18 = uVar25;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar26 = (this->FieldInfos).CellsMax.AllocatorInstance.Data + lVar21;
            *(undefined8 *)pFVar26 = 0;
            *(undefined8 *)(pFVar26 + 8) = 0;
            dVar14 = __real_bfe0000000000000;
            dVar12 = __real_3f1a36e2e0000000;
            dVar31 = *(double *)(pFVar22 + lVar20 * 0x18);
            dVar29 = *(double *)(local_150 + lVar19 * 0x18);
            if (dVar29 < dVar31) {
              dVar34 = *(double *)(local_150 + lVar19 * 0x18 + 8);
              dVar3 = *(double *)(pFVar22 + lVar20 * 0x18 + 8);
              if (dVar34 < dVar3) {
                dVar33 = *(double *)(local_150 + lVar19 * 0x18 + 0x10);
                dVar4 = *(double *)(pFVar22 + lVar20 * 0x18 + 0x10);
                if (dVar33 < dVar4) {
                  if (dVar29 <= dVar2) {
                    dVar29 = dVar2;
                  }
                  if (dVar30 <= dVar31) {
                    dVar31 = dVar30;
                  }
                  if (dVar11 <= dVar4) {
                    dVar4 = dVar11;
                  }
                  if (dVar33 <= dVar13) {
                    dVar33 = dVar13;
                  }
                  if (dVar34 <= dVar32) {
                    dVar34 = dVar32;
                  }
                  if (dVar28 <= dVar3) {
                    dVar3 = dVar28;
                  }
                  if (dVar29 - dVar2 < dVar31 - dVar2) {
                    if ((dVar34 - dVar32 < dVar3 - dVar32) && (dVar33 - dVar13 < dVar4 - dVar13)) {
                      dVar11 = __real_3ff0000000000000 /
                               (double)(float)((double)(fVar27 + fVar27) /
                                              ((double)iVar5 - (double)CONCAT44(uVar36,uVar35)));
                      dVar30 = dVar11 * (dVar29 - dVar2);
                      dVar30 = __real_bfe0000000000000 -
                               (((dVar30 - __real_3f1a36e2e0000000) + dVar30) -
                               __real_3f1a36e2e0000000);
                      dVar28 = dVar11 * (dVar34 - dVar32);
                      dVar28 = __real_bfe0000000000000 -
                               (((dVar28 - __real_3f1a36e2e0000000) + dVar28) -
                               __real_3f1a36e2e0000000);
                      dVar29 = dVar11 * (dVar33 - dVar13);
                      dVar29 = __real_bfe0000000000000 -
                               (((dVar29 - __real_3f1a36e2e0000000) + dVar29) -
                               __real_3f1a36e2e0000000);
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMin.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pFVar22 = (this->FieldInfos).CellsMin.AllocatorInstance.Data;
                      *(int *)(pFVar22 + lVar21) = -(int)((longlong)ROUND(dVar30) >> 1);
                      *(int *)(pFVar22 + lVar21 + 4) = -(int)((longlong)ROUND(dVar28) >> 1);
                      *(int *)(pFVar22 + lVar21 + 8) = -(int)((longlong)ROUND(dVar29) >> 1);
                      dVar31 = dVar11 * (dVar31 - dVar2) + dVar12;
                      *(undefined4 *)(pFVar22 + lVar21 + 0xc) = 0;
                      dVar32 = dVar11 * (dVar3 - dVar32) + dVar12;
                      dVar12 = dVar11 * (dVar4 - dVar13) + dVar12;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMax.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pFVar22 = (this->FieldInfos).CellsMax.AllocatorInstance.Data;
                      *(int *)(pFVar22 + lVar21) =
                           -(int)((longlong)ROUND(dVar14 - (dVar31 + dVar31)) >> 1);
                      *(int *)(pFVar22 + lVar21 + 4) =
                           -(int)((longlong)ROUND(dVar14 - (dVar32 + dVar32)) >> 1);
                      *(int *)(pFVar22 + lVar21 + 8) =
                           -(int)((longlong)ROUND(dVar14 - (dVar12 + dVar12)) >> 1);
                      *(undefined4 *)(pFVar22 + lVar21 + 0xc) = 0;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMax.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      local_150 = (this->FieldInfos).CellsMax.AllocatorInstance.Data;
                      pTVar1 = &(this->FieldInfos).CellsMin;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMin.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      local_130 = (pTVar1->AllocatorInstance).Data;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMax.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      local_138 = (this->FieldInfos).CellsMax.AllocatorInstance.Data;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMin.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pFVar22 = (pTVar1->AllocatorInstance).Data;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMax.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pFVar26 = (this->FieldInfos).CellsMax.AllocatorInstance.Data;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsMin.ArrayNum) {
                        uVar18 = uVar25;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      iVar17 = *(int *)(local_150 + lVar21 + 8);
                      iVar5 = *(int *)((pTVar1->AllocatorInstance).Data + lVar21 + 8);
                      iVar6 = *(int *)(local_138 + lVar21 + 4);
                      iVar7 = *(int *)(local_130 + lVar21 + 4);
                      iVar8 = *(int *)(pFVar26 + lVar21);
                      iVar9 = *(int *)(pFVar22 + lVar21);
                      uVar23 = uVar23 + 1;
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsOffsets.ArrayNum) {
                        uVar18 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      *(int *)((this->FieldInfos).CellsOffsets.AllocatorInstance.Data +
                              (longlong)(int)uVar23 * 4) =
                           (iVar17 - iVar5) * (iVar6 - iVar7) * (iVar8 - iVar9);
                      uVar18 = 0;
                      if ((int)uVar23 < (this->FieldInfos).CellsOffsets.ArrayNum) {
                        uVar18 = ~uVar23 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                  }
                }
              }
            }
            iVar17 = (this->FieldInfos).ClipmapCount;
            local_168 = local_168 + 1;
            uVar35 = SUB84(__real_3ff0000000000000,0);
            uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            param_2 = local_res18;
            param_1 = local_res10;
            pFVar26 = local_158;
          } while (local_168 < iVar17);
        }
        uVar23 = (this->FieldInfos).ValidCount;
        uVar18 = *(uint *)pFVar26;
        (this->FieldInfos).ValidCount = uVar23 + 1;
        (this->FieldInfos).ValidTargets.Elements[uVar23].Value = uVar18;
        pFVar22 = local_128;
        param_3 = local_res20;
      }
      uVar16 = (ulonglong)local_160;
      pFVar26 = pFVar26 + 4;
    }
  }
  pTVar24 = &(this->FieldInfos).CellsOffsets;
  uVar18 = 1;
  if (1 < uVar23) {
    do {
      uVar25 = 0;
      if ((int)(uVar18 - 1) < (this->FieldInfos).CellsOffsets.ArrayNum) {
        uVar25 = -uVar18 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar17 = *(int *)((pTVar24->AllocatorInstance).Data + (longlong)(int)uVar18 * 4 + -4);
      uVar25 = 0;
      if ((int)uVar18 < (this->FieldInfos).CellsOffsets.ArrayNum) {
        uVar25 = ~uVar18 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar19 = (longlong)(int)uVar18;
      uVar18 = uVar18 + 1;
      pFVar22 = (pTVar24->AllocatorInstance).Data + lVar19 * 4;
      *(int *)pFVar22 = *(int *)pFVar22 + iVar17;
    } while (uVar18 < uVar23);
  }
  return;
}

// UpdateResource @ 1483b6e60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FPhysicsFieldResource::UpdateResource
          (FPhysicsFieldResource *this,FRHICommandList *param_1,
          TStaticArray<int,21,4294967295> *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_6,float param_7,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_8,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_9,
          TStaticArray<int,21,4294967295> *param_10)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  double dVar6;
  FResetPhysicsFieldClipmapCS *pFVar7;
  FBuildPhysicsFieldClipmapCS *pFVar8;
  bool bVar9;
  uint uVar10;
  atomic<unsigned_int> aVar11;
  uint uVar12;
  Type TVar13;
  TStatId TVar14;
  FRHIBreadcrumbAllocator *pFVar15;
  FRHIBreadcrumbNode *pFVar16;
  void *_Dst;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar17;
  FGlobalShaderMap *pFVar18;
  FShaderType *pFVar19;
  FName FVar20;
  FRHIComputeShader *pFVar21;
  FRHIBatchedShaderParameters *pFVar22;
  FRHIBatchedShaderUnbinds *pFVar23;
  FLLMScope local_res10 [2];
  TStaticArray<int,21,4294967295> *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  TShaderRefBase<FResetPhysicsFieldClipmapCS,FShaderMapPointerTable> local_308;
  TArrayView<FRHITransitionInfo_const_,int> local_2f8;
  FName local_2e8;
  byte local_2e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2d8;
  TShaderRefBase<FBuildPhysicsFieldClipmapCS,FShaderMapPointerTable> local_2c8;
  FMemScope local_2b8;
  FRHITransitionInfo local_2b0;
  FRHITransitionInfo local_280;
  undefined1 local_250 [60];
  undefined4 local_214;
  char *local_210;
  char *local_208;
  undefined1 local_1f8 [48];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1c8;
  char *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TGPUStat<TRHIGPUStatNameProvider_PhysicsFields_UpdateBuffers> *local_1a8;
  wchar_t *pwStack_1a0;
  char *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TGPUStat<TRHIGPUStatNameProvider_PhysicsFields_ClearClipmap> *local_188;
  wchar_t *pwStack_180;
  char *local_178;
  FShaderResourceParameter FStack_170;
  FShaderResourceParameter FStack_16c;
  TGPUStat<TRHIGPUStatNameProvider_PhysicsFields_UpdateBuffers> *local_168;
  wchar_t *pwStack_160;
  char *local_158;
  undefined4 uStack_150;
  ushort uStack_14c;
  ushort uStack_14a;
  TGPUStat<TRHIGPUStatNameProvider_PhysicsFields_BuildClipmap> *local_148;
  wchar_t *pwStack_140;
  FRHIBreadcrumbScope local_138;
  char local_128;
  FRHIBreadcrumbScope local_120;
  char local_110;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_e0;
  undefined1 local_c8 [16];
  FRHIBreadcrumbScope local_b8;
  undefined1 local_a8;
  FRHIBreadcrumbScope local_a0;
  undefined1 local_90;
  FString local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  FString local_58 [2];
  
  local_res18 = param_2;
  local_res20 = param_3;
  TVar14 = FThreadSafeStaticStatInner<FStat_STAT_PhysicsFields_UpdateResource_RT,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_PhysicsFields_UpdateResource_RT,1> *)
                      &StatPtr_STAT_PhysicsFields_UpdateResource_RT);
  local_250._56_4_ = 0x21a;
  local_208 = 
  "void __cdecl FPhysicsFieldResource::UpdateResource(class FRHICommandList &,const class TStaticArray<int,21,4294967295> &,const class TArray<int,class TSizedDefaultAllocator<32> > &,const class TArray<float,class TSizedDefaultAllocator<32> > &,const class TArray<struct UE::Math::TVector<double>,class TSizedDefaultAllocator<32> > &,const class TArray<struct UE::Math::TVector<double>,class TSizedDefaultAllocator<32> > &,const float,const class TArray<struct UE::Math::TVector4<double>,class TSizedDefaultAllocator<32> > &,const class TArray<struct UE::Math::TVector4<double>,class TSizedDefaultAllocator<32> > &,const class TStaticArray<int,21,4294967295> &)"
  ;
  local_214 = 2;
  local_210 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_2e8,*(TStatIdData **)&(TVar14.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)(local_250 + 0x38));
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_1b8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
    ;
    uStack_1b0 = 0x21d;
    local_1a8 = &GPUStat_PhysicsFields_UpdateBuffers;
    pwStack_1a0 = L"PhysicsFields_UpdateBuffers";
    ::Desc._padding_._0_4_ = 0x51a96ad0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x21d;
    ::Desc._padding_._4_4_ = uStack_1ac;
    ::Desc._padding_._0_4_ = 0x54c63ad0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x51a8ad28;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FPhysicsFieldResource::UpdateResource'::__l8::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar15 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar16 = FMemStackBase::Alloc(&pFVar15->Inner,0x50,8);
  pFVar16->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar16->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar16->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar16->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar16->Allocator = pFVar15;
  pFVar16->TraceCpuSpecId = 0;
  pFVar16->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar10 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar16->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar16->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar16->ID = uVar10;
  pFVar16->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar16[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar9 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar9)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar11 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar11;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar16->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_b8,(FRHIComputeCommandList *)param_1,pFVar16);
  local_a8 = 1;
  uVar10 = param_4->ArrayNum;
  if ((uVar10 != 0) &&
     (_Src = (param_4->AllocatorInstance).Data, _Src != (FScriptContainerElement *)0x0)) {
    FLLMScope::FLLMScope(local_res10,Physics,false,None,Default,true);
    FMemScope::FMemScope(&local_2b8,Physics,true);
    FRWBuffer::Initialize
              (&this->NodesParams,(FRHICommandListBase *)param_1,L"PhysicsField_NodeParams",4,uVar10
               ,PF_R32_FLOAT,UAVCompute,Static,(FResourceArrayUploadInterface *)0x0);
    FMemScope::~FMemScope(&local_2b8);
    FLLMScope::~FLLMScope(local_res10);
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,(this->NodesParams).Buffer.Reference,0,
                      uVar10 * 4,RLM_WriteOnly);
    memcpy(_Dst,_Src,(ulonglong)(uVar10 * 4));
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,(this->NodesParams).Buffer.Reference);
  }
  UpdateInternalBuffer<int,1,29>
            ((FRHICommandListBase *)param_1,L"PhysicsField_NodeOffset",local_res20->ArrayNum,
             (int *)(local_res20->AllocatorInstance).Data,&this->NodesOffsets,true);
  UpdateInternalBuffer<int,1,29>
            ((FRHICommandListBase *)param_1,L"PhysicsField_TargetOffset",0x15,local_res18->Elements,
             &this->TargetsOffsets,false);
  (this->FieldInfos).TimeSeconds = param_7;
  (this->FieldInfos).BoundsOffsets.Elements[0].Value = param_10->Elements[0];
  (this->FieldInfos).BoundsOffsets.Elements[1].Value = param_10->Elements[1];
  (this->FieldInfos).BoundsOffsets.Elements[2].Value = param_10->Elements[2];
  (this->FieldInfos).BoundsOffsets.Elements[3].Value = param_10->Elements[3];
  (this->FieldInfos).BoundsOffsets.Elements[4].Value = param_10->Elements[4];
  (this->FieldInfos).BoundsOffsets.Elements[5].Value = param_10->Elements[5];
  (this->FieldInfos).BoundsOffsets.Elements[6].Value = param_10->Elements[6];
  (this->FieldInfos).BoundsOffsets.Elements[7].Value = param_10->Elements[7];
  (this->FieldInfos).BoundsOffsets.Elements[8].Value = param_10->Elements[8];
  (this->FieldInfos).BoundsOffsets.Elements[9].Value = param_10->Elements[9];
  (this->FieldInfos).BoundsOffsets.Elements[10].Value = param_10->Elements[10];
  (this->FieldInfos).BoundsOffsets.Elements[0xb].Value = param_10->Elements[0xb];
  (this->FieldInfos).BoundsOffsets.Elements[0xc].Value = param_10->Elements[0xc];
  (this->FieldInfos).BoundsOffsets.Elements[0xd].Value = param_10->Elements[0xd];
  (this->FieldInfos).BoundsOffsets.Elements[0xe].Value = param_10->Elements[0xe];
  (this->FieldInfos).BoundsOffsets.Elements[0xf].Value = param_10->Elements[0xf];
  (this->FieldInfos).BoundsOffsets.Elements[0x10].Value = param_10->Elements[0x10];
  (this->FieldInfos).BoundsOffsets.Elements[0x11].Value = param_10->Elements[0x11];
  (this->FieldInfos).BoundsOffsets.Elements[0x12].Value = param_10->Elements[0x12];
  (this->FieldInfos).BoundsOffsets.Elements[0x13].Value = param_10->Elements[0x13];
  (this->FieldInfos).BoundsOffsets.Elements[0x14].Value = param_10->Elements[0x14];
  pTVar17 = UE::LWC::
            ConvertArrayType<UE::Math::TVector4<float>,UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>
                      (&local_f0,param_8);
  UpdateInternalBuffer<UE::Math::TVector4<float>,1,1>
            ((FRHICommandListBase *)param_1,L"PhysicsField_BoundsMin",param_8->ArrayNum,
             (TVector4<float> *)(pTVar17->AllocatorInstance).Data,&this->BoundsMin,true);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  pTVar17 = UE::LWC::
            ConvertArrayType<UE::Math::TVector4<float>,UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>
                      (&local_e0,param_9);
  UpdateInternalBuffer<UE::Math::TVector4<float>,1,1>
            ((FRHICommandListBase *)param_1,L"PhysicsField_BoundsMax",param_9->ArrayNum,
             (TVector4<float> *)(pTVar17->AllocatorInstance).Data,&this->BoundsMax,true);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_b8);
  if ((this->FieldInfos).bBuildClipmap == false) goto LAB_1483b7f33;
  uVar10 = (this->FieldInfos).ClipmapCount * 0x14;
  if (*(int *)(lVar4 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 != -1) goto LAB_1483b7461;
    uStack_190 = 0x233;
    local_198 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
    ;
    local_188 = &GPUStat_PhysicsFields_ClearClipmap;
    pwStack_180 = L"PhysicsFields_ClearClipmap";
    ::Desc._padding_._0_4_ = 0x51a96ad0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x233;
    ::Desc._padding_._4_4_ = uStack_18c;
    ::Desc._padding_._0_4_ = 0x54c639f0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x51a8aac0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FPhysicsFieldResource::UpdateResource'::__l19::<lambda_2>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  else {
LAB_1483b7461:
  }
  pFVar15 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar16 = FMemStackBase::Alloc(&pFVar15->Inner,0x50,8);
  pFVar16->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar16->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar16->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar16->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar16->Allocator = pFVar15;
  pFVar16->TraceCpuSpecId = 0;
  pFVar16->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar12 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar16->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar16->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar16->ID = uVar12;
  pFVar16->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar16[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar9 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar9)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar11 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar11;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar16->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_138,(FRHIComputeCommandList *)param_1,pFVar16);
  local_308.ShaderMap = (FShaderMapBase *)CONCAT44(local_308.ShaderMap._4_4_,1);
  local_1f8._4_2_ = 0xffff;
  local_1f8._8_8_ = (this->ClipmapBuffer).UAV.Reference;
  local_308.ShaderContent = (FResetPhysicsFieldClipmapCS *)local_1f8;
  local_128 = '\x01';
  local_c8._8_8_ = local_308.ShaderMap;
  local_1f8._0_4_ = 0xffffffff;
  local_1f8[0x10] = UAV;
  local_1f8._20_4_ = None;
  local_1f8._24_4_ = UAVCompute;
  local_1f8[0x1c] = None;
  local_1f8[0x28] = false;
  local_c8._0_8_ = local_308.ShaderContent;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,(TArrayView<FRHITransitionInfo_const_,int> *)local_c8
             ,None);
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar13 = (uint)bVar2;
  if (bVar2 == 5) {
    TVar13 = GMaxRHIFeatureLevel;
  }
  pFVar18 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar13]);
  pFVar19 = (FShaderType *)FResetPhysicsFieldClipmapCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar18,&local_1c8,pFVar19,0);
  if ((FResetPhysicsFieldClipmapCS *)local_1c8.ShaderContent == (FResetPhysicsFieldClipmapCS *)0x0)
  {
    FVar20 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_100);
    ::FName::ToString((FName *)FVar20,local_58);
    FResetPhysicsFieldClipmapCS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FResetPhysicsFieldClipmapCS::GetStaticType();
  local_308.ShaderContent = (FResetPhysicsFieldClipmapCS *)local_1c8.ShaderContent;
  local_308.ShaderMap = local_1c8.ShaderMap;
  pFVar21 = TShaderRefBase<FResetPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_308);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar21);
  uVar12 = 0;
  if ((int)uVar10 < (this->FieldInfos).CellsOffsets.ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = *(int *)((this->FieldInfos).CellsOffsets.AllocatorInstance.Data +
                  (longlong)(int)uVar10 * 4);
  pFVar21 = TShaderRefBase<FResetPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_308);
  pFVar22 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  pFVar7 = local_308.ShaderContent;
  FResetPhysicsFieldClipmapCS::SetParameters(local_308.ShaderContent,pFVar22,this,param_7,iVar3);
  FRHIComputeCommandList::SetBatchedShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar21,pFVar22);
  iVar3 = iVar3 + 0x3f;
  DispatchComputeShader
            ((FRHIComputeCommandList *)param_1,(FShader *)pFVar7,
             (int)((iVar3 >> 0x1f & 0x3fU) + iVar3) >> 6,1,1);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar23 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    UnsetUAVParameter(pFVar23,&pFVar7->FieldClipmap);
    pFVar21 = TShaderRefBase<FResetPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_308);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar21,pFVar23);
  }
  local_2f8.ArrayNum = 1;
  local_2b0._padding_._0_4_ = 0xffffffff;
  local_2b0._padding_._4_2_ = 0xffff;
  local_2b0.field1_0x8 = (FRHITransitionInfo_u_8)(this->ClipmapBuffer).UAV.Reference;
  local_2f8.DataPtr = &local_2b0;
  local_2b0.Type = UAV;
  local_68.ArrayNum = 1;
  local_68._12_4_ = local_2f8._12_4_;
  local_2b0.AccessBefore = None;
  local_2b0.AccessAfter = SRVCompute;
  local_2b0.Flags = None;
  local_2b0.CommitInfo.bIsSet = false;
  local_68.DataPtr = local_2f8.DataPtr;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_68,None);
  if (local_128 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_138);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FStack_170.BaseIndex = 0x245;
    FStack_170.NumResources = '\0';
    FStack_170.Type = LooseData;
    local_178 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
    ;
    local_168 = &GPUStat_PhysicsFields_UpdateBuffers;
    pwStack_160 = L"PhysicsFields_UpdateBuffers";
    ::Desc._padding_._0_4_ = 0x51a96ad0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x245;
    ::Desc._padding_._4_4_ = FStack_16c;
    ::Desc._padding_._0_4_ = 0x54c63ad0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x51a8ad28;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FPhysicsFieldResource::UpdateResource'::__l25::<lambda_3>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar15 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar16 = FMemStackBase::Alloc(&pFVar15->Inner,0x50,8);
  pFVar16->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar16->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar16->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar16->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar16->Allocator = pFVar15;
  pFVar16->TraceCpuSpecId = 0;
  pFVar16->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar12 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar16->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar16->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar16->ID = uVar12;
  pFVar16->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar16[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar9 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar9)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar11 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar11;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar16->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_a0,(FRHIComputeCommandList *)param_1,pFVar16);
  dVar6 = (this->FieldInfos).ViewOrigin.field0_0x0._s_0.Y;
  dVar1 = (this->FieldInfos).ViewOrigin.field0_0x0._s_0.Z;
  (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.X =
       (this->FieldInfos).ViewOrigin.field0_0x0._s_0.X;
  (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.Y = dVar6;
  local_90 = 1;
  (this->FieldInfos).ClipmapCenter.field0_0x0._s_0.Z = dVar1;
  UpdateBounds(this,param_5,param_6,local_res18,param_10);
  UpdateInternalBuffer<int,1,29>
            ((FRHICommandListBase *)param_1,L"PhysicsField_CellsOffsets",
             (this->FieldInfos).CellsOffsets.ArrayNum,
             (int *)(this->FieldInfos).CellsOffsets.AllocatorInstance.Data,&this->CellsOffsets,false
            );
  UpdateInternalBuffer<UE::Math::TIntVector4<int>,1,48>
            ((FRHICommandListBase *)param_1,L"PhysicsField_CellsMin",
             (this->FieldInfos).CellsMin.ArrayNum,
             (TIntVector4<int> *)(this->FieldInfos).CellsMin.AllocatorInstance.Data,&this->CellsMin,
             false);
  UpdateInternalBuffer<UE::Math::TIntVector4<int>,1,48>
            ((FRHICommandListBase *)param_1,L"PhysicsField_CellsMax",
             (this->FieldInfos).CellsMax.ArrayNum,
             (TIntVector4<int> *)(this->FieldInfos).CellsMax.AllocatorInstance.Data,&this->CellsMax,
             false);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a0);
  if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_150._0_2_ = 0x250;
    uStack_150._2_2_ = 0;
    local_158 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsField\\PhysicsFieldComponent.cpp"
    ;
    local_148 = &GPUStat_PhysicsFields_BuildClipmap;
    pwStack_140 = L"PhysicsFields_BuildClipmap";
    ::Desc._padding_._0_4_ = 0x51a96ad0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x250;
    ::Desc._padding_._4_2_ = uStack_14c;
    ::Desc._padding_._6_2_ = uStack_14a;
    ::Desc._padding_._0_4_ = 0x54c63a60;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x51a8acd0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FPhysicsFieldResource::UpdateResource'::__l31::<lambda_4>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar15 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar16 = FMemStackBase::Alloc(&pFVar15->Inner,0x50,8);
  pFVar16->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar16->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar16->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar16->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar16->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar16->Allocator = pFVar15;
  pFVar16->TraceCpuSpecId = 0;
  pFVar16->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar12 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar16->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar16->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar16->ID = uVar12;
  pFVar16->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar16[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar9 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar9)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar11 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar11;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar16->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_120,(FRHIComputeCommandList *)param_1,pFVar16);
  local_280.field1_0x8 = (FRHITransitionInfo_u_8)(this->ClipmapBuffer).UAV.Reference;
  local_2f8.ArrayNum = 1;
  local_2f8.DataPtr = &local_280;
  local_110 = '\x01';
  local_280._padding_._0_4_ = 0xffffffff;
  local_280._padding_._4_2_ = 0xffff;
  local_280.Type = UAV;
  local_280.AccessBefore = None;
  local_280.AccessAfter = UAVCompute;
  local_280.Flags = None;
  local_280.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_2f8,None);
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar13 = (uint)bVar2;
  if (bVar2 == 5) {
    TVar13 = GMaxRHIFeatureLevel;
  }
  pFVar18 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar13]);
  pFVar19 = (FShaderType *)FBuildPhysicsFieldClipmapCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar18,&local_2d8,pFVar19,0);
  if ((FBuildPhysicsFieldClipmapCS *)local_2d8.ShaderContent == (FBuildPhysicsFieldClipmapCS *)0x0)
  {
    FVar20 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_f8);
    ::FName::ToString((FName *)FVar20,&local_88);
    FBuildPhysicsFieldClipmapCS::GetStaticType();
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FBuildPhysicsFieldClipmapCS::GetStaticType();
  local_2c8.ShaderContent = (FBuildPhysicsFieldClipmapCS *)local_2d8.ShaderContent;
  pFVar21 = TShaderRefBase<FBuildPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_2c8);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar21);
  uVar12 = 0;
  if ((int)uVar10 < (this->FieldInfos).CellsOffsets.ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = *(int *)((this->FieldInfos).CellsOffsets.AllocatorInstance.Data +
                  (longlong)(int)uVar10 * 4);
  pFVar21 = TShaderRefBase<FBuildPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
                      (&local_2c8);
  pFVar22 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  pFVar8 = local_2c8.ShaderContent;
  FBuildPhysicsFieldClipmapCS::SetParameters(local_2c8.ShaderContent,pFVar22,this,param_7,iVar3);
  FRHIComputeCommandList::SetBatchedShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar21,pFVar22);
  iVar3 = iVar3 + 0x3f;
  DispatchComputeShader
            ((FRHIComputeCommandList *)param_1,(FShader *)pFVar8,
             (int)((iVar3 >> 0x1f & 0x3fU) + iVar3) >> 6,1,1);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar23 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    UnsetUAVParameter(pFVar23,&pFVar8->FieldClipmap);
    pFVar21 = TShaderRefBase<FBuildPhysicsFieldClipmapCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_2c8);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar21,pFVar23);
  }
  local_250._8_8_ = (this->ClipmapBuffer).UAV.Reference;
  local_2d8.ShaderContent = (FShader *)local_250;
  local_2d8.ShaderMap._0_4_ = 1;
  local_78._12_4_ = local_2d8.ShaderMap._4_4_;
  local_78.ArrayNum = 1;
  local_250._0_4_ = 0xffffffff;
  local_250._4_2_ = 0xffff;
  local_250[0x10] = 3;
  local_250._20_4_ = 0;
  local_250._24_4_ = 0x10;
  local_250[0x1c] = 0;
  local_250[0x28] = 0;
  local_78.DataPtr = (FRHITransitionInfo *)local_2d8.ShaderContent;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_78,None);
  if (local_110 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_120);
  }
LAB_1483b7f33:
  if ((local_2e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2e0 & 4) != 0) {
    FThreadStats::AddMessage(local_2e8,CycleScopeEnd);
  }
  return;
}

