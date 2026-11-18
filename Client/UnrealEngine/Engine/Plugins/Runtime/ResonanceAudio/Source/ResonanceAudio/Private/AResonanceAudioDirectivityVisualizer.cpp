// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 7

// StaticClass @ 14f041cb0

UClass * __cdecl AResonanceAudioDirectivityVisualizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioDirectivityVisualizer",
               &Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton,
               StaticRegisterNativesAResonanceAudioDirectivityVisualizer,0x340,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AResonanceAudioDirectivityVisualizer>,
               InternalVTableHelperCtorCaller<AResonanceAudioDirectivityVisualizer>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton;
}

// AResonanceAudioDirectivityVisualizer @ 14f043880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AResonanceAudioDirectivityVisualizer * __thiscall
AResonanceAudioDirectivityVisualizer::AResonanceAudioDirectivityVisualizer
          (AResonanceAudioDirectivityVisualizer *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->CIRCLE_SECTIONS = 0x80;
  this->_padding_ = (longlong)&___7AResonanceAudioDirectivityVisualizer__6B_;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  (this->VertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexColors).ArrayNum = 0;
  (this->VertexColors).ArrayMax = 0;
  (this->UV0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UV0).ArrayNum = 0;
  (this->UV0).ArrayMax = 0;
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).ArrayNum = 0;
  (this->Tangents).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (UResonanceAudioSpatializationSourceSettings *)0x0;
  return this;
}

// AResonanceAudioDirectivityVisualizer @ 14f043920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AResonanceAudioDirectivityVisualizer * __thiscall
AResonanceAudioDirectivityVisualizer::AResonanceAudioDirectivityVisualizer
          (AResonanceAudioDirectivityVisualizer *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UProceduralMeshComponent *pUVar4;
  longlong *plVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this);
  this->CIRCLE_SECTIONS = 0x80;
  this->_padding_ = (longlong)&___7AResonanceAudioDirectivityVisualizer__6B_;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  (this->VertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexColors).ArrayNum = 0;
  (this->VertexColors).ArrayMax = 0;
  (this->UV0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UV0).ArrayNum = 0;
  (this->UV0).ArrayMax = 0;
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).ArrayNum = 0;
  (this->Tangents).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->Settings).field0_0x0.DebugPtr = (UResonanceAudioSpatializationSourceSettings *)0x0;
  AActor::SetActorHiddenInGame((AActor *)this,true);
  pFVar2 = ::FName::FName(&local_res8,L"VisualizationMesh");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
  pUVar4 = (UProceduralMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  this->Mesh = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UProceduralMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  plVar5 = &this->Mesh->_padding_;
  (**(code **)(*plVar5 + 0x20))(plVar5,0);
  return this;
}

// ~AResonanceAudioDirectivityVisualizer @ 14f044690

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
AResonanceAudioDirectivityVisualizer::~AResonanceAudioDirectivityVisualizer
          (AResonanceAudioDirectivityVisualizer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AResonanceAudioDirectivityVisualizer__6B_;
  pFVar1 = (this->Tangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UV0).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// DrawPattern @ 14f047390

void __thiscall
AResonanceAudioDirectivityVisualizer::DrawPattern(AResonanceAudioDirectivityVisualizer *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar4;
  UResonanceAudioSpatializationSourceSettings *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float _X;
  float _X_00;
  float fVar23;
  int local_res10;
  int local_res18;
  int local_168 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_160;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_f0;
  
  pTVar16 = &this->Vertices;
  piVar17 = &(this->Vertices).ArrayMax;
  (this->Vertices).ArrayNum = 0;
  local_f0 = pTVar16;
  if (*piVar17 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar16->AllocatorInstance,0,piVar17);
  }
  pTVar2 = &this->Triangles;
  piVar1 = &(this->Triangles).ArrayMax;
  (this->Triangles).ArrayNum = 0;
  if ((this->Triangles).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pTVar3 = &this->Normals;
  (this->Normals).ArrayNum = 0;
  if ((this->Normals).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar3->AllocatorInstance,0,&(this->Normals).ArrayMax);
  }
  pTVar4 = &this->VertexColors;
  (this->VertexColors).ArrayNum = 0;
  if ((this->VertexColors).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,&(this->VertexColors).ArrayMax);
  }
  local_res18 = 0;
  iVar12 = this->CIRCLE_SECTIONS;
  fVar23 = ((this->Settings).field0_0x0.DebugPtr)->Scale * __real_43480000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = __real_3ff0000000000000;
  if (0 < iVar12) {
    local_res10 = 0;
    iVar14 = 0;
    do {
      uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar9 = __real_3f800000;
      _X = (float)iVar14 * __real_40490fdb * (__real_3f800000 / (float)iVar12);
      _X_00 = (float)(iVar14 + 2) * __real_40490fdb * (__real_3f800000 / (float)iVar12);
      fVar18 = cosf(_X);
      pUVar5 = (this->Settings).field0_0x0.DebugPtr;
      fVar21 = pUVar5->Pattern;
      fVar22 = pUVar5->Sharpness;
      fVar19 = powf((float)((uint)(fVar21 * fVar18 + (fVar9 - fVar21)) & uVar10),fVar22);
      fVar19 = fVar19 * fVar23;
      fVar20 = cosf(_X_00);
      fVar21 = powf((float)((uint)(fVar21 * fVar20 + (fVar9 - fVar21)) &
                           __xmm_7fffffff7fffffff7fffffff7fffffff),fVar22);
      pFVar6 = (pTVar16->AllocatorInstance).Data;
      local_110 = 0;
      fVar21 = fVar21 * fVar23;
      local_120 = ZEXT416(0);
      if (((pFVar6 <= (FScriptContainerElement *)local_120) &&
          ((FScriptContainerElement *)local_120 < pFVar6 + (longlong)*piVar17 * 0x18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = pTVar16->ArrayNum;
      if (iVar12 == *piVar17) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar16->AllocatorInstance,piVar17);
      }
      pTVar16->ArrayNum = iVar12 + 1;
      pFVar7 = (pTVar16->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar12 * 0x18;
      *(undefined8 *)pFVar6 = local_120._0_8_;
      *(undefined8 *)(pFVar6 + 8) = local_120._8_8_;
      local_150 = (double)(fVar18 * fVar19);
      *(undefined8 *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = local_110;
      fVar22 = sinf(_X);
      pFVar6 = (pTVar16->AllocatorInstance).Data;
      local_140 = 0;
      dStack_148 = (double)(fVar22 * fVar19);
      if (((pFVar6 <= (FScriptContainerElement *)&local_150) &&
          ((FScriptContainerElement *)&local_150 < pFVar6 + (longlong)*piVar17 * 0x18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = pTVar16->ArrayNum;
      if (iVar12 == *piVar17) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar16->AllocatorInstance,piVar17);
      }
      pTVar16->ArrayNum = iVar12 + 1;
      pFVar7 = (pTVar16->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar12 * 0x18;
      *(double *)pFVar6 = local_150;
      *(double *)(pFVar6 + 8) = dStack_148;
      local_138 = (double)(fVar20 * fVar21);
      *(undefined8 *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = local_140;
      fVar22 = sinf(_X_00);
      pFVar6 = (pTVar16->AllocatorInstance).Data;
      local_128 = 0;
      dStack_130 = (double)(fVar22 * fVar21);
      if (((pFVar6 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 < pFVar6 + (longlong)*piVar17 * 0x18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = pTVar16->ArrayNum;
      if (iVar12 == *piVar17) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar16->AllocatorInstance,piVar17);
      }
      pTVar16->ArrayNum = iVar12 + 1;
      iVar15 = 0;
      pFVar7 = (pTVar16->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar12 * 0x18;
      *(double *)pFVar6 = local_138;
      *(double *)(pFVar6 + 8) = dStack_130;
      *(undefined8 *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = local_128;
      iVar12 = local_res10;
      do {
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        local_168[0] = iVar12;
        if (((pFVar6 <= (FScriptContainerElement *)local_168) &&
            ((FScriptContainerElement *)local_168 < pFVar6 + (longlong)*piVar1 * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = (this->Triangles).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->Triangles).ArrayNum = iVar13 + 1;
        *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_168[0];
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 <
             pFVar6 + (longlong)(this->Normals).ArrayMax * 0x18)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = (this->Normals).ArrayNum;
        if (iVar13 == (this->Normals).ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar3->AllocatorInstance,&(this->Normals).ArrayMax);
        }
        (this->Normals).ArrayNum = iVar13 + 1;
        pFVar7 = (pTVar3->AllocatorInstance).Data;
        pFVar6 = pFVar7 + (longlong)iVar13 * 0x18;
        *(undefined8 *)pFVar6 = local_108;
        *(undefined8 *)(pFVar6 + 8) = uStack_100;
        *(undefined8 *)(pFVar7 + (longlong)iVar13 * 0x18 + 0x10) = local_f8;
        pFVar6 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar6 < (FScriptContainerElement *)0x1530e3e1d) &&
            (&ResonanceAudio::ASSET_COLOR < pFVar6 + (longlong)(this->VertexColors).ArrayMax * 4))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = (this->VertexColors).ArrayNum;
        if (iVar13 == (this->VertexColors).ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar4->AllocatorInstance,&(this->VertexColors).ArrayMax);
        }
        (this->VertexColors).ArrayNum = iVar13 + 1;
        iVar15 = iVar15 + 1;
        iVar12 = iVar12 + 1;
        ((FColor_u_0 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 4))->_s_0 =
             (FColor_u_0_s_0)ResonanceAudio::ASSET_COLOR.field0_0x0;
      } while (iVar15 < 3);
      local_res18 = local_res18 + 1;
      local_res10 = local_res10 + 3;
      iVar12 = this->CIRCLE_SECTIONS;
      piVar17 = &local_f0->ArrayMax;
      pTVar16 = local_f0;
      iVar14 = iVar14 + 2;
    } while (local_res18 < iVar12);
  }
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  UProceduralMeshComponent::CreateMeshSection
            (this->Mesh,0,pTVar16,pTVar2,pTVar3,&this->UV0,&local_160,&local_160,&local_160,pTVar4,
             &this->Tangents,false);
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  (**(code **)(this->Mesh->_padding_ + 0x6b8))(this->Mesh,0,(this->Material).field0_0x0.DebugPtr);
  return;
}

// GetPrivateStaticClass @ 14f048bb0

UClass * __cdecl AResonanceAudioDirectivityVisualizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioDirectivityVisualizer",
               &Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton,
               StaticRegisterNativesAResonanceAudioDirectivityVisualizer,0x340,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AResonanceAudioDirectivityVisualizer>,
               InternalVTableHelperCtorCaller<AResonanceAudioDirectivityVisualizer>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.InnerSingleton;
}

// StaticRegisterNativesAResonanceAudioDirectivityVisualizer @ 14f04d5f0

void __cdecl
AResonanceAudioDirectivityVisualizer::StaticRegisterNativesAResonanceAudioDirectivityVisualizer
          (void)

{
  return;
}

