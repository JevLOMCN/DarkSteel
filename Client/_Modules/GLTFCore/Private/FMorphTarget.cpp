// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 14

// FMorphTarget @ 14e62b2e0

FMorphTarget * __thiscall
GLTF::FMorphTarget::FMorphTarget
          (FMorphTarget *this,
          TArray<TTuple<GLTF::EMeshAttributeType,GLTF::FAccessor_&>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FAttributeAccessors::FAttributeAccessors((FAttributeAccessors *)this,param_1,true);
  return this;
}

// GetColorDeltas @ 14e63abc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FMorphTarget::GetColorDeltas
          (FMorphTarget *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  FAccessor *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector<double>_u_0 local_68 [3];
  
  if ((*(int *)&this->field_0x8 < 0xc) || (*(char *)(*(longlong *)this + 0xb0) != '\v')) {
    this_00 = &EmptyAccessor;
  }
  else {
    this_00 = *(FAccessor **)(*(longlong *)this + 0xb8);
  }
  if (this_00->Type != Vec4) {
    if (this_00->Type == Vec3) {
      uVar2 = this_00->Count;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      piVar1 = &param_1->ArrayMax;
      if (*piVar1 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
      }
      uVar6 = 0;
      if (0 < (int)uVar2) {
        do {
          FAccessor::GetVec3(this_00,(TVector<double> *)&local_68[0]._s_0,uVar6);
          iVar4 = param_1->ArrayNum;
          fVar7 = (float)(double)local_68[0]._0_8_;
          fVar8 = (float)(double)local_68[0]._8_8_;
          fVar9 = (float)(double)local_68[0]._16_8_;
          if (iVar4 == *piVar1) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1010,&param_1->AllocatorInstance,piVar1);
            param_1->ArrayNum = iVar4;
          }
          uVar6 = uVar6 + 1;
          param_1->ArrayNum = iVar4 + 1;
          lVar5 = (longlong)iVar4;
          pFVar3 = (param_1->AllocatorInstance).Data;
          *(float *)(pFVar3 + lVar5 * 0x10) = fVar7;
          *(float *)(pFVar3 + lVar5 * 0x10 + 4) = fVar8;
          *(float *)(pFVar3 + lVar5 * 0x10 + 8) = fVar9;
          *(undefined4 *)(pFVar3 + lVar5 * 0x10 + 0xc) = 0;
        } while ((int)uVar6 < (int)uVar2);
      }
    }
    return;
  }
  if (((this_00->BufferView).Buffer.Data != (uchar *)0x0) || ((this_00->Sparse).bHasSparse != false)
     ) {
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,this_00->Count,No);
  }
  FAccessor::GetVec4Array(this_00,(TVector4<float> *)(param_1->AllocatorInstance).Data);
  return;
}

// GetHash @ 14e63c110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMD5Hash * __thiscall
GLTF::FMorphTarget::GetHash(FMorphTarget *this,FMD5Hash *__return_storage_ptr__)

{
  undefined1 auStack_98 [32];
  FMD5 local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FMD5::FMD5(&local_78);
  FAttributeAccessors::HashAttributes((FAttributeAccessors *)this,&local_78);
  __return_storage_ptr__->bIsValid = false;
  FMD5::Final(&local_78,__return_storage_ptr__->Bytes);
  __return_storage_ptr__->bIsValid = true;
  FMD5::~FMD5(&local_78);
  return __return_storage_ptr__;
}

// GetNormalDisplacements @ 14e63d550

void __thiscall
GLTF::FMorphTarget::GetNormalDisplacements
          (FMorphTarget *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  if ((1 < *(int *)&this->field_0x8) && (*(char *)(*(longlong *)this + 0x10) == '\x01')) {
    FAccessor::GetCoordArray(*(FAccessor **)(*(longlong *)this + 0x18),param_1);
    return;
  }
  FAccessor::GetCoordArray(&EmptyAccessor,param_1);
  return;
}

// GetNumberOfColorDeltas @ 14e63d5b0

int __thiscall GLTF::FMorphTarget::GetNumberOfColorDeltas(FMorphTarget *this)

{
  if ((0xb < *(int *)&this->field_0x8) && (*(char *)(*(longlong *)this + 0xb0) == '\v')) {
    return *(int *)(*(longlong *)(*(longlong *)this + 0xb8) + 4);
  }
  return EmptyAccessor.Count;
}

// GetNumberOfNormalDisplacements @ 14e63d5e0

int __thiscall GLTF::FMorphTarget::GetNumberOfNormalDisplacements(FMorphTarget *this)

{
  if ((1 < *(int *)&this->field_0x8) && (*(char *)(*(longlong *)this + 0x10) == '\x01')) {
    return *(int *)(*(longlong *)(*(longlong *)this + 0x18) + 4);
  }
  return EmptyAccessor.Count;
}

// GetNumberOfPositionDisplacements @ 14e63d610

int __thiscall GLTF::FMorphTarget::GetNumberOfPositionDisplacements(FMorphTarget *this)

{
  if ((0 < *(int *)&this->field_0x8) && (**(char **)this == '\0')) {
    return *(int *)(*(longlong *)(*(char **)this + 8) + 4);
  }
  return EmptyAccessor.Count;
}

// GetNumberOfTangentDisplacements @ 14e63d640

int __thiscall GLTF::FMorphTarget::GetNumberOfTangentDisplacements(FMorphTarget *this)

{
  if ((2 < *(int *)&this->field_0x8) && (*(char *)(*(longlong *)this + 0x20) == '\x02')) {
    return *(int *)(*(longlong *)(*(longlong *)this + 0x28) + 4);
  }
  return EmptyAccessor.Count;
}

// GetNumberOfTexCoordDisplacements @ 14e63d670

int __thiscall GLTF::FMorphTarget::GetNumberOfTexCoordDisplacements(FMorphTarget *this,uint param_1)

{
  byte bVar1;
  
  if (7 < param_1) {
    return 0;
  }
  bVar1 = (char)param_1 + 3;
  if (((int)(uint)bVar1 < *(int *)&this->field_0x8) &&
     (*(byte *)(*(longlong *)this + (ulonglong)bVar1 * 0x10) == bVar1)) {
    return *(int *)(*(longlong *)(*(longlong *)this + 8 + (ulonglong)bVar1 * 0x10) + 4);
  }
  return EmptyAccessor.Count;
}

// GetPositionDisplacements @ 14e63d6b0

void __thiscall
GLTF::FMorphTarget::GetPositionDisplacements
          (FMorphTarget *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  if ((0 < *(int *)&this->field_0x8) && (**(char **)this == '\0')) {
    FAccessor::GetCoordArray(*(FAccessor **)(*(char **)this + 8),param_1);
    return;
  }
  FAccessor::GetCoordArray(&EmptyAccessor,param_1);
  return;
}

// GetTangentDisplacements @ 14e63e2f0

void __thiscall
GLTF::FMorphTarget::GetTangentDisplacements
          (FMorphTarget *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  FAccessor *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  TVector<double>_u_0 local_68 [3];
  
  if ((*(int *)&this->field_0x8 < 3) || (*(char *)(*(longlong *)this + 0x20) != '\x02')) {
    this_00 = &EmptyAccessor;
  }
  else {
    this_00 = *(FAccessor **)(*(longlong *)this + 0x28);
  }
  uVar2 = this_00->Count;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar6 = 0;
  if (0 < (int)uVar2) {
    do {
      FAccessor::GetVec3(this_00,(TVector<double> *)&local_68[0]._s_0,uVar6);
      iVar4 = param_1->ArrayNum;
      fVar7 = (float)(double)local_68[0]._0_8_;
      fVar8 = (float)(double)local_68[0]._16_8_;
      fVar9 = (float)(double)local_68[0]._8_8_;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1010,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar4;
      }
      uVar6 = uVar6 + 1;
      param_1->ArrayNum = iVar4 + 1;
      lVar5 = (longlong)iVar4;
      pFVar3 = (param_1->AllocatorInstance).Data;
      *(float *)(pFVar3 + lVar5 * 0x10) = fVar7;
      *(float *)(pFVar3 + lVar5 * 0x10 + 4) = fVar8;
      *(float *)(pFVar3 + lVar5 * 0x10 + 8) = fVar9;
      *(undefined4 *)(pFVar3 + lVar5 * 0x10 + 0xc) = 0;
    } while ((int)uVar6 < (int)uVar2);
  }
  return;
}

// GetTexCoordDisplacements @ 14e63e600

void __thiscall
GLTF::FMorphTarget::GetTexCoordDisplacements
          (FMorphTarget *this,uint param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  byte bVar1;
  
  if (7 < param_1) {
    return;
  }
  bVar1 = (char)param_1 + 3;
  if (((int)(uint)bVar1 < *(int *)&this->field_0x8) &&
     (*(byte *)(*(longlong *)this + (ulonglong)bVar1 * 0x10) == bVar1)) {
    FAccessor::GetVec2Array
              (*(FAccessor **)(*(longlong *)this + 8 + (ulonglong)bVar1 * 0x10),param_2);
    return;
  }
  FAccessor::GetVec2Array(&EmptyAccessor,param_2);
  return;
}

// HasTexCoordDisplacements @ 14e642380

bool __thiscall GLTF::FMorphTarget::HasTexCoordDisplacements(FMorphTarget *this,uint param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_1 < 8) {
    bVar2 = (char)param_1 + 3;
    if ((((int)(uint)bVar2 < *(int *)&this->field_0x8) &&
        (*(byte *)(*(longlong *)this + (ulonglong)bVar2 * 0x10) == bVar2)) &&
       ((lVar1 = *(longlong *)(*(longlong *)this + 8 + (ulonglong)bVar2 * 0x10),
        *(longlong *)(lVar1 + 0x98) != 0 || (*(char *)(lVar1 + 0x18) != '\0')))) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14e646990

bool __thiscall GLTF::FMorphTarget::IsValid(FMorphTarget *this,uint param_1)

{
  bool bVar1;
  bool local_res18 [16];
  
  local_res18[0] = false;
  bVar1 = FAttributeAccessors::AreAttributeAccessorsValid
                    ((FAttributeAccessors *)this,local_res18,param_1);
  if (!bVar1) {
    local_res18[0] = false;
  }
  return local_res18[0];
}

