// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 1479904a0

UScriptStruct * __cdecl FStaticMeshComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData,
                         (UObject *)pUVar1,L"StaticMeshComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMeshComponentInstanceData.OuterSingleton;
}

// ContainsData @ 1479904e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FStaticMeshComponentInstanceData::ContainsData(FStaticMeshComponentInstanceData *this)

{
  bool bVar1;
  
  bVar1 = FPrimitiveComponentInstanceData::ContainsData((FPrimitiveComponentInstanceData *)this);
  if ((((!bVar1) && ((this->StreamingTextureData).ArrayNum < 1)) &&
      ((this->CachedStaticLighting).ArrayNum < 1)) &&
     ((this->StaticMesh).field0_0x0.DebugPtr == (UStaticMesh *)0x0)) {
    return false;
  }
  return true;
}

// ApplyToComponent @ 147990530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FStaticMeshComponentInstanceData::ApplyToComponent
          (FStaticMeshComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  FPrimitiveComponentInstanceData::ApplyToComponent
            ((FPrimitiveComponentInstanceData *)this,param_1,param_2);
  if (param_2 == PostUserConstructionScript) {
    if (param_1 == (UActorComponent *)0x0) {
      pFVar3 = GetTypeName<UStaticMeshComponent>(&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar4);
    }
    pUVar2 = UStaticMeshComponent::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar3 = GetTypeName<UStaticMeshComponent>(&local_28);
      pwVar4 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar4,pwVar5);
    }
    UStaticMeshComponent::ApplyComponentInstanceData((UStaticMeshComponent *)param_1,this);
  }
  return;
}

// AddReferencedObjects @ 147990610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FStaticMeshComponentInstanceData::AddReferencedObjects
          (FStaticMeshComponentInstanceData *this,FReferenceCollector *param_1)

{
  FPrimitiveComponentInstanceData::AddReferencedObjects
            ((FPrimitiveComponentInstanceData *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147990642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->StaticMesh,0,0);
  return;
}

// FStaticMeshComponentInstanceData @ 1479a5570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FStaticMeshComponentInstanceData * __thiscall
FStaticMeshComponentInstanceData::FStaticMeshComponentInstanceData
          (FStaticMeshComponentInstanceData *this,UStaticMeshComponent *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UStaticMesh *pUVar3;
  FScriptContainerElement *pFVar4;
  FColorVertexBuffer *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FStaticMeshComponentInstanceData *pFVar12;
  FStaticMeshComponentLODInfo *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  
  FPrimitiveComponentInstanceData::FPrimitiveComponentInstanceData
            ((FPrimitiveComponentInstanceData *)this,(UPrimitiveComponent *)param_1);
  *(undefined ***)this = &___7FStaticMeshComponentInstanceData__6B_;
  pUVar3 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  (this->StaticMesh).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pTVar1 = &this->CachedStaticLighting;
  (this->VertexColorLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexColorLODs).ArrayNum = 0;
  (this->VertexColorLODs).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CachedStaticLighting).ArrayNum = 0;
  (this->CachedStaticLighting).ArrayMax = 0;
  (this->StreamingTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextureData).ArrayNum = 0;
  (this->StreamingTextureData).ArrayMax = 0;
  iVar2 = (param_1->LODData).ArrayNum;
  pFVar16 = (param_1->LODData).AllocatorInstance.Data;
  pFVar15 = pFVar16 + 0x10;
  pFVar18 = pFVar16 + (longlong)iVar2 * 0x50;
  while( true ) {
    if ((param_1->LODData).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FStaticMeshComponentLODInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar16 == pFVar18) break;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar16) &&
       (pFVar16 < pFVar4 + (longlong)(this->CachedStaticLighting).ArrayMax * 0x10)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FStaticMeshComponentInstanceData *)(*pcVar6)();
        return pFVar12;
      }
    }
    iVar10 = (this->CachedStaticLighting).ArrayNum;
    if (iVar10 == (this->CachedStaticLighting).ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar1->AllocatorInstance,&(this->CachedStaticLighting).ArrayMax);
    }
    (this->CachedStaticLighting).ArrayNum = iVar10 + 1;
    uVar7 = *(undefined8 *)(pFVar16 + 8);
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar16;
    *(undefined8 *)(pFVar4 + 8) = uVar7;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar15) &&
       (pFVar15 < pFVar4 + (longlong)(this->CachedStaticLighting).ArrayMax * 0x10)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FStaticMeshComponentInstanceData *)(*pcVar6)();
        return pFVar12;
      }
    }
    iVar10 = (this->CachedStaticLighting).ArrayNum;
    if (iVar10 == (this->CachedStaticLighting).ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar1->AllocatorInstance,&(this->CachedStaticLighting).ArrayMax);
    }
    pFVar16 = pFVar16 + 0x50;
    (this->CachedStaticLighting).ArrayNum = iVar10 + 1;
    uVar7 = *(undefined8 *)pFVar15;
    uVar8 = *(undefined8 *)(pFVar15 + 8);
    pFVar15 = pFVar15 + 0x50;
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar4 = uVar7;
    *(undefined8 *)(pFVar4 + 8) = uVar8;
  }
  TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->StreamingTextureData,&param_1->StreamingTextureData);
  uVar14 = 0;
  if (0 < (param_1->LODData).ArrayNum) {
    lVar17 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < (param_1->LODData).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FStaticMeshComponentInstanceData *)(*pcVar6)();
          return pFVar12;
        }
      }
      pFVar13 = (FStaticMeshComponentLODInfo *)((param_1->LODData).AllocatorInstance.Data + lVar17);
      pFVar5 = pFVar13->OverrideVertexColors;
      if ((pFVar5 != (FColorVertexBuffer *)0x0) && (pFVar5->NumVertices != 0)) {
        AddVertexColorData(this,pFVar13,uVar14);
      }
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 0x50;
    } while ((int)uVar14 < (param_1->LODData).ArrayNum);
  }
  return this;
}

// FStaticMeshComponentInstanceData @ 1479a5840

FStaticMeshComponentInstanceData * __thiscall
FStaticMeshComponentInstanceData::FStaticMeshComponentInstanceData
          (FStaticMeshComponentInstanceData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FSceneComponentInstanceData::FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  *(undefined ***)this = &___7FPrimitiveComponentInstanceData__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->field_0xc0 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&this->field_0xc8 = (double)fVar1;
  *(double *)&this->field_0xd0 = (double)fVar2;
  *(double *)&this->field_0xd8 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this->field_0xe0 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&this->field_0xe8 = (double)fVar1;
  *(double *)&this->field_0xf0 = (double)fVar2;
  *(double *)&this->field_0xf8 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this->field_0x100 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this->field_0x108 = (double)fVar1;
  *(double *)&this->field_0x110 = (double)fVar2;
  *(double *)&this->field_0x118 = (double)fVar3;
  *(undefined ***)this = &___7FStaticMeshComponentInstanceData__6B_;
  *(undefined4 *)&this->field_0x120 = 0xffffffff;
  *(undefined8 *)&this->field_0x128 = 0;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->VertexColorLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexColorLODs).ArrayNum = 0;
  (this->VertexColorLODs).ArrayMax = 0;
  (this->CachedStaticLighting).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedStaticLighting).ArrayNum = 0;
  (this->CachedStaticLighting).ArrayMax = 0;
  (this->StreamingTextureData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingTextureData).ArrayNum = 0;
  (this->StreamingTextureData).ArrayMax = 0;
  return this;
}

// ~FStaticMeshComponentInstanceData @ 1479a9230

void __thiscall
FStaticMeshComponentInstanceData::~FStaticMeshComponentInstanceData
          (FStaticMeshComponentInstanceData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->StreamingTextureData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedStaticLighting).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStaticMeshVertexColorLODData,int>
            ((FStaticMeshVertexColorLODData *)(this->VertexColorLODs).AllocatorInstance.Data,
             (this->VertexColorLODs).ArrayNum);
  pFVar1 = (this->VertexColorLODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneComponentInstanceData::~FSceneComponentInstanceData((FSceneComponentInstanceData *)this);
  return;
}

// operator= @ 1479aa2f0

FStaticMeshComponentInstanceData * __thiscall
FStaticMeshComponentInstanceData::operator=
          (FStaticMeshComponentInstanceData *this,FStaticMeshComponentInstanceData *param_1)

{
  int *piVar1;
  TArray<FStaticMeshVertexColorLODData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UStaticMesh *pUVar5;
  FStaticMeshVertexColorLODData *pFVar6;
  FScriptContainerElement *_Src;
  undefined8 uVar7;
  
  FSceneComponentInstanceData::operator=
            ((FSceneComponentInstanceData *)this,(FSceneComponentInstanceData *)param_1);
  uVar7 = *(undefined8 *)&param_1->field_0xc8;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)&param_1->field_0xc0;
  *(undefined8 *)&this->field_0xc8 = uVar7;
  uVar7 = *(undefined8 *)&param_1->field_0xd8;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_1->field_0xd0;
  *(undefined8 *)&this->field_0xd8 = uVar7;
  uVar7 = *(undefined8 *)&param_1->field_0xe8;
  *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&param_1->field_0xe0;
  *(undefined8 *)&this->field_0xe8 = uVar7;
  uVar7 = *(undefined8 *)&param_1->field_0xf8;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&param_1->field_0xf0;
  *(undefined8 *)&this->field_0xf8 = uVar7;
  uVar7 = *(undefined8 *)&param_1->field_0x108;
  *(undefined8 *)&this->field_0x100 = *(undefined8 *)&param_1->field_0x100;
  *(undefined8 *)&this->field_0x108 = uVar7;
  uVar7 = *(undefined8 *)&param_1->field_0x118;
  *(undefined8 *)&this->field_0x110 = *(undefined8 *)&param_1->field_0x110;
  *(undefined8 *)&this->field_0x118 = uVar7;
  *(undefined4 *)&this->field_0x120 = *(undefined4 *)&param_1->field_0x120;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)&param_1->field_0x128 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)&param_1->field_0x128);
  }
  *(undefined8 *)&this->field_0x128 = *(undefined8 *)&param_1->field_0x128;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->StaticMesh).field0_0x0.DebugPtr, pUVar5 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar2 = &this->VertexColorLODs;
  (this->StaticMesh).field0_0x0 = (param_1->StaticMesh).field0_0x0;
  if (pTVar2 != &param_1->VertexColorLODs) {
    DestructItems<FStaticMeshVertexColorLODData,int>
              ((FStaticMeshVertexColorLODData *)(pTVar2->AllocatorInstance).Data,
               (this->VertexColorLODs).ArrayNum);
    iVar4 = (param_1->VertexColorLODs).ArrayNum;
    piVar1 = &(this->VertexColorLODs).ArrayMax;
    pFVar6 = (FStaticMeshVertexColorLODData *)(param_1->VertexColorLODs).AllocatorInstance.Data;
    (this->VertexColorLODs).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FStaticMeshVertexColorLODData,FStaticMeshVertexColorLODData,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  pTVar3 = &this->CachedStaticLighting;
  if (pTVar3 != &param_1->CachedStaticLighting) {
    iVar4 = (param_1->CachedStaticLighting).ArrayNum;
    piVar1 = &(this->CachedStaticLighting).ArrayMax;
    _Src = (param_1->CachedStaticLighting).AllocatorInstance.Data;
    (this->CachedStaticLighting).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  TArray<FStreamingTextureBuildInfo,TSizedDefaultAllocator<32>_>::operator=
            (&this->StreamingTextureData,&param_1->StreamingTextureData);
  return this;
}

// AddVertexColorData @ 1479b0b10

void __thiscall
FStaticMeshComponentInstanceData::AddVertexColorData
          (FStaticMeshComponentInstanceData *this,FStaticMeshComponentLODInfo *param_1,uint param_2)

{
  TArray<FStaticMeshVertexColorLODData,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FPaintedVertex,TSizedDefaultAllocator<32>_> *this_01;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  piVar6 = &(this->VertexColorLODs).ArrayNum;
  iVar1 = *piVar6;
  if (iVar1 <= (int)param_2) {
    uVar7 = param_2 + 1;
    this_00 = &this->VertexColorLODs;
    if (iVar1 < (int)uVar7) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,uVar7 - iVar1,&this_00->AllocatorInstance,piVar6,
                         &(this->VertexColorLODs).ArrayMax);
      DefaultConstructItems<FStaticMeshVertexColorLODData,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x28,uVar7 - iVar1);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar1) {
        uVar8 = iVar1 - uVar7;
        if (((int)(uVar8 | uVar7) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          TArray<FStaticMeshVertexColorLODData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,uVar7,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&this_00->AllocatorInstance,(this->VertexColorLODs).ArrayNum,
                     &(this->VertexColorLODs).ArrayMax);
        }
      }
    }
  }
  uVar7 = 0;
  if ((int)param_2 < (this->VertexColorLODs).ArrayNum) {
    uVar7 = ~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->VertexColorLODs).AllocatorInstance.Data;
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0x28 + 0x20) = param_2;
  this_01 = (TArray<FPaintedVertex,TSizedDefaultAllocator<32>_> *)
            (pFVar2 + (longlong)(int)param_2 * 0x28);
  TArray<FPaintedVertex,TSizedDefaultAllocator<32>_>::operator=(this_01,&param_1->PaintedVertices);
  FColorVertexBuffer::GetVertexColors
            (param_1->OverrideVertexColors,
             (TArray<FColor,TSizedDefaultAllocator<32>_> *)(this_01 + 1));
  return;
}

// ApplyVertexColorData @ 1479b36d0

bool __thiscall
FStaticMeshComponentInstanceData::ApplyVertexColorData
          (FStaticMeshComponentInstanceData *this,UStaticMeshComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  FColorVertexBuffer *this_00;
  FColorVertexBuffer *this_01;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_res10;
  
  bVar10 = false;
  if (param_1 == (UStaticMeshComponent *)0x0) {
    return false;
  }
  UStaticMeshComponent::SetLODDataCount
            (param_1,(this->VertexColorLODs).ArrayNum,(param_1->LODData).ArrayNum);
  uVar15 = 0;
  if (0 < (param_1->LODData).ArrayNum) {
    lVar13 = 0;
    uVar12 = 1;
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (param_1->LODData).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pFVar14 = (param_1->LODData).AllocatorInstance.Data;
      if ((-1 < (int)uVar12) && ((int)uVar12 < (this->CachedStaticLighting).ArrayNum)) {
        uVar11 = 0;
        if ((int)(uVar12 - 1) < (this->CachedStaticLighting).ArrayNum) {
          uVar11 = ~(uVar12 - 1) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar2 = (this->CachedStaticLighting).AllocatorInstance.Data + lVar13;
        uVar7 = *(undefined8 *)(pFVar2 + 8);
        pFVar3 = pFVar14 + lVar16;
        *(undefined8 *)pFVar3 = *(undefined8 *)pFVar2;
        *(undefined8 *)(pFVar3 + 8) = uVar7;
        uVar11 = 0;
        if ((int)uVar12 < (this->CachedStaticLighting).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar2 = (this->CachedStaticLighting).AllocatorInstance.Data + lVar13 + 0x10;
        uVar7 = *(undefined8 *)(pFVar2 + 8);
        pFVar14 = pFVar14 + lVar16 + 0x10;
        *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
        *(undefined8 *)(pFVar14 + 8) = uVar7;
      }
      uVar15 = uVar15 + 1;
      uVar12 = uVar12 + 2;
      lVar16 = lVar16 + 0x50;
      lVar13 = lVar13 + 0x20;
    } while ((int)uVar15 < (param_1->LODData).ArrayNum);
  }
  uVar15 = 0;
  if (0 < (this->VertexColorLODs).ArrayNum) {
    local_res10 = 0;
    bVar10 = false;
    do {
      uVar12 = 0;
      if ((int)uVar15 < (this->VertexColorLODs).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pFVar14 = (this->VertexColorLODs).AllocatorInstance.Data + local_res10;
      uVar12 = *(uint *)&pFVar14[0x20].field_0x0;
      if ((-1 < (int)uVar12) && ((int)uVar12 < (param_1->LODData).ArrayNum)) {
        uVar11 = 0;
        if ((int)uVar12 < (param_1->LODData).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pFVar2 = (param_1->LODData).AllocatorInstance.Data;
        UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(param_1,uVar12);
        if ((*(longlong *)(pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x40) == 0) &&
           (0 < *(int *)&pFVar14[0x18].field_0x0)) {
          pFVar3 = pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x30;
          if (pFVar3 != pFVar14) {
            iVar4 = *(int *)&pFVar14[8].field_0x0;
            pFVar1 = pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x3c;
            _Src = *(FScriptContainerElement **)&pFVar14->field_0x0;
            iVar5 = *(int *)pFVar1;
            *(int *)(pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x38) = iVar4;
            if ((iVar4 == 0) && (iVar5 == 0)) {
              *(int *)pFVar1 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x10,iVar4,iVar5,(ForAnyElementType *)pFVar3,iVar4,(int *)pFVar1);
              if (iVar4 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,_Src,(longlong)iVar4 << 6);
              }
            }
          }
          this_00 = ::operator_new(0x50);
          this_01 = (FColorVertexBuffer *)0x0;
          if (this_00 != (FColorVertexBuffer *)0x0) {
            this_01 = FColorVertexBuffer::FColorVertexBuffer(this_00);
          }
          *(FColorVertexBuffer **)(pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x40) = this_01;
          FColorVertexBuffer::InitFromColorArray
                    (this_01,(FColor *)*(FScriptContainerElement **)&pFVar14[0x10].field_0x0,
                     *(uint *)&pFVar14[0x18].field_0x0,4,true);
          if ((*(int *)(*(longlong *)(pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x40) + 0x40) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LODInfo.OverrideVertexColors->GetStride() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StaticMeshComponent.cpp"
                                  ,0xbd,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          BeginInitResource(*(FRenderResource **)(pFVar2 + (longlong)(int)uVar12 * 0x50 + 0x40),
                            (FRenderCommandPipe *)0x0);
          bVar10 = true;
        }
      }
      local_res10 = local_res10 + 0x28;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (this->VertexColorLODs).ArrayNum);
  }
  return bVar10;
}

