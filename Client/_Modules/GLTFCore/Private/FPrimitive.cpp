// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 17

// FPrimitive @ 14e62b840

FPrimitive * __thiscall
GLTF::FPrimitive::FPrimitive
          (FPrimitive *this,EMode param_1,int param_2,FAccessor *param_3,
          TArray<TTuple<GLTF::EMeshAttributeType,GLTF::FAccessor_&>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  FAttributeAccessors::FAttributeAccessors((FAttributeAccessors *)this,param_4,false);
  this->Mode = param_1;
  (this->VariantMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariantMappings).ArrayNum = 0;
  (this->VariantMappings).ArrayMax = 0;
  *(undefined8 *)&this->Extras = 0;
  *(undefined8 *)&(this->Extras).field_0x8 = 0;
  *(undefined8 *)&(this->Extras).field_0x20 = 0;
  this->MaterialIndex = param_2;
  *(undefined4 *)&(this->Extras).field_0x28 = 0;
  *(undefined4 *)&(this->Extras).field_0x2c = 0x80;
  *(undefined4 *)&(this->Extras).field_0x34 = 0;
  *(undefined4 *)&(this->Extras).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Extras).field_0x40 = 0;
  *(undefined4 *)&(this->Extras).field_0x48 = 0;
  (this->MorphTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargets).ArrayNum = 0;
  (this->MorphTargets).ArrayMax = 0;
  (this->bIsValidCache).bIsSet = false;
  this->Indices = param_3;
  return this;
}

// GenerateIsValidCache @ 14e6377e0

void __thiscall GLTF::FPrimitive::GenerateIsValidCache(FPrimitive *this)

{
  bool bVar1;
  undefined1 local_18 [16];
  
  bVar1 = IsValidPrivate(this);
  if ((TOptional<bool> *)local_18 != &this->bIsValidCache) {
    (this->bIsValidCache).TypedValue = bVar1;
    (this->bIsValidCache).bIsSet = true;
  }
  return;
}

// GetColors @ 14e63ad70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GLTF::FPrimitive::GetColors
          (FPrimitive *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

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
  TVector<double>_u_0 local_58 [3];
  
  if (((int)this->_padding_ < 0xc) || (*(char *)(this->_padding_ + 0xb0) != '\v')) {
    this_00 = &EmptyAccessor;
  }
  else {
    this_00 = *(FAccessor **)(this->_padding_ + 0xb8);
  }
  if (this_00->Type != Vec4) {
    if (this_00->Type == Vec3) {
      uVar2 = this_00->Count;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      piVar1 = &param_1->ArrayMax;
      if (param_1->ArrayMax < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
      }
      uVar6 = 0;
      if (0 < (int)uVar2) {
        do {
          FAccessor::GetVec3(this_00,(TVector<double> *)&local_58[0]._s_0,uVar6);
          iVar4 = param_1->ArrayNum;
          fVar7 = (float)(double)local_58[0]._0_8_;
          fVar8 = (float)(double)local_58[0]._8_8_;
          fVar9 = (float)(double)local_58[0]._16_8_;
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
          *(undefined4 *)(pFVar3 + lVar5 * 0x10 + 0xc) = 0x3f800000;
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

// GetHash @ 14e63c1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMD5Hash * __thiscall GLTF::FPrimitive::GetHash(FPrimitive *this,FMD5Hash *__return_storage_ptr__)

{
  FAttributeAccessors *pFVar1;
  int iVar2;
  FAccessor *this_00;
  char cVar3;
  FAttributeAccessors *this_01;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_137 [7];
  FMD5Hash local_130;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  uchar local_108;
  FMD5 local_f8;
  FMD5 local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((this->bIsValidCache).bIsSet == false) {
    cVar3 = IsValidPrivate(this);
  }
  else {
    cVar3 = (this->bIsValidCache).TypedValue;
  }
  if (cVar3 == '\0') {
    __return_storage_ptr__->bIsValid = false;
  }
  else {
    FMD5::FMD5(&local_f8);
    local_138 = (undefined1)this->Mode;
    FMD5::Update(&local_f8,&local_138,1);
    FMD5::Update(&local_f8,(uchar *)&this->MaterialIndex,4);
    this_00 = this->Indices;
    if (((this_00->BufferView).Buffer.Data != (uchar *)0x0) ||
       ((this_00->Sparse).bHasSparse != false)) {
      FAccessor::GetHash(this_00,&local_130);
      if (local_130.bIsValid != false) {
        FMD5::Update(&local_f8,local_130.Bytes,0x10);
      }
    }
    FAttributeAccessors::HashAttributes((FAttributeAccessors *)this,&local_f8);
    iVar2 = (this->MorphTargets).ArrayNum;
    this_01 = (FAttributeAccessors *)(this->MorphTargets).AllocatorInstance.Data;
    pFVar1 = this_01 + iVar2;
    while( true ) {
      if ((this->MorphTargets).ArrayNum != iVar2) {
        `TCheckedPointerIterator<GLTF::FMorphTarget_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_137);
      }
      if (this_01 == pFVar1) break;
      FMD5::FMD5(&local_98);
      FAttributeAccessors::HashAttributes(this_01,&local_98);
      local_130.bIsValid = false;
      FMD5::Final(&local_98,local_130.Bytes);
      local_130.bIsValid = true;
      FMD5::~FMD5(&local_98);
      if (local_130.bIsValid != false) {
        FMD5::Update(&local_f8,local_130.Bytes,0x10);
      }
      this_01 = this_01 + 1;
    }
    local_118 = 0;
    FMD5::Final(&local_f8,(uchar *)&uStack_117);
    local_118 = 1;
    __return_storage_ptr__->bIsValid = true;
    __return_storage_ptr__->Bytes[0] = (char)uStack_117;
    __return_storage_ptr__->Bytes[1] = (char)((uint7)uStack_117 >> 8);
    __return_storage_ptr__->Bytes[2] = (char)((uint7)uStack_117 >> 0x10);
    __return_storage_ptr__->Bytes[3] = (char)((uint7)uStack_117 >> 0x18);
    __return_storage_ptr__->Bytes[4] = (char)((uint7)uStack_117 >> 0x20);
    __return_storage_ptr__->Bytes[5] = (char)((uint7)uStack_117 >> 0x28);
    __return_storage_ptr__->Bytes[6] = (char)((uint7)uStack_117 >> 0x30);
    *(undefined8 *)(__return_storage_ptr__->Bytes + 7) = uStack_110;
    __return_storage_ptr__->Bytes[0xf] = local_108;
    FMD5::~FMD5(&local_f8);
  }
  return __return_storage_ptr__;
}

// GetJointInfluences @ 14e63c7d0

void __thiscall
GLTF::FPrimitive::GetJointInfluences
          (FPrimitive *this,TArray<GLTF::FJointInfluence,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  int iVar5;
  TVector4<double> *pTVar6;
  longlong lVar7;
  uint uVar8;
  FAccessor *this_00;
  FAccessor *this_01;
  TVector4<double> local_48;
  
  this_01 = &EmptyAccessor;
  if (((int)this->_padding_ < 0xd) || (*(char *)(this->_padding_ + 0xc0) != '\f')) {
    this_00 = &EmptyAccessor;
  }
  else {
    this_00 = *(FAccessor **)(this->_padding_ + 200);
  }
  if ((0xd < (int)this->_padding_) && (*(char *)(this->_padding_ + 0xd0) == '\r')) {
    this_01 = *(FAccessor **)(this->_padding_ + 0xd8);
  }
  uVar2 = this_00->Count;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar8 = 0;
  if (0 < (int)uVar2) {
    do {
      pTVar6 = FAccessor::GetVec4(this_01,&local_48,uVar8);
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar5;
      }
      param_1->ArrayNum = iVar5 + 1;
      dVar4 = (pTVar6->field0_0x0)._s_0.Y;
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar7 = (longlong)iVar5 * 0x30;
      *(double *)(pFVar3 + lVar7) = (pTVar6->field0_0x0)._s_0.X;
      *(double *)(pFVar3 + lVar7 + 8) = dVar4;
      dVar4 = (pTVar6->field0_0x0)._s_0.W;
      *(double *)(pFVar3 + lVar7 + 0x10) = (pTVar6->field0_0x0)._s_0.Z;
      *(double *)(pFVar3 + lVar7 + 0x10 + 8) = dVar4;
      *(undefined4 *)(pFVar3 + lVar7 + 0x22) = 0;
      *(undefined2 *)(pFVar3 + lVar7 + 0x26) = 0;
      *(undefined2 *)(pFVar3 + lVar7 + 0x20) = 0;
      FAccessor::GetUnsignedInt16x4(this_00,uVar8,(ushort *)(pFVar3 + lVar7 + 0x20));
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar2);
  }
  return;
}

// GetNormals @ 14e63d580

void __thiscall
GLTF::FPrimitive::GetNormals
          (FPrimitive *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  if ((1 < (int)this->_padding_) && (*(char *)(this->_padding_ + 0x10) == '\x01')) {
    FAccessor::GetCoordArray(*(FAccessor **)(this->_padding_ + 0x18),param_1);
    return;
  }
  FAccessor::GetCoordArray(&EmptyAccessor,param_1);
  return;
}

// GetPositions @ 14e63d6f0

void __thiscall
GLTF::FPrimitive::GetPositions
          (FPrimitive *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  if ((0 < (int)this->_padding_) && (*(char *)this->_padding_ == '\0')) {
    FAccessor::GetCoordArray(*(FAccessor **)((char *)this->_padding_ + 8),param_1);
    return;
  }
  FAccessor::GetCoordArray(&EmptyAccessor,param_1);
  return;
}

// GetTangents @ 14e63e450

void __thiscall
GLTF::FPrimitive::GetTangents
          (FPrimitive *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector4<double> *pTVar6;
  FAccessor *this_00;
  uint uVar7;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  TVector4<double> local_28;
  
  if (((int)this->_padding_ < 3) || (*(char *)(this->_padding_ + 0x20) != '\x02')) {
    this_00 = &EmptyAccessor;
  }
  else {
    this_00 = *(FAccessor **)(this->_padding_ + 0x28);
  }
  uVar7 = this_00->Count;
  if (-1 < (int)uVar7) {
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar7,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    uVar7 = 0;
    if (this_00->Count != 0) {
      do {
        pTVar6 = FAccessor::GetVec4(this_00,&local_28,uVar7);
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_38 = (float)(pTVar6->field0_0x0)._s_0.X;
        fStack_34 = (float)(pTVar6->field0_0x0)._s_0.Z;
        fStack_30 = (float)(pTVar6->field0_0x0)._s_0.Y;
        fStack_2c = (float)(pTVar6->field0_0x0)._s_0.W;
        if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar1 * 0x10)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = param_1->ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar5;
        }
        param_1->ArrayNum = iVar5 + 1;
        uVar7 = uVar7 + 1;
        pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(ulonglong *)pFVar2 = CONCAT44(fStack_34,local_38);
        *(ulonglong *)(pFVar2 + 8) = CONCAT44(fStack_2c,fStack_30);
      } while (uVar7 < this_00->Count);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// GetTexCoords @ 14e63e650

void __thiscall
GLTF::FPrimitive::GetTexCoords
          (FPrimitive *this,uint param_1,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  byte bVar1;
  
  if (7 < param_1) {
    return;
  }
  bVar1 = (char)param_1 + 3;
  if (((int)(uint)bVar1 < (int)this->_padding_) &&
     (*(byte *)(this->_padding_ + (ulonglong)bVar1 * 0x10) == bVar1)) {
    FAccessor::GetVec2Array(*(FAccessor **)(this->_padding_ + 8 + (ulonglong)bVar1 * 0x10),param_2);
    return;
  }
  FAccessor::GetVec2Array(&EmptyAccessor,param_2);
  return;
}

// GetTriangleIndices @ 14e63e820

void __thiscall
GLTF::FPrimitive::GetTriangleIndices
          (FPrimitive *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FAccessor *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_28 [2];
  undefined1 local_20 [4];
  uint local_1c;
  uint local_18 [4];
  
  if (this->Mode == Triangles) {
    this_00 = this->Indices;
    if (((this_00->BufferView).Buffer.Data == (uchar *)0x0) &&
       ((this_00->Sparse).bHasSparse == false)) {
      uVar5 = TriangleCount(this);
      uVar5 = uVar5 * 3;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      piVar1 = &param_1->ArrayMax;
      if (param_1->ArrayMax < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar5,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
      }
      local_28[0] = 0;
      if (uVar5 != 0) {
        do {
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_1->AllocatorInstance,piVar1);
            param_1->ArrayNum = iVar6;
          }
          param_1->ArrayNum = iVar6 + 1;
          *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28[0];
          local_28[0] = local_28[0] + 1;
        } while (local_28[0] < uVar5);
      }
    }
    else {
      FAccessor::GetUnsignedIntArray(this_00,param_1);
    }
  }
  else {
    uVar5 = TriangleCount(this);
    uVar5 = uVar5 * 3;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    uVar7 = 0;
    uVar5 = TriangleCount(this);
    if (uVar5 != 0) {
      do {
        TriangleVerts(this,(FTriangle *)local_20,uVar7);
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_20) &&
            ((FScriptContainerElement *)local_20 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar6;
        }
        param_1->ArrayNum = iVar6 + 1;
        *(undefined1 (*) [4])((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_20;
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)(local_20 + 4)) &&
            ((FScriptContainerElement *)(local_20 + 4) < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar6;
        }
        param_1->ArrayNum = iVar6 + 1;
        *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_1c;
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)(local_20 + 8)) &&
            ((FScriptContainerElement *)(local_20 + 8) < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar6;
        }
        uVar7 = uVar7 + 1;
        param_1->ArrayNum = iVar6 + 1;
        *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
        uVar5 = TriangleCount(this);
      } while (uVar7 < uVar5);
    }
  }
  return;
}

// HasTexCoords @ 14e6423d0

bool __thiscall GLTF::FPrimitive::HasTexCoords(FPrimitive *this,uint param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_1 < 8) {
    bVar2 = (char)param_1 + 3;
    if ((((int)(uint)bVar2 < (int)this->_padding_) &&
        (*(byte *)(this->_padding_ + (ulonglong)bVar2 * 0x10) == bVar2)) &&
       ((lVar1 = *(longlong *)(this->_padding_ + 8 + (ulonglong)bVar2 * 0x10),
        *(longlong *)(lVar1 + 0x98) != 0 || (*(char *)(lVar1 + 0x18) != '\0')))) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14e6469c0

bool __thiscall GLTF::FPrimitive::IsValid(FPrimitive *this)

{
  bool bVar1;
  
  if ((this->bIsValidCache).bIsSet != false) {
    return (this->bIsValidCache).TypedValue;
  }
  bVar1 = IsValidPrivate(this);
  return bVar1;
}

// IsValidPrivate @ 14e646be0

bool __thiscall GLTF::FPrimitive::IsValidPrivate(FPrimitive *this)

{
  FScriptContainerElement *pFVar1;
  FAttributeAccessors *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FAttributeAccessors *this_00;
  bool local_res8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  if ((0 < (int)this->_padding_) && (*(char *)this->_padding_ == '\0')) {
    lVar5 = *(longlong *)((char *)this->_padding_ + 8);
    if ((*(longlong *)(lVar5 + 0x98) == 0) && (*(char *)(lVar5 + 0x18) == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      uVar3 = *(uint *)(*(longlong *)(this->_padding_ + 8) + 4);
      GetTriangleIndices(this,&local_28);
      iVar4 = local_28.ArrayNum;
      uVar7 = (ulonglong)local_28.ArrayNum;
      pFVar1 = local_28.AllocatorInstance.Data + uVar7 * 4;
      FVar8.Data = local_28.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar7 != iVar4) {
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
          uVar7 = local_28._8_8_ & 0xffffffff;
        }
        if (FVar8.Data == pFVar1) {
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
          bVar6 = FAttributeAccessors::AreAttributeAccessorsValid
                            ((FAttributeAccessors *)this,local_res8,uVar3);
          if (!bVar6) {
            return false;
          }
          iVar4 = (this->MorphTargets).ArrayNum;
          this_00 = (FAttributeAccessors *)(this->MorphTargets).AllocatorInstance.Data;
          pFVar2 = this_00 + iVar4;
          while( true ) {
            if ((this->MorphTargets).ArrayNum != iVar4) {
              `TCheckedPointerIterator<GLTF::FMorphTarget_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (this_00 == pFVar2) {
              return true;
            }
            local_res8[0] = false;
            bVar6 = FAttributeAccessors::AreAttributeAccessorsValid(this_00,local_res8,uVar3);
            if (!bVar6) {
              return false;
            }
            if (local_res8[0] == false) break;
            this_00 = this_00 + 1;
          }
          return false;
        }
        if (uVar3 <= *(uint *)FVar8.Data) break;
        FVar8.Data = FVar8.Data + 4;
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ToString @ 14e65a150

FString * __cdecl GLTF::FPrimitive::ToString(FString *__return_storage_ptr__,EMode *param_1)

{
  switch(*param_1) {
  case Points:
    ::FString::FString(__return_storage_ptr__,L"POINTS");
    return __return_storage_ptr__;
  case Lines:
    ::FString::FString(__return_storage_ptr__,L"LINES");
    return __return_storage_ptr__;
  case LineLoop:
    ::FString::FString(__return_storage_ptr__,L"LINE_LOOP");
    return __return_storage_ptr__;
  case LineStrip:
    ::FString::FString(__return_storage_ptr__,L"LINE_STRIP");
    return __return_storage_ptr__;
  case Triangles:
    ::FString::FString(__return_storage_ptr__,L"TRIANGLES");
    return __return_storage_ptr__;
  case TriangleStrip:
    ::FString::FString(__return_storage_ptr__,L"TRIANGLE_STRIP");
    return __return_storage_ptr__;
  case TriangleFan:
    ::FString::FString(__return_storage_ptr__,L"TRIANGLE_FAN");
    return __return_storage_ptr__;
  default:
    ::FString::FString(__return_storage_ptr__,L"UNKNOWN");
    return __return_storage_ptr__;
  }
}

// TriangleCount @ 14e65a5f0

uint __thiscall GLTF::FPrimitive::TriangleCount(FPrimitive *this)

{
  EMode EVar1;
  FAccessor *pFVar2;
  
  EVar1 = this->Mode;
  if (EVar1 == Triangles) {
    pFVar2 = this->Indices;
    if (((pFVar2->BufferView).Buffer.Data != (uchar *)0x0) || ((pFVar2->Sparse).bHasSparse != false)
       ) {
      return pFVar2->Count / 3;
    }
    if ((0 < (int)this->_padding_) && (*(char *)this->_padding_ == '\0')) {
      return *(uint *)(*(longlong *)((char *)this->_padding_ + 8) + 4) / 3;
    }
    return EmptyAccessor.Count / 3;
  }
  if ((EVar1 != TriangleStrip) && (EVar1 != TriangleFan)) {
    return 0;
  }
  pFVar2 = this->Indices;
  if (((pFVar2->BufferView).Buffer.Data == (uchar *)0x0) && ((pFVar2->Sparse).bHasSparse == false))
  {
    if ((0 < (int)this->_padding_) && (*(char *)this->_padding_ == '\0')) {
      return *(int *)(*(longlong *)((char *)this->_padding_ + 8) + 4) - 2;
    }
    return EmptyAccessor.Count - 2;
  }
  return pFVar2->Count - 2;
}

// TriangleVerts @ 14e65a6b0

FTriangle * __thiscall
GLTF::FPrimitive::TriangleVerts(FPrimitive *this,FTriangle *__return_storage_ptr__,uint param_1)

{
  EMode EVar1;
  FAccessor *pFVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  uVar4 = TriangleCount(this);
  if (param_1 < uVar4) {
    pFVar2 = this->Indices;
    if (((pFVar2->BufferView).Buffer.Data == (uchar *)0x0) && ((pFVar2->Sparse).bHasSparse == false)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    EVar1 = this->Mode;
    if (EVar1 == Triangles) {
      uVar4 = param_1 * 3;
      if (bVar3) {
        uVar7 = FAccessor::GetUnsignedInt(pFVar2,uVar4);
        pFVar2 = this->Indices;
        __return_storage_ptr__->A = uVar7;
        uVar7 = FAccessor::GetUnsignedInt(pFVar2,uVar4 + 1);
        pFVar2 = this->Indices;
        __return_storage_ptr__->B = uVar7;
        uVar4 = FAccessor::GetUnsignedInt(pFVar2,uVar4 + 2);
        __return_storage_ptr__->C = uVar4;
      }
      else {
        __return_storage_ptr__->A = uVar4;
        __return_storage_ptr__->B = uVar4 + 1;
        __return_storage_ptr__->C = uVar4 + 2;
      }
    }
    else if (EVar1 == TriangleStrip) {
      uVar7 = param_1 & 1;
      uVar4 = param_1 + 1;
      if (bVar3) {
        uVar5 = param_1;
        if (uVar7 != 0) {
          uVar5 = uVar4;
        }
        uVar5 = FAccessor::GetUnsignedInt(pFVar2,uVar5);
        pFVar2 = this->Indices;
        __return_storage_ptr__->A = uVar5;
        if (uVar7 != 0) {
          uVar4 = param_1;
        }
        uVar4 = FAccessor::GetUnsignedInt(pFVar2,uVar4);
        __return_storage_ptr__->B = uVar4;
        uVar4 = FAccessor::GetUnsignedInt(this->Indices,param_1 + 2);
        __return_storage_ptr__->C = uVar4;
      }
      else {
        uVar6 = uVar4;
        uVar5 = param_1;
        if (uVar7 != 0) {
          uVar6 = param_1;
          uVar5 = uVar4;
        }
        __return_storage_ptr__->A = uVar5;
        __return_storage_ptr__->B = uVar6;
        __return_storage_ptr__->C = param_1 + 2;
      }
    }
    else if (EVar1 == TriangleFan) {
      if (bVar3) {
        uVar4 = FAccessor::GetUnsignedInt(pFVar2,0);
        pFVar2 = this->Indices;
        __return_storage_ptr__->A = uVar4;
        uVar4 = FAccessor::GetUnsignedInt(pFVar2,param_1 + 1);
        pFVar2 = this->Indices;
        __return_storage_ptr__->B = uVar4;
        uVar4 = FAccessor::GetUnsignedInt(pFVar2,param_1 + 2);
        __return_storage_ptr__->C = uVar4;
      }
      else {
        __return_storage_ptr__->A = 0;
        __return_storage_ptr__->B = param_1 + 1;
        __return_storage_ptr__->C = param_1 + 2;
      }
    }
  }
  return __return_storage_ptr__;
}

// VertexCount @ 14e65d1c0

uint __thiscall GLTF::FPrimitive::VertexCount(FPrimitive *this)

{
  FAccessor *pFVar1;
  
  pFVar1 = this->Indices;
  if (((pFVar1->BufferView).Buffer.Data == (uchar *)0x0) && ((pFVar1->Sparse).bHasSparse == false))
  {
    if ((0 < (int)this->_padding_) && (*(char *)this->_padding_ == '\0')) {
      return *(uint *)(*(longlong *)((char *)this->_padding_ + 8) + 4);
    }
    pFVar1 = &EmptyAccessor;
  }
  return pFVar1->Count;
}

