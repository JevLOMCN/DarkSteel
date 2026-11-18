// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 3

// FNDIGeometryCollectionArrays @ 14e981c70

FNDIGeometryCollectionArrays * __thiscall
FNDIGeometryCollectionArrays::FNDIGeometryCollectionArrays(FNDIGeometryCollectionArrays *this)

{
  this->NumPieces = 100;
  (this->WorldTransformBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldTransformBuffer).ArrayNum = 0;
  (this->WorldTransformBuffer).ArrayMax = 0;
  (this->PrevWorldTransformBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevWorldTransformBuffer).ArrayNum = 0;
  (this->PrevWorldTransformBuffer).ArrayMax = 0;
  (this->WorldInverseTransformBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldInverseTransformBuffer).ArrayNum = 0;
  (this->WorldInverseTransformBuffer).ArrayMax = 0;
  (this->PrevWorldInverseTransformBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevWorldInverseTransformBuffer).ArrayNum = 0;
  (this->PrevWorldInverseTransformBuffer).ArrayMax = 0;
  (this->BoundsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsBuffer).ArrayNum = 0;
  (this->BoundsBuffer).ArrayMax = 0;
  (this->ComponentRestTransformBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentRestTransformBuffer).ArrayNum = 0;
  (this->ComponentRestTransformBuffer).ArrayMax = 0;
  (this->ElementIndexToTransformBufferMapping).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ElementIndexToTransformBufferMapping).ArrayNum = 0;
  (this->ElementIndexToTransformBufferMapping).ArrayMax = 0;
  Resize(this,100);
  return this;
}

// CopyFrom @ 14e98c860

void __thiscall
FNDIGeometryCollectionArrays::CopyFrom
          (FNDIGeometryCollectionArrays *this,FNDIGeometryCollectionArrays *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  Resize(this,param_1->NumPieces);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->WorldTransformBuffer,&param_1->WorldTransformBuffer);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PrevWorldTransformBuffer,&param_1->PrevWorldTransformBuffer);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->WorldInverseTransformBuffer,&param_1->WorldInverseTransformBuffer);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PrevWorldInverseTransformBuffer,&param_1->PrevWorldInverseTransformBuffer);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoundsBuffer,&param_1->BoundsBuffer);
  pTVar1 = &this->ComponentRestTransformBuffer;
  if (pTVar1 != &param_1->ComponentRestTransformBuffer) {
    iVar4 = (param_1->ComponentRestTransformBuffer).ArrayNum;
    piVar2 = &(this->ComponentRestTransformBuffer).ArrayMax;
    pFVar5 = (param_1->ComponentRestTransformBuffer).AllocatorInstance.Data;
    (this->ComponentRestTransformBuffer).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x60);
      }
    }
  }
  pTVar3 = &this->ElementIndexToTransformBufferMapping;
  if (pTVar3 != &param_1->ElementIndexToTransformBufferMapping) {
    iVar4 = (param_1->ElementIndexToTransformBufferMapping).ArrayNum;
    piVar2 = &(this->ElementIndexToTransformBufferMapping).ArrayMax;
    pFVar5 = (param_1->ElementIndexToTransformBufferMapping).AllocatorInstance.Data;
    (this->ElementIndexToTransformBufferMapping).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
    }
  }
  return;
}

// Resize @ 14e9a6560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNDIGeometryCollectionArrays::Resize(FNDIGeometryCollectionArrays *this,uint param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStackY_138 [32];
  undefined4 local_e8 [4];
  TVector4<float>_u_0 local_d8;
  TVector4<float>_u_0 local_c8;
  TVector4<float>_u_0 local_b8;
  TVector4<float>_u_0 local_a8;
  TVector4<float>_u_0 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this->NumPieces = param_1;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->WorldTransformBuffer,(TVector4<float> *)&local_d8._s_0,param_1 * 3);
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->PrevWorldTransformBuffer,(TVector4<float> *)&local_c8._s_0,this->NumPieces * 3);
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->WorldInverseTransformBuffer,(TVector4<float> *)&local_b8._s_0,
             this->NumPieces * 3);
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->PrevWorldInverseTransformBuffer,(TVector4<float> *)&local_a8._s_0,
             this->NumPieces * 3);
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->BoundsBuffer,(TVector4<float> *)&local_98._s_0,this->NumPieces);
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float0001.m128_f32[3];
  piVar1 = &(this->ComponentRestTransformBuffer).ArrayMax;
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar16 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar17 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentRestTransformBuffer).ArrayNum = 0;
  local_88._8_4_ = SUB84((double)fVar9,0);
  local_88._0_8_ = (double)fVar6;
  local_88._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_78._8_4_ = SUB84((double)fVar15,0);
  local_78._0_8_ = (double)fVar12;
  local_78._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar10,0);
  local_68._0_8_ = (double)fVar7;
  local_68._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
  local_58._8_4_ = SUB84((double)fVar16,0);
  local_58._0_8_ = (double)fVar13;
  local_58._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
  local_48._8_4_ = SUB84((double)fVar11,0);
  local_48._0_8_ = (double)fVar8;
  local_48._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_38._8_4_ = SUB84((double)fVar17,0);
  local_38._0_8_ = (double)fVar14;
  local_38._12_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
  iVar19 = 1;
  if (*piVar1 != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,1,&(this->ComponentRestTransformBuffer).AllocatorInstance,0,piVar1);
    iVar19 = *piVar1;
  }
  pFVar4 = (this->ComponentRestTransformBuffer).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_88) &&
      ((FScriptContainerElement *)local_88 < pFVar4 + (longlong)iVar19 * 0x60)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar19 = (this->ComponentRestTransformBuffer).ArrayNum;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&(this->ComponentRestTransformBuffer).AllocatorInstance,piVar1);
  }
  (this->ComponentRestTransformBuffer).ArrayNum = iVar19 + 1;
  pTVar2 = &this->ElementIndexToTransformBufferMapping;
  local_e8[0] = 0;
  pFVar4 = (this->ComponentRestTransformBuffer).AllocatorInstance.Data;
  lVar20 = (longlong)iVar19 * 0x60;
  *(undefined8 *)(pFVar4 + lVar20) = local_88._0_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 8) = local_88._8_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x10) = local_78._0_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x10 + 8) = local_78._8_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x20) = local_68._0_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x20 + 8) = local_68._8_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x30) = local_58._0_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x30 + 8) = local_58._8_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x40) = local_48._0_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x40 + 8) = local_48._8_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x50) = local_38._0_8_;
  *(undefined8 *)(pFVar4 + lVar20 + 0x50 + 8) = local_38._8_8_;
  uVar3 = this->NumPieces;
  uVar21 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar21);
  }
  piVar1 = &(this->ElementIndexToTransformBufferMapping).ArrayMax;
  (this->ElementIndexToTransformBufferMapping).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar3) {
    do {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar19 = (this->ElementIndexToTransformBufferMapping).ArrayNum;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ElementIndexToTransformBufferMapping).ArrayNum = iVar19 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_e8[0];
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  return;
}

