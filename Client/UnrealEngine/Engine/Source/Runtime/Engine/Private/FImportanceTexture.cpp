// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticStruct @ 147e44480

UScriptStruct * __cdecl FImportanceTexture::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImportanceTexture.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FImportanceTexture.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImportanceTexture,(UObject *)pUVar1,
                         L"ImportanceTexture");
  }
  return Z_Registration_Info_UScriptStruct_FImportanceTexture.OuterSingleton;
}

// FImportanceTexture @ 147e544d0

FImportanceTexture * __thiscall
FImportanceTexture::FImportanceTexture(FImportanceTexture *this,FImportanceTexture *param_1)

{
  int iVar1;
  
  (this->Size).field0_0x0 = (param_1->Size).field0_0x0;
  iVar1 = param_1->NumMips;
  (this->MarginalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NumMips = iVar1;
  (this->MarginalCDF).AllocatorInstance.Data = (param_1->MarginalCDF).AllocatorInstance.Data;
  (param_1->MarginalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarginalCDF).ArrayNum = (param_1->MarginalCDF).ArrayNum;
  (this->MarginalCDF).ArrayMax = (param_1->MarginalCDF).ArrayMax;
  (param_1->MarginalCDF).ArrayNum = 0;
  (param_1->MarginalCDF).ArrayMax = 0;
  (this->ConditionalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionalCDF).AllocatorInstance.Data = (param_1->ConditionalCDF).AllocatorInstance.Data;
  (param_1->ConditionalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionalCDF).ArrayNum = (param_1->ConditionalCDF).ArrayNum;
  (this->ConditionalCDF).ArrayMax = (param_1->ConditionalCDF).ArrayMax;
  (param_1->ConditionalCDF).ArrayNum = 0;
  (param_1->ConditionalCDF).ArrayMax = 0;
  (this->TextureData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureData_DEPRECATED).AllocatorInstance.Data =
       (param_1->TextureData_DEPRECATED).AllocatorInstance.Data;
  (param_1->TextureData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureData_DEPRECATED).ArrayNum = (param_1->TextureData_DEPRECATED).ArrayNum;
  (this->TextureData_DEPRECATED).ArrayMax = (param_1->TextureData_DEPRECATED).ArrayMax;
  (param_1->TextureData_DEPRECATED).ArrayNum = 0;
  (param_1->TextureData_DEPRECATED).ArrayMax = 0;
  (this->LinearTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearTextureData).AllocatorInstance.Data =
       (param_1->LinearTextureData).AllocatorInstance.Data;
  (param_1->LinearTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearTextureData).ArrayNum = (param_1->LinearTextureData).ArrayNum;
  (this->LinearTextureData).ArrayMax = (param_1->LinearTextureData).ArrayMax;
  (param_1->LinearTextureData).ArrayNum = 0;
  (param_1->LinearTextureData).ArrayMax = 0;
  (this->Texture).WeakPtr = (param_1->Texture).WeakPtr;
  (this->Weighting).Value = (param_1->Weighting).Value;
  return this;
}

// FImportanceTexture @ 147e54580

FImportanceTexture * __thiscall
FImportanceTexture::FImportanceTexture(FImportanceTexture *this,FImportanceTexture *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = &this->MarginalCDF;
  (this->Size).field0_0x0 = (param_1->Size).field0_0x0;
  this->NumMips = param_1->NumMips;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MarginalCDF).ArrayMax;
  iVar5 = (param_1->MarginalCDF).ArrayNum;
  pFVar6 = (param_1->MarginalCDF).AllocatorInstance.Data;
  (this->MarginalCDF).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar1 = &this->ConditionalCDF;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ConditionalCDF).ArrayMax;
  iVar5 = (param_1->ConditionalCDF).ArrayNum;
  pFVar6 = (param_1->ConditionalCDF).AllocatorInstance.Data;
  (this->ConditionalCDF).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->TextureData_DEPRECATED;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TextureData_DEPRECATED).ArrayMax;
  iVar5 = (param_1->TextureData_DEPRECATED).ArrayNum;
  pFVar6 = (param_1->TextureData_DEPRECATED).AllocatorInstance.Data;
  (this->TextureData_DEPRECATED).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->LinearTextureData;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LinearTextureData).ArrayMax;
  iVar5 = (param_1->LinearTextureData).ArrayNum;
  pFVar6 = (param_1->LinearTextureData).AllocatorInstance.Data;
  (this->LinearTextureData).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  (this->Texture).WeakPtr = (param_1->Texture).WeakPtr;
  (this->Weighting).Value = (param_1->Weighting).Value;
  return this;
}

// FImportanceTexture @ 147e54730

FImportanceTexture * __thiscall
FImportanceTexture::FImportanceTexture
          (FImportanceTexture *this,UTexture2D *param_1,TEnumAsByte<EImportanceWeight::Type> param_2
          )

{
  (this->MarginalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarginalCDF).ArrayNum = 0;
  (this->MarginalCDF).ArrayMax = 0;
  (this->ConditionalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionalCDF).ArrayNum = 0;
  (this->ConditionalCDF).ArrayMax = 0;
  (this->TextureData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureData_DEPRECATED).ArrayNum = 0;
  (this->TextureData_DEPRECATED).ArrayMax = 0;
  (this->LinearTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearTextureData).ArrayNum = 0;
  (this->LinearTextureData).ArrayMax = 0;
  (this->Texture).WeakPtr = (FWeakObjectPtr)0x0;
  Initialize(this,param_1,param_2);
  return this;
}

// FImportanceTexture @ 147e54780

FImportanceTexture * __thiscall FImportanceTexture::FImportanceTexture(FImportanceTexture *this)

{
  undefined8 local_res8 [4];
  
  (this->Size).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->NumMips = 0;
  (this->MarginalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarginalCDF).ArrayNum = 0;
  (this->MarginalCDF).ArrayMax = 0;
  (this->ConditionalCDF).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConditionalCDF).ArrayNum = 0;
  (this->ConditionalCDF).ArrayMax = 0;
  (this->TextureData_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureData_DEPRECATED).ArrayNum = 0;
  (this->TextureData_DEPRECATED).ArrayMax = 0;
  (this->LinearTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearTextureData).ArrayNum = 0;
  (this->LinearTextureData).ArrayMax = 0;
  local_res8[0] = 0;
  (this->Texture).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Texture).WeakPtr,(FObjectPtr)local_res8);
  (this->Weighting).Value = '\0';
  return this;
}

// operator= @ 147e581c0

FImportanceTexture * __thiscall
FImportanceTexture::operator=(FImportanceTexture *this,FImportanceTexture *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &param_1->MarginalCDF;
  pTVar2 = &this->MarginalCDF;
  (this->Size).field0_0x0 = (param_1->Size).field0_0x0;
  this->NumMips = param_1->NumMips;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MarginalCDF).ArrayNum = (param_1->MarginalCDF).ArrayNum;
    (this->MarginalCDF).ArrayMax = (param_1->MarginalCDF).ArrayMax;
    (param_1->MarginalCDF).ArrayNum = 0;
    (param_1->MarginalCDF).ArrayMax = 0;
  }
  pTVar1 = &param_1->ConditionalCDF;
  pTVar2 = &this->ConditionalCDF;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ConditionalCDF).ArrayNum = (param_1->ConditionalCDF).ArrayNum;
    (this->ConditionalCDF).ArrayMax = (param_1->ConditionalCDF).ArrayMax;
    (param_1->ConditionalCDF).ArrayNum = 0;
    (param_1->ConditionalCDF).ArrayMax = 0;
  }
  pTVar3 = &param_1->TextureData_DEPRECATED;
  pTVar4 = &this->TextureData_DEPRECATED;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TextureData_DEPRECATED).ArrayNum = (param_1->TextureData_DEPRECATED).ArrayNum;
    (this->TextureData_DEPRECATED).ArrayMax = (param_1->TextureData_DEPRECATED).ArrayMax;
    (param_1->TextureData_DEPRECATED).ArrayNum = 0;
    (param_1->TextureData_DEPRECATED).ArrayMax = 0;
  }
  pTVar5 = &param_1->LinearTextureData;
  pTVar6 = &this->LinearTextureData;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LinearTextureData).ArrayNum = (param_1->LinearTextureData).ArrayNum;
    (this->LinearTextureData).ArrayMax = (param_1->LinearTextureData).ArrayMax;
    (param_1->LinearTextureData).ArrayNum = 0;
    (param_1->LinearTextureData).ArrayMax = 0;
  }
  (this->Texture).WeakPtr = (param_1->Texture).WeakPtr;
  (this->Weighting).Value = (param_1->Weighting).Value;
  return this;
}

// operator= @ 147e58300

FImportanceTexture * __thiscall
FImportanceTexture::operator=(FImportanceTexture *this,FImportanceTexture *param_1)

{
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  (this->Size).field0_0x0 = (param_1->Size).field0_0x0;
  this->NumMips = param_1->NumMips;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->MarginalCDF,&param_1->MarginalCDF);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->ConditionalCDF,&param_1->ConditionalCDF);
  pTVar1 = &this->TextureData_DEPRECATED;
  if (pTVar1 != &param_1->TextureData_DEPRECATED) {
    iVar4 = (param_1->TextureData_DEPRECATED).ArrayNum;
    piVar2 = &(this->TextureData_DEPRECATED).ArrayMax;
    pFVar5 = (param_1->TextureData_DEPRECATED).AllocatorInstance.Data;
    (this->TextureData_DEPRECATED).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  pTVar3 = &this->LinearTextureData;
  if (pTVar3 != &param_1->LinearTextureData) {
    iVar4 = (param_1->LinearTextureData).ArrayNum;
    piVar2 = &(this->LinearTextureData).ArrayMax;
    pFVar5 = (param_1->LinearTextureData).AllocatorInstance.Data;
    (this->LinearTextureData).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 4);
      }
    }
  }
  (this->Texture).WeakPtr = (param_1->Texture).WeakPtr;
  (this->Weighting).Value = (param_1->Weighting).Value;
  return this;
}

// GetColorBilinear @ 147e672b0

FLinearColor * __thiscall
FImportanceTexture::GetColorBilinear
          (FImportanceTexture *this,FLinearColor *__return_storage_ptr__,TVector2<double> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  FLinearColor *pFVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  
  if ((this->LinearTextureData).ArrayNum == 0) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  iVar23 = (this->Size).field0_0x0._s_0.X;
  iVar16 = this->NumMips + -1;
  iVar2 = (this->Size).field0_0x0._s_0.Y;
  if (param_2 < iVar16) {
    iVar16 = param_2;
  }
  bVar20 = 0;
  if (0 < iVar16) {
    bVar20 = (byte)iVar16;
  }
  iVar22 = iVar2 + -1 >> (bVar20 & 0x1f);
  iVar26 = iVar23 + -1 >> (bVar20 & 0x1f);
  iVar16 = iVar26 + 1;
  iVar27 = 0;
  dVar37 = (double)iVar22 * (param_1->field0_0x0)._s_0.Y;
  dVar36 = (double)iVar26 * (param_1->field0_0x0)._s_0.X;
  iVar29 = 0;
  lVar17 = (longlong)ROUND((dVar37 + dVar37) - __real_3fe0000000000000) >> 1;
  lVar28 = (longlong)iVar22;
  if (lVar17 < iVar22) {
    lVar28 = lVar17;
  }
  lVar18 = (longlong)ROUND((dVar36 + dVar36) - __real_3fe0000000000000) >> 1;
  lVar17 = (longlong)iVar26;
  if (lVar18 < iVar26) {
    lVar17 = lVar18;
  }
  if (0 < lVar17) {
    iVar29 = (int)lVar17;
  }
  if (0 < lVar28) {
    iVar27 = (int)lVar28;
  }
  iVar23 = (iVar2 * iVar23 - (iVar22 + 1) * iVar16) * 4;
  uVar25 = iVar16 * iVar27 +
           (int)(((longlong)iVar23 / 3 + ((longlong)iVar23 >> 0x3f) & 0xffffffffU) >> 0x1f) +
           iVar23 / 3 + (iVar23 >> 0x1f) + iVar29;
  uVar21 = 0;
  if ((int)uVar25 < (this->LinearTextureData).ArrayNum) {
    uVar21 = ~uVar25 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      pFVar19 = (FLinearColor *)(*pcVar3)();
      return pFVar19;
    }
  }
  pFVar1 = (this->LinearTextureData).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10;
  fVar30 = *(float *)pFVar1;
  fVar31 = *(float *)(pFVar1 + 4);
  fVar33 = *(float *)(pFVar1 + 8);
  fVar35 = *(float *)(pFVar1 + 0xc);
  if ((iVar16 == 1) || (iVar22 + 1 == 1)) {
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar30;
    (__return_storage_ptr__->field0_0x0)._s_0.G = fVar31;
    (__return_storage_ptr__->field0_0x0)._s_0.B = fVar33;
    (__return_storage_ptr__->field0_0x0)._s_0.A = fVar35;
  }
  else {
    uVar24 = iVar16 + uVar25;
    uVar21 = 0;
    if ((int)uVar24 < (this->LinearTextureData).ArrayNum) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if (uVar21 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        pFVar19 = (FLinearColor *)(*pcVar3)();
        return pFVar19;
      }
    }
    uVar25 = uVar25 + 1;
    pFVar1 = (this->LinearTextureData).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x10;
    fVar4 = *(float *)pFVar1;
    fVar5 = *(float *)(pFVar1 + 4);
    fVar6 = *(float *)(pFVar1 + 8);
    fVar7 = *(float *)(pFVar1 + 0xc);
    uVar21 = 0;
    if ((int)uVar25 < (this->LinearTextureData).ArrayNum) {
      uVar21 = ~uVar25 >> 0x1f;
    }
    if (uVar21 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        pFVar19 = (FLinearColor *)(*pcVar3)();
        return pFVar19;
      }
    }
    uVar24 = uVar24 + 1;
    pFVar1 = (this->LinearTextureData).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10;
    fVar8 = *(float *)pFVar1;
    fVar9 = *(float *)(pFVar1 + 4);
    fVar10 = *(float *)(pFVar1 + 8);
    fVar11 = *(float *)(pFVar1 + 0xc);
    uVar21 = 0;
    if ((int)uVar24 < (this->LinearTextureData).ArrayNum) {
      uVar21 = ~uVar24 >> 0x1f;
    }
    if (uVar21 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        pFVar19 = (FLinearColor *)(*pcVar3)();
        return pFVar19;
      }
    }
    fVar34 = (float)(dVar36 - (double)iVar29);
    pFVar1 = (this->LinearTextureData).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x10;
    fVar12 = *(float *)(pFVar1 + 4);
    fVar13 = *(float *)(pFVar1 + 8);
    fVar14 = *(float *)(pFVar1 + 0xc);
    fVar32 = (float)(dVar37 - (double)iVar27);
    fVar30 = (fVar8 - fVar30) * fVar34 + fVar30;
    fVar31 = (fVar9 - fVar31) * fVar34 + fVar31;
    fVar33 = (fVar10 - fVar33) * fVar34 + fVar33;
    fVar35 = (fVar11 - fVar35) * fVar34 + fVar35;
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         (((*(float *)pFVar1 - fVar4) * fVar34 + fVar4) - fVar30) * fVar32 + fVar30;
    (__return_storage_ptr__->field0_0x0)._s_0.G =
         (((fVar12 - fVar5) * fVar34 + fVar5) - fVar31) * fVar32 + fVar31;
    (__return_storage_ptr__->field0_0x0)._s_0.B =
         (((fVar13 - fVar6) * fVar34 + fVar6) - fVar33) * fVar32 + fVar33;
    (__return_storage_ptr__->field0_0x0)._s_0.A =
         (((fVar14 - fVar7) * fVar34 + fVar7) - fVar35) * fVar32 + fVar35;
  }
  return __return_storage_ptr__;
}

// GetColorTrilinear @ 147e67710

FLinearColor * __thiscall
FImportanceTexture::GetColorTrilinear
          (FImportanceTexture *this,FLinearColor *__return_storage_ptr__,TVector2<double> *param_1,
          float param_2)

{
  undefined1 unaff_XMM6 [16];
  undefined1 auVar1 [16];
  float fVar2;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  TVector2<double>_u_0 local_38 [2];
  
  local_58._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_58._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  auVar1 = roundps(unaff_XMM6,ZEXT416((uint)param_2),1);
  fVar2 = auVar1._0_4_;
  GetColorBilinear(this,(FLinearColor *)&local_48._s_0,(TVector2<double> *)&local_58._s_0,(int)fVar2
                  );
  local_38[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
  local_38[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
  GetColorBilinear(this,(FLinearColor *)&local_58._s_0,(TVector2<double> *)&local_38[0]._s_0,
                   (int)(fVar2 + __real_3f800000));
  fVar2 = param_2 - fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (local_58._s_0.R - local_48._s_0.R) * fVar2 + local_48._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       (local_58._s_0.G - local_48._s_0.G) * fVar2 + local_48._s_0.G;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (local_58._s_0.B - local_48._s_0.B) * fVar2 + local_48._s_0.B;
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (local_58._s_0.A - local_48._s_0.A) * fVar2 + local_48._s_0.A;
  return __return_storage_ptr__;
}

// ImportanceSample @ 147e6b5f0

void __thiscall
FImportanceTexture::ImportanceSample
          (FImportanceTexture *this,TVector2<double> *param_1,int param_2,float param_3,
          TVector2<double> *param_4,FLinearColor *param_5,float *param_6,float *param_7)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  FLinearColor_u_0 local_e0;
  FLinearColor_u_0 local_d0;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8 [8];
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->Texture).WeakPtr);
  if (bVar6) {
    uVar14 = (this->Size).field0_0x0._s_0.Y;
    uVar7 = 0;
    if ((int)uVar14 < (this->MarginalCDF).ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    lVar10 = (longlong)dVar2;
    dVar16 = dVar2;
    if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != dVar2)) {
      auVar20._8_8_ = dVar2;
      auVar20._0_8_ = dVar2;
      uVar7 = movmskpd(0,auVar20);
      dVar16 = (double)(longlong)(lVar10 - (ulonglong)(uVar7 & 1));
    }
    uVar7 = (this->Size).field0_0x0._s_0.Y;
    fVar19 = (float)((dVar2 - dVar16) *
                    (double)*(float *)((this->MarginalCDF).AllocatorInstance.Data +
                                      (longlong)(int)uVar14 * 4));
    uVar14 = 0;
    if (0x40 < (int)uVar7) {
      uVar14 = 0;
      do {
        uVar13 = ((int)(uVar7 - uVar14) >> 1) + uVar14;
        uVar8 = 0;
        if ((int)uVar13 < (this->MarginalCDF).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (this->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar13 * 4;
        if (*(float *)pFVar1 <= fVar19 && fVar19 != *(float *)pFVar1) {
          uVar14 = uVar13;
          uVar13 = uVar7;
        }
        uVar7 = uVar13;
      } while (0x40 < (int)(uVar7 - uVar14));
    }
    do {
      uVar8 = uVar14;
      if ((int)uVar7 <= (int)uVar8) break;
      uVar14 = uVar8 + 1;
      uVar13 = 0;
      if ((int)uVar14 < (this->MarginalCDF).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (this->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar14 * 4;
    } while (*(float *)pFVar1 <= fVar19 && fVar19 != *(float *)pFVar1);
    uVar13 = uVar8 + 1;
    uVar7 = ((this->Size).field0_0x0._s_0.X + 1) * uVar8;
    uVar14 = 0;
    if ((int)uVar7 < (this->ConditionalCDF).ArrayNum) {
      uVar14 = ~uVar7 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = (this->ConditionalCDF).AllocatorInstance.Data;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    iVar9 = (this->Size).field0_0x0._s_0.X;
    lVar10 = (longlong)dVar2;
    dVar16 = dVar2;
    if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != dVar2)) {
      auVar17._8_8_ = dVar2;
      auVar17._0_8_ = dVar2;
      uVar14 = movmskpd(0,auVar17);
      dVar16 = (double)(longlong)(lVar10 - (ulonglong)(uVar14 & 1));
    }
    iVar11 = 0;
    fVar18 = (float)((dVar2 - dVar16) *
                    (double)*(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4));
    iVar5 = iVar9;
    while (0x40 < iVar9) {
      iVar12 = (iVar5 - iVar11 >> 1) + iVar11;
      if (*(float *)(pFVar1 + (longlong)iVar12 * 4 + (longlong)(int)uVar7 * 4) <= fVar18 &&
          fVar18 != *(float *)(pFVar1 + (longlong)iVar12 * 4 + (longlong)(int)uVar7 * 4)) {
        iVar11 = iVar12;
        iVar12 = iVar5;
      }
      iVar5 = iVar12;
      iVar9 = iVar12 - iVar11;
    }
    do {
      iVar9 = iVar11;
      if (iVar5 <= iVar9) break;
      iVar11 = iVar9 + 1;
    } while (*(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4 + 4) <= fVar18 &&
             fVar18 != *(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4 + 4));
    uVar14 = 0;
    if ((int)uVar8 < (this->MarginalCDF).ArrayNum) {
      uVar14 = ~uVar8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar15 = *(float *)(pFVar1 + (longlong)iVar9 * 4 + (longlong)(int)uVar7 * 4);
    dVar2 = (double)*(float *)((this->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar8 * 4
                              );
    uVar14 = 0;
    if ((int)uVar13 < (this->MarginalCDF).ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar3 = (this->Size).field0_0x0._s_0;
    fVar21 = *(float *)((this->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    dVar16 = (double)*(float *)(pFVar1 + (longlong)(iVar9 + 1) * 4 + (longlong)(int)uVar7 * 4) -
             (double)fVar15;
    (param_4->field0_0x0)._s_0.X =
         (((double)fVar18 - (double)fVar15) / dVar16 + (double)iVar9) / (double)TVar3.X;
    (param_4->field0_0x0)._s_0.Y =
         (((double)fVar19 - dVar2) / ((double)fVar21 - dVar2) + (double)(int)uVar8) /
         (double)TVar3.Y;
    uVar14 = (this->Size).field0_0x0._s_0.Y;
    uVar7 = 0;
    if ((int)uVar14 < (this->MarginalCDF).ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar18 = __real_3f800000;
    fVar22 = (float)((this->Size).field0_0x0._s_0.Y * (this->Size).field0_0x0._s_0.X) /
             *(float *)((this->MarginalCDF).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
    fVar21 = __real_3f800000 / ((float)((double)fVar22 * dVar16) * (float)param_2);
    *param_7 = SQRT(fVar21 * __real_3f000000) * __real_40800000;
    fVar15 = logf((float)((this->Size).field0_0x0._s_0.Y * (this->Size).field0_0x0._s_0.X) * fVar21)
    ;
    dVar2 = (param_4->field0_0x0)._s_0.X;
    dVar16 = (param_4->field0_0x0)._s_0.Y;
    fVar15 = fVar15 * __real_3f38aa3b;
    auVar20 = roundps(ZEXT416((uint)fVar19),ZEXT416((uint)fVar15),1);
    fVar19 = auVar20._0_4_;
    local_b8._s_0.X = dVar2;
    local_b8._s_0.Y = dVar16;
    GetColorBilinear(this,(FLinearColor *)&local_d0._s_0,(TVector2<double> *)&local_b8._s_0,
                     (int)fVar19);
    local_a8[0]._0_8_ = dVar2;
    local_a8[0]._8_8_ = dVar16;
    GetColorBilinear(this,(FLinearColor *)&local_e0._s_0,(TVector2<double> *)&local_a8[0]._s_0,
                     (int)(fVar19 + fVar18));
    fVar15 = fVar15 - fVar19;
    (param_5->field0_0x0)._s_0.R = (local_e0._s_0.R - local_d0._s_0.R) * fVar15 + local_d0._s_0.R;
    (param_5->field0_0x0)._s_0.G = (local_e0._s_0.G - local_d0._s_0.G) * fVar15 + local_d0._s_0.G;
    (param_5->field0_0x0)._s_0.B = (local_e0._s_0.B - local_d0._s_0.B) * fVar15 + local_d0._s_0.B;
    (param_5->field0_0x0)._s_0.A = (local_e0._s_0.A - local_d0._s_0.A) * fVar15 + local_d0._s_0.A;
    *param_6 = fVar21 * param_3 * fVar22;
  }
  return;
}

// ImportanceWeight @ 147e6bd80

float __thiscall
FImportanceTexture::ImportanceWeight
          (FImportanceTexture *this,FColor param_1,TEnumAsByte<EImportanceWeight::Type> param_2)

{
  bool bVar1;
  UObject *pUVar2;
  float fVar3;
  byte bStackX_11;
  byte bStackX_12;
  byte bStackX_13;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Texture).WeakPtr);
  bStackX_11 = param_1.field0_0x0._1_1_;
  bStackX_12 = param_1.field0_0x0._2_1_;
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Texture).WeakPtr);
    if ((pUVar2[6].field_0x26 & 1) != 0) {
      local_18 = FLinearColor::sRGBToLinearTable[bStackX_12];
      fStack_14 = FLinearColor::sRGBToLinearTable[bStackX_11];
      fStack_10 = FLinearColor::sRGBToLinearTable[(uint)param_1.field0_0x0 & 0xff];
      goto LAB_147e6be1d;
    }
  }
  local_18 = (float)bStackX_12 * __real_3b808081;
  fStack_10 = (float)((uint)param_1.field0_0x0 & 0xff) * __real_3b808081;
  fStack_14 = (float)bStackX_11 * __real_3b808081;
LAB_147e6be1d:
  bStackX_13 = param_1.field0_0x0._3_1_;
  fStack_c = (float)bStackX_13 * __real_3b808081;
  if (param_2.Value == '\0') {
    fVar3 = FLinearColor::GetLuminance((FLinearColor *)&local_18);
    return fVar3;
  }
  if (param_2.Value == '\x01') {
    return local_18;
  }
  if (param_2.Value == '\x02') {
    return fStack_14;
  }
  if (param_2.Value != '\x03') {
    if (param_2.Value != '\x04') {
      return __real_3f800000;
    }
    return (float)bStackX_13 * __real_3b808081;
  }
  return fStack_10;
}

// Initialize @ 147e6cee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImportanceTexture::Initialize
          (FImportanceTexture *this,UTexture2D *param_1,TEnumAsByte<EImportanceWeight::Type> param_2
          )

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  EPixelFormat EVar5;
  bool bVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  FWeakObjectPtr local_res8;
  UTexture2D *local_res10;
  int local_res18;
  undefined8 local_res20;
  longlong local_a8;
  undefined8 local_a0;
  FScriptContainerElement *local_98;
  FString local_90;
  FLinearColor_u_0 local_78 [3];
  
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=(&(this->Texture).WeakPtr,(FObjectPtr)&local_res10);
    (this->Weighting).Value = param_2.Value;
  }
  else {
    FWeakObjectPtr::operator=(&(this->Texture).WeakPtr,(FObjectPtr)&local_res10);
    (this->Weighting).Value = param_2.Value;
    if (param_1 == (UTexture2D *)0x0) {
      local_res20 = 0;
      FFrame::KismetExecutionMessage
                (L"Importance Texture is missing a source texture",Error,(FName)0x0);
      return;
    }
  }
  EVar5 = UTexture2D::GetPixelFormat(param_1,0);
  if (EVar5 == PF_A32B32G32R32F) {
    FetchTextureData<FLinearColor>(&this->LinearTextureData,&this->Size,&this->NumMips,param_1);
  }
  else if (EVar5 == PF_B8G8R8A8) {
    FetchTextureData<FColor>(&this->LinearTextureData,&this->Size,&this->NumMips,param_1);
  }
  else {
    if (EVar5 != PF_FloatRGBA) {
      UTexture2D::GetPixelFormat(param_1,0);
      ::FString::PrintfImpl(&local_90,L"Importance Texture does not support texture format %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_90.Data.ArrayNum != 0) {
        FVar8.Data = local_90.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Error,(FName)0x0);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_a0 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_a0);
      (this->Texture).WeakPtr = local_res8;
      return;
    }
    FetchTextureData<FFloat16Color>(&this->LinearTextureData,&this->Size,&this->NumMips,param_1);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->MarginalCDF,(this->Size).field0_0x0._s_0.Y + 1,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConditionalCDF,
             ((this->Size).field0_0x0._s_0.X + 1) * (this->Size).field0_0x0._s_0.Y,Default);
  if (((this->MarginalCDF).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = 1;
  *(undefined4 *)(this->MarginalCDF).AllocatorInstance.Data = 0;
  fVar4 = __real_3f800000;
  if (0 < (this->Size).field0_0x0._s_0.Y) {
    local_a8 = 4;
    local_res18 = 0;
    do {
      uVar10 = local_res18 * (this->Size).field0_0x0._s_0.X;
      uVar7 = 0;
      if ((int)uVar10 < (this->LinearTextureData).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->LinearTextureData).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
      uVar10 = ((this->Size).field0_0x0._s_0.X + 1) * (uVar11 - 1);
      uVar7 = 0;
      if ((int)uVar10 < (this->ConditionalCDF).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ConditionalCDF).AllocatorInstance.Data;
      iVar12 = 1;
      *(undefined4 *)(pFVar2 + (longlong)(int)uVar10 * 4) = 0;
      pFVar2 = pFVar2 + (longlong)(int)uVar10 * 4;
      local_98 = pFVar2;
      if (0 < (this->Size).field0_0x0._s_0.X) {
        do {
          local_78[0]._0_4_ = *(undefined4 *)pFVar9;
          local_78[0]._4_4_ = *(undefined4 *)(pFVar9 + 4);
          local_78[0]._8_4_ = *(undefined4 *)(pFVar9 + 8);
          local_78[0]._12_4_ = *(undefined4 *)(pFVar9 + 0xc);
          if (param_2.Value == '\0') {
            fVar13 = FLinearColor::GetLuminance((FLinearColor *)&local_78[0]._s_0);
          }
          else {
            fVar13 = (float)local_78[0]._0_4_;
            if ((((param_2.Value != '\x01') &&
                 (fVar13 = (float)local_78[0]._4_4_, param_2.Value != '\x02')) &&
                (fVar13 = (float)local_78[0]._8_4_, param_2.Value != '\x03')) &&
               (fVar13 = (float)local_78[0]._12_4_, param_2.Value != '\x04')) {
              fVar13 = fVar4;
            }
          }
          iVar12 = iVar12 + 1;
          pFVar9 = pFVar9 + 0x10;
          *(float *)(pFVar2 + 4) = fVar13 + *(float *)pFVar2;
          pFVar2 = pFVar2 + 4;
        } while (iVar12 <= (this->Size).field0_0x0._s_0.X);
      }
      pFVar9 = local_98;
      uVar7 = 0;
      if ((int)(uVar11 - 1) < (this->MarginalCDF).ArrayNum) {
        uVar7 = -uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar13 = *(float *)(pFVar9 + (longlong)(this->Size).field0_0x0._s_0.X * 4);
      fVar1 = *(float *)((this->MarginalCDF).AllocatorInstance.Data + local_a8 + -4);
      uVar7 = 0;
      if ((int)uVar11 < (this->MarginalCDF).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = uVar11 + 1;
      *(float *)((this->MarginalCDF).AllocatorInstance.Data + local_a8) = fVar13 + fVar1;
      local_a8 = local_a8 + 4;
      local_res18 = local_res18 + 1;
    } while ((int)uVar11 <= (this->Size).field0_0x0._s_0.Y);
  }
  return;
}

