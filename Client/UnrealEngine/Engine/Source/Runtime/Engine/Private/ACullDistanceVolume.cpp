// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147a0dc30

UClass * __cdecl ACullDistanceVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CullDistanceVolume",
               &Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton,
               StaticRegisterNativesACullDistanceVolume,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACullDistanceVolume>,
               InternalVTableHelperCtorCaller<ACullDistanceVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton;
}

// ACullDistanceVolume @ 147a24540

ACullDistanceVolume * __thiscall
ACullDistanceVolume::ACullDistanceVolume(ACullDistanceVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7ACullDistanceVolume__6B_;
  (this->CullDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CullDistances).ArrayNum = 0;
  (this->CullDistances).ArrayMax = 0;
  return this;
}

// ACullDistanceVolume @ 147a24580

ACullDistanceVolume * __thiscall
ACullDistanceVolume::ACullDistanceVolume(ACullDistanceVolume *this,FObjectInitializer *param_1)

{
  TArray<FCullDistanceSizePair,TSizedDefaultAllocator<32>_> *pTVar1;
  byte *pbVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ACullDistanceVolume *pAVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7ACullDistanceVolume__6B_;
  pTVar1 = &this->CullDistances;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CullDistances).ArrayNum = 0;
  (this->CullDistances).ArrayMax = 0;
  (**(code **)(*(longlong *)this->_padding_ + 0x788))
            ((longlong *)this->_padding_,UCollisionProfile::NoCollision_ProfileName,1);
  local_18 = 0;
  pbVar2 = (byte *)(this->_padding_ + 0x27b);
  *pbVar2 = *pbVar2 | 4;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)(this->CullDistances).ArrayMax * 8))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pAVar7 = (ACullDistanceVolume *)(*pcVar4)();
      return pAVar7;
    }
  }
  iVar6 = (this->CullDistances).ArrayNum;
  if (iVar6 == (this->CullDistances).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->CullDistances).ArrayMax);
  }
  (this->CullDistances).ArrayNum = iVar6 + 1;
  local_10 = 0x461c4000;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 < pFVar3 + (longlong)(this->CullDistances).ArrayMax * 8))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pAVar7 = (ACullDistanceVolume *)(*pcVar4)();
      return pAVar7;
    }
  }
  iVar6 = (this->CullDistances).ArrayNum;
  if (iVar6 == (this->CullDistances).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->CullDistances).ArrayMax);
  }
  (this->CullDistances).ArrayNum = iVar6 + 1;
  *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_10;
  this->bEnabled = 1;
  return this;
}

// ~ACullDistanceVolume @ 147a297c0

void __thiscall ACullDistanceVolume::~ACullDistanceVolume(ACullDistanceVolume *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ACullDistanceVolume__6B_;
  pFVar1 = (this->CullDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AVolume::~AVolume((AVolume *)this);
  return;
}

// CanBeAffectedByVolumes @ 147a355d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl ACullDistanceVolume::CanBeAffectedByVolumes(UPrimitiveComponent *param_1)

{
  AActor *this;
  char cVar1;
  bool bVar2;
  UWorld *pUVar3;
  FSceneInterface *pFVar4;
  
  if ((((param_1 != (UPrimitiveComponent *)0x0) &&
       (this = *(AActor **)&param_1->field_0xa8, this != (AActor *)0x0)) &&
      (param_1->field_0x1ab == '\0')) && (param_1->bAllowCullDistanceVolume != 0)) {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0x560))();
    if (cVar1 != '\0') {
      bVar2 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar2) {
        pUVar3 = AActor::GetWorld(this);
        if (pUVar3 != (UWorld *)0x0) {
          pUVar3 = AActor::GetWorld(this);
          pFVar4 = UActorComponent::GetScene((UActorComponent *)param_1);
          return pFVar4 == pUVar3->Scene;
        }
      }
    }
  }
  return false;
}

// GetPrimitiveMaxDrawDistances @ 147a56a20

void __thiscall
ACullDistanceVolume::GetPrimitiveMaxDrawDistances
          (ACullDistanceVolume *this,
          TMap<UPrimitiveComponent_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,float,0>_>
          *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  TMap<UPrimitiveComponent_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,float,0>_>
  *pTVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res8 [8];
  TMap<UPrimitiveComponent_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,float,0>_>
  *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TVector<double>_u_0 local_c8 [5];
  
  if (((this->_padding_ != 0) && (0 < (this->CullDistances).ArrayNum)) && (this->bEnabled != 0)) {
    iVar5 = *(int *)&param_1->field_0x28;
    iVar17 = 0;
    uVar12 = 1;
    iVar19 = 0;
    puVar1 = &param_1->field_0x10;
    iVar13 = 0;
    if (iVar5 != 0) {
      puVar20 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar16 = *puVar20;
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar17;
        iVar19 = iVar19 + 0x20;
        iVar17 = iVar17 + 1;
        iVar13 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_147a56b1d;
        uVar16 = puVar20[lVar14 + 1];
      }
      uVar12 = -uVar16 & uVar16;
      uVar3 = (ulonglong)uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iVar13 = iVar19 + -1 + local_res20;
      if (iVar5 < iVar13) {
        iVar13 = iVar5;
      }
    }
LAB_147a56b1d:
    uVar16 = *(uint *)&param_1->field_0x28;
    uVar22 = uVar16 & 0xffffffe0;
    TStack_f8._padding_ = CONCAT44(uVar12,iVar17);
    TStack_f8.CurrentBitIndex = iVar13;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar16 >> 5;
    TStack_f8._28_4_ = iVar13;
    TStack_f8.BaseBitIndex = iVar19;
    uStack_d8 = CONCAT44(uStack_10c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
    local_res10 = param_1;
    TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar10 = __real_7f7fffff;
    uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar12 = *(uint *)&param_1->field_0x28;
    pTVar21 = param_1;
    if (uVar16 != uVar12) {
      puVar18 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar17;
        uVar22 = uVar22 + 0x20;
        iVar17 = iVar17 + 1;
        uVar16 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_147a56c50;
        uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar16 = (int)lVar14 + -1 + uVar22;
      if ((int)uVar12 < (int)uVar16) {
        uVar16 = uVar12;
      }
    }
LAB_147a56c50:
    while( true ) {
      if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_d8) {
        `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lVar14 = (longlong)TStack_f8.CurrentBitIndex;
      if (((TStack_f8.CurrentBitIndex == uVar16) &&
          (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (param_1 == pTVar21)) break;
      lVar6 = *(longlong *)param_1;
      lVar7 = *(longlong *)(lVar6 + lVar14 * 0x18);
      local_c8[0]._0_8_ = *(double *)(lVar7 + 0x210);
      local_c8[0]._8_8_ = *(double *)(lVar7 + 0x218);
      local_c8[0]._16_8_ = *(double *)(lVar7 + 0x220);
      bVar11 = AVolume::EncompassesPoint
                         ((AVolume *)this,(TVector<double> *)&local_c8[0]._s_0,0.0,(float *)0x0);
      if (bVar11) {
        dVar4 = *(double *)(lVar7 + 0x140);
        pFVar15 = (this->CullDistances).AllocatorInstance.Data;
        iVar5 = (this->CullDistances).ArrayNum;
        fVar25 = 0.0;
        pFVar2 = pFVar15 + (longlong)iVar5 * 8;
        fVar24 = fVar10;
        while( true ) {
          if ((this->CullDistances).ArrayNum != iVar5) {
            `TCheckedPointerIterator<FCullDistanceSizePair,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar15 == pFVar2) break;
          fVar23 = (float)((uint)((float)(dVar4 + dVar4) - *(float *)pFVar15) & uVar9);
          if (fVar23 < fVar24) {
            fVar25 = *(float *)(pFVar15 + 4);
            fVar24 = fVar23;
          }
          pFVar15 = pFVar15 + 8;
        }
        fVar24 = *(float *)(lVar6 + 8 + lVar14 * 0x18);
        if (fVar24 <= 0.0) {
          *(float *)(lVar6 + 8 + lVar14 * 0x18) = fVar25;
        }
        else {
          if (fVar25 <= fVar24) {
            fVar24 = fVar25;
          }
          *(float *)(lVar6 + 8 + lVar14 * 0x18) = fVar24;
        }
      }
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      pTVar21 = local_res10;
    }
  }
  return;
}

// GetPrivateStaticClass @ 147a56de0

UClass * __cdecl ACullDistanceVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CullDistanceVolume",
               &Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton,
               StaticRegisterNativesACullDistanceVolume,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACullDistanceVolume>,
               InternalVTableHelperCtorCaller<ACullDistanceVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACullDistanceVolume.InnerSingleton;
}

// StaticRegisterNativesACullDistanceVolume @ 147a974c0

void __cdecl ACullDistanceVolume::StaticRegisterNativesACullDistanceVolume(void)

{
  return;
}

