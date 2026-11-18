// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 43

// StaticClass @ 14d2811f0

UClass * __cdecl UAppleARKitFaceMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitFaceSupport",L"AppleARKitFaceMeshComponent",
               &Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton,
               StaticRegisterNativesUAppleARKitFaceMeshComponent,0x710,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitFaceMeshComponent>,
               InternalVTableHelperCtorCaller<UAppleARKitFaceMeshComponent>,local_res8,
               UProceduralMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton;
}

// UAppleARKitFaceMeshComponent @ 14d283760

UAppleARKitFaceMeshComponent * __thiscall
UAppleARKitFaceMeshComponent::UAppleARKitFaceMeshComponent
          (UAppleARKitFaceMeshComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UProceduralMeshComponent::UProceduralMeshComponent((UProceduralMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UAppleARKitFaceMeshComponent__6B_;
  (this->FaceMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->LiveLinkSubjectName).ComparisonIndex = 0;
  (this->LiveLinkSubjectName).Number = 0;
  (this->RemoteCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteCurves).ArrayNum = 0;
  (this->RemoteCurves).ArrayMax = 0;
  *(undefined8 *)&this->BlendShapes = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x8 = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x20 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x28 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendShapes).field_0x34 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BlendShapes).field_0x40 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->LiveLinkSource).Object = (ILiveLinkSourceARKit *)0x0;
  (this->LiveLinkSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UAppleARKitFaceMeshComponent @ 14d2838a0

UAppleARKitFaceMeshComponent * __thiscall
UAppleARKitFaceMeshComponent::UAppleARKitFaceMeshComponent
          (UAppleARKitFaceMeshComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
  *this_00;
  int iVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  TSparseSetElement<TTuple<EARFaceBlendShape,float>_> *pTVar22;
  uint uVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  int iVar28;
  int local_res18 [4];
  FSparseArrayAllocationInfo local_98;
  int local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  UProceduralMeshComponent::UProceduralMeshComponent((UProceduralMeshComponent *)this,param_1);
  iVar28 = 0;
  this_00 = &this->BlendShapes;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  puVar1 = &(this->BlendShapes).field_0x8;
  (this->FaceMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->LiveLinkSubjectName).ComparisonIndex = 0;
  (this->LiveLinkSubjectName).Number = 0;
  (this->RemoteCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemoteCurves).ArrayNum = 0;
  (this->RemoteCurves).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0xc = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x20 = 0;
  this->_padding_ = (longlong)&___7UAppleARKitFaceMeshComponent__6B_;
  *(undefined4 *)&(this->BlendShapes).field_0x28 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x2c = 0x80;
  *(undefined4 *)&(this->BlendShapes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlendShapes).field_0x34 = 0;
  *(undefined8 *)&(this->BlendShapes).field_0x40 = 0;
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalToWorldTransform).Rotation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar6,0);
  auVar8._0_8_ = (double)fVar5;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->LocalToWorldTransform).Rotation.ZW.m128d_f64 = auVar8;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalToWorldTransform).Translation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar6,0);
  auVar10._0_8_ = (double)fVar5;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->LocalToWorldTransform).Translation.ZW.m128d_f64 = auVar10;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar6,0);
  auVar12._0_8_ = (double)fVar5;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 = auVar12;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar2 = *pbVar2 | 2;
  (this->LiveLinkSource).Object = (ILiveLinkSourceARKit *)0x0;
  (this->LiveLinkSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)&this->_padding_ = 4;
  do {
    iVar15 = *(int *)&(this->BlendShapes).field_0x34;
    if (iVar15 == 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,1,(ForAnyElementType *)this_00,(int *)puVar1,
                          (int *)&(this->BlendShapes).field_0xc);
      puVar24 = &(this->BlendShapes).field_0x10;
      iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)puVar24,1);
      puVar18 = *(undefined1 **)&(this->BlendShapes).field_0x20;
      if (puVar18 != (undefined1 *)0x0) {
        puVar24 = puVar18;
      }
      bVar17 = (byte)iVar15 & 0x1f;
      if (iVar15 < 0) {
        iVar15 = iVar15 + 0x1f;
        bVar17 = bVar17 - 0x20;
      }
      *(uint *)(puVar24 + (longlong)(iVar15 >> 5) * 4) =
           *(uint *)(puVar24 + (longlong)(iVar15 >> 5) * 4) & ~(1 << (bVar17 & 0x1f));
    }
    else {
      iVar14 = *(int *)&(this->BlendShapes).field_0x30;
      iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar14 * 0x10);
      iVar15 = iVar15 + -1;
      *(int *)&(this->BlendShapes).field_0x30 = iVar3;
      *(int *)&(this->BlendShapes).field_0x34 = iVar15;
      if (iVar15 != 0) {
        *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x10) = 0xffffffff;
      }
    }
    pTVar22 = (TSparseSetElement<TTuple<EARFaceBlendShape,float>_> *)0x0;
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,&local_98,iVar14);
    if (local_98.Pointer != (TSparseSetElement<TTuple<EARFaceBlendShape,float>_> *)0x0) {
      *(char *)local_98.Pointer = (char)iVar28;
      *(undefined4 *)((longlong)local_98.Pointer + 4) = 0;
      *(undefined4 *)((longlong)local_98.Pointer + 8) = 0xffffffff;
      pTVar22 = local_98.Pointer;
    }
    bVar17 = *(byte *)pTVar22;
    local_res18[0] = local_98.Index;
    bVar13 = TSet<TTuple<enum_EARFaceBlendShape,float>,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>,FDefaultSetAllocator>
             ::TryReplaceExisting(this_00,(uint)bVar17,pTVar22,local_res18,(bool *)0x0);
    if (!bVar13) {
      uVar23 = 1;
      uVar19 = *(int *)puVar1 - *(int *)&(this->BlendShapes).field_0x34;
      if (3 < uVar19) {
        uVar20 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar23 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((int)uVar19 < 1) || ((int)uVar23 <= *(int *)&(this->BlendShapes).field_0x48)) {
        uVar19 = *(int *)&(this->BlendShapes).field_0x48 - 1U & (uint)bVar17;
        *(uint *)&pTVar22->field_0xc = uVar19;
        puVar24 = *(undefined1 **)&(this->BlendShapes).field_0x40;
        puVar18 = &(this->BlendShapes).field_0x38;
        if (puVar24 != (undefined1 *)0x0) {
          puVar18 = puVar24;
        }
        uVar20 = (longlong)*(int *)&(this->BlendShapes).field_0x48 - 1U & (ulonglong)uVar19;
        *(undefined4 *)&pTVar22->field_0x8 = *(undefined4 *)(puVar18 + uVar20 * 4);
        *(int *)(puVar18 + uVar20 * 4) = local_res18[0];
      }
      else {
        *(uint *)&(this->BlendShapes).field_0x48 = uVar23;
        if (*(longlong *)&(this->BlendShapes).field_0x40 != 0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->BlendShapes).field_0x40,0,0,4);
        }
        if (uVar23 != 0) {
          uVar19 = uVar23;
          if (uVar23 < 2) {
            if (*(longlong *)&(this->BlendShapes).field_0x40 != 0) {
              uVar19 = 0;
              goto LAB_14d283b4c;
            }
          }
          else {
LAB_14d283b4c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(this->BlendShapes).field_0x40,0,uVar19,4);
          }
          if (0 < (int)uVar23) {
            uVar25 = (ulonglong)uVar23;
            uVar20 = 0;
            do {
              puVar24 = *(undefined1 **)&(this->BlendShapes).field_0x40;
              puVar18 = &(this->BlendShapes).field_0x38;
              if (puVar24 != (undefined1 *)0x0) {
                puVar18 = puVar24;
              }
              uVar16 = uVar20 & (longlong)(int)uVar23 - 1U;
              uVar20 = uVar20 + 1;
              *(undefined4 *)(puVar18 + uVar16 * 4) = 0xffffffff;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
        }
        if (*(int *)&(this->BlendShapes).field_0x48 != 0) {
          iVar15 = *(int *)&(this->BlendShapes).field_0x28;
          puStack_80 = &(this->BlendShapes).field_0x10;
          uStack_84 = 1;
          local_88 = 0;
          iStack_74 = 0;
          iStack_70 = 0;
          local_68 = this_00;
          local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
          if (iVar15 != 0) {
            puVar4 = *(uint **)&(this->BlendShapes).field_0x20;
            puVar26 = (uint *)puStack_80;
            if (puVar4 != (uint *)0x0) {
              puVar26 = puVar4;
            }
            uVar19 = *puVar26;
            iStack_70 = 0;
            local_88 = 0;
            while (uVar19 == 0) {
              iStack_70 = iStack_70 + 0x20;
              lVar21 = (longlong)local_88;
              local_88 = local_88 + 1;
              if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88)
              goto LAB_14d283c3b;
              uVar19 = puVar26[lVar21 + 1];
            }
            uStack_84 = -uVar19 & uVar19;
            uVar20 = (ulonglong)uStack_84 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iStack_74 = iStack_70 + -1 + (int)lVar21;
            if (iVar15 < iStack_74) {
LAB_14d283c3b:
              local_78 = 0xffffffff;
              local_60._padding_ = CONCAT44(uStack_84,local_88);
              local_60.CurrentBitIndex = iVar15;
              local_60.UnvisitedBitMask = 0xffffffff;
              local_60._28_4_ = uStack_6c;
              local_60.BaseBitIndex = iStack_70;
              iStack_74 = iVar15;
              goto LAB_14d283d1b;
            }
          }
          local_78 = 0xffffffff;
          local_60._padding_ = CONCAT44(uStack_84,local_88);
          local_60.CurrentBitIndex = iStack_74;
          local_60.UnvisitedBitMask = 0xffffffff;
          local_60._28_4_ = uStack_6c;
          local_60.BaseBitIndex = iStack_70;
          iVar14 = iStack_74;
          if (iStack_74 < iVar15) {
            do {
              lVar21 = *(longlong *)&local_68->field_0x0;
              lVar27 = (longlong)iVar14;
              uVar19 = *(int *)&(this->BlendShapes).field_0x48 - 1U &
                       (uint)*(byte *)(lVar21 + lVar27 * 0x10);
              *(uint *)(lVar21 + 0xc + lVar27 * 0x10) = uVar19;
              puVar24 = *(undefined1 **)&(this->BlendShapes).field_0x40;
              puVar18 = &(this->BlendShapes).field_0x38;
              if (puVar24 != (undefined1 *)0x0) {
                puVar18 = puVar24;
              }
              uVar20 = (longlong)*(int *)&(this->BlendShapes).field_0x48 - 1U & (ulonglong)uVar19;
              *(undefined4 *)(lVar21 + 8 + lVar27 * 0x10) = *(undefined4 *)(puVar18 + uVar20 * 4);
              *(int *)(puVar18 + uVar20 * 4) = iVar14;
              local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
              iVar14 = local_60.CurrentBitIndex;
            } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
          }
        }
      }
    }
LAB_14d283d1b:
    iVar28 = iVar28 + 1;
    if (0x3c < iVar28) {
      return this;
    }
  } while( true );
}

// ~UAppleARKitFaceMeshComponent @ 14d2842c0

void __thiscall
UAppleARKitFaceMeshComponent::~UAppleARKitFaceMeshComponent(UAppleARKitFaceMeshComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UAppleARKitFaceMeshComponent__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LiveLinkSource).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BlendShapes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->BlendShapes);
  pFVar2 = (this->RemoteCurves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UProceduralMeshComponent::~UProceduralMeshComponent((UProceduralMeshComponent *)this);
  return;
}

// BuildUpdatedCurves @ 14d285e00

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
UAppleARKitFaceMeshComponent::BuildUpdatedCurves
          (UAppleARKitFaceMeshComponent *this,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *param_1)

{
  int *piVar1;
  TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  ENetMode EVar9;
  float *pfVar10;
  uint uVar11;
  FScriptContainerElement FVar12;
  FScriptContainerElement FVar13;
  
  pTVar2 = &this->RemoteCurves;
  piVar1 = &(this->RemoteCurves).ArrayMax;
  (this->RemoteCurves).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,1,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  fVar6 = __real_42fe0000;
  FVar12 = (FScriptContainerElement)0x0;
  do {
    pfVar10 = TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
              ::FindChecked(&this->BlendShapes,(EARFaceBlendShape)FVar12);
    fVar4 = *pfVar10;
    pfVar10 = TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
              ::FindChecked(param_1,(EARFaceBlendShape)FVar12);
    FVar13 = SUB41((int)(*pfVar10 * fVar6),0);
    if (SUB41((int)(fVar4 * fVar6),0) != FVar13) {
      uVar8 = (this->RemoteCurves).ArrayNum;
      if (uVar8 == *piVar1) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x102,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->RemoteCurves).ArrayNum = uVar8 + 1;
      uVar11 = 0;
      if ((int)uVar8 < (int)(uVar8 + 1)) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 2;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        *pFVar3 = FVar12;
        pFVar3[1] = FVar13;
      }
    }
    FVar12 = (FScriptContainerElement)((char)FVar12 + '\x01');
  } while ((byte)FVar12 < 0x3d);
  EVar9 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
  if (EVar9 == NM_Client) {
    ServerUpdateFaceCurves(this,pTVar2);
  }
  OnRep_RemoteCurves(this);
  return;
}

// CreateMesh @ 14d2867a0

void __thiscall
UAppleARKitFaceMeshComponent::CreateMesh
          (UAppleARKitFaceMeshComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_48;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_38;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UProceduralMeshComponent::CreateMeshSection_LinearColor
            ((UProceduralMeshComponent *)this,0,param_1,param_2,&local_18,param_3,&local_48,
             &local_48,&local_48,&local_28,&local_38,this->bWantsCollision,false);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FindFaceGeometry @ 14d287370

UARFaceGeometry * __thiscall
UAppleARKitFaceMeshComponent::FindFaceGeometry(UAppleARKitFaceMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UClass *pUVar4;
  ForAnyElementType FVar5;
  UARFaceGeometry *pUVar6;
  undefined1 local_res10 [8];
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_18;
  
  UARBlueprintLibrary::GetAllGeometries(&local_18);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar5.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UARTrackedGeometry_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    pUVar6 = *(UARFaceGeometry **)FVar5.Data;
    if (pUVar6 != (UARFaceGeometry *)0x0) {
      pUVar4 = Z_Construct_UClass_UARFaceGeometry_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) goto LAB_14d2873e8;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  pUVar6 = (UARFaceGeometry *)0x0;
LAB_14d2873e8:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar6;
}

// GetFaceBlendShapeAmount @ 14d287610

float __thiscall
UAppleARKitFaceMeshComponent::GetFaceBlendShapeAmount
          (UAppleARKitFaceMeshComponent *this,EARFaceBlendShape param_1)

{
  longlong lVar1;
  int iVar2;
  float *pfVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->BlendShapes).field_0x8 != *(int *)&(this->BlendShapes).field_0x34) {
    puVar4 = *(undefined1 **)&(this->BlendShapes).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->BlendShapes).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->BlendShapes).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->BlendShapes;
      do {
        if (*(EARFaceBlendShape *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pfVar3 = TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
                   ::FindChecked(&this->BlendShapes,param_1);
          return *pfVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetLastUpdateFrameNumber @ 14d2876b0

int __thiscall
UAppleARKitFaceMeshComponent::GetLastUpdateFrameNumber(UAppleARKitFaceMeshComponent *this)

{
  return this->LastUpdateFrameNumber;
}

// GetLastUpdateTimestamp @ 14d2876c0

float __thiscall
UAppleARKitFaceMeshComponent::GetLastUpdateTimestamp(UAppleARKitFaceMeshComponent *this)

{
  return (float)this->LastUpdateTimestamp;
}

// GetLifetimeReplicatedProps @ 14d2876e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAppleARKitFaceMeshComponent::GetLifetimeReplicatedProps
          (UAppleARKitFaceMeshComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  USceneComponent::GetLifetimeReplicatedProps((USceneComponent *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0xc,L"RemoteCurves",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetMaterial @ 14d2877b0

UMaterialInterface * __thiscall
UAppleARKitFaceMeshComponent::GetMaterial(UAppleARKitFaceMeshComponent *this,int param_1)

{
  if (param_1 == 0) {
    return (this->FaceMaterial).field0_0x0.DebugPtr;
  }
  return (UMaterialInterface *)0x0;
}

// GetPrivateStaticClass @ 14d287810

UClass * __cdecl UAppleARKitFaceMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKitFaceSupport",L"AppleARKitFaceMeshComponent",
               &Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton,
               StaticRegisterNativesUAppleARKitFaceMeshComponent,0x710,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleARKitFaceMeshComponent>,
               InternalVTableHelperCtorCaller<UAppleARKitFaceMeshComponent>,local_res8,
               UProceduralMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.InnerSingleton;
}

// GetRenderMatrix @ 14d287990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __thiscall
UAppleARKitFaceMeshComponent::GetRenderMatrix
          (UAppleARKitFaceMeshComponent *this,TMatrix<double> *__return_storage_ptr__)

{
  EARFaceComponentTransformMixing EVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_128 [32];
  TTransform<double> local_108;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  EVar1 = this->TransformSetting;
  uVar10 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar11 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108.Rotation.XY.m128d_f64[1]._0_4_ = uVar10;
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ = uVar11;
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  uVar12 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar13 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ = uVar12;
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1]._4_4_ = uVar13;
  dVar2 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar3 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  dVar4 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dVar5 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  if (EVar1 == ComponentOnly) {
    local_108.Rotation.XY.m128d_f64[0] = (double)this->_padding_;
    local_108.Rotation.XY.m128d_f64[1] = (double)this->_padding_;
    local_108.Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
    local_108.Rotation.ZW.m128d_f64[1] = (double)this->_padding_;
    uVar10 = (undefined4)this->_padding_;
    uVar11 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar12 = (undefined4)this->_padding_;
    uVar13 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar14 = (undefined4)this->_padding_;
    uVar15 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar16 = (undefined4)this->_padding_;
    uVar17 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar6 = (undefined4)this->_padding_;
    uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar8 = (undefined4)this->_padding_;
    uVar9 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_108.Translation.ZW.m128d_f64[0]._0_4_ = (undefined4)this->_padding_;
    local_108.Translation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ = (undefined4)this->_padding_;
    local_108.Translation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  }
  else {
    if (EVar1 == ComponentLocationTrackedRotation) {
      local_108.Translation.XY.m128d_f64[0] = (double)this->_padding_;
      local_108.Translation.XY.m128d_f64[1] = (double)this->_padding_;
      local_108.Translation.ZW.m128d_f64[0] = (double)this->_padding_;
      local_108.Translation.ZW.m128d_f64[1] = (double)this->_padding_;
      dVar2 = (double)this->_padding_;
      dVar3 = (double)this->_padding_;
      dVar4 = (double)this->_padding_;
      dVar5 = (double)this->_padding_;
      local_108.Rotation.XY.m128d_f64 = *&(this->LocalToWorldTransform).Rotation.XY.m128d_f64;
      local_108.Rotation.ZW.m128d_f64[0] = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
      goto LAB_14d287b2f;
    }
    if (EVar1 == ComponentWithTracked) {
      local_88.Rotation.XY.m128d_f64[1]._0_4_ = uVar10;
      local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_88.Rotation.XY.m128d_f64[1]._4_4_ = uVar11;
      local_88.Translation.ZW.m128d_f64[1]._0_4_ = uVar12;
      local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_88.Translation.ZW.m128d_f64[1]._4_4_ = uVar13;
      local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_88.Scale3D.XY.m128d_f64[0] = dVar2;
      local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_88.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
      local_88.Scale3D.ZW.m128d_f64[0] = dVar4;
      local_88.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_88.Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
      local_88.Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
      local_88.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
      local_88.Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply
                (&local_88,(TTransform<double> *)&this->_padding_,&this->LocalToWorldTransform);
      local_108.Rotation.XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
      local_108.Rotation.XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
      local_108.Rotation.ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
      uVar6 = local_88.Translation.XY.m128d_f64[0]._0_4_;
      uVar7 = local_88.Translation.XY.m128d_f64[0]._4_4_;
      uVar8 = local_88.Translation.XY.m128d_f64[1]._0_4_;
      uVar9 = local_88.Translation.XY.m128d_f64[1]._4_4_;
      local_108.Translation.ZW.m128d_f64[0]._0_4_ = local_88.Translation.ZW.m128d_f64[0]._0_4_;
      local_108.Translation.ZW.m128d_f64[0]._4_4_ = local_88.Translation.ZW.m128d_f64[0]._4_4_;
      local_108.Translation.ZW.m128d_f64[1]._0_4_ = local_88.Translation.ZW.m128d_f64[1]._0_4_;
      local_108.Translation.ZW.m128d_f64[1]._4_4_ = local_88.Translation.ZW.m128d_f64[1]._4_4_;
      uVar10 = local_88.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar11 = local_88.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar12 = local_88.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar13 = local_88.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar14 = local_88.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar15 = local_88.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar16 = local_88.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar17 = local_88.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    else {
      if (EVar1 != TrackingOnly) goto LAB_14d287b2f;
      local_108.Rotation.XY.m128d_f64 = *&(this->LocalToWorldTransform).Rotation.XY.m128d_f64;
      local_108.Rotation.ZW.m128d_f64[0] = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
      local_108.Rotation.ZW.m128d_f64[1] = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
      uVar6 = *(undefined4 *)(this->LocalToWorldTransform).Translation.XY.m128d_f64;
      uVar7 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Translation.XY.m128d_f64 + 4);
      uVar8 = *(undefined4 *)((this->LocalToWorldTransform).Translation.XY.m128d_f64 + 1);
      uVar9 = *(undefined4 *)
               ((longlong)(this->LocalToWorldTransform).Translation.XY.m128d_f64 + 0xc);
      local_108.Translation.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->LocalToWorldTransform).Translation.ZW.m128d_f64;
      local_108.Translation.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->LocalToWorldTransform).Translation.ZW.m128d_f64 + 4);
      local_108.Translation.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->LocalToWorldTransform).Translation.ZW.m128d_f64 + 1);
      local_108.Translation.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->LocalToWorldTransform).Translation.ZW.m128d_f64 + 0xc);
      uVar10 = *(undefined4 *)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64;
      uVar11 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 4);
      uVar12 = *(undefined4 *)((this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 1);
      uVar13 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 0xc);
      uVar14 = *(undefined4 *)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
      uVar15 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
      uVar16 = *(undefined4 *)((this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1);
      uVar17 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 0xc);
    }
  }
  dVar5 = (double)CONCAT44(uVar17,uVar16);
  dVar4 = (double)CONCAT44(uVar15,uVar14);
  dVar3 = (double)CONCAT44(uVar13,uVar12);
  dVar2 = (double)CONCAT44(uVar11,uVar10);
  local_108.Translation.XY.m128d_f64[0] = (double)CONCAT44(uVar7,uVar6);
  local_108.Translation.XY.m128d_f64[1] = (double)CONCAT44(uVar9,uVar8);
LAB_14d287b2f:
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar3 * _UNK_1512468d8,0);
  local_108.Scale3D.XY.m128d_f64[0] = dVar2 * ___xmm_40590000000000004059000000000000;
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(dVar3 * _UNK_1512468d8) >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5 * 0.0,0);
  local_108.Scale3D.ZW.m128d_f64[0] = dVar4 * __real_4059000000000000;
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(dVar5 * 0.0) >> 0x20);
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_108,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTransform @ 14d2880d0

TTransform<double> * __thiscall
UAppleARKitFaceMeshComponent::GetTransform
          (UAppleARKitFaceMeshComponent *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->LocalToWorldTransform).Translation.XY.m128d_f64[0];
  dVar4 = (this->LocalToWorldTransform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// InitializeComponent @ 14d288590

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
UAppleARKitFaceMeshComponent::InitializeComponent(UAppleARKitFaceMeshComponent *this)

{
  UActorComponent::InitializeComponent((UActorComponent *)this);
  if (this->bAutoBindToLocalFaceMesh != false) {
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,true);
    return;
  }
  return;
}

// OnRep_RemoteCurves @ 14d288d80

void __thiscall UAppleARKitFaceMeshComponent::OnRep_RemoteCurves(UAppleARKitFaceMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ILiveLinkSourceARKit *pIVar3;
  float fVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FQualifiedFrameTime *pFVar7;
  code *pcVar8;
  undefined1 local_res8 [8];
  FScriptContainerElement local_res10 [8];
  float local_res18 [2];
  undefined8 local_res20;
  LARGE_INTEGER local_80;
  FQualifiedFrameTime local_78;
  FQualifiedFrameTime local_68;
  undefined1 local_58;
  
  fVar4 = __real_3c010204;
  iVar2 = (this->RemoteCurves).ArrayNum;
  if (0 < iVar2) {
    pFVar6 = (this->RemoteCurves).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 2;
    while( true ) {
      if ((this->RemoteCurves).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNetQuantizeFaceCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      local_res18[0] = (float)(int)(char)pFVar6[1] * fVar4;
      if ((0x3c < (byte)*pFVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlendShape < (uint8)EARFaceBlendShape::MAX",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Public\\AppleARKitFaceMeshComponent.h"
                             ,0x33,L""), bVar5)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_res10[0] = *pFVar6;
      TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
      ::Emplace<enum_EARFaceBlendShape,float>
                (&this->BlendShapes,(EARFaceBlendShape *)local_res10,local_res18);
      pFVar6 = pFVar6 + 2;
    }
    QueryPerformanceCounter(&local_80);
    pIVar3 = (this->LiveLinkSource).Object;
    this->LastUpdateTimestamp =
         (double)local_80.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
    ;
    if (pIVar3 != (ILiveLinkSourceARKit *)0x0) {
      local_58 = FApp::CurrentFrameTime.bIsSet;
      if (FApp::CurrentFrameTime.bIsSet == false) {
        pFVar7 = &local_78;
        local_78.Rate.Numerator = 0x18;
        local_78.Rate.Denominator = 1;
        pcVar8 = *(code **)(*(longlong *)pIVar3 + 8);
        local_78.Time.FrameNumber.Value = 0;
        local_78.Time.SubFrame = 0.0;
      }
      else {
        local_res20 = 0;
        pFVar7 = &local_68;
        local_68 = FApp::CurrentFrameTime.TypedValue;
        pcVar8 = *(code **)(*(longlong *)pIVar3 + 8);
      }
      (*pcVar8)(pIVar3,this->LiveLinkSubjectName,pFVar7,&this->BlendShapes,0);
    }
  }
  return;
}

// PublishViaLiveLink @ 14d28a750

void __thiscall
UAppleARKitFaceMeshComponent::PublishViaLiveLink(UAppleARKitFaceMeshComponent *this,FName param_1)

{
  TSharedPtr<ILiveLinkSourceARKit,1> *pTVar1;
  TSharedPtr<ILiveLinkSourceARKit,1> *pTVar2;
  TSharedPtr<ILiveLinkSourceARKit,1> local_18;
  
  pTVar1 = &this->LiveLinkSource;
  this->LiveLinkSubjectName = param_1;
  if (pTVar1->Object == (ILiveLinkSourceARKit *)0x0) {
    pTVar2 = FAppleARKitLiveLinkSourceFactory::CreateLiveLinkSource(&local_18);
    if (pTVar1 != pTVar2) {
      pTVar1->Object = pTVar2->Object;
      pTVar2->Object = (ILiveLinkSourceARKit *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LiveLinkSource).SharedReferenceCount,&pTVar2->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ServerUpdateFaceCurves @ 14d28ae30

void __thiscall
UAppleARKitFaceMeshComponent::ServerUpdateFaceCurves
          (UAppleARKitFaceMeshComponent *this,
          TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdateFaceCurves_Implementation @ 14d28af00

void __thiscall
UAppleARKitFaceMeshComponent::ServerUpdateFaceCurves_Implementation
          (UAppleARKitFaceMeshComponent *this,
          TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_>::operator=(&this->RemoteCurves,param_1);
  OnRep_RemoteCurves(this);
  return;
}

// ServerUpdateFaceCurves_Validate @ 14d28af30

bool __thiscall
UAppleARKitFaceMeshComponent::ServerUpdateFaceCurves_Validate
          (UAppleARKitFaceMeshComponent *this,
          TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  return param_1->ArrayNum < 0x3d;
}

// SetAutoBind @ 14d28af40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAppleARKitFaceMeshComponent::SetAutoBind(UAppleARKitFaceMeshComponent *this,bool param_1)

{
  if (this->bAutoBindToLocalFaceMesh != param_1) {
    this->bAutoBindToLocalFaceMesh = param_1;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,param_1);
    return;
  }
  return;
}

// SetBlendShapeAmount @ 14d28af60

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
UAppleARKitFaceMeshComponent::SetBlendShapeAmount
          (UAppleARKitFaceMeshComponent *this,EARFaceBlendShape param_1,float param_2)

{
  TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ILiveLinkSourceARKit *pIVar5;
  float fVar6;
  bool bVar7;
  ENetMode EVar8;
  float *pfVar9;
  EARFaceBlendShape *pEVar10;
  UFunction *pUVar11;
  FScriptContainerElement *pFVar12;
  FQualifiedFrameTime *pFVar13;
  code *pcVar14;
  EARFaceBlendShape EVar15;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res18 [8];
  float local_res20 [2];
  LARGE_INTEGER local_88;
  TArray<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_> local_80;
  FQualifiedFrameTime local_70;
  FQualifiedFrameTime local_60;
  undefined1 local_50;
  
  pTVar1 = &this->RemoteCurves;
  (this->RemoteCurves).ArrayNum = 0;
  if ((this->RemoteCurves).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,1,0,&pTVar1->AllocatorInstance,0,&(this->RemoteCurves).ArrayMax);
  }
  pfVar9 = TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
           ::FindChecked(&this->BlendShapes,param_1);
  EVar15 = (EARFaceBlendShape)(int)(param_2 * __real_42fe0000);
  if ((EARFaceBlendShape)(int)(*pfVar9 * __real_42fe0000) != EVar15) {
    pEVar10 = operator_new<FNetQuantizeFaceCurve,TSizedDefaultAllocator<32>_>(2,pTVar1);
    if (pEVar10 != (EARFaceBlendShape *)0x0) {
      *pEVar10 = param_1;
      pEVar10[1] = EVar15;
    }
  }
  EVar8 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
  if (EVar8 == NM_Client) {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    if (&local_80 != pTVar1) {
      uVar2 = (this->RemoteCurves).ArrayNum;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      local_80.ArrayMax = 0;
      local_80.ArrayNum = uVar2;
      if (uVar2 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,1,uVar2,0,&local_80.AllocatorInstance,uVar2,&local_80.ArrayMax);
        memcpy(local_80.AllocatorInstance.Data,pFVar4,(longlong)(int)uVar2 * 2);
      }
    }
    pUVar11 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar11,&local_80);
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  fVar6 = __real_3c010204;
  iVar3 = (this->RemoteCurves).ArrayNum;
  if (0 < iVar3) {
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    pFVar4 = pFVar12 + (longlong)iVar3 * 2;
    while( true ) {
      if ((this->RemoteCurves).ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNetQuantizeFaceCurve,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar12 == pFVar4) break;
      local_res20[0] = (float)(int)(char)pFVar12[1] * fVar6;
      if (0x3c < (byte)*pFVar12) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BlendShape < (uint8)EARFaceBlendShape::MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Public\\AppleARKitFaceMeshComponent.h"
                           ,0x33,L"");
        if (bVar7) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      local_res8[0] = *pFVar12;
      TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
      ::Emplace<enum_EARFaceBlendShape,float>
                (&this->BlendShapes,(EARFaceBlendShape *)local_res8,local_res20);
      pFVar12 = pFVar12 + 2;
    }
    QueryPerformanceCounter(&local_88);
    pIVar5 = (this->LiveLinkSource).Object;
    this->LastUpdateTimestamp =
         (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
    ;
    if (pIVar5 != (ILiveLinkSourceARKit *)0x0) {
      local_50 = FApp::CurrentFrameTime.bIsSet;
      if (FApp::CurrentFrameTime.bIsSet == false) {
        pFVar13 = &local_70;
        local_70.Time.FrameNumber.Value = 0;
        local_70.Time.SubFrame = 0.0;
        local_70.Rate.Numerator = 0x18;
        pcVar14 = *(code **)(*(longlong *)pIVar5 + 8);
        local_70.Rate.Denominator = 1;
      }
      else {
        pFVar13 = &local_60;
        local_60 = FApp::CurrentFrameTime.TypedValue;
        pcVar14 = *(code **)(*(longlong *)pIVar5 + 8);
      }
      (*pcVar14)(pIVar5,this->LiveLinkSubjectName,pFVar13,&this->BlendShapes,0);
    }
  }
  return;
}

// SetBlendShapes @ 14d28b210

void __thiscall
UAppleARKitFaceMeshComponent::SetBlendShapes
          (UAppleARKitFaceMeshComponent *this,
          TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
          *param_1)

{
  LARGE_INTEGER local_res8;
  
  this->LastUpdateFrameNumber = this->LastUpdateFrameNumber + 1;
  QueryPerformanceCounter(&local_res8);
  this->LastUpdateTimestamp =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  BuildUpdatedCurves(this,param_1);
  return;
}

// SetMaterial @ 14d28b270

void __thiscall
UAppleARKitFaceMeshComponent::SetMaterial
          (UAppleARKitFaceMeshComponent *this,int param_1,UMaterialInterface *param_2)

{
  if (param_1 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->FaceMaterial).field0_0x0.DebugPtr = param_2;
  }
  return;
}

// StaticRegisterNativesUAppleARKitFaceMeshComponent @ 14d28b4b0

void __cdecl UAppleARKitFaceMeshComponent::StaticRegisterNativesUAppleARKitFaceMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14d28c120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UAppleARKitFaceMeshComponent::TickComponent
          (UAppleARKitFaceMeshComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FaceAR_Component_Update> FVar14;
  UClass *pUVar15;
  TTransform<double> *pTVar16;
  TQuat<double> *pTVar17;
  TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
  *pTVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar19;
  FNameEntryId FVar20;
  ForAnyElementType FVar21;
  UARFaceGeometry *this_02;
  float fVar22;
  undefined1 auStackY_168 [32];
  LARGE_INTEGER local_108;
  undefined1 local_100 [8];
  TArray<UARTrackedGeometry_*,TSizedDefaultAllocator<32>_> local_f8;
  FName local_e8;
  TRotator<double> local_d8;
  TQuat<double> local_b8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FVar14 = StatPtr_STAT_FaceAR_Component_Update;
  if (StatPtr_STAT_FaceAR_Component_Update ==
      (FThreadSafeStaticStat<FStat_STAT_FaceAR_Component_Update>)0x0) {
    pFVar13 = ::FName::FName((FName *)&local_f8,"STAT_FaceAR_Component_Update");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FaceAR_Component_Update>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FaceAR_Component_Update,*pFVar13,
                        L"Update","STATGROUP_FaceAR","STATCAT_Advanced",L"Face AR",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar20 = FVar19.ComparisonIndex.Value;
  uVar11 = FVar19.Number;
  if ((FVar20.Value == 0) && (uVar11 == 0)) {
LAB_14d28c268:
    bVar9 = false;
    FVar19 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.s.LowPart = FVar20.Value;
        local_108.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AR\\AppleAR\\AppleARKitFaceSupport\\Source\\AppleARKitFaceSupport\\Private\\AppleARKitFaceMeshComponent.cpp"
                   ,0x14a);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d28c268;
    local_108.s.LowPart = FVar20.Value;
    local_108.s.HighPart = uVar11;
    local_e8 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar9 = true;
  }
  if (this->bAutoBindToLocalFaceMesh != false) {
    UARBlueprintLibrary::GetAllGeometries(&local_f8);
    iVar12 = local_f8.ArrayNum;
    pFVar2 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 8;
    FVar21.Data = local_f8.AllocatorInstance.Data;
    do {
      if (local_f8.ArrayNum != iVar12) {
        `TCheckedPointerIterator<UARTrackedGeometry_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_100);
      }
      if (FVar21.Data == pFVar2) {
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
        this_02 = (UARFaceGeometry *)0x0;
        goto LAB_14d28c309;
      }
      this_02 = *(UARFaceGeometry **)FVar21.Data;
      if (this_02 != (UARFaceGeometry *)0x0) {
        pUVar15 = Z_Construct_UClass_UARFaceGeometry_NoRegister();
        iVar4 = (int)pUVar15->_padding_;
        if ((iVar4 <= *(int *)(this_02->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar15->_padding_)) goto LAB_14d28c2e7;
      }
      FVar21.Data = FVar21.Data + 8;
    } while( true );
  }
LAB_14d28c480:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f8.ArrayNum = local_e8.ComparisonIndex.Value;
      local_f8.ArrayMax = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_108);
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)(ulonglong)local_108.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_f8);
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
LAB_14d28c2e7:
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
LAB_14d28c309:
  if (this_02 != (UARFaceGeometry *)0x0) {
    pTVar16 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this_02,&local_98);
    bVar3 = this->bFlipTrackedRotation;
    dVar5 = (pTVar16->Rotation).XY.m128d_f64[1];
    (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
    (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar16->Rotation).ZW.m128d_f64[1];
    (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
    (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar16->Translation).XY.m128d_f64[1];
    (this->LocalToWorldTransform).Translation.XY.m128d_f64[0] =
         (pTVar16->Translation).XY.m128d_f64[0];
    (this->LocalToWorldTransform).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar16->Translation).ZW.m128d_f64[1];
    (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0] =
         (pTVar16->Translation).ZW.m128d_f64[0];
    (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar16->Scale3D).XY.m128d_f64[1];
    (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
    (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar16->Scale3D).ZW.m128d_f64[1];
    (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
    (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
    if (bVar3 != false) {
      local_b8.X = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
      local_b8.Y = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
      local_b8.Z = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
      local_b8.W = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
      UE::Math::TRotator<double>::TRotator<double>(&local_d8,&local_b8);
      local_d8.Yaw = local_d8.Yaw + __real_c066800000000000;
      local_d8.Pitch =
           (double)CONCAT44((uint)((ulonglong)local_d8.Pitch >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_d8.Pitch,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_d8.Roll =
           (double)CONCAT44((uint)((ulonglong)local_d8.Roll >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_d8.Roll,0) ^ (uint)__xmm_80000000000000008000000000000000);
      pTVar17 = UE::Math::TRotator<double>::Quaternion(&local_d8,&local_b8);
      dVar5 = pTVar17->Y;
      dVar6 = pTVar17->Z;
      dVar7 = pTVar17->W;
      (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] = pTVar17->X;
      (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = dVar5;
      (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = dVar6;
      (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar7;
    }
    uVar11 = UARTrackedGeometry::GetLastUpdateFrameNumber((UARTrackedGeometry *)this_02);
    this->LastUpdateFrameNumber = uVar11;
    fVar22 = UARTrackedGeometry::GetLastUpdateTimestamp((UARTrackedGeometry *)this_02);
    this->LastUpdateTimestamp = (double)fVar22;
    pTVar18 = UARFaceGeometry::GetBlendShapes
                        (this_02,(TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
                                  *)&local_98);
    BuildUpdatedCurves(this,pTVar18);
    local_98.Scale3D.XY.m128d_f64[1]._0_4_ = 0;
    if ((void *)local_98.Scale3D.XY.m128d_f64[0] != (void *)0x0) {
      FMemory::Free((void *)local_98.Scale3D.XY.m128d_f64[0]);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    iVar12 = UProceduralMeshComponent::GetNumSections((UProceduralMeshComponent *)this);
    if (iVar12 < 1) {
      CreateMesh(this,&this_02->VertexBuffer,&this_02->IndexBuffer,&this_02->UVs);
    }
    else {
      UpdateMesh(this,&this_02->VertexBuffer);
    }
  }
  goto LAB_14d28c480;
}

// UpdateMesh @ 14d28ca00

void __thiscall
UAppleARKitFaceMeshComponent::UpdateMesh
          (UAppleARKitFaceMeshComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_48;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_38;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  UProceduralMeshComponent::UpdateMeshSection_LinearColor
            ((UProceduralMeshComponent *)this,0,param_1,&local_18,&local_28,&local_58,&local_58,
             &local_58,&local_38,&local_48,true);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UpdateMeshFromBlendShapes @ 14d28cae0

void __thiscall
UAppleARKitFaceMeshComponent::UpdateMeshFromBlendShapes(UAppleARKitFaceMeshComponent *this)

{
  *&(this->LocalToWorldTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalToWorldTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalToWorldTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalToWorldTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ValidateGeneratedRepEnums @ 14d28cee0

void __thiscall
UAppleARKitFaceMeshComponent::ValidateGeneratedRepEnums
          (UAppleARKitFaceMeshComponent *this,
          TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_RemoteCurves,L"RemoteCurves");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0x12) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x110);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_RemoteCurves != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\AppleARKitFaceSupport\\UHT\\AppleARKitFaceMeshComponent.gen.cpp"
                       ,0x46b,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAppleARKitFaceMeshComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// execCreateMesh @ 14d28d1f0

void __cdecl
UAppleARKitFaceMeshComponent::execCreateMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar2 = &local_18;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pTVar3 = &local_28;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar4 = &local_38;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CreateMesh((UAppleARKitFaceMeshComponent *)param_1,pTVar2,pTVar3,pTVar4);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetFaceBlendShapeAmount @ 14d28d390

void __cdecl
UAppleARKitFaceMeshComponent::execGetFaceBlendShapeAmount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *puVar5;
  float fVar6;
  EARFaceBlendShape local_res8 [8];
  
  local_res8[0] = EyeBlinkLeft;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar6 = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(param_1 + 0x28) != *(int *)&param_1[0x29].field_0x4) {
    puVar5 = *(undefined1 **)&param_1[0x29].field_0x10;
    if (*(undefined1 **)&param_1[0x29].field_0x10 == (undefined1 *)0x0) {
      puVar5 = &param_1[0x29].field_0x8;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&param_1[0x29].field_0x18 - 1) &
                              (ulonglong)local_res8[0]) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&param_1[0x27].field_0x20;
      do {
        if (*(EARFaceBlendShape *)(lVar2 + (longlong)iVar3 * 0x10) == local_res8[0]) {
          pfVar4 = TMapBase<enum_EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARFaceBlendShape,float,0>_>
                   ::FindChecked(&param_1[0x27].field_0x20,local_res8[0]);
          fVar6 = *pfVar4;
          break;
        }
        iVar3 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  *(float *)param_3 = fVar6;
  return;
}

// execGetLastUpdateFrameNumber @ 14d28d480

void __cdecl
UAppleARKitFaceMeshComponent::execGetLastUpdateFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2c].field_0x10;
  return;
}

// execGetLastUpdateTimestamp @ 14d28d4b0

void __cdecl
UAppleARKitFaceMeshComponent::execGetLastUpdateTimestamp
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 = (float)*(double *)&param_1[0x2c].field_0x18;
  return;
}

// execGetTransform @ 14d28d4e0

void __cdecl
UAppleARKitFaceMeshComponent::execGetTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x2a].field_0x8;
  uVar2 = *(undefined8 *)&param_1[0x2a].field_0x10;
  uVar3 = *(undefined8 *)&param_1[0x2a].field_0x18;
  uVar4 = *(undefined8 *)&param_1[0x2a].field_0x20;
  uVar5 = *(undefined8 *)(param_1 + 0x2b);
  uVar6 = *(undefined8 *)&param_1[0x2b].field_0x8;
  uVar7 = *(undefined8 *)&param_1[0x2b].field_0x10;
  uVar8 = *(undefined8 *)&param_1[0x2b].field_0x18;
  uVar9 = *(undefined8 *)&param_1[0x2b].field_0x20;
  uVar10 = *(undefined8 *)(param_1 + 0x2c);
  uVar11 = *(undefined8 *)&param_1[0x2c].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x2a);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar11;
  return;
}

// execOnRep_RemoteCurves @ 14d28d550

void __cdecl
UAppleARKitFaceMeshComponent::execOnRep_RemoteCurves(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRep_RemoteCurves((UAppleARKitFaceMeshComponent *)param_1);
  return;
}

// execPublishViaLiveLink @ 14d28d570

void __cdecl
UAppleARKitFaceMeshComponent::execPublishViaLiveLink(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  longlong lVar3;
  TSharedPtr<ILiveLinkSourceARKit,1> *pTVar4;
  undefined8 local_res8;
  TSharedPtr<ILiveLinkSourceARKit,1> local_18;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = &param_1[0x2c].field_0x20;
  lVar3 = *(longlong *)puVar1;
  *(undefined8 *)&param_1[0x27].field_0x8 = local_res8;
  if (lVar3 == 0) {
    pTVar4 = FAppleARKitLiveLinkSourceFactory::CreateLiveLinkSource(&local_18);
    if ((TSharedPtr<ILiveLinkSourceARKit,1> *)puVar1 != pTVar4) {
      *(ILiveLinkSourceARKit **)puVar1 = pTVar4->Object;
      pTVar4->Object = (ILiveLinkSourceARKit *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(param_1 + 0x2d),&pTVar4->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// execServerUpdateFaceCurves @ 14d28d640

void __cdecl
UAppleARKitFaceMeshComponent::execServerUpdateFaceCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0xb28))(param_1,&local_18);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateFaceCurves_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0xb30))(param_1,&local_18);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetAutoBind @ 14d28d710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAppleARKitFaceMeshComponent::execSetAutoBind(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)param_1[0x26].field_0x22 != bVar2) {
    param_1[0x26].field_0x22 = bVar2;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&param_1[1].field_0x10,bVar2);
  }
  return;
}

// execSetBlendShapeAmount @ 14d28d7b0

void __cdecl
UAppleARKitFaceMeshComponent::execSetBlendShapeAmount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EARFaceBlendShape local_res10 [16];
  float local_res20 [2];
  
  local_res10[0] = EyeBlinkLeft;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBlendShapeAmount((UAppleARKitFaceMeshComponent *)param_1,local_res10[0],local_res20[0]);
  return;
}

// execSetBlendShapes @ 14d28d880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAppleARKitFaceMeshComponent::execSetBlendShapes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
  *pTVar3;
  undefined1 auStackY_b8 [32];
  LARGE_INTEGER local_88 [2];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
            *)local_78;
  if ((TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
       *)param_2->MostRecentPropertyAddress !=
      (TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
       *)0x0) {
    pTVar3 = (TMap<EARFaceBlendShape,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EARFaceBlendShape,float,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[0x2c].field_0x10 = *(int *)&param_1[0x2c].field_0x10 + 1;
  QueryPerformanceCounter(local_88);
  *(double *)&param_1[0x2c].field_0x18 =
       (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  BuildUpdatedCurves((UAppleARKitFaceMeshComponent *)param_1,pTVar3);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execUpdateMesh @ 14d28da30

void __cdecl
UAppleARKitFaceMeshComponent::execUpdateMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateMesh((UAppleARKitFaceMeshComponent *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execUpdateMeshFromBlendShapes @ 14d28dae0

void __cdecl
UAppleARKitFaceMeshComponent::execUpdateMeshFromBlendShapes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  *(double *)&param_1[0x2a].field_0x0 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  *(double *)&param_1[0x2a].field_0x8 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  *(double *)&param_1[0x2a].field_0x10 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  *(double *)&param_1[0x2a].field_0x18 = dVar1;
  *(double (*) [2])&param_1[0x2a].field_0x20 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  *(double *)&param_1[0x2b].field_0x8 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  *(double *)&param_1[0x2b].field_0x10 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  *(double *)&param_1[0x2b].field_0x18 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  *(double *)&param_1[0x2b].field_0x20 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  *(double *)&param_1[0x2c].field_0x0 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  *(double *)&param_1[0x2c].field_0x8 = dVar1;
  return;
}

