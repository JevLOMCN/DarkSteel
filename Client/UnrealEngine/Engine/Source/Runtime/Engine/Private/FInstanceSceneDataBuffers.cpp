// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FInstanceSceneDataBuffers @ 147cc4770

FInstanceSceneDataBuffers * __thiscall
FInstanceSceneDataBuffers::FInstanceSceneDataBuffers
          (FInstanceSceneDataBuffers *this,FInstanceSceneDataBuffers *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  bool bVar7;
  FInstanceSceneDataBuffers *pFVar8;
  
  uVar5 = *(undefined8 *)
           ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + 8);
  *(undefined8 *)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 =
       *(undefined8 *)&(param_1->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + 8) =
       uVar5;
  uVar5 = *(undefined8 *)&(param_1->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0;
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0 + 4);
  *(undefined8 *)&(this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 = uVar5;
  uVar5 = *(undefined8 *)((longlong)&(param_1->PrimitiveToRelativeWorld).Origin.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 + 8) =
       *(undefined8 *)
        ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).Origin.field0_0x0 + 4) = uVar5;
  dVar6 = (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X =
       (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y = dVar6;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z =
       (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z;
  (this->InstanceLocalBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLocalBounds).AllocatorInstance.Data =
       (param_1->InstanceLocalBounds).AllocatorInstance.Data;
  (param_1->InstanceLocalBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLocalBounds).ArrayNum = (param_1->InstanceLocalBounds).ArrayNum;
  (this->InstanceLocalBounds).ArrayMax = (param_1->InstanceLocalBounds).ArrayMax;
  (param_1->InstanceLocalBounds).ArrayNum = 0;
  (param_1->InstanceLocalBounds).ArrayMax = 0;
  (this->InstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCustomData).AllocatorInstance.Data =
       (param_1->InstanceCustomData).AllocatorInstance.Data;
  (param_1->InstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCustomData).ArrayNum = (param_1->InstanceCustomData).ArrayNum;
  (this->InstanceCustomData).ArrayMax = (param_1->InstanceCustomData).ArrayMax;
  (param_1->InstanceCustomData).ArrayNum = 0;
  (param_1->InstanceCustomData).ArrayMax = 0;
  (this->InstanceRandomIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceRandomIDs).AllocatorInstance.Data =
       (param_1->InstanceRandomIDs).AllocatorInstance.Data;
  (param_1->InstanceRandomIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceRandomIDs).ArrayNum = (param_1->InstanceRandomIDs).ArrayNum;
  (this->InstanceRandomIDs).ArrayMax = (param_1->InstanceRandomIDs).ArrayMax;
  (param_1->InstanceRandomIDs).ArrayNum = 0;
  (param_1->InstanceRandomIDs).ArrayMax = 0;
  (this->InstanceLightShadowUVBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLightShadowUVBias).AllocatorInstance.Data =
       (param_1->InstanceLightShadowUVBias).AllocatorInstance.Data;
  (param_1->InstanceLightShadowUVBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLightShadowUVBias).ArrayNum = (param_1->InstanceLightShadowUVBias).ArrayNum;
  (this->InstanceLightShadowUVBias).ArrayMax = (param_1->InstanceLightShadowUVBias).ArrayMax;
  (param_1->InstanceLightShadowUVBias).ArrayNum = 0;
  (param_1->InstanceLightShadowUVBias).ArrayMax = 0;
  (this->InstanceSkinningData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceSkinningData).AllocatorInstance.Data =
       (param_1->InstanceSkinningData).AllocatorInstance.Data;
  (param_1->InstanceSkinningData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceSkinningData).ArrayNum = (param_1->InstanceSkinningData).ArrayNum;
  (this->InstanceSkinningData).ArrayMax = (param_1->InstanceSkinningData).ArrayMax;
  (param_1->InstanceSkinningData).ArrayNum = 0;
  (param_1->InstanceSkinningData).ArrayMax = 0;
  (this->InstanceHierarchyOffset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceHierarchyOffset).AllocatorInstance.Data =
       (param_1->InstanceHierarchyOffset).AllocatorInstance.Data;
  (param_1->InstanceHierarchyOffset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceHierarchyOffset).ArrayNum = (param_1->InstanceHierarchyOffset).ArrayNum;
  (this->InstanceHierarchyOffset).ArrayMax = (param_1->InstanceHierarchyOffset).ArrayMax;
  (param_1->InstanceHierarchyOffset).ArrayNum = 0;
  (param_1->InstanceHierarchyOffset).ArrayMax = 0;
  (this->InstancePayloadExtension).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancePayloadExtension).AllocatorInstance.Data =
       (param_1->InstancePayloadExtension).AllocatorInstance.Data;
  (param_1->InstancePayloadExtension).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancePayloadExtension).ArrayNum = (param_1->InstancePayloadExtension).ArrayNum;
  (this->InstancePayloadExtension).ArrayMax = (param_1->InstancePayloadExtension).ArrayMax;
  (param_1->InstancePayloadExtension).ArrayNum = 0;
  (param_1->InstancePayloadExtension).ArrayMax = 0;
  (this->InstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceToPrimitiveRelative).AllocatorInstance.Data =
       (param_1->InstanceToPrimitiveRelative).AllocatorInstance.Data;
  (param_1->InstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceToPrimitiveRelative).ArrayNum = (param_1->InstanceToPrimitiveRelative).ArrayNum;
  (this->InstanceToPrimitiveRelative).ArrayMax = (param_1->InstanceToPrimitiveRelative).ArrayMax;
  (param_1->InstanceToPrimitiveRelative).ArrayNum = 0;
  (param_1->InstanceToPrimitiveRelative).ArrayMax = 0;
  (this->PrevInstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevInstanceToPrimitiveRelative).AllocatorInstance.Data =
       (param_1->PrevInstanceToPrimitiveRelative).AllocatorInstance.Data;
  (param_1->PrevInstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->PrevInstanceToPrimitiveRelative).ArrayNum =
       (param_1->PrevInstanceToPrimitiveRelative).ArrayNum;
  (this->PrevInstanceToPrimitiveRelative).ArrayMax =
       (param_1->PrevInstanceToPrimitiveRelative).ArrayMax;
  (param_1->PrevInstanceToPrimitiveRelative).ArrayNum = 0;
  (param_1->PrevInstanceToPrimitiveRelative).ArrayMax = 0;
  (this->VisibleInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->VisibleInstances).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    memmove(&this->VisibleInstances,&param_1->VisibleInstances,0x10);
  }
  FVar3 = (this->VisibleInstances).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->VisibleInstances).AllocatorInstance.SecondaryData =
       (param_1->VisibleInstances).AllocatorInstance.SecondaryData;
  (param_1->VisibleInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->VisibleInstances).NumBits = (param_1->VisibleInstances).NumBits;
  (this->VisibleInstances).MaxBits = (param_1->VisibleInstances).MaxBits;
  (param_1->VisibleInstances).NumBits = 0;
  (param_1->VisibleInstances).MaxBits = 0;
  this->NumInstancesGPUOnly = param_1->NumInstancesGPUOnly;
  this->NumCustomDataFloats = param_1->NumCustomDataFloats;
  this->Flags = param_1->Flags;
  uVar1 = this->field_0x102;
  (this->CurrentWriterTag).Value = (atomic<unsigned_int>)0x0;
  this->field_0x102 = (this->bInstanceDataIsGPUOnly ^ param_1->bInstanceDataIsGPUOnly) & 1U ^ uVar1;
  if ((param_1->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.Value == 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x178,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FInstanceSceneDataBuffers *)(*pcVar4)();
      return pFVar8;
    }
  }
  (this->Immutable).Object = (param_1->Immutable).Object;
  (this->Immutable).SharedReferenceCount.ReferenceController =
       (param_1->Immutable).SharedReferenceCount.ReferenceController;
  (param_1->Immutable).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (param_1->Immutable).Object = (FInstanceSceneDataImmutable *)0x0;
  return this;
}

// FInstanceSceneDataBuffers @ 147cc4a90

FInstanceSceneDataBuffers * __thiscall
FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(FInstanceSceneDataBuffers *this)

{
  (this->InstanceLocalBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLocalBounds).ArrayNum = 0;
  (this->InstanceLocalBounds).ArrayMax = 0;
  (this->InstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCustomData).ArrayNum = 0;
  (this->InstanceCustomData).ArrayMax = 0;
  (this->InstanceRandomIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceRandomIDs).ArrayNum = 0;
  (this->InstanceRandomIDs).ArrayMax = 0;
  (this->InstanceLightShadowUVBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLightShadowUVBias).ArrayNum = 0;
  (this->InstanceLightShadowUVBias).ArrayMax = 0;
  (this->InstanceSkinningData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceSkinningData).ArrayNum = 0;
  (this->InstanceSkinningData).ArrayMax = 0;
  (this->InstanceHierarchyOffset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceHierarchyOffset).ArrayNum = 0;
  (this->InstanceHierarchyOffset).ArrayMax = 0;
  (this->InstancePayloadExtension).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancePayloadExtension).ArrayNum = 0;
  (this->InstancePayloadExtension).ArrayMax = 0;
  (this->InstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceToPrimitiveRelative).ArrayNum = 0;
  (this->InstanceToPrimitiveRelative).ArrayMax = 0;
  (this->PrevInstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevInstanceToPrimitiveRelative).ArrayNum = 0;
  (this->PrevInstanceToPrimitiveRelative).ArrayMax = 0;
  (this->VisibleInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->VisibleInstances).NumBits = 0;
  *(undefined8 *)&(this->VisibleInstances).MaxBits = 0x80;
  this->bInstanceDataIsGPUOnly = false;
  this->NumCustomDataFloats = 0;
  (this->Flags).Packed = 0;
  (this->CurrentWriterTag).Value = (atomic<unsigned_int>)0x0;
  (this->Immutable).Object = (FInstanceSceneDataImmutable *)0x0;
  (this->Immutable).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FInstanceSceneDataBuffers @ 147cc4b50

FInstanceSceneDataBuffers * __thiscall
FInstanceSceneDataBuffers::FInstanceSceneDataBuffers(FInstanceSceneDataBuffers *this,bool param_1)

{
  (this->InstanceLocalBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLocalBounds).ArrayNum = 0;
  (this->InstanceLocalBounds).ArrayMax = 0;
  (this->InstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCustomData).ArrayNum = 0;
  (this->InstanceCustomData).ArrayMax = 0;
  (this->InstanceRandomIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceRandomIDs).ArrayNum = 0;
  (this->InstanceRandomIDs).ArrayMax = 0;
  (this->InstanceLightShadowUVBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceLightShadowUVBias).ArrayNum = 0;
  (this->InstanceLightShadowUVBias).ArrayMax = 0;
  (this->InstanceSkinningData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceSkinningData).ArrayNum = 0;
  (this->InstanceSkinningData).ArrayMax = 0;
  (this->InstanceHierarchyOffset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceHierarchyOffset).ArrayNum = 0;
  (this->InstanceHierarchyOffset).ArrayMax = 0;
  (this->InstancePayloadExtension).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancePayloadExtension).ArrayNum = 0;
  (this->InstancePayloadExtension).ArrayMax = 0;
  (this->InstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceToPrimitiveRelative).ArrayNum = 0;
  (this->InstanceToPrimitiveRelative).ArrayMax = 0;
  (this->PrevInstanceToPrimitiveRelative).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevInstanceToPrimitiveRelative).ArrayNum = 0;
  (this->PrevInstanceToPrimitiveRelative).ArrayMax = 0;
  (this->VisibleInstances).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->VisibleInstances).NumBits = 0;
  *(undefined8 *)&(this->VisibleInstances).MaxBits = 0x80;
  this->bInstanceDataIsGPUOnly = false;
  this->field_0x102 = this->field_0x102 | param_1;
  this->NumCustomDataFloats = 0;
  (this->Flags).Packed = 0;
  (this->CurrentWriterTag).Value = (atomic<unsigned_int>)0x0;
  (this->Immutable).Object = (FInstanceSceneDataImmutable *)0x0;
  (this->Immutable).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// CalcPayloadDataStride @ 147ce3a30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl
FInstanceSceneDataBuffers::CalcPayloadDataStride(FInstanceDataFlags param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x166,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bSupportsSceneDataCompressedTransforms == 0
     ) {
    uVar3 = -(uint)((param_1.Packed & 4) != 0) & 3;
  }
  else {
    uVar3 = (param_1.Packed >> 2 & 1) * 2;
  }
  if ((param_1.Packed & 0x20) == 0) {
    if (((param_1.Packed & 0x40) != 0) || ((param_1.Packed & 8) != 0)) {
      uVar3 = uVar3 + 1;
    }
  }
  else {
    uVar3 = uVar3 + 2;
  }
  uVar4 = uVar3 + (param_1.Packed >> 9 & 1) + (param_1.Packed >> 4 & 1);
  uVar3 = uVar4 + param_3;
  if ((param_1.Packed & 0x80) == 0) {
    uVar3 = uVar4;
  }
  if ((param_1.Packed & 2) != 0) {
    uVar3 = (param_2 + 3U >> 2) + uVar3;
  }
  return uVar3;
}

// ComputeInstanceToPrimitiveRelative @ 147ce5970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRenderTransform * __thiscall
FInstanceSceneDataBuffers::ComputeInstanceToPrimitiveRelative
          (FInstanceSceneDataBuffers *this,FRenderTransform *__return_storage_ptr__,
          TMatrix<float> *param_1,FAccessTag param_2)

{
  code *pcVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  FRenderTransform *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_168 [32];
  undefined1 local_148 [12];
  undefined4 uStack_13c;
  undefined8 uStack_138;
  float local_130;
  TMatrix<float> local_118;
  TMatrix<float> local_d8;
  TMatrix<float> local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (((param_2.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_2.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_2.WriterTag)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRenderTransform *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_148 = *(undefined1 (*) [12])param_1->M[0];
  local_98.M[3][0] = param_1->M[3][0];
  auVar2 = *(undefined1 (*) [12])param_1->M[1];
  local_130 = param_1->M[2][0];
  local_98.M[3][2] = param_1->M[3][2];
  auVar7._12_4_ = param_1->M[1][0];
  auVar7._0_12_ = local_148;
  local_98.M[0] = (float  [4])insertps(auVar7,auVar7,8);
  auVar5._12_4_ = local_130;
  auVar5._0_12_ = auVar2;
  uStack_13c = auVar2._0_4_;
  uStack_138 = auVar2._4_8_;
  local_98.M[1] = (float  [4])insertps(auVar5,auVar5,8);
  local_98.M[3][1] = param_1->M[3][1];
  auVar5 = *(undefined1 (*) [16])(this->PrimitiveToRelativeWorld).TransformRows;
  auVar7 = *(undefined1 (*) [16])((this->PrimitiveToRelativeWorld).TransformRows + 2);
  local_98.M[3][3] = __real_3f800000;
  local_d8.M[3][0] = (this->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.X;
  local_d8.M[3][1] = (this->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.Y;
  auVar6._12_4_ = local_98.M[3][0];
  auVar6._0_12_ = *(undefined1 (*) [12])param_1->M[2];
  local_98.M[2] = (float  [4])insertps(auVar6,auVar6,8);
  local_d8.M[2] = (float  [4])insertps(auVar7,auVar7,8);
  auVar7 = *(undefined1 (*) [16])((this->PrimitiveToRelativeWorld).TransformRows + 1);
  local_d8.M[3][2] = (this->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.Z;
  local_d8.M[1] = (float  [4])insertps(auVar7,auVar7,8);
  local_d8.M[0] = (float  [4])insertps(auVar5,auVar5,8);
  local_d8.M[3][3] = __real_3f800000;
  VectorMatrixMultiply(&local_118,&local_98,&local_d8);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.X = local_118.M[0][0];
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Y = local_118.M[0][1];
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z = local_118.M[0][2];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X = local_118.M[1][0];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = local_118.M[1][1];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = local_118.M[1][2];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X = local_118.M[2][0];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = local_118.M[2][1];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = local_118.M[2][2];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_118.M[3][0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_118.M[3][1];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_118.M[3][2];
  FRenderTransform::Orthogonalize(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetHeader @ 147d05b50

FInstanceDataBufferHeader * __thiscall
FInstanceSceneDataBuffers::GetHeader
          (FInstanceSceneDataBuffers *this,FInstanceDataBufferHeader *__return_storage_ptr__,
          FAccessTag param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FInstanceDataBufferHeader *pFVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  if (((param_1.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_1.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_1.WriterTag)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInstanceDataBufferHeader *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInstanceDataBufferHeader *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar7 = 0xf8;
  lVar5 = 0xf8;
  if (!this->bInstanceDataIsGPUOnly) {
    lVar5 = 0xc0;
  }
  __return_storage_ptr__->NumInstances =
       *(int *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + lVar5);
  if ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInstanceDataBufferHeader *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar6 = 0;
  if ((*(byte *)&this->Flags & 0x80) != 0) {
    if ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FInstanceDataBufferHeader *)(*pcVar2)();
        return pFVar4;
      }
    }
    if (!this->bInstanceDataIsGPUOnly) {
      lVar7 = 0xc0;
    }
    uVar1 = *(uint *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 +
                     lVar7);
    if (uVar1 != 0) {
      uVar6 = (uint)(this->InstancePayloadExtension).ArrayNum / uVar1;
    }
  }
  uVar6 = CalcPayloadDataStride(this->Flags,this->NumCustomDataFloats,uVar6);
  __return_storage_ptr__->PayloadDataStride = uVar6;
  __return_storage_ptr__->Flags = this->Flags;
  __return_storage_ptr__->field_0xa = this->bInstanceDataIsGPUOnly;
  return __return_storage_ptr__;
}

// GetInstanceLocalBounds @ 147d06480

FRenderBounds * __thiscall
FInstanceSceneDataBuffers::GetInstanceLocalBounds
          (FInstanceSceneDataBuffers *this,FRenderBounds *__return_storage_ptr__,int param_1,
          FAccessTag param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FRenderBounds *pFVar9;
  uint uVar10;
  
  if (((param_2.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_2.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_2.WriterTag)))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRenderBounds *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar3 = (this->InstanceLocalBounds).ArrayNum;
  uVar10 = iVar3 - 1;
  if (param_1 < (int)uVar10) {
    uVar10 = param_1;
  }
  uVar8 = 0;
  if ((int)uVar10 < iVar3) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRenderBounds *)(*pcVar5)();
      return pFVar9;
    }
  }
  pFVar4 = (this->InstanceLocalBounds).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(int)uVar10 * 0x18;
  uVar6 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 * 0x18 + 0x10);
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = *(undefined8 *)pFVar1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar6;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar2;
  return __return_storage_ptr__;
}

// GetInstancePrimitiveRelativeBounds @ 147d06790

FRenderBounds * __thiscall
FInstanceSceneDataBuffers::GetInstancePrimitiveRelativeBounds
          (FInstanceSceneDataBuffers *this,FRenderBounds *__return_storage_ptr__,int param_1,
          FAccessTag param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRenderBounds *pFVar6;
  uint uVar7;
  uint uVar8;
  TVector<float>_u_0 local_28 [2];
  
  if (((param_2.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_2.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_2.WriterTag)))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRenderBounds *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRenderBounds *)(*pcVar4)();
      return pFVar6;
    }
  }
  iVar2 = (this->InstanceLocalBounds).ArrayNum;
  uVar8 = iVar2 - 1;
  if (param_1 < (int)uVar8) {
    uVar8 = param_1;
  }
  uVar7 = 0;
  if ((int)uVar8 < iVar2) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRenderBounds *)(*pcVar4)();
      return pFVar6;
    }
  }
  pFVar3 = (this->InstanceLocalBounds).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar8 * 0x18;
  local_28[0]._0_8_ = *(undefined8 *)pFVar1;
  local_28._8_8_ = *(undefined8 *)(pFVar1 + 8);
  local_28[1]._4_8_ = *(undefined8 *)(pFVar3 + (longlong)(int)uVar8 * 0x18 + 0x10);
  uVar8 = 0;
  if (param_1 < (this->InstanceToPrimitiveRelative).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRenderBounds *)(*pcVar4)();
      return pFVar6;
    }
  }
  FRenderBounds::TransformBy
            ((FRenderBounds *)&local_28[0]._s_0,__return_storage_ptr__,
             (FRenderTransform *)
             ((this->InstanceToPrimitiveRelative).AllocatorInstance.Data + (longlong)param_1 * 0x30)
            );
  return __return_storage_ptr__;
}

// GetInstanceToWorld @ 147d06930

TMatrix<double> * __thiscall
FInstanceSceneDataBuffers::GetInstanceToWorld
          (FInstanceSceneDataBuffers *this,TMatrix<double> *__return_storage_ptr__,int param_1,
          FAccessTag param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  uint uVar8;
  TMatrix<double> *pTVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  
  lVar10 = (longlong)param_1;
  if (((param_2.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_2.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_2.WriterTag)))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TMatrix<double> *)(*pcVar3)();
      return pTVar9;
    }
  }
  uVar8 = 0;
  if (param_1 < (this->InstanceToPrimitiveRelative).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TMatrix<double> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pFVar2 = (this->InstanceToPrimitiveRelative).AllocatorInstance.Data;
  fVar1 = *(float *)(pFVar2 + lVar10 * 0x30 + 0x2c);
  auVar17 = insertps(*(undefined1 (*) [16])(pFVar2 + lVar10 * 0x30),
                     *(undefined1 (*) [16])(pFVar2 + lVar10 * 0x30),8);
  auVar18 = insertps(*(undefined1 (*) [16])(pFVar2 + lVar10 * 0x30 + 0xc),
                     *(undefined1 (*) [16])(pFVar2 + lVar10 * 0x30 + 0xc),8);
  uVar11 = SUB84((double)auVar17._4_4_,0);
  uVar12 = (undefined4)((ulonglong)(double)auVar17._4_4_ >> 0x20);
  local_c8._8_4_ = uVar11;
  local_c8._0_8_ = (double)auVar17._0_4_;
  local_c8._12_4_ = uVar12;
  uVar15 = SUB84((double)auVar18._4_4_,0);
  uVar16 = (undefined4)((ulonglong)(double)auVar18._4_4_ >> 0x20);
  local_a8._8_4_ = uVar15;
  local_a8._0_8_ = (double)auVar18._0_4_;
  local_a8._12_4_ = uVar16;
  auVar20 = insertps(*(undefined1 (*) [16])(pFVar2 + lVar10 * 0x30 + 0x18),
                     *(undefined1 (*) [16])(pFVar2 + lVar10 * 0x30 + 0x18),8);
  uVar13 = SUB84((double)auVar17._12_4_,0);
  uVar14 = (undefined4)((ulonglong)(double)auVar17._12_4_ >> 0x20);
  local_98 = (double)auVar18._8_4_;
  dStack_90 = (double)auVar18._12_4_;
  local_b8._8_4_ = uVar13;
  local_b8._0_8_ = (double)auVar17._8_4_;
  local_b8._12_4_ = uVar14;
  local_88 = (double)auVar20._0_4_;
  dStack_80 = (double)auVar20._4_4_;
  uVar22 = SUB84((double)auVar20._12_4_,0);
  uVar23 = (undefined4)((ulonglong)(double)auVar20._12_4_ >> 0x20);
  dVar19 = (double)(float)*(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x24);
  dVar21 = (double)(float)((ulonglong)*(undefined8 *)(pFVar2 + lVar10 * 0x30 + 0x24) >> 0x20);
  local_78._8_4_ = uVar22;
  local_78._0_8_ = (double)auVar20._8_4_;
  local_78._12_4_ = uVar23;
  dVar6 = (double)__real_3f800000;
  local_58._8_4_ = SUB84(dVar6,0);
  local_58._0_8_ = (double)fVar1;
  local_58._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  if (((TMatrix<double> *)(local_78 + 8) < __return_storage_ptr__) ||
     (__return_storage_ptr__->M[2] + 3 < local_c8)) {
    auVar4._8_4_ = uVar11;
    auVar4._0_8_ = (double)auVar17._0_4_;
    auVar4._12_4_ = uVar12;
    *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar4;
    auVar5._8_4_ = uVar13;
    auVar5._0_8_ = (double)auVar17._8_4_;
    auVar5._12_4_ = uVar14;
    *(undefined1 (*) [16])(__return_storage_ptr__->M[0] + 2) = auVar5;
    auVar17._8_4_ = uVar15;
    auVar17._0_8_ = (double)auVar18._0_4_;
    auVar17._12_4_ = uVar16;
    *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar17;
    __return_storage_ptr__->M[1][2] = local_98;
    __return_storage_ptr__->M[1][3] = dStack_90;
    __return_storage_ptr__->M[2][0] = local_88;
    __return_storage_ptr__->M[2][1] = dStack_80;
    auVar18._8_4_ = uVar22;
    auVar18._0_8_ = (double)auVar20._8_4_;
    auVar18._12_4_ = uVar23;
    *(undefined1 (*) [16])(__return_storage_ptr__->M[2] + 2) = auVar18;
  }
  else {
    local_68 = dVar19;
    dStack_60 = dVar21;
    memcpy(__return_storage_ptr__,local_c8,0x60);
  }
  __return_storage_ptr__->M[3][0] = dVar19 + (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
  __return_storage_ptr__->M[3][1] = dVar21 + (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y;
  dVar19 = (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z;
  __return_storage_ptr__->M[3][3] = dVar6;
  __return_storage_ptr__->M[3][2] = (double)fVar1 + dVar19;
  return __return_storage_ptr__;
}

// GetInstanceWorldBounds @ 147d070a0

TBoxSphereBounds<double,double> * __thiscall
FInstanceSceneDataBuffers::GetInstanceWorldBounds
          (FInstanceSceneDataBuffers *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          int param_1,FAccessTag param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  TVector<float>_u_0 local_60;
  float local_54;
  float local_50;
  float local_4c;
  
  if (((param_2.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_2.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_2.WriterTag)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  GetInstancePrimitiveRelativeBounds(this,(FRenderBounds *)&local_60._s_0,param_1,(FAccessTag)0x0);
  dVar3 = (double)local_4c - (double)local_60._s_0.Z;
  dVar10 = ((double)local_54 - (double)local_60._s_0.X) * __real_3fe0000000000000;
  dVar8 = dVar3 * __real_3fe0000000000000;
  dVar2 = (double)local_50 - (double)local_60._s_0.Y;
  dVar9 = dVar2 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar10 + (double)local_60._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar9 + (double)local_60._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar8 + (double)local_60._s_0.Z;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar10;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar9;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar8;
  dVar8 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  dVar9 = (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
  auVar6._0_8_ = dVar8 * dVar8;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (dVar3 * dVar3 + dVar2 * dVar2) * __real_3fd0000000000000 + auVar6._0_8_;
  auVar7 = sqrtpd(auVar6,auVar7);
  __return_storage_ptr__->SphereRadius = auVar7._0_8_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       dVar9 + (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
       (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y +
       (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z +
       (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPayloadDataStride @ 147d0ba00

uint __thiscall
FInstanceSceneDataBuffers::GetPayloadDataStride(FInstanceSceneDataBuffers *this,FAccessTag param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  if (((param_1.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_1.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_1.WriterTag)))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = 0;
  if ((*(byte *)&this->Flags & 0x80) != 0) {
    if ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    lVar5 = 0xf8;
    if (!this->bInstanceDataIsGPUOnly) {
      lVar5 = 0xc0;
    }
    uVar1 = *(uint *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 +
                     lVar5);
    if (uVar1 != 0) {
      uVar4 = (uint)(this->InstancePayloadExtension).ArrayNum / uVar1;
    }
  }
  uVar4 = CalcPayloadDataStride(this->Flags,this->NumCustomDataFloats,uVar4);
  return uVar4;
}

// SetImmutable @ 147d29cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FInstanceSceneDataBuffers::SetImmutable
          (FInstanceSceneDataBuffers *this,FInstanceSceneDataImmutable *param_1,FAccessTag param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  if (((param_2.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_2.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_2.WriterTag)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Flags).Packed =
       -(ushort)((param_1->CompressedInstanceSpatialHashes).ArrayNum != 0) & 0x400 |
       (this->Flags).Packed & 0xfbff;
  FStack_10.ReferenceController = ::operator_new(0x20);
  pTVar3 = (TReferenceControllerBase<1> *)0x0;
  if (FStack_10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_18 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = FStack_10.ReferenceController + 1;
    (FStack_10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    FStack_10.ReferenceController[1]._padding_ = 0;
    (FStack_10.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInstanceSceneDataImmutable___00_SharedPointerInternals__6B_
    ;
    FStack_10.ReferenceController[1]._padding_ =
         (longlong)(param_1->CompressedInstanceSpatialHashes).AllocatorInstance.Data;
    (param_1->CompressedInstanceSpatialHashes).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    FStack_10.ReferenceController[1].SharedReferenceCount =
         (atomic<int>)(param_1->CompressedInstanceSpatialHashes).ArrayNum;
    FStack_10.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(param_1->CompressedInstanceSpatialHashes).ArrayMax;
    (param_1->CompressedInstanceSpatialHashes).ArrayNum = 0;
    (param_1->CompressedInstanceSpatialHashes).ArrayMax = 0;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    (FStack_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar3 = FStack_10.ReferenceController;
    local_18 = pTVar4;
  }
  if (&this->Immutable != (TSharedPtr<FInstanceSceneDataImmutable,1> *)&local_18) {
    (this->Immutable).Object = (FInstanceSceneDataImmutable *)pTVar4;
    local_18 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Immutable).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetPrimitiveLocalToWorld @ 147d2b390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstanceSceneDataBuffers::SetPrimitiveLocalToWorld
          (FInstanceSceneDataBuffers *this,TMatrix<double> *param_1,FAccessTag param_2)

{
  code *pcVar1;
  bool bVar2;
  FDFMatrix *pFVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  TVector<float>_u_0 local_78;
  FDFMatrix local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((param_2.Kind != Reader) || ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0)) &&
     ((param_2.Kind != Writer ||
      ((this->CurrentWriterTag).Value != (atomic<unsigned_int>)param_2.WriterTag)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                       ,0x182,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar5 = (float)param_1->M[3][0];
  fVar4 = (float)param_1->M[3][1];
  local_78._s_0.Z = (float)param_1->M[3][2];
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X = (double)fVar5;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y = (double)fVar4;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z = (double)local_78._s_0.Z;
  local_78._0_8_ = CONCAT44(fVar4,fVar5);
  pFVar3 = FDFMatrix::MakeToRelativeWorldMatrix(&local_68,(TVector<float> *)&local_78._s_0,param_1);
  fVar4 = (pFVar3->M).M[0][1];
  fVar5 = (pFVar3->M).M[0][2];
  (this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0._s_0.X = (pFVar3->M).M[0][0];
  (this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0._s_0.Y = fVar4;
  (this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0._s_0.Z = fVar5;
  fVar4 = (pFVar3->M).M[1][1];
  fVar5 = (pFVar3->M).M[1][2];
  (this->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0._s_0.X = (pFVar3->M).M[1][0];
  (this->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0._s_0.Y = fVar4;
  (this->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0._s_0.Z = fVar5;
  fVar4 = (pFVar3->M).M[2][1];
  fVar5 = (pFVar3->M).M[2][2];
  (this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0._s_0.X = (pFVar3->M).M[2][0];
  (this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0._s_0.Y = fVar4;
  (this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0._s_0.Z = fVar5;
  fVar4 = (pFVar3->M).M[3][1];
  fVar5 = (pFVar3->M).M[3][2];
  (this->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.X = (pFVar3->M).M[3][0];
  (this->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.Y = fVar4;
  (this->PrimitiveToRelativeWorld).Origin.field0_0x0._s_0.Z = fVar5;
  return;
}

// ValidateData @ 147d39570

void __thiscall FInstanceSceneDataBuffers::ValidateData(FInstanceSceneDataBuffers *this)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = this->NumCustomDataFloats;
  if (((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar7 = 0xf8;
  lVar4 = 0xf8;
  if (!this->bInstanceDataIsGPUOnly) {
    lVar4 = 0xc0;
  }
  if (((*(byte *)&this->Flags >> 1 & 1) == 0) || (this->bInstanceDataIsGPUOnly)) {
    if ((this->InstanceCustomData).ArrayNum != 0) {
      iVar6 = 0xf1;
      pcVar5 = "bDataShouldBePresent || Array.IsEmpty()";
      goto LAB_147d39626;
    }
  }
  else if ((this->InstanceCustomData).ArrayNum !=
           *(int *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + lVar4)
           * iVar6) {
    iVar6 = 0xf2;
    pcVar5 = "!bDataShouldBePresent || Array.Num() == NumInstances * ElementStride";
LAB_147d39626:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      (pcVar5,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceDataSceneProxy.cpp"
                       ,iVar6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = 0xf8;
  if (!this->bInstanceDataIsGPUOnly) {
    lVar4 = 0xc0;
  }
  if (((*(byte *)&this->Flags & 1) == 0) || (this->bInstanceDataIsGPUOnly)) {
    if ((this->InstanceRandomIDs).ArrayNum != 0) {
      iVar6 = 0xf1;
      pcVar5 = "bDataShouldBePresent || Array.IsEmpty()";
      goto LAB_147d396c1;
    }
  }
  else if ((this->InstanceRandomIDs).ArrayNum !=
           *(int *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + lVar4)
          ) {
    iVar6 = 0xf2;
    pcVar5 = "!bDataShouldBePresent || Array.Num() == NumInstances * ElementStride";
LAB_147d396c1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      (pcVar5,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceDataSceneProxy.cpp"
                       ,iVar6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = 0xf8;
  if (!this->bInstanceDataIsGPUOnly) {
    lVar4 = 0xc0;
  }
  if (((*(byte *)&this->Flags >> 4 & 1) == 0) || (this->bInstanceDataIsGPUOnly)) {
    if ((this->InstanceLightShadowUVBias).ArrayNum != 0) {
      iVar6 = 0xf1;
      pcVar5 = "bDataShouldBePresent || Array.IsEmpty()";
      goto LAB_147d39767;
    }
  }
  else if ((this->InstanceLightShadowUVBias).ArrayNum !=
           *(int *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + lVar4)
          ) {
    iVar6 = 0xf2;
    pcVar5 = "!bDataShouldBePresent || Array.Num() == NumInstances * ElementStride";
LAB_147d39767:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      (pcVar5,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceDataSceneProxy.cpp"
                       ,iVar6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = 0xf8;
  if (!this->bInstanceDataIsGPUOnly) {
    lVar4 = 0xc0;
  }
  if (((*(byte *)&this->Flags >> 6 & 1) == 0) || (this->bInstanceDataIsGPUOnly)) {
    if ((this->InstanceHierarchyOffset).ArrayNum != 0) {
      iVar6 = 0xf1;
      pcVar5 = "bDataShouldBePresent || Array.IsEmpty()";
      goto LAB_147d3980d;
    }
  }
  else if ((this->InstanceHierarchyOffset).ArrayNum !=
           *(int *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + lVar4)
          ) {
    iVar6 = 0xf2;
    pcVar5 = "!bDataShouldBePresent || Array.Num() == NumInstances * ElementStride";
LAB_147d3980d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      (pcVar5,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceDataSceneProxy.cpp"
                       ,iVar6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = 0xf8;
  if (!this->bInstanceDataIsGPUOnly) {
    lVar4 = 0xc0;
  }
  if (((*(byte *)&this->Flags >> 2 & 1) == 0) || (this->bInstanceDataIsGPUOnly)) {
    if ((this->PrevInstanceToPrimitiveRelative).ArrayNum == 0) goto LAB_147d398cc;
    iVar6 = 0xf1;
    pcVar5 = "bDataShouldBePresent || Array.IsEmpty()";
  }
  else {
    if ((this->PrevInstanceToPrimitiveRelative).ArrayNum ==
        *(int *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + lVar4))
    goto LAB_147d398cc;
    iVar6 = 0xf2;
    pcVar5 = "!bDataShouldBePresent || Array.Num() == NumInstances * ElementStride";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceDataSceneProxy.cpp"
                     ,iVar6,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_147d398cc:
  if (((this->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                         ,0x182,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (!this->bInstanceDataIsGPUOnly) {
    lVar7 = 0xc0;
  }
  if (((*(byte *)&this->Flags >> 3 & 1) == 0) || (this->bInstanceDataIsGPUOnly)) {
    if ((this->InstanceSkinningData).ArrayNum == 0) {
      return;
    }
    iVar6 = 0xf1;
    pcVar5 = "bDataShouldBePresent || Array.IsEmpty()";
  }
  else {
    if ((this->InstanceSkinningData).ArrayNum ==
        *(int *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + lVar7)) {
      return;
    }
    iVar6 = 0xf2;
    pcVar5 = "!bDataShouldBePresent || Array.Num() == NumInstances * ElementStride";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstanceDataSceneProxy.cpp"
                     ,iVar6,L"");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

