// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1474a1240

UScriptStruct * __cdecl FInertializationPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInertializationPose.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInertializationPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInertializationPose,(UObject *)pUVar1,
                         L"InertializationPose");
  }
  return Z_Registration_Info_UScriptStruct_FInertializationPose.OuterSingleton;
}

// InitFrom @ 1474e5a60

void __thiscall
FInertializationPose::InitFrom
          (FInertializationPose *this,FCompactPose *param_1,FBlendedCurve *param_2,
          TTransform<double> *param_3,FName *param_4,float param_5)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<EInertializationBoneState,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  UObject *pUVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  
  lVar8 = *(longlong *)&param_1->field_0x10;
  pUVar28 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar8 + 0x40));
  if ((pUVar28 == (UObject *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkeletonAsset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_Inertialization.cpp"
                          ,0x57,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar7 = *(uint *)&pUVar28[2].field_0x20;
  pTVar1 = &this->BoneTransforms;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  piVar2 = &(this->BoneTransforms).ArrayNum;
  piVar3 = &(this->BoneTransforms).ArrayMax;
  *piVar2 = 0;
  if ((this->BoneTransforms).ArrayMax < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar7,&pTVar1->AllocatorInstance,0,piVar3);
  }
  iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,uVar7,&pTVar1->AllocatorInstance,piVar2,piVar3);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar25 * 0x60,0,(longlong)(int)uVar7 * 0x60);
  pTVar4 = &this->BoneStates;
  piVar3 = &(this->BoneStates).ArrayNum;
  piVar5 = &(this->BoneStates).ArrayMax;
  *piVar3 = 0;
  if ((this->BoneStates).ArrayMax < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,&pTVar4->AllocatorInstance,0,piVar5);
  }
  iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,uVar7,&pTVar4->AllocatorInstance,piVar3,piVar5);
  memset((pTVar4->AllocatorInstance).Data + iVar25,0,(longlong)(int)uVar7);
  uVar7 = *(uint *)&param_1->field_0x8;
  uVar30 = 0;
  if (uVar7 != 0) {
    lVar31 = 0;
    lVar32 = 0;
    do {
      uVar26 = 0;
      if ((int)uVar30 < *(int *)(lVar8 + 0x78)) {
        uVar26 = ~uVar30 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar26 = *(uint *)(lVar32 + *(longlong *)(lVar8 + 0x70));
      if (uVar26 != 0xffffffff) {
        uVar27 = 0;
        if ((int)uVar30 < *(int *)&param_1->field_0x8) {
          uVar27 = ~uVar30 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar29 = *(longlong *)param_1;
        uVar11 = *(undefined8 *)(lVar31 + lVar29);
        uVar12 = ((undefined8 *)(lVar31 + lVar29))[1];
        puVar6 = (undefined8 *)(lVar31 + 0x10 + lVar29);
        uVar13 = *puVar6;
        uVar14 = puVar6[1];
        puVar6 = (undefined8 *)(lVar31 + 0x20 + lVar29);
        uVar15 = *puVar6;
        uVar16 = puVar6[1];
        puVar6 = (undefined8 *)(lVar31 + 0x30 + lVar29);
        uVar17 = *puVar6;
        uVar18 = puVar6[1];
        puVar6 = (undefined8 *)(lVar31 + 0x40 + lVar29);
        uVar19 = *puVar6;
        uVar20 = puVar6[1];
        puVar6 = (undefined8 *)(lVar31 + 0x50 + lVar29);
        uVar21 = *puVar6;
        uVar22 = puVar6[1];
        uVar27 = 0;
        if ((int)uVar26 < *piVar2) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar29 = (longlong)(int)uVar26 * 0x60;
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar9 + lVar29) = uVar11;
        *(undefined8 *)(pFVar9 + lVar29 + 8) = uVar12;
        *(undefined8 *)(pFVar9 + lVar29 + 0x10) = uVar13;
        *(undefined8 *)(pFVar9 + lVar29 + 0x10 + 8) = uVar14;
        *(undefined8 *)(pFVar9 + lVar29 + 0x20) = uVar15;
        *(undefined8 *)(pFVar9 + lVar29 + 0x20 + 8) = uVar16;
        *(undefined8 *)(pFVar9 + lVar29 + 0x30) = uVar17;
        *(undefined8 *)(pFVar9 + lVar29 + 0x30 + 8) = uVar18;
        *(undefined8 *)(pFVar9 + lVar29 + 0x40) = uVar19;
        *(undefined8 *)(pFVar9 + lVar29 + 0x40 + 8) = uVar20;
        *(undefined8 *)(pFVar9 + lVar29 + 0x50) = uVar21;
        *(undefined8 *)(pFVar9 + lVar29 + 0x50 + 8) = uVar22;
        uVar27 = 0;
        if ((int)uVar26 < *piVar3) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pTVar4->AllocatorInstance).Data[(int)uVar26] = (FScriptContainerElement)0x1;
      }
      uVar30 = uVar30 + 1;
      lVar32 = lVar32 + 4;
      lVar31 = lVar31 + 0x60;
    } while (uVar30 != uVar7);
  }
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
  CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)&this->Curves,
             (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2);
  dVar23 = (param_3->Rotation).XY.m128d_f64[1];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar23;
  dVar23 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar23;
  dVar23 = (param_3->Translation).XY.m128d_f64[1];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar23;
  dVar23 = (param_3->Translation).ZW.m128d_f64[1];
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar23;
  dVar23 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar23;
  dVar23 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar23;
  this->AttachParentName = *param_4;
  this->DeltaTime = param_5;
  return;
}

