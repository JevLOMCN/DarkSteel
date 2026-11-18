// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 90

// StaticClass @ 14ce186b0

UClass * __cdecl UGeometryScriptLibrary_MeshUVFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshUVFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_MeshUVFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshUVFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshUVFunctions @ 14ce26dc0

UGeometryScriptLibrary_MeshUVFunctions * __thiscall
UGeometryScriptLibrary_MeshUVFunctions::UGeometryScriptLibrary_MeshUVFunctions
          (UGeometryScriptLibrary_MeshUVFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshUVFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshUVFunctions @ 14ce26df0

UGeometryScriptLibrary_MeshUVFunctions * __thiscall
UGeometryScriptLibrary_MeshUVFunctions::UGeometryScriptLibrary_MeshUVFunctions
          (UGeometryScriptLibrary_MeshUVFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshUVFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshUVFunctions @ 14ce274d0

void __thiscall
UGeometryScriptLibrary_MeshUVFunctions::~UGeometryScriptLibrary_MeshUVFunctions
          (UGeometryScriptLibrary_MeshUVFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshUVFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce2fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::ApplyTexelDensityUVScaling'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  char cVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGeometryScriptMeshSelection *this_00;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  FText *pFVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  atomic<int> *paVar20;
  FDynamicMesh3 *pFVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  undefined1 auStackY_388 [32];
  uint local_358;
  uint uStack_354;
  uint uStack_344;
  uint uStack_340;
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  FDynamicMesh3 *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_320;
  undefined1 local_2f8 [176];
  undefined1 local_248 [80];
  undefined1 local_1f8 [80];
  TVector2<float>_u_0 local_1a8;
  undefined4 local_198;
  int local_194;
  undefined4 local_18c;
  FDynamicMesh3 *local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  FSparseArrayAllocationInfo local_118;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_108;
  FText local_f8;
  TQuaternion<double>_u_0 local_e8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_328 = param_1;
  local_180 = this;
  pTVar10 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3>
                      (&local_108,param_1);
  pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
  pFVar21 = pTVar10->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar20 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar20 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  local_188 = pFVar21;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)local_2f8);
  uVar17 = 0;
  local_2f8._160_4_ = 0x400;
  local_2f8._0_8_ = &___7FUVEditorTexelDensityOp_Geometry_UE__6B_;
  local_1a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_2f8._152_8_ = 0;
  local_2f8._164_4_ = 100;
  local_2f8._168_4_ = 0x400;
  local_2f8[0xac] = false;
  local_248._0_8_ = (void *)0x0;
  local_248._8_4_ = 0;
  local_248._12_4_ = -1;
  local_248._32_8_ = (void *)0x0;
  local_248._40_4_ = 0;
  local_248._44_4_ = 0x80;
  local_248._48_4_ = 0xffffffff;
  local_248._52_4_ = 0;
  local_248._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_248._72_4_ = 0;
  local_1f8._0_8_ = (void *)0x0;
  local_1f8._8_4_ = 0;
  local_1f8._12_4_ = -1;
  local_1f8._32_8_ = (void *)0x0;
  local_1f8._40_4_ = 0;
  local_1f8._44_4_ = 0x80;
  local_1f8._48_4_ = 0xffffffff;
  local_1f8._52_4_ = 0;
  local_1f8._64_8_ = (void *)0x0;
  local_1f8._72_4_ = 0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  local_178 = 0;
  uStack_170 = 0;
  local_2f8._136_8_ = pFVar21;
  local_2f8._144_8_ = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  cVar3 = **(char **)this;
  if (cVar3 == '\0') {
    local_2f8._152_4_ = 1;
  }
  else if (cVar3 == '\x01') {
    local_2f8._152_8_ = (ulonglong)(uint)local_2f8._156_4_ << 0x20;
  }
  else if (cVar3 == '\x02') {
    local_2f8._152_4_ = 2;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1215263500369134337>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshUVFunctions.cpp"
                       ,0x301,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = *(FGeometryScriptMeshSelection **)((longlong)this + 8);
  local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_338.ArrayNum = 0;
  local_338.ArrayMax = 0;
  if ((pFVar21 == (FDynamicMesh3 *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray(this_00,pFVar21,&local_338,Triangle);
  lVar22 = *(longlong *)this;
  local_e8._s_0.X = 0.0;
  local_e8._s_0.Y = 0.0;
  local_2f8._164_4_ = (undefined4)*(float *)(lVar22 + 4);
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2f8._168_4_ = (undefined4)*(float *)(lVar22 + 8);
  local_e8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_e8._s_0.W = _UNK_15061cbc8;
  local_2f8._156_4_ = **(int **)((longlong)this + 0x10);
  local_2f8._160_4_ = (undefined4)*(float *)(lVar22 + 0xc);
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b0 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_ac = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uStack_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uStack_a4 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  local_a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  UE::Geometry::FUVEditorTexelDensityOp::SetTransform
            ((FUVEditorTexelDensityOp *)local_2f8,(TTransformSRT3<double> *)&local_e8._s_0);
  FVar27.Data = local_338.AllocatorInstance.Data;
  iVar8 = local_338.ArrayNum;
  lVar22 = (longlong)local_338.ArrayNum;
  local_2f8[0xac] = *(undefined1 *)(*(longlong *)this + 0x10);
  if (local_338.ArrayNum < 1) goto LAB_14ce305af;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,local_338.ArrayNum);
  uVar18 = 1;
  if (3 < (uint)iVar8) {
    uVar24 = (ulonglong)(((uint)iVar8 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_198 = (undefined4)lVar13;
    uVar18 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_50 == 0) || ((int)local_50 < (int)uVar18)) {
    local_50 = uVar18;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar18 != 0) {
      uVar19 = uVar18;
      if (uVar18 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar19 = 0;
          goto LAB_14ce2ff58;
        }
      }
      else {
LAB_14ce2ff58:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar19,4);
      }
      if (0 < (int)uVar18) {
        uVar26 = (ulonglong)uVar18;
        uVar24 = uVar17;
        do {
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar11 = uVar24 & (longlong)(int)uVar18 - 1U;
          uVar24 = uVar24 + 1;
          *(undefined4 *)(FVar16.Data + uVar11 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_50 != 0) {
      local_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_358 = 0;
      uStack_354 = 1;
      uStack_344 = 0;
      uStack_340 = 0;
      if (local_70 != 0) {
        FVar25 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = local_78;
        }
        uVar18 = *(uint *)FVar25;
        uVar24 = uVar17;
        while (uVar18 == 0) {
          uStack_340 = (int)uVar24 + 0x20;
          uVar24 = (ulonglong)uStack_340;
          iVar8 = (int)uVar17;
          local_358 = iVar8 + 1;
          uVar17 = (ulonglong)local_358;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_358)
          goto LAB_14ce30085;
          uVar18 = ((uint *)((longlong)FVar25 + 4))[iVar8];
        }
        uStack_354 = -uVar18 & uVar18;
        uVar17 = (ulonglong)uStack_354 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_194 = (int)lVar13;
        uStack_344 = (uStack_340 - 1) + local_194;
        uVar17 = (ulonglong)uStack_344;
        if ((int)local_70 < (int)uStack_344) {
LAB_14ce30085:
          uVar17 = (ulonglong)local_70;
          uStack_344 = local_70;
        }
      }
      local_168 = (longlong *)local_98;
      local_160._padding_ = CONCAT44(uStack_354,local_358);
      local_160.UnvisitedBitMask = 0xffffffff;
      local_160.CurrentBitIndex = uStack_344;
      local_160.BaseBitIndex = uStack_340;
      if ((int)uVar17 < (int)local_70) {
        do {
          lVar13 = *local_168;
          lVar12 = (longlong)(int)uVar17;
          uVar18 = local_50 - 1 & *(uint *)(lVar13 + lVar12 * 0xc);
          *(uint *)(lVar13 + 8 + lVar12 * 0xc) = uVar18;
          FVar16.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_58.Data;
          }
          uVar24 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
          *(undefined4 *)(lVar13 + 4 + lVar12 * 0xc) = *(undefined4 *)(FVar16.Data + uVar24 * 4);
          *(int *)(FVar16.Data + uVar24 * 4) = (int)uVar17;
          local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
          uVar17 = (ulonglong)(uint)local_160.CurrentBitIndex;
        } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
      }
    }
  }
  pFVar1 = FVar27.Data + lVar22 * 4;
  iVar8 = local_68;
  for (; local_68 = iVar8, FVar27.Data != pFVar1; FVar27.Data = FVar27.Data + 4) {
    if (local_64 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_78;
      }
      bVar15 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar15 = bVar15 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar25 + (longlong)(iVar9 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar15 & 0x1f));
    }
    else {
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0xc + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_118,iVar8);
    if (local_118.Pointer != (uint *)0x0) {
      *(uint *)local_118.Pointer = *(uint *)FVar27.Data;
      *(uint *)((longlong)local_118.Pointer + 4) = 0xffffffff;
    }
    uVar18 = *(uint *)local_118.Pointer;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar16.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_58.Data;
      }
      for (iVar8 = *(int *)(FVar16.Data + (ulonglong)(local_50 - 1 & uVar18) * 4); iVar8 != -1;
          iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar8 * 0xc) == uVar18) {
          if (iVar8 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar8 * 0xc) = uVar18;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_118.Index,1);
            goto LAB_14ce30534;
          }
          break;
        }
      }
    }
    uVar23 = local_98._8_4_ - local_64;
    uVar19 = 1;
    if (3 < uVar23) {
      uVar17 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_18c = (undefined4)lVar22;
      uVar19 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar23 < 1) || ((int)uVar19 <= (int)local_50)) {
      uVar18 = local_50 - 1 & uVar18;
      *(uint *)((longlong)local_118.Pointer + 8) = uVar18;
      FVar16.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_58.Data;
      }
      uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
      *(uint *)((longlong)local_118.Pointer + 4) = *(uint *)(FVar16.Data + uVar17 * 4);
      *(int *)(FVar16.Data + uVar17 * 4) = local_118.Index;
    }
    else {
      local_50 = uVar19;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar19 != 0) {
        uVar18 = uVar19;
        if (uVar19 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar18 = 0;
            goto LAB_14ce30385;
          }
        }
        else {
LAB_14ce30385:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,4)
          ;
        }
        if (0 < (int)uVar19) {
          uVar24 = (ulonglong)uVar19;
          uVar17 = 0;
          do {
            FVar16.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_58.Data;
            }
            uVar26 = uVar17 & (longlong)(int)uVar19 - 1U;
            uVar17 = uVar17 + 1;
            *(undefined4 *)(FVar16.Data + uVar26 * 4) = 0xffffffff;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      if (local_50 != 0) {
        local_320.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_320._padding_._0_4_ = 0;
        local_320._padding_._4_4_ = 1;
        local_320.UnvisitedBitMask = 0xffffffff;
        local_320.CurrentBitIndex = 0;
        local_320.BaseBitIndex = 0;
        if (local_70 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_320);
        }
        local_140 = (longlong *)local_98;
        local_138._padding_ = CONCAT44(local_320._padding_._4_4_,(undefined4)local_320._padding_);
        local_138.Array = local_320.Array;
        local_138.UnvisitedBitMask = local_320.UnvisitedBitMask;
        local_138.CurrentBitIndex = local_320.CurrentBitIndex;
        local_138.BaseBitIndex = local_320.BaseBitIndex;
        local_138._28_4_ = local_320._28_4_;
        if (local_320.CurrentBitIndex < (local_320.Array)->NumBits) {
          do {
            lVar22 = *local_140;
            lVar13 = (longlong)local_138.CurrentBitIndex;
            uVar18 = local_50 - 1 & *(uint *)(lVar22 + lVar13 * 0xc);
            *(uint *)(lVar22 + 8 + lVar13 * 0xc) = uVar18;
            FVar16.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_58.Data;
            }
            uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar18;
            *(undefined4 *)(lVar22 + 4 + lVar13 * 0xc) = *(undefined4 *)(FVar16.Data + uVar17 * 4);
            *(int *)(FVar16.Data + uVar17 * 4) = local_138.CurrentBitIndex;
            local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
          } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
        }
      }
    }
LAB_14ce30534:
    pFVar21 = local_188;
    this = local_180;
    iVar8 = local_68;
  }
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
            ((TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)local_248,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_98,0);
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  param_1 = local_328;
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
    param_1 = local_328;
  }
LAB_14ce305af:
  lVar22 = *(longlong *)this;
  if (0 < *(int *)(lVar22 + 0x20) - *(int *)(lVar22 + 0x4c)) {
    TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>::
    operator=((TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
               *)local_1f8,
              (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
              (lVar22 + 0x18));
  }
  UE::Geometry::FUVEditorTexelDensityOp::CalculateResult
            ((FUVEditorTexelDensityOp *)local_2f8,(FProgressCancel *)0x0);
  uVar6 = local_2f8._8_8_;
  if (local_2f8._96_4_ == Success) {
    local_2f8._8_8_ = (FDynamicMesh3 *)0x0;
    UE::Geometry::FDynamicMesh3::operator=(param_1,(FDynamicMesh3 *)uVar6);
    if ((FDynamicMesh3 *)uVar6 != (FDynamicMesh3 *)0x0) {
      (**(code **)*(longlong *)uVar6)(uVar6);
    }
  }
  else {
    if ((pFVar21 == (FDynamicMesh3 *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Geometry::FDynamicMesh3::operator=(param_1,pFVar21);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"UGeometryScriptLibrary_MeshUVFunctions",
                         L"ApplyTexelDensityUVScaling_ComputeError",
                         L"ApplyTexelDensityUVScaling: Error computing result, returning input mesh"
                        );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x18),InvalidInputs,
               pFVar14);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
  }
  if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.AllocatorInstance.Data);
  }
  local_2f8._0_8_ = &___7FUVEditorTexelDensityOp_Geometry_UE__6B_;
  if (local_1f8._12_4_ != -1) {
    local_1f8._72_4_ = 0;
    if ((void *)local_1f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._64_8_);
    }
    local_1f8._8_4_ = 0;
    if (local_1f8._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_1f8,0,(int *)(local_1f8 + 0xc));
    }
    local_1f8._48_4_ = 0xffffffff;
    local_1f8._52_4_ = 0;
    local_1f8._40_4_ = 0;
    if (0x80 < (uint)local_1f8._44_4_) {
      local_1f8._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10),0);
    }
    if ((void *)local_1f8._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._32_8_);
    }
    if ((void *)local_1f8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f8._0_8_);
    }
  }
  if (local_248._12_4_ != -1) {
    local_248._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_248._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_248._64_8_);
    }
    local_248._8_4_ = 0;
    if (local_248._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
    }
    local_248._48_4_ = 0xffffffff;
    local_248._52_4_ = 0;
    local_248._40_4_ = 0;
    if (0x80 < (uint)local_248._44_4_) {
      local_248._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
    }
    if ((void *)local_248._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._32_8_);
    }
    if ((void *)local_248._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_248._0_8_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2f8._144_8_);
  local_2f8._0_8_ = &___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_2f8._120_8_,local_2f8._128_4_);
  if ((FGeometryWarning *)local_2f8._120_8_ != (FGeometryWarning *)0x0) {
    FMemory::Free((void *)local_2f8._120_8_);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_2f8._104_8_,local_2f8._112_4_);
  if ((FGeometryError *)local_2f8._104_8_ != (FGeometryError *)0x0) {
    FMemory::Free((void *)local_2f8._104_8_);
  }
  if ((FDynamicMesh3 *)local_2f8._8_8_ != (FDynamicMesh3 *)0x0) {
    (**(code **)*(longlong *)local_2f8._8_8_)(local_2f8._8_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ce314c0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  longlong lVar1;
  int *piVar2;
  FPolygroupLayer FVar3;
  bool bVar4;
  FPolygroupSet *this_00;
  FPolygroupSet *pFVar5;
  FText *pFVar6;
  int iVar7;
  FPolygroupLayer local_res8;
  FText local_b8;
  FPatchBasedMeshUVGenerator local_a8;
  FGeometryResult local_48;
  
  lVar1 = *(longlong *)this;
  pFVar5 = (FPolygroupSet *)0x0;
  local_a8.CompactnessThreshold = __real_416312cfe0000000;
  local_a8.GroupConstraint = (FPolygroupSet *)0x0;
  local_a8.bAutoAlignPatches = true;
  local_a8.PackingTextureResolution = 0x200;
  local_a8.PackingGutterWidth = 1.0;
  if (*(char *)(lVar1 + 0x1c) != '\0') {
    local_res8.bIsDefaultLayer = *(bool *)(lVar1 + 0x20);
    local_res8.LayerIndex = *(int *)(lVar1 + 0x24);
    bVar4 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
    if (bVar4) {
      this_00 = ::operator_new(0x18);
      if (this_00 != (FPolygroupSet *)0x0) {
        FVar3.LayerIndex = local_res8.LayerIndex;
        FVar3.bIsDefaultLayer = local_res8.bIsDefaultLayer;
        FVar3._1_3_ = local_res8._1_3_;
        pFVar5 = UE::Geometry::FPolygroupSet::FPolygroupSet(this_00,param_1,FVar3);
      }
      ::operator_delete((void *)0x0,0x18);
      ::operator_delete((void *)0x0,0x18);
      local_a8.GroupConstraint = pFVar5;
    }
    else {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"AutoGeneratePatchBuilderMeshUVs_MissingGruops",
                          L"AutoGeneratePatchBuilderMeshUVs: Requested Polygroup Layer does not exist"
                         );
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar6)
      ;
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
    }
  }
  piVar2 = *(int **)this;
  local_a8.TargetPatchCount = *piVar2;
  local_a8.bNormalWeightedPatches = true;
  if (local_a8.TargetPatchCount < 1) {
    local_a8.TargetPatchCount = 1;
  }
  local_a8.PatchNormalWeight = (double)(float)piVar2[2];
  if (__real_412e847e00000000 <= (double)(float)piVar2[2]) {
    local_a8.PatchNormalWeight = __real_412e847e00000000;
  }
  if (local_a8.PatchNormalWeight <= 0.0) {
    local_a8.PatchNormalWeight = 0.0;
  }
  local_a8.MinPatchSize = piVar2[1];
  if (piVar2[1] < 1) {
    local_a8.MinPatchSize = 1;
  }
  local_a8.MergingThreshold = (double)(float)piVar2[3];
  if (__real_40c3878000000000 <= (double)(float)piVar2[3]) {
    local_a8.MergingThreshold = __real_40c3878000000000;
  }
  if (local_a8.MergingThreshold <= __real_3f50624dd2f1a9fc) {
    local_a8.MergingThreshold = __real_3f50624dd2f1a9fc;
  }
  local_a8.MaxNormalDeviationDeg = (double)(float)piVar2[4];
  if (__real_4066800000000000 <= (double)(float)piVar2[4]) {
    local_a8.MaxNormalDeviationDeg = __real_4066800000000000;
  }
  if (local_a8.MaxNormalDeviationDeg <= 0.0) {
    local_a8.MaxNormalDeviationDeg = 0.0;
  }
  iVar7 = 9999;
  if (piVar2[5] < 9999) {
    iVar7 = piVar2[5];
  }
  local_a8.NormalSmoothingRounds = 0;
  if (0 < iVar7) {
    local_a8.NormalSmoothingRounds = iVar7;
  }
  local_a8.NormalSmoothingAlpha = (double)(float)piVar2[6];
  if (__real_3ff0000000000000 <= (double)(float)piVar2[6]) {
    local_a8.NormalSmoothingAlpha = __real_3ff0000000000000;
  }
  if (local_a8.NormalSmoothingAlpha <= 0.0) {
    local_a8.NormalSmoothingAlpha = 0.0;
  }
  local_a8.bAutoPack = SUB41(piVar2[10],0);
  if ((char)piVar2[10] != '\0') {
    local_a8.bAutoAlignPatches = SUB41(piVar2[0xc],0);
    iVar7 = 0x1000;
    if (piVar2[0xb] < 0x1000) {
      iVar7 = piVar2[0xb];
    }
    local_a8.PackingTextureResolution = 0x10;
    if (0x10 < iVar7) {
      local_a8.PackingTextureResolution = iVar7;
    }
  }
  UE::Geometry::FPatchBasedMeshUVGenerator::AutoComputeUVs
            (&local_a8,&local_48,param_3->Mesh,param_3->UVOverlay,(FProgressCancel *)0x0);
  if (local_48.Result == Failure) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_b8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"AutoGeneratePatchBuilderMeshUVs_Failed",
                        L"AutoGeneratePatchBuilderMeshUVs: UV Generation Failed");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed,pFVar6)
    ;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_48.Warnings.AllocatorInstance.Data,local_48.Warnings.ArrayNum
            );
  if ((FGeometryWarning *)local_48.Warnings.AllocatorInstance.Data != (FGeometryWarning *)0x0) {
    FMemory::Free(local_48.Warnings.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_48.Errors.AllocatorInstance.Data,local_48.Errors.ArrayNum);
  if ((FGeometryError *)local_48.Errors.AllocatorInstance.Data != (FGeometryError *)0x0) {
    FMemory::Free(local_48.Errors.AllocatorInstance.Data);
  }
  ::operator_delete(pFVar5,0x18);
  return;
}

// operator() @ 14ce31740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  double *pdVar1;
  short sVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  FText *pFVar13;
  FFunctionStorage *pFVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  undefined1 auStackY_348 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_2f8;
  ForAnyElementType local_2e8;
  undefined8 local_2e0;
  int local_2d8 [2];
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8 [2];
  int local_2c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  uint local_298;
  FRefCountVector *local_290;
  uint uStack_288;
  int iStack_284;
  double local_280;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_278;
  int local_268 [2];
  int local_260;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_258;
  XAtlasPackOptions local_248;
  float local_230;
  float local_22c;
  longlong local_228;
  FIndex3i_u_0 local_220;
  FDynamicMesh3 *local_210;
  TDynamicMeshOverlay<float,2> *local_1f8;
  code *local_1e8;
  undefined **local_1d8;
  FDynamicMesh3 *local_1d0;
  undefined ***local_1c0;
  code *local_1b8 [2];
  FFunctionStorage local_1a8;
  XAtlasChartOptions local_188;
  FText local_158;
  FText local_148;
  BaseIterator local_138;
  code *local_128 [2];
  longlong local_118 [3];
  longlong *local_100;
  undefined1 local_f8 [40];
  longlong *local_d0;
  FRefCountVector *local_c8;
  FRefCountVector *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [40];
  longlong *local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_210 = param_1;
  local_1f8 = (TDynamicMeshOverlay<float,2> *)param_2;
  if ((((param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
        (param_1->VertexRefCounts).FreeIndices.CurBlockUsed == 0) &&
      ((param_1->EdgeRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->EdgeRefCounts).FreeIndices.CurBlockUsed == 0)) &&
     ((param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
      (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed == 0)) {
    iVar9 = (param_1->VertexRefCounts).UsedCount;
    lVar19 = (longlong)iVar9;
    uVar20 = 0;
    local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ArrayNum = 0;
    local_258.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_258,iVar9,Default);
    uVar22 = uVar20;
    if (0 < iVar9) {
      do {
        uVar23 = (uint)uVar22;
        lVar17 = *(longlong *)
                  ((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar22 >> 9) * 8);
        pdVar1 = (double *)(lVar17 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
        dVar6 = *pdVar1;
        dVar7 = pdVar1[1];
        local_280 = *(double *)(lVar17 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
        uVar21 = 0;
        if ((int)uVar23 < local_258.ArrayNum) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        fVar24 = (float)local_280;
        if ((uVar21 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(float *)(local_258.AllocatorInstance.Data + uVar20) = (float)dVar6;
        *(float *)(local_258.AllocatorInstance.Data + uVar20 + 4) = (float)dVar7;
        *(float *)(local_258.AllocatorInstance.Data + uVar20 + 8) = fVar24;
        uVar20 = uVar20 + 0xc;
        lVar19 = lVar19 + -1;
        uVar22 = (ulonglong)(uVar23 + 1);
      } while (lVar19 != 0);
    }
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    uVar21 = (param_1->TriangleRefCounts).UsedCount * 3;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    lVar19 = 4;
    if (0 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar21,&local_2f8.AllocatorInstance,0,&local_2f8.ArrayMax);
    }
    local_1d8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__TrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_UFIndex3i_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1c0 = (undefined ***)0x0;
    uVar22 = 0;
    local_1e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
                ::Call;
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
                   ::Call;
    local_1a8.HeapAllocation = (FFunctionStorage *)0x0;
    local_1d0 = param_1;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::
    CloneToEmptyStorage(&local_1d8,&local_1a8);
    local_f8._0_8_ = 0;
    local_d0 = (longlong *)0x0;
    local_c8 = &param_1->TriangleRefCounts;
    TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
              ((TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_f8,
               (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_1b8);
    if (local_1b8[0] != (code *)0x0) {
      pFVar14 = &local_1a8;
      if (local_1a8.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar14 = local_1a8.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar14->InlineAllocation + 0x10))();
    }
    if (local_1e8 != (code *)0x0) {
      pppuVar15 = &local_1d8;
      if (local_1c0 != (undefined ***)0x0) {
        pppuVar15 = local_1c0;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    local_290 = local_c8;
    uStack_288 = 0;
    local_298 = 1;
    iStack_284 = (local_c8->RefCounts).CurBlock * 0x200 + (local_c8->RefCounts).CurBlockUsed;
    if (((iStack_284 != 0) &&
        (pFVar4 = (local_c8->RefCounts).Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uStack_288 = 1, 1 < iStack_284)) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uStack_288 >> 9) * 8) +
                          (ulonglong)(uStack_288 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        uStack_288 = uStack_288 + 1;
      } while ((int)uStack_288 < iStack_284);
    }
    local_138.LastIndex = iStack_284;
    local_138.Index = uStack_288;
    local_128[0] = (code *)0x0;
    local_100 = (longlong *)0x0;
    local_138.Vector = local_c8;
    TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
              ((TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_128,
               (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_f8);
    local_290 = local_c8;
    uStack_288 = (local_c8->RefCounts).CurBlockUsed + (local_c8->RefCounts).CurBlock * 0x200;
    local_a8._0_8_ = 0;
    uStack_b0 = CONCAT44(uStack_288,uStack_288);
    local_80 = (longlong *)0x0;
    local_b8 = local_c8;
    iStack_284 = uStack_288;
    TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
              ((TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_a8,
               (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_f8);
    if (local_138.Index != (int)uStack_b0) {
      do {
        local_268[0] = local_138.Index;
        UE::Core::Private::Function::CheckCallable(local_128[0]);
        pcVar5 = local_128[0];
        plVar16 = local_118;
        if (local_100 != (longlong *)0x0) {
          plVar16 = local_100;
        }
        uVar12 = (**(code **)(*plVar16 + 8))();
        (*pcVar5)(&local_2d0,uVar12,local_268);
        if (((local_2f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2d0) &&
            ((FScriptContainerElement *)&local_2d0 <
             local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_2f8.ArrayNum;
        if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
        }
        iVar18 = iVar9 + 1;
        *(undefined4 *)(local_2f8.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_2d0;
        local_2f8.ArrayNum = iVar18;
        if (((local_2f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2cc) &&
            ((FScriptContainerElement *)&local_2cc <
             local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
          local_2f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
        }
        iVar9 = local_2f8.ArrayNum + 1;
        *(undefined4 *)(local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 4) =
             local_2cc;
        local_2f8.ArrayNum = iVar9;
        if (((local_2f8.AllocatorInstance.Data <= (FScriptContainerElement *)local_2c8) &&
            ((FScriptContainerElement *)local_2c8 <
             local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = local_2f8.ArrayNum;
        if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
        }
        local_2f8.ArrayNum = iVar9 + 1;
        *(undefined4 *)(local_2f8.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_2c8[0];
        UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_138);
      } while (local_138.Index != (int)uStack_b0);
    }
    if (local_a8._0_8_ != 0) {
      plVar16 = (longlong *)(local_a8 + 0x10);
      if (local_80 != (longlong *)0x0) {
        plVar16 = local_80;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_128[0] != (code *)0x0) {
      plVar16 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar16 = local_100;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_f8._0_8_ != 0) {
      plVar16 = (longlong *)(local_f8 + 0x10);
      if (local_d0 != (longlong *)0x0) {
        plVar16 = local_d0;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = 0;
    local_2a8.ArrayMax = 0;
    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.ArrayNum = 0;
    local_2b8.ArrayMax = 0;
    local_188.ParamFunc = (_func___cdecl_void_float_ptr_float_ptr_uint_uint_ptr_uint *)0x0;
    local_188.MaxChartArea = ___xmm_3c23d70a400000000000000000000000;
    local_188.MaxBoundaryLength = _UNK_152a006d4;
    local_188.NormalDeviationWeight = _UNK_152a006d8;
    local_188.RoundnessWeight = _UNK_152a006dc;
    local_188.bUseInputMeshUvs = false;
    local_188.bFixWinding = false;
    local_188.StraightnessWeight = ___xmm_400000003f0000004080000040c00000;
    local_188.NormalSeamWeight = _UNK_152a006f4;
    local_188.TextureSeamWeight = _UNK_152a006f8;
    local_188.MaxCost = _UNK_152a006fc;
    local_188.MaxIterations = **(uint **)((longlong)this + 8);
    local_248.MaxChartSize = 0;
    local_248.Padding = 0;
    local_248.TexelsPerUnit = 0.0;
    local_248.Resolution = 0;
    local_248.bBilinear = true;
    local_248.bBlockAlign = false;
    local_248.bBruteForce = false;
    local_248.bCreateImage = false;
    local_248.bRotateChartsToAxis = true;
    local_248.bRotateCharts = true;
    bVar8 = XAtlasWrapper::ComputeUVs
                      (&local_2f8,&local_258,&local_188,&local_248,&local_278,&local_2a8,&local_2b8)
    ;
    if (bVar8) {
      UE::Geometry::TDynamicMeshOverlay<float,2>::ClearElements
                ((TDynamicMeshOverlay<float,2> *)param_2);
      lVar17 = (longlong)local_278.ArrayNum;
      local_2e8.Data = (FScriptContainerElement *)0x0;
      local_2e0 = 0;
      if (local_278.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_278._8_8_ & 0xffffffff);
      }
      if (0 < local_278.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_278.ArrayNum,&local_2e8,0,(int *)((longlong)&local_2e0 + 4));
        uVar20 = uVar22;
        do {
          uVar23 = (uint)uVar20;
          uVar21 = 0;
          if ((int)uVar23 < local_278.ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          dVar6 = *(double *)(local_278.AllocatorInstance.Data + uVar22);
          dVar7 = *(double *)(local_278.AllocatorInstance.Data + uVar22 + 8);
          uVar21 = 0;
          if ((int)uVar23 < local_2b8.ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_230 = (float)dVar6;
          local_22c = (float)dVar7;
          local_2d8[0] = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                                   ((TDynamicMeshOverlay<float,2> *)param_2,&local_230);
          if (((local_2e8.Data <= (FScriptContainerElement *)local_2d8) &&
              ((FScriptContainerElement *)local_2d8 < local_2e8.Data + (longlong)local_2e0._4_4_ * 4
              )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (int)local_2e0;
          if ((int)local_2e0 == local_2e0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2e8,(int *)((longlong)&local_2e0 + 4));
          }
          uVar20 = (ulonglong)(uVar23 + 1);
          local_2e0 = CONCAT44(local_2e0._4_4_,iVar9 + 1);
          uVar22 = uVar22 + 0x10;
          *(int *)(local_2e8.Data + (longlong)iVar9 * 4) = local_2d8[0];
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar21 = 1;
      iVar9 = local_2a8.ArrayNum / 3 + (local_2a8.ArrayNum >> 0x1f) +
              (int)(((longlong)local_2a8.ArrayNum / 3 + ((longlong)local_2a8.ArrayNum >> 0x3f) &
                    0xffffffffU) >> 0x1f);
      local_228 = (longlong)iVar9;
      if (0 < iVar9) {
        while( true ) {
          uVar23 = 0;
          if ((int)(uVar21 + 1) < local_2a8.ArrayNum) {
            uVar23 = ~(uVar21 + 1) >> 0x1f;
          }
          iVar9 = local_2a8.ArrayNum;
          if (uVar23 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = local_2a8.ArrayNum;
          }
          uVar23 = *(uint *)(local_2a8.AllocatorInstance.Data + lVar19 + 4);
          uVar10 = 0;
          if ((int)uVar21 < iVar9) {
            uVar10 = ~uVar21 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = local_2a8.ArrayNum;
          }
          uVar10 = *(uint *)(local_2a8.AllocatorInstance.Data + lVar19);
          uVar11 = 0;
          if ((int)(uVar21 - 1) < iVar9) {
            uVar11 = ~(uVar21 - 1) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar21 = *(uint *)(local_2a8.AllocatorInstance.Data + lVar19 + -4);
          uVar11 = 0;
          if ((int)uVar21 < local_2b8.ArrayNum) {
            uVar11 = ~uVar21 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_2c0 = *(int *)(local_2b8.AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
          uVar11 = 0;
          if ((int)uVar10 < local_2b8.ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          iVar9 = local_2b8.ArrayNum;
          if (uVar11 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = local_2b8.ArrayNum;
          }
          local_260 = *(int *)(local_2b8.AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
          uVar11 = 0;
          if ((int)uVar23 < iVar9) {
            uVar11 = ~uVar23 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_2c0 = UE::Geometry::FDynamicMesh3::FindTriangle
                                (local_210,local_2c0,local_260,
                                 *(int *)(local_2b8.AllocatorInstance.Data +
                                         (longlong)(int)uVar23 * 4));
          if (local_2c0 != -1) {
            uVar11 = 0;
            if ((int)uVar23 < (int)local_2e0) {
              uVar11 = ~uVar23 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar9 = *(int *)(local_2e8.Data + (longlong)(int)uVar23 * 4);
            uVar23 = 0;
            if ((int)uVar10 < (int)local_2e0) {
              uVar23 = ~uVar10 >> 0x1f;
            }
            iVar18 = (int)local_2e0;
            if (uVar23 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar18 = (int)local_2e0;
            }
            iVar3 = *(int *)(local_2e8.Data + (longlong)(int)uVar10 * 4);
            uVar23 = 0;
            if ((int)uVar21 < iVar18) {
              uVar23 = ~uVar21 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_220._s_0.A = *(undefined4 *)(local_2e8.Data + (longlong)(int)uVar21 * 4);
            local_220._s_0.B = iVar3;
            local_220._s_0.C = iVar9;
            UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                      (local_1f8,local_2c0,(FIndex3i *)&local_220._s_0,true);
          }
          lVar19 = lVar19 + 0xc;
          uVar21 = local_298 + 3;
          local_228 = local_228 + -1;
          local_298 = uVar21;
          if (local_228 == 0) break;
        }
      }
      if (local_2e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
    }
    else {
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_158,L"UGeometryScriptLibrary_MeshUVFunctions",
                           L"AutoGenerateXAtlasMeshUVs_Failed",
                           L"AutoGenerateXAtlasMeshUVs: UV Generation Failed");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)this,OperationFailed,pFVar13);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
    }
    if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
    }
    if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.AllocatorInstance.Data);
    }
  }
  else {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_148,L"UGeometryScriptLibrary_MeshUVFunctions",
                         L"AutoGenerateXAtlasMeshUVs_NonCompact",
                         L"AutoGenerateXAtlasMeshUVs: TargetMesh is non-Compact, XAtlas cannot be run. Try calling CompactMesh to update TargetMesh."
                        );
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar13);
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
  }
  return;
}

// operator() @ 14ce32a50

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::ClearUVChannel'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  int iVar3;
  TDynamicMeshOverlay<float,2> *this_00;
  FText *pFVar4;
  FText local_18;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2 != (FDynamicMeshAttributeSet *)0x0) && (iVar1 = *(int *)this, -1 < iVar1)) {
    iVar3 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if (iVar1 < iVar3) {
      this_00 = (TDynamicMeshOverlay<float,2> *)
                UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                          ((param_1->AttributeSet).Ptr,iVar1);
      UE::Geometry::TDynamicMeshOverlay<float,2>::ClearElements(this_00);
      return;
    }
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_MeshUVFunctions",
                      L"ClearUVChannel_NoChannel",
                      L"ClearUVChannel: Mesh did not have the requested UV channel, so it could not be cleared."
                     );
  UE::Geometry::AppendError(*(UGeometryScriptDebug **)((longlong)this + 8),InvalidInputs,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce32b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  double *pdVar9;
  FDynamicMeshAttributeSet *pFVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  TVector<double> *pTVar18;
  TVector<double> *pTVar19;
  FText *pFVar20;
  TDynamicMeshOverlay<float,3> *this_00;
  ITextData *pIVar21;
  undefined8 uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  double dVar23;
  undefined1 auStackY_338 [32];
  FIndex3i_u_0 local_308;
  TVector<double>_u_0 local_2f8;
  TQuaternion<double>_u_0 local_2e0;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  undefined1 local_238 [40];
  double *pdStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  ITextData local_1e8;
  FDynamicMesh3 *pFStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  ITextData *pIStack_1d0;
  undefined1 local_1c8 [64];
  void *local_188;
  undefined4 local_180;
  TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
  local_178;
  FIndexPriorityQueue local_160;
  TVector<double>_u_0 local_128;
  TQuaternion<double>_u_0 local_110;
  double local_f0;
  double dStack_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar5 = **(uint **)this;
  if ((((int)uVar5 < 0) ||
      ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar5)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar5 >> 9) * 8) +
                                  (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_308._s_0,L"UGeometryScriptLibrary_MeshUVFunctions",
                         L"ComputeMeshLocalUVParam_InvalidTriangle",
                         L"ComputeMeshLocalUVParam: CenterPointTriangleID is not a valid triangle");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar20);
    uVar22 = local_308._0_8_;
    if ((ITextData *)local_308._0_8_ == (ITextData *)0x0) {
      return;
    }
  }
  else {
    lVar8 = *(longlong *)
             ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
    local_308._0_8_ = *(undefined8 *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
    uVar6 = *(uint *)(lVar8 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
    local_308._s_0.C = uVar6;
    pTVar18 = UE::Geometry::FDynamicMesh3::GetTriNormal
                        (param_1,(TVector<double> *)&((TQuaternion<double>_u_0 *)local_238)->_s_0,
                         uVar5);
    pTVar19 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                        (param_1,(TVector<double> *)&local_2c0._s_0,**(int **)this);
    dVar4 = __real_3ff0000000000000;
    local_2e0._s_0.W = __real_3ff0000000000000;
    local_2e0._s_0.X = 0.0;
    local_2f8._s_0.X = (pTVar19->field0_0x0)._s_0.X;
    local_2f8._s_0.Y = (pTVar19->field0_0x0)._s_0.Y;
    local_2f8._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
    local_2e0._s_0.Y = 0.0;
    local_2e0._s_0.Z = 0.0;
    local_2a8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_2a8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_2a8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_2e0._s_0,(TVector<double> *)&local_2a8._s_0,pTVar18);
    pdVar9 = *(double **)((longlong)this + 0x10);
    this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
    local_2f8._s_0.X = *pdVar9;
    local_2f8._s_0.Y = pdVar9[1];
    local_2f8._s_0.Z = pdVar9[2];
    if (((**(char **)((longlong)this + 0x18) != '\0') &&
        (pFVar10 = (param_1->AttributeSet).Ptr, pFVar10 != (FDynamicMeshAttributeSet *)0x0)) &&
       ((0 < (pFVar10->NormalLayers).Array.ArrayNum &&
        ((lVar8 = *(longlong *)(pFVar10->NormalLayers).Array.AllocatorInstance.Data, lVar8 != 0 &&
         (iVar7 = **(int **)this, uVar5 = iVar7 * 3,
         -1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 4))))))) {
      pFVar11 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      pdVar9 = (double *)
               (*(longlong *)(pFVar11 + (ulonglong)((uint)local_308._s_0.A >> 9) * 8) +
               (ulonglong)(local_308._s_0.A & 0x1ff) * 0x18);
      local_288._s_0.X = *pdVar9;
      local_288._s_0.Y = pdVar9[1];
      local_288._s_0.Z =
           *(double *)
            (*(longlong *)(pFVar11 + (ulonglong)((uint)local_308._s_0.A >> 9) * 8) + 0x10 +
            (ulonglong)(local_308._s_0.A & 0x1ff) * 0x18);
      pdVar9 = (double *)
               (*(longlong *)(pFVar11 + (ulonglong)((uint)local_308._s_0.B >> 9) * 8) +
               (ulonglong)(local_308._s_0.B & 0x1ff) * 0x18);
      local_270._s_0.X = *pdVar9;
      local_270._s_0.Y = pdVar9[1];
      local_270._s_0.Z =
           *(double *)
            (*(longlong *)(pFVar11 + (ulonglong)((uint)local_308._s_0.B >> 9) * 8) + 0x10 +
            (ulonglong)(local_308._s_0.B & 0x1ff) * 0x18);
      pdVar9 = (double *)
               (*(longlong *)(pFVar11 + (ulonglong)(uVar6 >> 9) * 8) +
               (ulonglong)(local_308._s_0.C & 0x1ff) * 0x18);
      local_258._s_0.X = *pdVar9;
      local_258._s_0.Y = pdVar9[1];
      local_258._s_0.Z =
           *(double *)
            (*(longlong *)(pFVar11 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 +
            (ulonglong)(local_308._s_0.C & 0x1ff) * 0x18);
      UE::Geometry::VectorUtil::BarycentricCoords<double>
                ((TVector<double> *)&((TQuaternion<double>_u_0 *)local_238)->_s_0,
                 (TVector<double> *)&local_2f8._s_0,(TVector<double> *)&local_288._s_0,
                 (TVector<double> *)&local_270._s_0,(TVector<double> *)&local_258._s_0);
      if (0 < (pFVar10->NormalLayers).Array.ArrayNum) {
        this_00 = *(TDynamicMeshOverlay<float,3> **)
                   (pFVar10->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
                (this_00,iVar7,((TQuaternion<double>_u_0 *)local_238)->XYZW,local_2a8.XYZ);
      local_238._0_8_ = 0.0;
      local_238._24_8_ = dVar4;
      local_238._8_8_ = 0.0;
      local_238._16_8_ = 0.0;
      local_2c0._s_0.X =
           (local_2e0._s_0.Z + local_2e0._s_0.Z) * local_2e0._s_0.X +
           (local_2e0._s_0.Y + local_2e0._s_0.Y) * local_2e0._s_0.W;
      local_2c0._s_0.Y =
           (local_2e0._s_0.Z + local_2e0._s_0.Z) * local_2e0._s_0.Y -
           (local_2e0._s_0.X + local_2e0._s_0.X) * local_2e0._s_0.W;
      local_2c0._s_0.Z =
           dVar4 - ((local_2e0._s_0.Y + local_2e0._s_0.Y) * local_2e0._s_0.Y +
                   (local_2e0._s_0.X + local_2e0._s_0.X) * local_2e0._s_0.X);
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&((TQuaternion<double>_u_0 *)local_238)->_s_0,
                 (TVector<double> *)&local_2c0._s_0,(TVector<double> *)&local_2a8._s_0);
      UE::Geometry::TFrame3<double>::Rotate
                ((TFrame3<double> *)&local_2f8._s_0,
                 (TQuaternion<double> *)&((TQuaternion<double>_u_0 *)local_238)->_s_0);
    }
    pTVar18 = *(TVector<double> **)((longlong)this + 0x20);
    dVar13 = local_2e0._s_0.Z + local_2e0._s_0.Z;
    dVar1 = (pTVar18->field0_0x0)._s_0.X;
    dVar2 = (pTVar18->field0_0x0)._s_0.Y;
    dVar3 = (pTVar18->field0_0x0)._s_0.Z;
    dVar14 = (local_2e0._s_0.X + local_2e0._s_0.X) * local_2e0._s_0.X;
    dVar12 = local_2e0._s_0.Y + local_2e0._s_0.Y;
    dVar23 = (local_2e0._s_0.X + local_2e0._s_0.X) * local_2e0._s_0.W;
    dVar15 = dVar13 * local_2e0._s_0.Y - dVar23;
    local_2c0._s_0.Z = dVar23 + dVar13 * local_2e0._s_0.Y;
    dVar16 = dVar13 * local_2e0._s_0.X + dVar12 * local_2e0._s_0.W;
    dVar23 = dVar4 - (dVar12 * local_2e0._s_0.Y + dVar14);
    if (dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3 <= __real_3fb999999999999a) {
      local_238._0_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_238._8_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_238._16_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_2c0._s_0.X = dVar12 * local_2e0._s_0.X - dVar13 * local_2e0._s_0.W;
      local_2c0._s_0.Y = dVar4 - (dVar13 * local_2e0._s_0.Z + dVar14);
      local_2a8._s_0.X = dVar16;
      local_2a8._s_0.Y = dVar15;
      local_2a8._s_0.Z = dVar23;
      UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                ((TVector<double> *)&local_2c0._s_0,
                 (TVector<double> *)&((TQuaternion<double>_u_0 *)local_238)->_s_0,
                 (TVector<double> *)&local_2a8._s_0);
      __libm_sse2_sincos_();
      local_238._0_8_ = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      local_238._8_8_ = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      local_238._16_8_ = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    }
    else {
      local_2a8._s_0.X = dVar12 * local_2e0._s_0.X - dVar13 * local_2e0._s_0.W;
      local_2a8._s_0.Y = dVar4 - (dVar13 * local_2e0._s_0.Z + dVar14);
      local_2c0._s_0.X = dVar16;
      local_2c0._s_0.Y = dVar15;
      local_2a8._s_0.Z = local_2c0._s_0.Z;
      local_2c0._s_0.Z = dVar23;
      UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                ((TVector<double> *)&local_2a8._s_0,pTVar18,(TVector<double> *)&local_2c0._s_0);
      __libm_sse2_sincos_();
      local_238._0_8_ = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_238._8_8_ = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_238._16_8_ = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    }
    local_238._16_8_ = (double)local_238._16_8_ * dVar23;
    local_238._8_8_ = (double)local_238._8_8_ * dVar15;
    local_238._0_8_ = (double)local_238._0_8_ * dVar16;
    UE::Geometry::TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_2f8._s_0,
               (TQuaternion<double> *)&((TQuaternion<double>_u_0 *)local_238)->_s_0);
    uVar17 = local_2e0._s_0.Y;
    uVar22 = local_2e0._s_0.X;
    if (**(double **)((longlong)this + 0x28) != 0.0) {
      dVar3 = local_2e0._s_0.X + local_2e0._s_0.X;
      dVar1 = local_2e0._s_0.Z + local_2e0._s_0.Z;
      dVar2 = local_2e0._s_0.Y + local_2e0._s_0.Y;
      __libm_sse2_sincos_();
      local_238._16_8_ = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      local_238._8_8_ =
           (dVar1 * (double)uVar17 - dVar3 * local_2e0._s_0.W) * (double)local_238._16_8_;
      local_238._0_8_ =
           (dVar1 * (double)uVar22 + dVar2 * local_2e0._s_0.W) * (double)local_238._16_8_;
      local_238._16_8_ =
           (dVar4 - (dVar2 * (double)uVar17 + dVar3 * (double)uVar22)) * (double)local_238._16_8_;
      UE::Geometry::TFrame3<double>::Rotate
                ((TFrame3<double> *)&local_2f8._s_0,
                 (TQuaternion<double> *)&((TQuaternion<double>_u_0 *)local_238)->_s_0);
    }
    local_208[8] = ExponentialMapUpwindAvg;
    local_208[9] = false;
    local_1f8 = 0.0;
    pIStack_1d0 = (ITextData *)0x0;
    local_1c8._0_8_ = 0;
    local_1c8._8_8_ = 0;
    local_1c8._32_8_ = 0;
    local_1c8._40_4_ = 0;
    local_1c8._44_4_ = 0x80;
    local_1c8._48_4_ = 0xffffffff;
    local_1c8._52_4_ = 0;
    local_188 = (void *)0x0;
    local_180 = 0;
    local_178.CurBlock = 0;
    local_178.CurBlockUsed = 0;
    local_178.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Blocks.ArrayNum = 0;
    local_178.Blocks.ArrayMax = 0;
    UE::Geometry::
    TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
    AddAllocatedBlock(&local_178);
    UE::Geometry::FIndexPriorityQueue::FIndexPriorityQueue(&local_160);
    local_110._s_0.X = 0.0;
    local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_110._s_0.W = dVar4;
    local_110._s_0.Y = 0.0;
    local_110._s_0.Z = 0.0;
    local_208._0_8_ = param_1;
    UE::Geometry::FIndexPriorityQueue::Initialize
              (&local_160,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    pdStack_210 = (double *)pIStack_1d0;
    dVar4 = dStack_1f0;
    local_238._0_8_ = local_1f8;
    local_1f8 = (double)UE::Core::Private::Function::
                        TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                        ::Call;
    dStack_1f0 = (double)local_238._8_8_;
    local_1d8 = local_238._32_4_;
    uStack_1d4 = local_238._36_4_;
    pIStack_1d0 = (ITextData *)0x0;
    local_208[8] = ExponentialMapUpwindAvg;
    local_208[9] = true;
    local_1e8._0_4_ = 0x52a006a0;
    local_1e8._4_4_ = 1;
    pFStack_1e0 = param_1;
    local_238._8_8_ = dVar4;
    local_f0 = 0.0;
    dStack_e8 = 0.0;
    if ((double)local_238._0_8_ != 0.0) {
      pIVar21 = (ITextData *)&(((TQuaternion<double>_u_0 *)local_238)->_s_0).Z;
      if (pdStack_210 != (double *)0x0) {
        pIVar21 = (ITextData *)pdStack_210;
      }
      (**(code **)((longlong)*(double *)pIVar21 + 0x10))();
      param_1 = pFStack_1e0;
    }
    pFStack_1e0 = param_1;
    UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::ComputeToMaxDistance
              ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_208,
               (TFrame3<double> *)&local_2f8._s_0,(FIndex3i *)&local_308._s_0,
               **(double **)((longlong)this + 0x30) * __real_3ff6a09e667f3bcd);
    dVar4 = **(double **)((longlong)this + 0x30);
    UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::GetAllComputedUVs
              ((TMeshLocalParam<UE::Geometry::FDynamicMesh3> *)local_208,
               *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x38),
               *(TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x40),dVar4,dVar4 + dVar4);
    if (local_160.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.id_to_index.AllocatorInstance.Data);
    }
    UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
    ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_160.nodes);
    UE::Geometry::
    TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
    ~TDynamicVector<UE::Geometry::TMeshLocalParam<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
              (&local_178);
    local_180 = 0;
    if (local_188 != (void *)0x0) {
      FMemory::Free(local_188);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1c8);
    if ((code *)local_1f8 == (code *)0x0) {
      return;
    }
    uVar22 = &local_1e8;
    if (pIStack_1d0 != (ITextData *)0x0) {
      uVar22 = pIStack_1d0;
    }
  }
  (**(code **)((longlong)*(ITextData *)uVar22 + 0x10))();
  return;
}

// operator() @ 14ce348f0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  int iVar3;
  FText *pFVar4;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res10;
  undefined1 local_38 [16];
  undefined8 local_28;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_20;
  undefined8 local_18;
  FDynamicMesh3 *local_10;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar3 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if (iVar1 < iVar3) {
      local_res10 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                              ((param_1->AttributeSet).Ptr,iVar1);
      if (local_res10 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
        **(undefined1 **)((longlong)this + 0x10) = 1;
        local_28 = *(undefined8 *)((longlong)this + 0x20);
        local_20 = &local_res10;
        local_18 = *(undefined8 *)((longlong)this + 0x28);
        local_38._8_8_ = &local_28;
        local_38._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        local_10 = param_1;
        UDynamicMesh::ProcessMesh
                  ((UDynamicMesh *)**(undefined8 **)((longlong)this + 0x18),
                   (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
        return;
      }
      goto LAB_14ce349a7;
    }
  }
  local_res10 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
LAB_14ce349a7:
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_38,L"UGeometryScriptLibrary_MeshUVFunctions",
                      L"CopyMeshToMeshUVLayer_InvalidUVSet",
                      L"CopyMeshToMeshUVLayer: ToUVSetIndex does not exist on CopyFromMesh");
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar4);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
  return;
}

// operator() @ 14ce34a00

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  EMeshResult EVar9;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar10;
  longlong lVar11;
  FText *pFVar12;
  FDynamicMeshAttributeSet *this_00;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar16;
  FIndex3i_u_0 local_88;
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  TVector2<float>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    iVar14 = **(int **)this;
    iVar8 = (**(code **)(pFVar4->_padding_ + 0xa8))();
    if ((iVar14 < iVar8) &&
       (pTVar10 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                            ((param_1->AttributeSet).Ptr,iVar14),
       pTVar10 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      UE::Geometry::FDynamicMesh3::EnableTriangleGroups
                (*(FDynamicMesh3 **)((longlong)this + 0x18),0);
      UE::Geometry::FDynamicMesh3::EnableAttributes(*(FDynamicMesh3 **)((longlong)this + 0x18));
      plVar5 = *(longlong **)(*(longlong *)((longlong)this + 0x18) + 0x208);
      (**(code **)(*plVar5 + 0xb0))(plVar5,0);
      pFVar4 = (param_1->AttributeSet).Ptr;
      if ((pFVar4 == (FDynamicMeshAttributeSet *)0x0) ||
         (pTVar16 = (pFVar4->MaterialIDAttrib).Ptr,
         pTVar16 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
        pTVar16 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
        lVar15 = 0;
      }
      else {
        pFVar4 = *(FDynamicMeshAttributeSet **)(*(longlong *)((longlong)this + 0x18) + 0x208);
        this_00 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
          this_00 = pFVar4;
        }
        UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
        lVar15 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x208);
        lVar11 = 0;
        if (lVar15 != 0) {
          lVar11 = lVar15;
        }
        lVar15 = *(longlong *)(lVar11 + 0x48);
      }
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))();
      uVar13 = 0;
      iVar14 = *(int *)&pTVar10->field_0x8 * 0x200 + *(int *)&pTVar10->field_0xc;
      if (((iVar14 != 0) &&
          (0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar10->field_0x10 - 1U))) &&
         (uVar13 = 1, 1 < iVar14)) {
        do {
          lVar11 = (*(undefined8 **)&pTVar10->field_0x10)[uVar13 >> 9];
          if ((*(short *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar14);
      }
      iVar8 = *(int *)&pTVar10->field_0x8;
      iVar1 = *(int *)&pTVar10->field_0xc;
joined_r0x00014ce34b75:
      if (uVar13 != iVar8 * 0x200 + iVar1) {
        while( true ) {
          local_78._s_0.Z = 0.0;
          local_60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_40 = 0;
          local_3e = 0;
          local_78._s_0.X =
               (double)*(float *)(*(longlong *)
                                   (*(longlong *)&pTVar10->field_0x48 +
                                   (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar13 * 2 & 0x1ff) * 4);
          local_78._s_0.Y =
               (double)*(float *)(*(longlong *)
                                   (*(longlong *)&pTVar10->field_0x48 +
                                   (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) +
                                 (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4);
          local_58 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_4c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_48 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          UE::Geometry::FDynamicMesh3::InsertVertex
                    (*(FDynamicMesh3 **)((longlong)this + 0x18),uVar13,(FVertexInfo *)&local_78._s_0
                     ,true);
          uVar13 = uVar13 + 1;
          if (iVar14 <= (int)uVar13) break;
          while( true ) {
            lVar11 = *(longlong *)(*(longlong *)&pTVar10->field_0x10 + (ulonglong)(uVar13 >> 9) * 8)
            ;
            if ((*(short *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
            uVar13 = uVar13 + 1;
            if (iVar14 <= (int)uVar13) goto joined_r0x00014ce34b75;
          }
        }
        goto joined_r0x00014ce34b75;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x10))();
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x18))();
      uVar13 = 0;
      iVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      if (((iVar14 != 0) &&
          (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
          0xfffd < (ushort)(**(short **)pFVar6 - 1U))) && (uVar13 = 1, 1 < iVar14)) {
        do {
          lVar11 = *(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8);
          if ((*(short *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar14);
      }
      uVar2 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      uVar3 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
joined_r0x00014ce34d23:
      if (uVar13 == uVar2 * 0x200 + uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00014ce34ecf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x20))();
        return;
      }
      do {
        lVar11 = *(longlong *)&pTVar10->field_0x78;
        uVar7 = uVar13 * 3;
        local_88._s_0.C =
             *(int *)(*(longlong *)(lVar11 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                     (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
        local_88._s_0.B =
             *(int *)(*(longlong *)(lVar11 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                     (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
        local_88._s_0.A =
             *(int *)(*(longlong *)(lVar11 + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
        if ((param_1->TriangleGroups).bIsSet == false) {
          iVar8 = -1;
        }
        else {
          if ((-1 < (int)uVar13) &&
             ((int)uVar13 <
              (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                      AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
                                   (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe) {
              iVar8 = *(int *)(*(longlong *)
                                ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                + (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
              goto LAB_14ce34def;
            }
          }
          iVar8 = 0;
        }
LAB_14ce34def:
        EVar9 = UE::Geometry::FDynamicMesh3::InsertTriangle
                          (*(FDynamicMesh3 **)((longlong)this + 0x18),uVar13,
                           (FIndex3i *)&local_88._s_0,iVar8,true);
        if (EVar9 == Ok) {
          if (pTVar16 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x20) + (ulonglong)(uVar13 >> 9) * 8) +
             (ulonglong)(uVar13 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)&pTVar16->field_0x20 + (ulonglong)(uVar13 >> 9) * 8) +
                  (ulonglong)(uVar13 & 0x1ff) * 4);
          }
        }
        else {
          **(undefined1 **)((longlong)this + 0x20) = 1;
        }
        uVar13 = uVar13 + 1;
        if (iVar14 <= (int)uVar13) goto joined_r0x00014ce34d23;
        pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        while( true ) {
          if ((*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8) +
                         (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar13 >> 9) * 8) +
                        (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
          uVar13 = uVar13 + 1;
          if (iVar14 <= (int)uVar13) goto joined_r0x00014ce34d23;
        }
      } while( true );
    }
  }
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_88._s_0,L"UGeometryScriptLibrary_MeshUVFunctions",
                       L"CopyMeshToUVMesh_InvalidUVSet",
                       L"CopyMeshUVLayerToMesh: UVSetIndex does not exist on CopyFromMesh");
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar12);
  if ((longlong *)CONCAT44(local_88._s_0.B,local_88._s_0.A) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(local_88._s_0.B,local_88._s_0.A) + 0x10))();
  }
  return;
}

// operator() @ 14ce35190

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  int iVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FText *pFVar6;
  FDynamicMeshAttributeSet *pFVar7;
  FText local_38;
  FDynamicMeshUVEditor local_28;
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar3 = (**(code **)(pFVar4->_padding_ + 0xa8))();
    pFVar5 = (FDynamicMeshAttributeSet *)0x0;
    pFVar4 = pFVar5;
    if (iVar1 < iVar3) {
      pFVar4 = (FDynamicMeshAttributeSet *)
               UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer((param_1->AttributeSet).Ptr,iVar1)
      ;
    }
    pFVar2 = (param_1->AttributeSet).Ptr;
    pFVar7 = pFVar5;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar7 = pFVar2;
    }
    iVar1 = **(int **)((longlong)this + 8);
    iVar3 = (**(code **)(pFVar7->_padding_ + 0xa8))();
    if (iVar1 < iVar3) {
      pFVar5 = (FDynamicMeshAttributeSet *)
               UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer((param_1->AttributeSet).Ptr,iVar1)
      ;
    }
    if ((pFVar4 != (FDynamicMeshAttributeSet *)0x0) && (pFVar5 != (FDynamicMeshAttributeSet *)0x0))
    {
      UE::Geometry::FDynamicMeshUVEditor::FDynamicMeshUVEditor
                (&local_28,param_1,
                 (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar5);
      UE::Geometry::FDynamicMeshUVEditor::CopyUVLayer
                (&local_28,(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar4);
      return;
    }
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_MeshUVFunctions",L"SetNumUVSets_CopyUVSet",
                      L"CopyUVSet: From or To UV Set does not Exist");
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,pFVar6);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce39b20

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  int iVar3;
  FText *pFVar4;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res10;
  undefined1 local_58 [16];
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_48;
  undefined8 local_40;
  undefined8 local_38;
  FDynamicMesh3 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    if (-1 < iVar1) {
      iVar3 = (**(code **)(pFVar2->_padding_ + 0xa8))();
      if (iVar1 < iVar3) {
        local_res10 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                                ((param_1->AttributeSet).Ptr,iVar1);
        if (local_res10 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
          **(undefined1 **)((longlong)this + 0x10) = 1;
          local_48 = &local_res10;
          local_40 = *(undefined8 *)((longlong)this + 0x20);
          local_38 = *(undefined8 *)((longlong)this + 0x28);
          local_28 = *(undefined8 *)((longlong)this + 0x30);
          local_20 = *(undefined8 *)((longlong)this + 0x38);
          local_18 = *(undefined8 *)((longlong)this + 0x40);
          local_10 = *(undefined8 *)((longlong)this + 0x48);
          local_58._8_8_ = &local_48;
          local_58._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
               ::Call;
          local_30 = param_1;
          FGeometryScriptMeshSelection::ProcessByTriangleID
                    (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18),param_1,
                     (TFunctionRef<void___cdecl(int)> *)local_58,true);
          return;
        }
        goto LAB_14ce39c19;
      }
    }
    local_res10 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
  }
LAB_14ce39c19:
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_58,L"UGeometryScriptLibrary_MeshUVFunctions",
                      L"GetMeshUVSizeInfo_InvalidUVSet",L"GetMeshUVSizeInfo: UV Set does not Exist")
  ;
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar4);
  if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
  }
  return;
}

// operator() @ 14ce3c5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::LayoutMeshUVs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  char cVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGeometryScriptMeshSelection *this_00;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  FText *pFVar15;
  byte bVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  atomic<int> *paVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  FDynamicMesh3 *pFVar27;
  ForAnyElementType FVar28;
  undefined1 auStackY_388 [32];
  uint local_358;
  uint uStack_354;
  uint uStack_344;
  uint uStack_340;
  TArray<int,TSizedDefaultAllocator<32>_> local_338;
  float local_328;
  float fStack_324;
  FDynamicMesh3 *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  undefined1 local_2f8 [184];
  undefined1 local_240 [80];
  undefined1 local_1f0 [80];
  TVector2<float>_u_0 local_1a0;
  undefined4 local_198;
  int local_194;
  undefined4 local_18c;
  longlong *local_188;
  FDynamicMesh3 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  FSparseArrayAllocationInfo local_118;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_108;
  FText local_f8;
  TQuaternion<double>_u_0 local_e8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_320 = param_1;
  local_188 = this;
  pTVar11 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3>
                      (&local_108,param_1);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar27 = pTVar11->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar21 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar21 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  local_180 = pFVar27;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)local_2f8);
  uVar18 = 0;
  local_2f8._0_8_ = &___7FUVLayoutOp_Geometry_UE__6B_;
  local_1a0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_2f8._152_8_ = 1;
  local_2f8._160_4_ = 0x80;
  local_2f8[0xa4] = false;
  local_2f8[0xa5] = false;
  local_2f8[0xa6] = false;
  local_2f8[0xa7] = true;
  local_2f8._168_4_ = 1.0;
  local_2f8._172_4_ = 1.0;
  local_2f8[0xb0] = false;
  local_240._0_8_ = (void *)0x0;
  local_240._8_4_ = 0;
  local_240._12_4_ = -1;
  local_240._32_8_ = (void *)0x0;
  local_240._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_240._48_8_ = _UNK_150631d98;
  local_240._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_240._72_4_ = 0;
  local_1f0._0_8_ = (void *)0x0;
  local_1f0._8_4_ = 0;
  local_1f0._12_4_ = -1;
  local_1f0._32_8_ = (void *)0x0;
  local_1f0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1f0._48_8_ = _UNK_150631d98;
  local_1f0._64_8_ = (void *)0x0;
  local_1f0._72_4_ = 0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  local_178 = 0;
  uStack_170 = 0;
  local_2f8._136_8_ = pFVar27;
  local_2f8._144_8_ = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  cVar3 = **(char **)this;
  if (cVar3 == '\0') {
    local_2f8._152_8_ = (ulonglong)(uint)local_2f8._156_4_ << 0x20;
  }
  else if (cVar3 == '\x01') {
    local_2f8._152_4_ = 2;
  }
  else if (cVar3 == '\x02') {
    local_2f8._152_4_ = 1;
  }
  else if (cVar3 == '\x03') {
    local_2f8._152_4_ = 3;
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1215263500369134578>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshUVFunctions.cpp"
                       ,0x3f2,"false");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = *(FGeometryScriptMeshSelection **)((longlong)this + 8);
  local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_338.ArrayNum = 0;
  local_338.ArrayMax = 0;
  if ((pFVar27 == (FDynamicMesh3 *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray(this_00,pFVar27,&local_338,Triangle);
  lVar22 = *(longlong *)this;
  local_2f8._164_3_ = *(undefined3 *)(lVar22 + 0x20);
  local_2f8._168_4_ = *(float *)(lVar22 + 8);
  fStack_324 = (float)*(double *)(lVar22 + 0x18);
  local_328 = (float)*(double *)(lVar22 + 0x10);
  local_1a0._s_0.Y = fStack_324;
  local_1a0._s_0.X = local_328;
  local_2f8[0xb0] = *(undefined1 *)(lVar22 + 0x23);
  local_e8._s_0.X = 0.0;
  local_e8._s_0.Y = 0.0;
  local_e8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_e8._s_0.W = _UNK_15061cbc8;
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2f8._156_4_ = **(int **)((longlong)this + 0x10);
  local_2f8._160_4_ = *(int *)(lVar22 + 4);
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b0 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_ac = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uStack_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uStack_a4 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  local_a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  UE::Geometry::FUVLayoutOp::SetTransform
            ((FUVLayoutOp *)local_2f8,(TTransformSRT3<double> *)&local_e8._s_0);
  FVar28.Data = local_338.AllocatorInstance.Data;
  iVar9 = local_338.ArrayNum;
  lVar22 = (longlong)local_338.ArrayNum;
  local_2f8[0xb0] = *(undefined1 *)(*(longlong *)this + 0x23);
  if (local_338.ArrayNum < 1) goto LAB_14ce3d00f;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,local_338.ArrayNum);
  uVar19 = 1;
  if (3 < (uint)iVar9) {
    uVar24 = (ulonglong)(((uint)iVar9 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_198 = (undefined4)lVar14;
    uVar19 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_50 == 0) || ((int)local_50 < (int)uVar19)) {
    local_50 = uVar19;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar19 != 0) {
      uVar20 = uVar19;
      if (uVar19 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar20 = 0;
          goto LAB_14ce3c9ba;
        }
      }
      else {
LAB_14ce3c9ba:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar20,4);
      }
      if (0 < (int)uVar19) {
        uVar26 = (ulonglong)uVar19;
        uVar24 = uVar18;
        do {
          FVar17.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_58.Data;
          }
          uVar12 = (longlong)(int)uVar19 - 1U & uVar24;
          uVar24 = uVar24 + 1;
          *(undefined4 *)(FVar17.Data + uVar12 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_50 != 0) {
      local_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      local_358 = 0;
      uStack_354 = 1;
      uStack_344 = 0;
      uStack_340 = 0;
      if (local_70 != 0) {
        FVar25 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar25 = local_78;
        }
        uVar19 = *(uint *)FVar25;
        uVar24 = uVar18;
        while (uVar19 == 0) {
          uStack_340 = (int)uVar24 + 0x20;
          uVar24 = (ulonglong)uStack_340;
          iVar9 = (int)uVar18;
          local_358 = iVar9 + 1;
          uVar18 = (ulonglong)local_358;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_358)
          goto LAB_14ce3cae5;
          uVar19 = ((uint *)((longlong)FVar25 + 4))[iVar9];
        }
        uStack_354 = -uVar19 & uVar19;
        uVar18 = (ulonglong)uStack_354 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_194 = (int)lVar14;
        uStack_344 = (uStack_340 - 1) + local_194;
        uVar18 = (ulonglong)uStack_344;
        if ((int)local_70 < (int)uStack_344) {
LAB_14ce3cae5:
          uVar18 = (ulonglong)local_70;
          uStack_344 = local_70;
        }
      }
      local_168 = (longlong *)local_98;
      local_160._padding_ = CONCAT44(uStack_354,local_358);
      local_160.UnvisitedBitMask = 0xffffffff;
      local_160.CurrentBitIndex = uStack_344;
      local_160.BaseBitIndex = uStack_340;
      if ((int)uVar18 < (int)local_70) {
        do {
          lVar14 = *local_168;
          lVar13 = (longlong)(int)uVar18;
          uVar19 = local_50 - 1 & *(uint *)(lVar14 + lVar13 * 0xc);
          *(uint *)(lVar14 + 8 + lVar13 * 0xc) = uVar19;
          FVar17.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_58.Data;
          }
          uVar24 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
          *(undefined4 *)(lVar14 + 4 + lVar13 * 0xc) = *(undefined4 *)(FVar17.Data + uVar24 * 4);
          *(int *)(FVar17.Data + uVar24 * 4) = (int)uVar18;
          local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
          uVar18 = (ulonglong)(uint)local_160.CurrentBitIndex;
        } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
      }
    }
  }
  pFVar1 = FVar28.Data + lVar22 * 4;
  iVar9 = local_68;
  for (; local_68 = iVar9, FVar28.Data != pFVar1; FVar28.Data = FVar28.Data + 4) {
    if (local_64 == 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),1);
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_78;
      }
      bVar16 = (byte)iVar10 & 0x1f;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x1f;
        bVar16 = bVar16 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar25 + (longlong)(iVar10 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar16 & 0x1f));
    }
    else {
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar9 * 0xc + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_118,iVar9);
    if (local_118.Pointer != (uint *)0x0) {
      *(uint *)local_118.Pointer = *(uint *)FVar28.Data;
      *(uint *)((longlong)local_118.Pointer + 4) = 0xffffffff;
    }
    uVar19 = *(uint *)local_118.Pointer;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar17.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar17.Data = local_58.Data;
      }
      for (iVar9 = *(int *)(FVar17.Data + (ulonglong)(local_50 - 1 & uVar19) * 4); iVar9 != -1;
          iVar9 = *(int *)(local_98._0_8_ + (longlong)iVar9 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar9 * 0xc) == uVar19) {
          if (iVar9 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar9 * 0xc) = uVar19;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_118.Index,1);
            goto LAB_14ce3cf94;
          }
          break;
        }
      }
    }
    uVar23 = local_98._8_4_ - local_64;
    uVar20 = 1;
    if (3 < uVar23) {
      uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_18c = (undefined4)lVar22;
      uVar20 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar23 < 1) || ((int)uVar20 <= (int)local_50)) {
      uVar19 = local_50 - 1 & uVar19;
      *(uint *)((longlong)local_118.Pointer + 8) = uVar19;
      FVar17.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar17.Data = local_58.Data;
      }
      uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
      *(uint *)((longlong)local_118.Pointer + 4) = *(uint *)(FVar17.Data + uVar18 * 4);
      *(int *)(FVar17.Data + uVar18 * 4) = local_118.Index;
    }
    else {
      local_50 = uVar20;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar20 != 0) {
        uVar19 = uVar20;
        if (uVar20 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar19 = 0;
            goto LAB_14ce3cde5;
          }
        }
        else {
LAB_14ce3cde5:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar19,4)
          ;
        }
        if (0 < (int)uVar20) {
          uVar18 = 0;
          uVar24 = (ulonglong)uVar20;
          do {
            FVar17.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar17.Data = local_58.Data;
            }
            uVar26 = (longlong)(int)uVar20 - 1U & uVar18;
            uVar18 = uVar18 + 1;
            *(undefined4 *)(FVar17.Data + uVar26 * 4) = 0xffffffff;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      if (local_50 != 0) {
        local_318.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_318._padding_._0_4_ = 0;
        local_318._padding_._4_4_ = 1;
        local_318.UnvisitedBitMask = 0xffffffff;
        local_318.CurrentBitIndex = 0;
        local_318.BaseBitIndex = 0;
        if (local_70 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
        }
        local_140 = (longlong *)local_98;
        local_138._padding_ = CONCAT44(local_318._padding_._4_4_,(undefined4)local_318._padding_);
        local_138.Array = local_318.Array;
        local_138.UnvisitedBitMask = local_318.UnvisitedBitMask;
        local_138.CurrentBitIndex = local_318.CurrentBitIndex;
        local_138.BaseBitIndex = local_318.BaseBitIndex;
        local_138._28_4_ = local_318._28_4_;
        if (local_318.CurrentBitIndex < (local_318.Array)->NumBits) {
          do {
            lVar22 = *local_140;
            lVar14 = (longlong)local_138.CurrentBitIndex;
            uVar19 = local_50 - 1 & *(uint *)(lVar22 + lVar14 * 0xc);
            *(uint *)(lVar22 + 8 + lVar14 * 0xc) = uVar19;
            FVar17.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar17.Data = local_58.Data;
            }
            uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
            *(undefined4 *)(lVar22 + 4 + lVar14 * 0xc) = *(undefined4 *)(FVar17.Data + uVar18 * 4);
            *(int *)(FVar17.Data + uVar18 * 4) = local_138.CurrentBitIndex;
            local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
          } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
        }
      }
    }
LAB_14ce3cf94:
    pFVar27 = local_180;
    this = local_188;
    iVar9 = local_68;
  }
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
            ((TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)local_240,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_98,0);
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  param_1 = local_320;
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
    param_1 = local_320;
  }
LAB_14ce3d00f:
  lVar22 = *(longlong *)this;
  if (0 < *(int *)(lVar22 + 0x30) - *(int *)(lVar22 + 0x5c)) {
    TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>::
    operator=((TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
               *)local_1f0,
              (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
              (lVar22 + 0x28));
  }
  UE::Geometry::FUVLayoutOp::CalculateResult((FUVLayoutOp *)local_2f8,(FProgressCancel *)0x0);
  uVar6 = local_2f8._8_8_;
  if (local_2f8._96_4_ == Success) {
    local_2f8._8_8_ = (FDynamicMesh3 *)0x0;
    UE::Geometry::FDynamicMesh3::operator=(param_1,(FDynamicMesh3 *)uVar6);
    if ((FDynamicMesh3 *)uVar6 != (FDynamicMesh3 *)0x0) {
      (**(code **)*(longlong *)uVar6)(uVar6);
    }
  }
  else {
    if ((pFVar27 == (FDynamicMesh3 *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Geometry::FDynamicMesh3::operator=(param_1,pFVar27);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"UGeometryScriptLibrary_MeshUVFunctions",
                         L"LayoutMeshUVs_ComputeError",
                         L"LayoutMeshUVs: Error computing result, returning input mesh");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x18),InvalidInputs,
               pFVar15);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
  }
  if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.AllocatorInstance.Data);
  }
  local_2f8._0_8_ = &___7FUVLayoutOp_Geometry_UE__6B_;
  if (local_1f0._12_4_ != -1) {
    local_1f0._72_4_ = 0;
    if ((void *)local_1f0._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f0._64_8_);
    }
    local_1f0._8_4_ = 0;
    if (local_1f0._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_1f0,0,(int *)(local_1f0 + 0xc));
    }
    uVar7 = local_1f0._44_4_;
    local_1f0._48_8_ = 0xffffffff;
    local_1f0._40_8_ = (ulonglong)(uint)local_1f0._44_4_ << 0x20;
    if (0x80 < (uint)uVar7) {
      local_1f0._40_8_ = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f0 + 0x10),0);
    }
    if ((void *)local_1f0._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f0._32_8_);
    }
    if ((void *)local_1f0._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f0._0_8_);
    }
  }
  if (local_240._12_4_ != -1) {
    local_240._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_240._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_240._64_8_);
    }
    local_240._8_4_ = 0;
    if (local_240._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_240,0,(int *)(local_240 + 0xc));
    }
    uVar7 = local_240._44_4_;
    local_240._48_8_ = 0xffffffff;
    local_240._40_8_ = (ulonglong)(uint)local_240._44_4_ << 0x20;
    if (0x80 < (uint)uVar7) {
      local_240._40_8_ = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_240 + 0x10),0);
    }
    if ((void *)local_240._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_240._32_8_);
    }
    if ((void *)local_240._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_240._0_8_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2f8._144_8_);
  local_2f8._0_8_ = &___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_2f8._120_8_,local_2f8._128_4_);
  if ((FGeometryWarning *)local_2f8._120_8_ != (FGeometryWarning *)0x0) {
    FMemory::Free((void *)local_2f8._120_8_);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_2f8._104_8_,local_2f8._112_4_);
  if ((FGeometryError *)local_2f8._104_8_ != (FGeometryError *)0x0) {
    FMemory::Free((void *)local_2f8._104_8_);
  }
  if ((FDynamicMesh3 *)local_2f8._8_8_ != (FDynamicMesh3 *)0x0) {
    (**(code **)*(longlong *)local_2f8._8_8_)(local_2f8._8_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 14ce3d670

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  char cVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  char *pcVar3;
  code *pcVar4;
  FPolygroupLayer FVar5;
  float fVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  uint uVar9;
  FPolygroupSet *pFVar10;
  FPolygroupSet *pFVar11;
  FText *pFVar12;
  uint uVar13;
  FPolygroupSet *pFVar14;
  uint uVar15;
  int iVar16;
  <lambda_1> local_res8 [8];
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res18 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_188;
  FPolygroupSet *local_178;
  int local_170;
  FPolygroupLayer local_168;
  FMeshConnectedComponents local_160;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  FExpMapOptions local_138;
  TArrayView<std::nullptr_t,int> local_128;
  code *local_118;
  TArray<bool,TSizedDefaultAllocator<32>_> **local_110;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_108;
  FMeshConnectedComponents *local_100;
  FDynamicMeshUVEditor *local_f8;
  FText local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  FPolygroupSet **local_c0;
  undefined8 local_b0;
  code *local_a8 [2];
  undefined **local_98;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_90;
  undefined8 local_80;
  code *local_78 [2];
  undefined **local_68;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_60;
  undefined8 local_50;
  
  pFVar14 = (FPolygroupSet *)0x0;
  local_178 = (FPolygroupSet *)0x0;
  local_res18[0] = param_2;
  if ((*(char *)(*(longlong *)this + 1) == '\0') &&
     (bVar7 = FGeometryScriptMeshSelection::IsEmpty
                        (*(FGeometryScriptMeshSelection **)((longlong)this + 8)), bVar7)) {
    local_168.bIsDefaultLayer = *(bool *)(*(longlong *)this + 0x10);
    local_168.LayerIndex = *(int *)(*(longlong *)this + 0x14);
    bVar7 = UE::Geometry::FPolygroupLayer::CheckExists(&local_168,param_1);
    if (!bVar7) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_f0,L"UGeometryScriptLibrary_MeshUVFunctions",
                           L"RecomputeMeshUVs_MissingGroups",
                           L"RecomputeMeshUVs: Requested Polygroup Layer does not exist");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),OperationFailed,
                 pFVar12);
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      goto LAB_14ce3dba6;
    }
    pFVar10 = ::operator_new(0x18);
    pFVar11 = pFVar14;
    if (pFVar10 != (FPolygroupSet *)0x0) {
      FVar5.LayerIndex = local_168.LayerIndex;
      FVar5.bIsDefaultLayer = local_168.bIsDefaultLayer;
      FVar5._1_3_ = local_168._1_3_;
      pFVar11 = UE::Geometry::FPolygroupSet::FPolygroupSet(pFVar10,param_1,FVar5);
    }
    pFVar10 = local_178;
    local_178 = pFVar11;
    ::operator_delete(pFVar10,0x18);
    ::operator_delete((void *)0x0,0x18);
  }
  local_160.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.Components.Array.ArrayNum = 0;
  local_160.Components.Array.ArrayMax = 0;
  local_160.Mesh = param_1;
  bVar7 = FGeometryScriptMeshSelection::IsEmpty
                    (*(FGeometryScriptMeshSelection **)((longlong)this + 8));
  if (bVar7) {
    if (*(char *)(*(longlong *)this + 1) == '\0') {
      local_b0 = 0;
      local_c8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`16'::<lambda_1>,0,0>
                  ::_vftable_;
      local_c0 = &local_178;
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>,bool,int,int>
                    ::Call;
      UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
                (&local_160,(TFunction<bool___cdecl(int,int)> *)local_d8);
    }
    else {
      local_80 = 0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`18'::<lambda_2>,0,0>
                  ::_vftable_;
      local_90 = local_res18;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l18::<lambda_2>,bool,int,int>
                    ::Call;
      UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
                (&local_160,(TFunction<bool___cdecl(int,int)> *)local_a8);
    }
  }
  else {
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,&local_148,Triangle);
    local_50 = 0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::`2'::<lambda_1>::operator()'::`20'::<lambda_3>,0,0>
                ::_vftable_;
    local_60 = local_res18;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l20::<lambda_3>,bool,int,int>
                  ::Call;
    UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
              (&local_160,&local_148,(TFunction<bool___cdecl(int,int)> *)local_78);
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  iVar16 = local_160.Components.Array.ArrayNum;
  local_170 = local_160.Components.Array.ArrayNum;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  local_res8[0] = (<lambda_1>)0x0;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&local_188,(bool *)local_res8,local_160.Components.Array.ArrayNum);
  fVar6 = __real_3f800000;
  pFVar11 = pFVar14;
  if (0 < iVar16) {
    do {
      uVar13 = (uint)pFVar14;
      uVar15 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < local_160.Components.Array.ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar2 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                (local_160.Components.Array.AllocatorInstance.Data + (longlong)pFVar11 * 8);
      uVar9 = 0;
      if ((int)uVar13 < local_188.ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_188.AllocatorInstance.Data[(longlong)&pFVar11->Mesh] = (FScriptContainerElement)0x0;
      pcVar3 = *(char **)this;
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        local_138.NormalSmoothingRounds = *(int *)(pcVar3 + 4);
        local_138.NormalSmoothingAlpha = (double)*(float *)(pcVar3 + 8);
        FVar8 = (FScriptContainerElement)
                UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
                          (param_3,pTVar2,&local_138,(FUVEditResult *)0x0);
        uVar9 = 0;
        if ((int)uVar13 < local_188.ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_188.AllocatorInstance.Data[(longlong)&pFVar11->Mesh] = FVar8;
      }
      else {
        if (cVar1 == '\x01') {
          FVar8 = (FScriptContainerElement)
                  UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundaryConformal
                            (param_3,pTVar2,(FUVEditResult *)0x0);
        }
        else {
          if (cVar1 != '\x02') goto LAB_14ce3daee;
          FVar8 = (FScriptContainerElement)
                  UE::Geometry::FDynamicMeshUVEditor::
                  SetTriangleUVsFromFreeBoundarySpectralConformal
                            (param_3,pTVar2,false,(bool)pcVar3[0xc],(FUVEditResult *)0x0);
        }
        uVar9 = 0;
        if ((int)uVar13 < local_188.ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_188.AllocatorInstance.Data[(longlong)&pFVar11->Mesh] = FVar8;
        uVar9 = 0;
        if ((int)uVar13 < local_188.ArrayNum) {
          uVar9 = uVar15;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_188.AllocatorInstance.Data[(longlong)&pFVar11->Mesh] !=
            (FScriptContainerElement)0x0) {
          UE::Geometry::FDynamicMeshUVEditor::ScaleUVAreaTo3DArea(param_3,pTVar2,true,fVar6);
        }
      }
LAB_14ce3daee:
      pFVar14 = (FPolygroupSet *)(ulonglong)(uVar13 + 1);
      pFVar11 = (FPolygroupSet *)((longlong)&pFVar11->Mesh + 1);
      iVar16 = local_170;
    } while ((longlong)pFVar11 < (longlong)local_170);
  }
  if (*(char *)(*(longlong *)this + 0x18) != '\0') {
    local_108 = &local_188;
    local_100 = &local_160;
    local_128.DataPtr = (void **)0x0;
    local_128.ArrayNum = 0;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>::operator()'::__l37::<lambda_4>,void,int>
                ::Call;
    local_110 = &local_108;
    local_f8 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar16,1,(TFunctionRef<void___cdecl(int)> *)&local_118,
               local_res8[0],None,&local_128);
  }
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_160.Components);
LAB_14ce3dba6:
  ::operator_delete(local_178,0x18);
  return;
}

// operator() @ 14ce3ebc0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  <lambda_1> local_res8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res18 [2];
  FDynamicMeshUVEditor *local_b8;
  FMeshConnectedComponents *local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  FDynamicMeshUVEditor **local_90;
  FMeshConnectedComponents local_88;
  code *local_68 [2];
  undefined **local_58;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_50;
  undefined8 local_40;
  
  local_res18[0] = param_2;
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_50 = local_res18;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,bool,int,int>
                  ::Call;
    local_88.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Components.Array.ArrayNum = 0;
    local_88.Components.Array.ArrayMax = 0;
    local_40 = 0;
    local_88.Mesh = param_1;
    UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
              (&local_88,(TFunction<bool___cdecl(int,int)> *)local_68);
    local_b0 = &local_88;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,void,int>
               ::Call;
    local_90 = &local_b8;
    local_a8.DataPtr = (void **)0x0;
    local_a8.ArrayNum = 0;
    local_b8 = param_3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_88.Components.Array.ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_98,local_res8,None,&local_a8);
    FVar3.Data = local_88.Components.Array.AllocatorInstance.Data;
    for (iVar4 = local_88.Components.Array.ArrayNum; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = *(undefined8 **)FVar3.Data;
      if (puVar1 != (undefined8 *)0x0) {
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
        ::operator_delete(puVar1,0x10);
      }
      FVar3.Data = FVar3.Data + 8;
    }
    uVar2 = (ulonglong)local_88.Components.Array._8_8_ >> 0x20;
    local_88.Components.Array._8_8_ = local_88.Components.Array._8_8_ & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&local_88.Components,0,
                 &local_88.Components.Array.ArrayMax);
    }
    if (local_88.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Components.Array.AllocatorInstance.Data);
    }
  }
  iVar4 = **(int **)this;
  if (iVar4 < 0x10) {
    iVar4 = 0x10;
  }
  UE::Geometry::FDynamicMeshUVEditor::QuickPack(param_3,iVar4,__real_3f800000);
  return;
}

// operator() @ 14ce41980

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  undefined8 *puVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  code *local_78;
  undefined8 **local_70;
  double local_68;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8 = &local_88;
  local_70 = (undefined8 **)&local_res8;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_78,true);
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_68 = (double)puVar1[6];
  local_48._s_0.X = (double)puVar1[4];
  local_48._s_0.Y = (double)puVar1[5];
  local_30 = *puVar1;
  local_28 = puVar1[1];
  local_20 = puVar1[2];
  local_18 = puVar1[3];
  local_60._s_0.X = (double)puVar1[8];
  local_60._s_0.Y = (double)puVar1[9];
  local_60._s_0.Z = (double)puVar1[10];
  local_70 = (undefined8 **)&local_res8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  local_res8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48._s_0.Z = local_68;
  UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromBoxProjection
            (param_3,&local_88,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_78,(TFrame3<double> *)&local_48._s_0,(TVector<double> *)&local_60._s_0,
             **(int **)((longlong)this + 0x10),(FUVEditResult *)0x0);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce41aa0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  undefined8 *puVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  code *local_78;
  undefined8 **local_70;
  double local_68;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8 = &local_88;
  local_70 = (undefined8 **)&local_res8;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_78,true);
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_68 = (double)puVar1[6];
  local_48._s_0.X = (double)puVar1[4];
  local_48._s_0.Y = (double)puVar1[5];
  local_30 = *puVar1;
  local_28 = puVar1[1];
  local_20 = puVar1[2];
  local_18 = puVar1[3];
  local_60._s_0.Z = (double)puVar1[10];
  local_60._s_0.X = (double)puVar1[8];
  local_60._s_0.Y = (double)puVar1[9];
  local_70 = (undefined8 **)&local_res8;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  local_res8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((ulonglong)local_res8 & 0xffffffffffffff00);
  local_48._s_0.Z = local_68;
  UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromCylinderProjection
            (param_3,&local_88,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_78,(TFrame3<double> *)&local_48._s_0,(TVector<double> *)&local_60._s_0,
             **(float **)((longlong)this + 0x10),(FUVEditResult *)0x0);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce41bc0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  undefined8 *puVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  undefined8 **local_60;
  undefined8 local_58;
  TVector2<double>_u_0 local_50;
  TVector<double>_u_0 local_40;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res8 = &local_78;
  local_60 = (undefined8 **)&local_res8;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_68,true);
  puVar1 = *(undefined8 **)((longlong)this + 8);
  local_res8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((ulonglong)local_res8 & 0xffffffffffffff00);
  local_40._s_0.Z = (double)puVar1[6];
  local_40._s_0.X = (double)puVar1[4];
  local_40._s_0.Y = (double)puVar1[5];
  local_60 = (undefined8 **)&local_res8;
  local_28 = *puVar1;
  local_20 = puVar1[1];
  local_18 = puVar1[2];
  local_10 = puVar1[3];
  local_50._s_0.X = (double)puVar1[8];
  local_50._s_0.Y = (double)puVar1[9];
  local_58 = puVar1[10];
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
             ::Call;
  UE::Geometry::FDynamicMeshUVEditor::SetTriangleUVsFromPlanarProjection
            (param_3,&local_78,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_68,(TFrame3<double> *)&local_40._s_0,(TVector2<double> *)&local_50._s_0,
             (FUVEditResult *)0x0);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce42d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::SetUVSeamsAlongSelectedEdges'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  ForElementType<unsigned_int> this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  uint uVar14;
  ulong64 uVar15;
  uint *puVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  undefined1 auStackY_188 [32];
  uint local_158;
  uint uStack_154;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  void *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  FSparseArrayAllocationInfo local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar10 = 0;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_100 = this;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,&local_118,Edge);
  FVar20.Data = local_118.AllocatorInstance.Data;
  iVar6 = local_118.ArrayNum;
  uVar15 = (ulong64)local_118.ArrayNum;
  if ((local_118.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (iVar6 == 0) goto LAB_14ce43029;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar15);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,iVar6);
  uVar13 = 1;
  if (3 < (uint)iVar6) {
    uVar18 = (ulonglong)(((uint)iVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_14ce43029;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar14 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_14ce42e7e;
      }
    }
    else {
LAB_14ce42e7e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar14,4);
    }
    if (0 < (int)uVar13) {
      uVar19 = (ulonglong)uVar13;
      uVar18 = uVar10;
      do {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar8 = uVar18 & (longlong)(int)uVar13 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (local_50 != 0) {
    local_158 = 0;
    uStack_154 = 1;
    uStack_144 = 0;
    uStack_140 = 0;
    if (local_70 != 0) {
      FVar12 = this_00;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      uVar13 = *(uint *)FVar12;
      uVar18 = uVar10;
      while (uVar13 == 0) {
        uStack_140 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_140;
        iVar6 = (int)uVar10;
        local_158 = iVar6 + 1;
        uVar10 = (ulonglong)local_158;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_158)
        goto LAB_14ce42f8e;
        uVar13 = *(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)iVar6 * 4);
      }
      uStack_154 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_154 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_144 = (int)lVar3 + -1 + uStack_140;
      uVar10 = (ulonglong)uStack_144;
      if ((int)local_70 < (int)uStack_144) {
LAB_14ce42f8e:
        uVar10 = (ulonglong)local_70;
        uStack_144 = local_70;
      }
    }
    local_f8 = (longlong *)local_98;
    local_f0._padding_ = CONCAT44(uStack_154,local_158);
    local_f0.CurrentBitIndex = uStack_144;
    local_f0.UnvisitedBitMask = 0xffffffff;
    local_f0._28_4_ = uStack_13c;
    local_f0.BaseBitIndex = uStack_140;
    local_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar6 = (int)uVar10;
        uVar13 = local_50 - 1 & *(uint *)(*local_f8 + (longlong)iVar6 * 0xc);
        lVar3 = *local_f8 + (longlong)iVar6 * 0xc;
        *(uint *)(lVar3 + 8) = uVar13;
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar11.Data + uVar10 * 4);
        *(int *)(FVar11.Data + uVar10 * 4) = iVar6;
        local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
        uVar10 = (ulonglong)(uint)local_f0.CurrentBitIndex;
      } while (local_f0.CurrentBitIndex < *(int *)((longlong)local_f0.Array + 0x18));
    }
  }
LAB_14ce43029:
  pFVar1 = FVar20.Data + uVar15 * 4;
  iVar6 = local_68;
  do {
    local_68 = iVar6;
    if (FVar20.Data == pFVar1) {
      if (*(char *)((longlong)local_100 + 8) == '\0') {
        UE::Geometry::FDynamicMeshUVEditor::RemoveSeamsAtEdges
                  (param_3,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
      }
      else {
        UE::Geometry::FDynamicMeshUVEditor::CreateSeamsAtEdges
                  (param_3,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                   (FUVEditResult *)0x0);
      }
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      bVar5 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = -1;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      return;
    }
    puVar16 = (uint *)0x0;
    if (local_64 == 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
      FVar12 = this_00;
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78;
      }
      bVar9 = (byte)iVar7 & 0x1f;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
        bVar9 = bVar9 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar12 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar9 & 0x1f));
    }
    else {
      local_68 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0xc + 4);
      local_64 = local_64 + -1;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)local_68 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_a8,iVar6);
    if (local_a8.Pointer != (uint *)0x0) {
      *(uint *)local_a8.Pointer = *(uint *)FVar20.Data;
      *(uint *)((longlong)local_a8.Pointer + 4) = 0xffffffff;
      puVar16 = local_a8.Pointer;
    }
    uVar13 = *puVar16;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar11.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_58.Data;
      }
      for (iVar6 = *(int *)(FVar11.Data + (ulonglong)(local_50 - 1 & uVar13) * 4); iVar6 != -1;
          iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar6 * 0xc) == uVar13) {
          if (iVar6 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar6 * 0xc) = uVar13;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_a8.Index,1);
            goto LAB_14ce433ea;
          }
          break;
        }
      }
    }
    uVar10 = 0;
    uVar17 = local_98._8_4_ - local_64;
    uVar14 = 1;
    if (3 < uVar17) {
      uVar18 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar17 < 1) || ((int)uVar14 <= (int)local_50)) {
      uVar13 = local_50 - 1 & uVar13;
      puVar16[2] = uVar13;
      FVar11.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_58.Data;
      }
      uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
      puVar16[1] = *(uint *)(FVar11.Data + uVar10 * 4);
      *(int *)(FVar11.Data + uVar10 * 4) = local_a8.Index;
    }
    else {
      local_50 = uVar14;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar14 != 0) {
        uVar13 = uVar14;
        if (uVar14 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar13 = 0;
            goto LAB_14ce43214;
          }
        }
        else {
LAB_14ce43214:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4)
          ;
        }
        if (0 < (int)uVar14) {
          uVar19 = (ulonglong)uVar14;
          uVar18 = uVar10;
          do {
            FVar11.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_58.Data;
            }
            uVar8 = uVar18 & (longlong)(int)uVar14 - 1U;
            uVar18 = uVar18 + 1;
            *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (local_50 != 0) {
        local_138 = 0;
        uStack_134 = 1;
        uStack_124 = 0;
        uStack_120 = 0;
        if (local_70 != 0) {
          FVar12 = this_00;
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_78;
          }
          uVar13 = *(uint *)FVar12;
          uVar18 = uVar10;
          while (uVar13 == 0) {
            uStack_120 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)uStack_120;
            iVar6 = (int)uVar10;
            local_138 = iVar6 + 1;
            uVar10 = (ulonglong)local_138;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_138)
            goto LAB_14ce4331e;
            uVar13 = *(uint *)((uchar *)((longlong)FVar12 + 4) + (longlong)iVar6 * 4);
          }
          uStack_134 = -uVar13 & uVar13;
          uVar10 = (ulonglong)uStack_134 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_124 = (int)lVar3 + -1 + (int)uVar18;
          uVar10 = (ulonglong)uStack_124;
          if ((int)local_70 < (int)uStack_124) {
LAB_14ce4331e:
            uVar10 = (ulonglong)local_70;
            uStack_124 = local_70;
          }
        }
        local_d0 = (longlong *)local_98;
        local_c8._padding_ = CONCAT44(uStack_134,local_138);
        local_c8.CurrentBitIndex = uStack_124;
        local_c8.UnvisitedBitMask = 0xffffffff;
        local_c8._28_4_ = uStack_11c;
        local_c8.BaseBitIndex = uStack_120;
        local_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
        if ((int)uVar10 < (int)local_70) {
          do {
            iVar6 = (int)uVar10;
            uVar13 = local_50 - 1 & *(uint *)(*local_d0 + (longlong)iVar6 * 0xc);
            lVar3 = *local_d0 + (longlong)iVar6 * 0xc;
            *(uint *)(lVar3 + 8) = uVar13;
            FVar11.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_58.Data;
            }
            uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
            *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar11.Data + uVar10 * 4);
            *(int *)(FVar11.Data + uVar10 * 4) = iVar6;
            local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
            uVar10 = (ulonglong)(uint)local_c8.CurrentBitIndex;
          } while (local_c8.CurrentBitIndex < *(int *)((longlong)local_c8.Array + 0x18));
        }
      }
    }
LAB_14ce433ea:
    FVar20.Data = FVar20.Data + 4;
    iVar6 = local_68;
  } while( true );
}

// operator() @ 14ce45bc0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::AddUVElementToMesh'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  int iVar3;
  TDynamicMeshOverlay<float,2> *this_00;
  float local_res10;
  float local_res14;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    iVar3 = **(int **)this;
    iVar2 = (**(code **)(pFVar1->_padding_ + 0xa8))();
    if ((iVar3 < iVar2) &&
       (this_00 = (TDynamicMeshOverlay<float,2> *)
                  UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                            ((param_1->AttributeSet).Ptr,iVar3),
       this_00 != (TDynamicMeshOverlay<float,2> *)0x0)) {
      **(undefined1 **)((longlong)this + 8) = 1;
      local_res14 = (float)(*(double **)((longlong)this + 0x18))[1];
      local_res10 = (float)**(double **)((longlong)this + 0x18);
      iVar3 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_res10);
      **(int **)((longlong)this + 0x10) = iVar3;
    }
  }
  return;
}

// operator() @ 14ce46fb0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  FDynamicMeshAttributeSet *pFVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar13;
  bool bVar14;
  int iVar15;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar16;
  FText *pFVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int local_res10 [2];
  uint local_res18;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res20;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_98 [4];
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [16];
  FText local_68 [3];
  
  pFVar6 = (param_1->AttributeSet).Ptr;
  if (pFVar6 == (FDynamicMeshAttributeSet *)0x0) {
LAB_14ce474f6:
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                         L"GetMeshPerVertexUVs_InvalidUVSet",
                         L"GetMeshPerVertexUVs: UVSetIndex does not exist on TargetMesh");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar17);
    if (local_68[0].TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_68[0].TextData.Reference + 0x10))();
    return;
  }
  iVar4 = **(int **)this;
  iVar15 = (**(code **)(pFVar6->_padding_ + 0xa8))();
  if ((iVar15 <= iVar4) ||
     (pTVar16 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                          ((param_1->AttributeSet).Ptr,iVar4), local_res20 = pTVar16,
     pTVar16 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0))
  goto LAB_14ce474f6;
  *(bool *)*(undefined8 *)((longlong)this + 0x10) =
       (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0;
  pFVar7 = *(ForAnyElementType **)((longlong)this + 0x18);
  uVar20 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar21 = (ulonglong)uVar20;
  local_78 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  puVar1 = (uint *)((longlong)&pFVar7[1].Data + 4);
  *(undefined4 *)&pFVar7[1].Data = 0;
  if (*puVar1 != uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,pFVar7,0,(int *)puVar1);
  }
  if (0 < (int)uVar20) {
    do {
      if (((pFVar7->Data <= (FScriptContainerElement *)local_78) &&
          ((FScriptContainerElement *)local_78 < pFVar7->Data + (longlong)(int)*puVar1 * 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar20 = *(uint *)&pFVar7[1].Data;
      if (uVar20 == *puVar1) {
        uVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar7,(int *)puVar1);
      }
      *(uint *)&pFVar7[1].Data = uVar20 + 1;
      pFVar8 = pFVar7->Data;
      *(undefined8 *)(pFVar8 + (longlong)(int)uVar20 * 0x10) = local_78._0_8_;
      *(undefined8 *)(pFVar8 + (longlong)(int)uVar20 * 0x10 + 8) = local_78._8_8_;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_res10[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_88,local_res10,*(int *)(*(longlong *)((longlong)this + 0x18) + 8));
  uVar20 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar21 = 0;
  if ((uVar20 != 0) &&
     (pFVar8 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar21 = 0,
     0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
    uVar21 = 1;
    uVar23 = 1;
    if ((int)uVar20 < 2) goto LAB_14ce471d9;
    do {
      uVar18 = (ulonglong)((uint)uVar21 & 0x1ff);
      lVar22 = *(longlong *)(pFVar8 + (uVar21 >> 9) * 8);
      if ((*(short *)(lVar22 + uVar18 * 2) != 0) && (*(short *)(lVar22 + uVar18 * 2) != -1)) break;
      uVar23 = (uint)uVar21 + 1;
      uVar21 = (ulonglong)uVar23;
    } while ((int)uVar23 < (int)uVar20);
  }
  uVar23 = (uint)uVar21;
LAB_14ce471d9:
  local_res18 = uVar20;
  if (uVar23 != uVar20) {
LAB_14ce471f0:
    do {
      pTVar13 = local_res20;
      lVar22 = *(longlong *)&pTVar16->field_0x78;
      uVar24 = (uint)uVar21;
      uVar12 = uVar24 * 3;
      uVar23 = *(uint *)(*(longlong *)(lVar22 + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
      if (-1 < (int)uVar23) {
        local_98[0] = uVar23;
        lVar19 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar21 >> 9) * 8);
        local_a0 = *(undefined4 *)(lVar19 + 8 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
        local_a8 = *(undefined8 *)(lVar19 + (ulonglong)(uVar24 & 0x1ff) * 0xc);
        local_98[1] = *(undefined4 *)
                       (*(longlong *)(lVar22 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                       (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
        lVar19 = 0;
        local_98[2] = *(undefined4 *)
                       (*(longlong *)(lVar22 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                       (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
        do {
          uVar20 = *(uint *)((longlong)&local_a8 + lVar19);
          uVar23 = 0;
          if ((int)uVar20 < local_88.ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar23 = *(uint *)((longlong)&local_a8 + lVar19);
          lVar22 = (longlong)(int)uVar23;
          if (*(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar20 * 4) == -1) {
            uVar20 = *(uint *)((longlong)local_98 + lVar19);
            plVar9 = *(longlong **)((longlong)this + 0x18);
            fVar2 = *(float *)(*(longlong *)
                                (*(longlong *)&pTVar13->field_0x48 +
                                (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar20 * 2 & 0x1ff) * 4);
            fVar3 = *(float *)(*(longlong *)
                                (*(longlong *)&pTVar13->field_0x48 +
                                (ulonglong)((uVar20 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar20 * 2 + 1 & 0x1ff) * 4);
            uVar20 = 0;
            if ((int)uVar23 < (int)plVar9[1]) {
              uVar20 = ~uVar23 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar10 = *plVar9;
            *(double *)(lVar10 + lVar22 * 0x10) = (double)fVar2;
            *(double *)(lVar10 + 8 + lVar22 * 0x10) = (double)fVar3;
            uVar20 = *(uint *)((longlong)&local_a8 + lVar19);
            uVar5 = *(undefined4 *)((longlong)local_98 + lVar19);
            uVar23 = 0;
            if ((int)uVar20 < local_88.ArrayNum) {
              uVar23 = ~uVar20 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(undefined4 *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar20 * 4) = uVar5;
          }
          else {
            uVar20 = 0;
            if ((int)uVar23 < local_88.ArrayNum) {
              uVar20 = ~uVar23 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (*(int *)(local_88.AllocatorInstance.Data + lVar22 * 4) !=
                *(int *)((longlong)local_98 + lVar19)) {
              **(undefined1 **)((longlong)this + 0x20) = 1;
            }
          }
          lVar19 = lVar19 + 4;
          pTVar16 = local_res20;
          uVar20 = local_res18;
        } while (lVar19 < 0xc);
      }
      uVar24 = uVar24 + 1;
      uVar21 = (ulonglong)uVar24;
      if ((int)uVar24 < (int)uVar20) {
        pFVar8 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
        do {
          uVar18 = (ulonglong)((uint)uVar21 & 0x1ff);
          if ((*(short *)(*(longlong *)(pFVar8 + (uVar21 >> 9) * 8) + uVar18 * 2) != 0) &&
             (*(short *)(*(longlong *)(pFVar8 + (uVar21 >> 9) * 8) + uVar18 * 2) != -1))
          goto LAB_14ce471f0;
          uVar24 = (uint)uVar21 + 1;
          uVar21 = (ulonglong)uVar24;
        } while ((int)uVar24 < (int)uVar20);
      }
    } while (uVar24 != uVar20);
  }
  **(undefined1 **)((longlong)this + 0x28) = 1;
  if (local_88.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_88.AllocatorInstance.Data);
  return;
}

// operator() @ 14ce47560

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::GetMeshTriangleUVElementIDs'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar9;
  
  uVar1 = **(uint **)this;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
      ((ushort)(*(short *)(*(longlong *)
                            ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
       0xfffe)) && (pFVar5 = (param_1->AttributeSet).Ptr, pFVar5 != (FDynamicMeshAttributeSet *)0x0)
     ) {
    iVar2 = **(int **)((longlong)this + 8);
    iVar8 = (**(code **)(pFVar5->_padding_ + 0xa8))();
    if (((iVar2 < iVar8) &&
        (pTVar9 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                            ((param_1->AttributeSet).Ptr,iVar2),
        pTVar9 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) &&
       (-1 < *(int *)(*(longlong *)
                       (*(longlong *)&pTVar9->field_0x78 +
                       (ulonglong)((uint)(**(int **)this * 3) >> 9) * 8) +
                     (ulonglong)(**(int **)this * 3 & 0x1ff) * 4))) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      lVar6 = *(longlong *)&pTVar9->field_0x78;
      puVar7 = *(undefined4 **)((longlong)this + 0x18);
      uVar1 = **(int **)this * 3;
      uVar3 = *(undefined4 *)
               (*(longlong *)(lVar6 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
               (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
      uVar4 = *(undefined4 *)
               (*(longlong *)(lVar6 + (ulonglong)(uVar1 + 2 >> 9) * 8) +
               (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
      *puVar7 = *(undefined4 *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 9) * 8) +
                 (ulonglong)(uVar1 & 0x1ff) * 4);
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
    }
  }
  return;
}

// operator() @ 14ce476b0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVElementPosition'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  double *pdVar5;
  int iVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    iVar2 = **(int **)this;
    iVar6 = (**(code **)(pFVar4->_padding_ + 0xa8))();
    if ((((iVar2 < iVar6) &&
         (pTVar7 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                             ((param_1->AttributeSet).Ptr,iVar2),
         pTVar7 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) &&
        (uVar3 = **(uint **)((longlong)this + 8), -1 < (int)uVar3)) &&
       (((int)uVar3 < *(int *)&pTVar7->field_0x8 * 0x200 + *(int *)&pTVar7->field_0xc &&
        ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)&pTVar7->field_0x10 + (ulonglong)(uVar3 >> 9) * 8) +
                            (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      uVar3 = **(uint **)((longlong)this + 8);
      fVar1 = *(float *)(*(longlong *)
                          (*(longlong *)&pTVar7->field_0x48 +
                          (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                        (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4);
      pdVar5 = *(double **)((longlong)this + 0x18);
      *pdVar5 = (double)*(float *)(*(longlong *)
                                    (*(longlong *)&pTVar7->field_0x48 +
                                    (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                                  (ulonglong)(uVar3 * 2 & 0x1ff) * 4);
      pdVar5[1] = (double)fVar1;
    }
  }
  return;
}

// operator() @ 14ce47b60

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVElementIDs'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  EMeshResult EVar8;
  TDynamicMeshOverlay<float,2> *this_00;
  longlong lVar9;
  FIndex3i_u_0 local_18;
  
  uVar1 = **(uint **)this;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
      ((ushort)(*(short *)(*(longlong *)
                            ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
       0xfffe)) && (pFVar4 = (param_1->AttributeSet).Ptr, pFVar4 != (FDynamicMeshAttributeSet *)0x0)
     ) {
    iVar2 = **(int **)((longlong)this + 8);
    iVar7 = (**(code **)(pFVar4->_padding_ + 0xa8))();
    if ((iVar2 < iVar7) &&
       (this_00 = (TDynamicMeshOverlay<float,2> *)
                  UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                            ((param_1->AttributeSet).Ptr,iVar2),
       this_00 != (TDynamicMeshOverlay<float,2> *)0x0)) {
      uVar1 = **(uint **)this;
      lVar5 = *(longlong *)
               ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8);
      puVar6 = *(undefined8 **)((longlong)this + 0x10);
      lVar9 = 0;
      local_18._0_8_ = *(undefined8 *)(lVar5 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
      local_18._s_0.C = *(int *)(lVar5 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
      do {
        uVar3 = *(uint *)((longlong)puVar6 + lVar9 * 4);
        iVar2 = *(int *)(*(longlong *)
                          ((this_00->ParentVertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
        if ((iVar2 != -1) && (iVar2 != *(int *)((longlong)&local_18 + lVar9 * 4))) {
          return;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 3);
      local_18._0_8_ = *puVar6;
      local_18._s_0.C = *(undefined4 *)(puVar6 + 1);
      EVar8 = UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                        (this_00,uVar1,(FIndex3i *)&local_18._s_0,false);
      if (EVar8 == Ok) {
        **(undefined1 **)((longlong)this + 0x18) = 1;
      }
    }
  }
  return;
}

// operator() @ 14ce47cd0

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  FDynamicMeshAttributeSet *pFVar2;
  int iVar3;
  int iVar4;
  TDynamicMeshOverlay<float,2> *this_00;
  float local_res8;
  float local_resc;
  FIndex3i_u_0 local_18;
  
  uVar1 = **(uint **)this;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
      ((ushort)(*(short *)(*(longlong *)
                            ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
       0xfffe)) && (pFVar2 = (param_1->AttributeSet).Ptr, pFVar2 != (FDynamicMeshAttributeSet *)0x0)
     ) {
    iVar4 = **(int **)((longlong)this + 8);
    iVar3 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if ((iVar4 < iVar3) &&
       (this_00 = (TDynamicMeshOverlay<float,2> *)
                  UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                            ((param_1->AttributeSet).Ptr,iVar4),
       this_00 != (TDynamicMeshOverlay<float,2> *)0x0)) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      local_resc = (float)(*(double **)((longlong)this + 0x18))[1];
      local_res8 = (float)**(double **)((longlong)this + 0x18);
      iVar4 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_res8);
      local_resc = (float)*(double *)(*(longlong *)((longlong)this + 0x18) + 0x18);
      local_res8 = (float)*(double *)(*(longlong *)((longlong)this + 0x18) + 0x10);
      local_18._s_0.B =
           UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_res8);
      local_resc = (float)*(double *)(*(longlong *)((longlong)this + 0x18) + 0x28);
      local_res8 = (float)*(double *)(*(longlong *)((longlong)this + 0x18) + 0x20);
      local_18._s_0.A = iVar4;
      local_18._s_0.C =
           UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(this_00,&local_res8);
      UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                (this_00,**(int **)this,(FIndex3i *)&local_18._s_0,true);
    }
  }
  return;
}

// operator() @ 14ce47e50

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVElementPosition'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  int iVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    iVar2 = **(int **)this;
    iVar5 = (**(code **)(pFVar4->_padding_ + 0xa8))();
    if ((((iVar2 < iVar5) &&
         (pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                             ((param_1->AttributeSet).Ptr,iVar2),
         pTVar6 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) &&
        (uVar3 = **(uint **)((longlong)this + 8), -1 < (int)uVar3)) &&
       (((int)uVar3 < *(int *)&pTVar6->field_0x8 * 0x200 + *(int *)&pTVar6->field_0xc &&
        ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)&pTVar6->field_0x10 + (ulonglong)(uVar3 >> 9) * 8) +
                            (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
      **(undefined1 **)((longlong)this + 0x10) = 1;
      dVar1 = (*(double **)((longlong)this + 0x18))[1];
      uVar3 = **(uint **)((longlong)this + 8);
      *(float *)(*(longlong *)
                  (*(longlong *)&pTVar6->field_0x48 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar3 * 2 & 0x1ff) * 4) = (float)**(double **)((longlong)this + 0x18);
      *(float *)(*(longlong *)
                  (*(longlong *)&pTVar6->field_0x48 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4) = (float)dVar1;
    }
  }
  return;
}

// operator() @ 14ce48120

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
          (void *this,double *param_1,double *param_2)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  dVar1 = __real_3ff0000000000000;
  dVar3 = *param_1;
  uVar5 = (uint)((ulonglong)dVar3 >> 0x20);
  if (0.0 <= dVar3) {
    uVar6 = SUB84(__real_3ff0000000000000,0);
    uVar2 = (ulonglong)__real_3ff0000000000000 >> 0x20;
    uVar4 = SUB84(dVar3,0);
    if (__real_3ff0000000000000 < dVar3) {
      dVar3 = FGenericPlatformMath::Fmod(dVar3 - __real_3ff0000000000000,__real_3ff0000000000000);
      uVar4 = SUB84(dVar3,0);
      uVar5 = (uint)((ulonglong)dVar3 >> 0x20);
      if (dVar3 == 0.0) {
        uVar4 = uVar6;
        uVar5 = (uint)uVar2;
      }
    }
    dVar1 = (double)CONCAT44(uVar5,uVar4);
  }
  else {
    dVar3 = FGenericPlatformMath::Fmod
                      ((double)CONCAT44(uVar5 ^ __xmm_80000000000000008000000000000000._4_4_,
                                        SUB84(dVar3,0) ^
                                        (uint)__xmm_80000000000000008000000000000000),
                       __real_3ff0000000000000);
    if (dVar3 == 0.0) {
      dVar1 = 0.0;
    }
    else {
      dVar1 = dVar1 - dVar3;
    }
  }
  *param_2 = (dVar1 - *param_1) + *param_2;
  *param_1 = dVar1;
  return;
}

// operator() @ 14ce4aa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FDynamicMeshUVEditor *param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong *plVar9;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar10;
  undefined1 auStackY_3c8 [32];
  int *local_378;
  undefined8 local_370;
  int **local_368;
  ForAnyElementType *local_360;
  code *local_358;
  undefined8 **local_350;
  code *local_348;
  undefined8 **local_340;
  int *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  code *local_328;
  undefined8 *local_320;
  code *local_318;
  undefined8 *local_310;
  TArrayView<int_const_,int> local_308;
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  TBitArray<FDefaultBitArrayAllocator> local_2e8;
  undefined4 local_2c8;
  undefined4 local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [16];
  code *local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  ForAnyElementType *pFStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  longlong *plStack_270;
  code *local_268;
  undefined8 uStack_260;
  longlong local_258 [3];
  longlong *plStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_368 = &local_378;
  local_350 = &local_368;
  local_378 = (int *)0x0;
  local_358 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_370 = 0;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18),param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_358,true);
  lVar3 = *(longlong *)((longlong)this + 0x48);
  local_298 = (code *)0x0;
  plStack_270 = (longlong *)0x0;
  local_2a8[8] = *(undefined1 *)(lVar3 + 0xc);
  local_2a8._4_4_ = *(float *)(lVar3 + 4);
  local_2a8._0_4_ = *(float *)(lVar3 + 8);
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 0;
  local_2e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2e8.NumBits = 0;
  local_2e8.MaxBits = 0x80;
  local_2c8 = 0xffffffff;
  local_2c4 = 0;
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  bVar8 = FGeometryScriptMeshSelection::IsEmpty
                    (*(FGeometryScriptMeshSelection **)((longlong)this + 0x20));
  if (!bVar8) {
    local_360 = &local_2f8;
    local_340 = &local_360;
    local_348 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l5::<lambda_2>,void,int>
                ::Call;
    FGeometryScriptMeshSelection::ProcessByTriangleID
              (*(FGeometryScriptMeshSelection **)((longlong)this + 0x20),
               *(FDynamicMesh3 **)(**(longlong **)((longlong)this + 8) + 0xb8),
               (TFunctionRef<void___cdecl(int)> *)&local_348,false);
    plStack_240 = plStack_270;
    uVar7 = uStack_290;
    local_268 = local_298;
    pFStack_280 = &local_2f8;
    local_298 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l5::<lambda_3>,bool,int>
                ::Call;
    uStack_290 = uStack_260;
    local_278 = (undefined4)local_258[2];
    uStack_274 = local_258[2]._4_4_;
    plStack_270 = (longlong *)0x0;
    local_288 = 0x52a00600;
    uStack_284 = 1;
    uStack_260 = uVar7;
    if (local_268 != (code *)0x0) {
      plVar9 = local_258;
      if (plStack_240 != (longlong *)0x0) {
        plVar9 = plStack_240;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_118,*(FDynamicMesh3 **)(**(longlong **)((longlong)this + 8) + 0xb8),false);
  pTVar10 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)**(longlong **)((longlong)this + 0x10);
  if ((pTVar10 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) ||
     (pTVar10->Mesh != *(FDynamicMesh3 **)(**(longlong **)((longlong)this + 8) + 0xb8))) {
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&local_118,false);
    local_118.MeshChangeStamp = UE::Geometry::FDynamicMesh3::GetChangeStamp(local_118.Mesh);
    pTVar10 = &local_118;
  }
  local_238 = *(undefined8 *)((longlong)this + 0xb0);
  uStack_230 = *(undefined8 *)((longlong)this + 0xb8);
  local_320 = &local_238;
  local_228 = *(undefined8 *)((longlong)this + 0xc0);
  uStack_220 = *(undefined8 *)((longlong)this + 200);
  iVar6 = (int)local_370;
  iVar2 = *(int *)this;
  dVar1 = *(double *)((longlong)this + 0x40);
  local_218 = *(undefined8 *)((longlong)this + 0xd0);
  uStack_210 = *(undefined8 *)((longlong)this + 0xd8);
  local_208 = *(undefined8 *)((longlong)this + 0xe0);
  uStack_200 = *(undefined8 *)((longlong)this + 0xe8);
  local_1f8 = *(undefined8 *)((longlong)this + 0xf0);
  uStack_1f0 = *(undefined8 *)((longlong)this + 0xf8);
  local_1e8 = *(undefined8 *)((longlong)this + 0x100);
  uStack_1e0 = *(undefined8 *)((longlong)this + 0x108);
  local_1d8 = *(undefined8 *)((longlong)this + 0x50);
  uStack_1d0 = *(undefined8 *)((longlong)this + 0x58);
  local_1c8 = *(undefined8 *)((longlong)this + 0x60);
  uStack_1c0 = *(undefined8 *)((longlong)this + 0x68);
  local_1b8 = *(undefined8 *)((longlong)this + 0x70);
  uStack_1b0 = *(undefined8 *)((longlong)this + 0x78);
  local_1a8 = *(undefined8 *)((longlong)this + 0x80);
  uStack_1a0 = *(undefined8 *)((longlong)this + 0x88);
  local_198 = *(undefined8 *)((longlong)this + 0x90);
  uStack_190 = *(undefined8 *)((longlong)this + 0x98);
  local_188 = *(undefined8 *)((longlong)this + 0xa0);
  uStack_180 = *(undefined8 *)((longlong)this + 0xa8);
  local_178 = *(undefined8 *)((longlong)this + 0xb0);
  uStack_170 = *(undefined8 *)((longlong)this + 0xb8);
  local_168 = *(undefined8 *)((longlong)this + 0xc0);
  uStack_160 = *(undefined8 *)((longlong)this + 200);
  local_328 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
              ::Call;
  local_310 = &local_1d8;
  local_158 = *(undefined8 *)((longlong)this + 0xd0);
  uStack_150 = *(undefined8 *)((longlong)this + 0xd8);
  local_148 = *(undefined8 *)((longlong)this + 0xe0);
  uStack_140 = *(undefined8 *)((longlong)this + 0xe8);
  local_138 = *(undefined8 *)((longlong)this + 0xf0);
  uStack_130 = *(undefined8 *)((longlong)this + 0xf8);
  local_128 = *(undefined8 *)((longlong)this + 0x100);
  uStack_120 = *(undefined8 *)((longlong)this + 0x108);
  local_318 = UE::Core::Private::Function::
              TFunctionRefCaller<``UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
              ::Call;
  local_338 = local_378;
  if ((int)local_370 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iStack_330 = iVar6;
  local_308._12_4_ = uStack_32c;
  local_308.ArrayNum = iVar6;
  local_308.DataPtr = local_338;
  UE::Geometry::FDynamicMeshUVEditor::TransferTriangleUVsFromMeshViaDirectionProjection
            (param_3,&local_308,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_318,(TVector<double> *)((longlong)this + 0x28),dVar1,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_328,pTVar10,iVar2,(FTransferFromMeshViaProjectionSettings *)local_2a8,
             (FUVEditResult *)0x0);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_118);
  local_2b0 = 0;
  if (local_2b8 != (void *)0x0) {
    FMemory::Free(local_2b8);
  }
  uVar5 = local_2f0 >> 0x20;
  local_2f0 = local_2f0 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_2f8,0,(int *)((longlong)&local_2f0 + 4));
  }
  local_2c8 = 0xffffffff;
  local_2c4 = 0;
  local_2e8.NumBits = 0;
  if (0x80 < (uint)local_2e8.MaxBits) {
    local_2e8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2e8,0);
  }
  if (local_2e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2e8.AllocatorInstance.SecondaryData);
  }
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  if (local_298 != (code *)0x0) {
    plVar9 = (longlong *)&local_288;
    if (plStack_270 != (longlong *)0x0) {
      plVar9 = plStack_270;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_378 != (int *)0x0) {
    FMemory::Free(local_378);
  }
  return;
}

// operator() @ 14ce4c380

bool __thiscall
`UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_2>::operator()
          (void *this,double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  if ((param_2 - param_1 < __real_3ff0000000000000) && (param_4 - param_3 < __real_3ff0000000000000)
     ) {
    if (param_4 <= __real_3ff0000000000000) {
      dVar2 = param_2;
      dVar1 = param_1;
      if (param_2 <= __real_3ff0000000000000) {
        if (param_2 < param_3) {
          return false;
        }
        if (param_4 < param_1) {
          return false;
        }
        return true;
      }
    }
    else {
      dVar2 = param_4;
      param_4 = param_2;
      dVar1 = param_3;
      param_3 = param_1;
      if (__real_3ff0000000000000 < param_2) {
        return true;
      }
    }
    if ((dVar2 - __real_3ff0000000000000 < param_3) && (param_4 < dVar1)) {
      return false;
    }
  }
  return true;
}

// AddUVElementToMesh @ 14ce4f610

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::AddUVElementToMesh
          (UDynamicMesh *param_1,int param_2,TVector2<double> *param_3,int *param_4,bool *param_5,
          bool param_6)

{
  int local_res10 [6];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  int *local_18;
  TVector2<double> *local_10;
  
  *param_5 = false;
  *param_4 = -1;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_20 = param_5;
    local_28 = local_res10;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::AddUVElementToMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_18 = param_4;
    local_10 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_6);
  }
  return param_1;
}

// ApplyTexelDensityUVScaling @ 14ce5c4f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::ApplyTexelDensityUVScaling
          (UDynamicMesh *param_1,int param_2,FGeometryScriptUVTexelDensityOptions *param_3,
          FGeometryScriptMeshSelection *param_4,UGeometryScriptDebug *param_5)

{
  void *pvVar1;
  FText *pFVar2;
  int local_res10 [6];
  UGeometryScriptDebug *local_58;
  undefined1 local_50 [16];
  FGeometryScriptUVTexelDensityOptions *local_40;
  FGeometryScriptMeshSelection *local_38;
  int *local_30;
  UGeometryScriptDebug **local_28;
  
  local_58 = param_5;
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_50,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ApplyTexelDensityUVScaling_InvalidInput",
                        L"ApplyTexelDensityUVScaling: TargetMesh is Null");
    UE::Geometry::AppendError(local_58,InvalidInputs,pFVar2);
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
    }
    *(undefined4 *)&(param_3->UDIMResolutions).field_0x48 = 0;
    pvVar1 = *(void **)&(param_3->UDIMResolutions).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_3->UDIMResolutions);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_30 = local_res10;
  local_28 = &local_58;
  local_50._8_8_ = &local_40;
  local_50._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ApplyTexelDensityUVScaling'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_40 = param_3;
  local_38 = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_50,
             AttributeEdit,UVs,false);
  *(undefined4 *)&(param_3->UDIMResolutions).field_0x48 = 0;
  pvVar1 = *(void **)&(param_3->UDIMResolutions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_3->UDIMResolutions);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// AutoGeneratePatchBuilderMeshUVs @ 14ce5cc40

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs
          (UDynamicMesh *param_1,int param_2,FGeometryScriptPatchBuilderOptions *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  char local_res8 [8];
  UGeometryScriptDebug *local_res20;
  int local_58 [2];
  FGeometryScriptPatchBuilderOptions *local_50;
  UGeometryScriptDebug **local_48;
  code *local_40;
  FGeometryScriptPatchBuilderOptions **local_38;
  undefined1 local_30 [16];
  int *local_20;
  char *local_18;
  code **local_10;
  
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"AutoGeneratePatchBuilderMeshUVs_InvalidInput",
                        L"AutoGeneratePatchBuilderMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_48 = &local_res20;
  local_38 = &local_50;
  local_res8[0] = '\0';
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
  local_20 = local_58;
  local_18 = local_res8;
  local_10 = &local_40;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58[0] = param_2;
  local_50 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  if (local_res8[0] == '\0') {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"AutoGeneratePatchBuilderMeshUVs_InvalidUVSet",
                        L"AutoGeneratePatchBuilderMeshUVs: UVSetIndex does not exist on TargetMesh")
    ;
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
  }
  return param_1;
}

// AutoGenerateXAtlasMeshUVs @ 14ce5cd70

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs
          (UDynamicMesh *param_1,int param_2,FGeometryScriptXAtlasOptions param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  char local_res8 [8];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  int local_58 [2];
  UGeometryScriptDebug **local_50;
  int *local_48;
  code *local_40;
  undefined8 **local_38;
  undefined1 local_30 [16];
  int *local_20;
  char *local_18;
  code **local_10;
  
  local_res18[0] = param_3.MaxIterations;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"AutoGenerateXAtlasMeshUVs_InvalidInput",
                        L"AutoGenerateXAtlasMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_50 = &local_res20;
  local_48 = local_res18;
  local_res8[0] = '\0';
  local_38 = &local_50;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
  local_20 = local_58;
  local_18 = local_res8;
  local_10 = &local_40;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58[0] = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  if (local_res8[0] == '\0') {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"AutoGenerateXAtlasMeshUVs_InvalidUVSet",
                        L"AutoGenerateXAtlasMeshUVs: UVSetIndex does not exist on TargetMesh");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
  }
  return param_1;
}

// ClearUVChannel @ 14ce60330

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::ClearUVChannel
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int local_28 [2];
  UGeometryScriptDebug *local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ClearUVChannel_InvalidInput",L"ClearUVChannel: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ClearUVChannel'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28[0] = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             AttributeEdit,UVs,false);
  return param_1;
}

// ComputeMeshLocalUVParam @ 14ce60a80

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam
          (UDynamicMesh *param_1,TVector<double> *param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,double param_6,
          bool param_7,TVector<double> *param_8,double param_9,UGeometryScriptDebug *param_10)

{
  FText *pFVar1;
  int local_res18 [4];
  undefined1 local_68 [16];
  int *local_58;
  UGeometryScriptDebug **local_50;
  TVector<double> *local_48;
  bool *local_40;
  TVector<double> *local_38;
  double *local_30;
  double *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_20;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_18;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ComputeMeshLocalUVParam_InvalidInput",
                        L"ComputeMeshLocalUVParam: TargetMesh is Null");
    UE::Geometry::AppendError(param_10,InvalidInputs,pFVar1);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_58 = local_res18;
  local_50 = &param_10;
  local_40 = &param_7;
  local_38 = param_8;
  local_30 = &param_9;
  local_28 = &param_6;
  local_18 = param_5;
  local_68._8_8_ = &local_58;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_48 = param_2;
  local_20 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_68);
  return param_1;
}

// CopyMeshToMeshUVLayer @ 14ce67c10

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer
          (UDynamicMesh *param_1,int param_2,UDynamicMesh *param_3,UDynamicMesh **param_4,
          bool *param_5,bool *param_6,bool param_7,UGeometryScriptDebug *param_8)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  UDynamicMesh *local_res8;
  int local_res10 [2];
  undefined1 local_48 [16];
  int *local_38;
  UGeometryScriptDebug **local_30;
  bool *local_28;
  UDynamicMesh **local_20;
  bool *local_18;
  bool *local_10;
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pwVar3 = L"CopyMeshToMeshUVLayer: CopyFromUVMesh is Null";
    pwVar2 = L"CopyMeshToMeshUVLayer_InvalidInput";
  }
  else if (param_3 == (UDynamicMesh *)0x0) {
    pwVar3 = L"CopyMeshToMeshUVLayer: CopyToUVMesh is Null";
    pwVar2 = L"CopyMeshToMeshUVLayer_InvalidInput2";
  }
  else {
    if (param_1 != param_3) {
      local_38 = local_res10;
      local_28 = param_6;
      local_30 = &param_8;
      *param_5 = false;
      *param_6 = false;
      local_20 = &local_res8;
      local_18 = &param_7;
      local_48._8_8_ = &local_38;
      local_10 = param_5;
      local_48._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (param_3,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
                 GeneralEdit,Unknown,false);
      *param_4 = param_3;
      return local_res8;
    }
    pwVar3 = 
    L"CopyMeshToMeshUVLayer: CopyFromUVMesh and CopyToMesh are the same mesh, this is not supported"
    ;
    pwVar2 = L"CopyMeshToMeshUVLayer_SameMeshes";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_48,L"UGeometryScriptLibrary_MeshUVFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
  }
  return local_res8;
}

// CopyMeshUVLayerToMesh @ 14ce67d20

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh
          (UDynamicMesh *param_1,int param_2,UDynamicMesh *param_3,UDynamicMesh **param_4,
          bool *param_5,bool *param_6,UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int local_res10 [2];
  undefined1 local_278 [16];
  int *local_268;
  UGeometryScriptDebug **local_260;
  bool *local_258;
  FDynamicMesh3 *local_250;
  bool *local_248;
  FDynamicMesh3 local_238;
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_278,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"CopyMeshUVLayerToMesh_InvalidInput",
                        L"CopyMeshUVLayerToMesh: CopyFromMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
    if ((ITextData *)local_278._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_278._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if (param_3 == (UDynamicMesh *)0x0) {
      pwVar4 = L"CopyMeshUVLayerToMesh: CopyToUVMesh is Null";
      pwVar3 = L"CopyMeshUVLayerToMesh_InvalidInput2";
    }
    else {
      if (param_1 != param_3) {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
        local_268 = local_res10;
        local_258 = param_6;
        local_260 = &param_7;
        *param_6 = false;
        local_250 = &local_238;
        local_278._8_8_ = &local_268;
        *param_5 = false;
        local_248 = param_5;
        local_278._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           local_278);
        if (((local_238.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum < 1) {
          pTVar2 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
        }
        else {
          pTVar2 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                    ((local_238.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals(pTVar2,true);
        UDynamicMesh::SetMesh(param_3,&local_238);
        *param_4 = param_3;
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
        return param_1;
      }
      pwVar4 = 
      L"CopyMeshUVLayerToMesh: CopyFromMesh and CopyToUVMesh are the same mesh, this is not supported"
      ;
      pwVar3 = L"CopyMeshToUVMesh_SameMeshes";
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_278,L"UGeometryScriptLibrary_MeshUVFunctions",pwVar3,pwVar4);
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
    if ((ITextData *)local_278._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_278._0_8_ + 0x10))();
    }
  }
  return param_1;
}

// CopyUVSet @ 14ce67fa0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet
          (UDynamicMesh *param_1,int param_2,int param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  int local_res10 [2];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  int *local_28;
  int *local_20;
  UGeometryScriptDebug **local_18;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"CopyUVSet_InvalidInput",L"CopyUVSet: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == param_3) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"CopyUVSet_SameSet",L"CopyUVSet: From and To UV Sets have the same Index");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      return param_1;
    }
  }
  else {
    local_28 = local_res10;
    local_20 = local_res18;
    local_18 = &local_res20;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               GeneralEdit,Unknown,false);
  }
  return param_1;
}

// GetMeshPerVertexUVs @ 14ce6ba90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs
          (UDynamicMesh *param_1,int param_2,FGeometryScriptUVList *param_3,bool *param_4,
          bool *param_5,bool *param_6,UGeometryScriptDebug *param_7)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  int local_res10 [2];
  FGeometryScriptUVList local_78;
  code *local_68;
  int **local_60;
  int *local_58;
  UGeometryScriptDebug **local_50;
  bool *local_48;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_40;
  bool *local_38;
  bool *local_30;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  local_res10[0] = param_2;
  if ((param_3->List).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_78.List.SharedReferenceCount.ReferenceController = ::operator_new(0x20);
    if (local_78.List.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0
       ) {
      local_78.List.Object = ___xmm_00000000000000000000000000000010;
      pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
      local_78.List.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_78.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)0x1;
      pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               (local_78.List.SharedReferenceCount.ReferenceController + 1);
      (local_78.List.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)0x1;
      (local_78.List.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_U__TVector2_N_Math_UE__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      local_78.List.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_78.List.SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
           (atomic<int>)0x0;
      local_78.List.SharedReferenceCount.ReferenceController[1].WeakReferenceCount =
           (atomic<int>)0x0;
      if (pTVar5 == (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UDynamicMesh *)(*pcVar1)();
          return pUVar3;
        }
      }
      LOCK();
      (local_78.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.List.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
      pTVar4 = local_78.List.SharedReferenceCount.ReferenceController;
      local_78.List.Object = pTVar5;
    }
    if (param_3 != &local_78) {
      (param_3->List).Object = pTVar5;
      local_78.List.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_3->List).SharedReferenceCount,&local_78.List.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.List.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if ((param_3->List).Object ==
        (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UDynamicMesh *)(*pcVar1)();
        return pUVar3;
      }
    }
  }
  pTVar5 = (param_3->List).Object;
  pTVar5->ArrayNum = 0;
  if (pTVar5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar5->AllocatorInstance,0,&pTVar5->ArrayMax);
  }
  if ((param_3->List).Object ==
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_40 = (param_3->List).Object;
  *param_5 = false;
  *param_4 = false;
  *param_6 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_48 = param_5;
    local_58 = local_res10;
    local_60 = &local_58;
    local_50 = &param_7;
    local_38 = param_6;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_30 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68)
    ;
  }
  return param_1;
}

// GetMeshTriangleUVElementIDs @ 14ce6bfd0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::GetMeshTriangleUVElementIDs
          (UDynamicMesh *param_1,int param_2,int param_3,TIntVector3<int> *param_4,bool *param_5)

{
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  bool *local_18;
  TIntVector3<int> *local_10;
  
  *param_5 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res18;
    local_18 = param_5;
    local_30 = &local_28;
    local_20 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::GetMeshTriangleUVElementIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_10 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// GetMeshUVElementPosition @ 14ce6c0c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVElementPosition
          (UDynamicMesh *param_1,int param_2,int param_3,TVector2<double> *param_4,bool *param_5)

{
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  bool *local_18;
  TVector2<double> *local_10;
  
  *param_5 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_18 = param_5;
    local_30 = &local_28;
    local_20 = local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVElementPosition'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_10 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// GetMeshUVSizeInfo @ 14ce6c130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo
          (UDynamicMesh *param_1,int param_2,FGeometryScriptMeshSelection *param_3,double *param_4,
          double *param_5,TBox<double> *param_6,TBox2<double> *param_7,bool *param_8,bool *param_9,
          bool param_10,UGeometryScriptDebug *param_11)

{
  TVector2<double>_u_0 TVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 uVar4;
  FText *pFVar5;
  double dVar7;
  undefined1 auVar6 [16];
  int local_res10 [2];
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  int *local_a8;
  UGeometryScriptDebug **local_a0;
  bool *local_98;
  FGeometryScriptMeshSelection *pFStack_90;
  bool *pbStack_88;
  bool *pbStack_80;
  double *local_78;
  double *local_70;
  double *local_68;
  float *local_60;
  double local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  local_98 = param_8;
  local_68 = param_5;
  *param_5 = 0.0;
  *param_4 = 0.0;
  *param_8 = false;
  *param_9 = false;
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_b8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"GetMeshUVSizeInfo_InvalidInput",L"GetMeshUVSizeInfo: TargetMesh is Null");
    UE::Geometry::AppendError(param_11,InvalidInputs,pFVar5);
    if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_58 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_50 = _UNK_150a9e648;
    local_c8 = 3.4028235e+38;
    fStack_c4 = 3.4028235e+38;
    local_c0 = -3.4028235e+38;
    fStack_bc = -3.4028235e+38;
    local_a8 = local_res10;
    local_a0 = &param_11;
    pbStack_80 = &param_10;
    local_70 = &local_58;
    local_60 = &local_c8;
    local_b8._8_8_ = &local_a8;
    local_b8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_48 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_40 = _UNK_150a9e6d8;
    local_38 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_30 = _UNK_1508ffb58;
    pbStack_88 = param_9;
    dVar7 = _UNK_150a9e6d8;
    pFStack_90 = param_3;
    local_78 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_b8);
    auVar3._8_8_ = uStack_50;
    auVar3._0_8_ = local_58;
    local_98 = (bool *)local_48;
    pFStack_90 = (FGeometryScriptMeshSelection *)dStack_40;
    pbStack_80 = (bool *)dStack_30;
    if (((dStack_40 < local_58) ||
        (auVar2._4_8_ = dVar7, auVar2._0_4_ = (int)((ulonglong)local_58 >> 0x20),
        auVar6._0_8_ = auVar2._0_8_ << 0x20, auVar6._8_4_ = (int)uStack_50,
        auVar6._12_4_ = (int)((ulonglong)uStack_50 >> 0x20), local_38 < auVar6._8_8_)) ||
       (dStack_30 < local_48)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    local_78 = (double *)CONCAT71(local_78._1_7_,uVar4);
    *(undefined1 (*) [16])&(param_6->Min).field0_0x0 = auVar3;
    (param_6->Min).field0_0x0._s_0.Z = local_48;
    (param_6->Max).field0_0x0._s_0.X = dStack_40;
    (param_6->Max).field0_0x0._s_0.Y = local_38;
    (param_6->Max).field0_0x0._s_0.Z = dStack_30;
    *(double **)&param_6->IsValid = local_78;
    if ((local_c0 < local_c8) || (fStack_bc < fStack_c4)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    pbStack_88 = (bool *)CONCAT71((int7)((ulonglong)local_38 >> 8),uVar4);
    (param_7->Min).field0_0x0._s_0.X = (double)local_c8;
    (param_7->Min).field0_0x0._s_0.Y = (double)fStack_c4;
    TVar1._8_4_ = SUB84((double)fStack_bc,0);
    TVar1._s_0.X = (double)local_c0;
    TVar1._12_4_ = (int)((ulonglong)(double)fStack_bc >> 0x20);
    (param_7->Max).field0_0x0 = TVar1;
    *(bool **)&param_7->bIsValid = pbStack_88;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14ce6d830

UClass * __cdecl UGeometryScriptLibrary_MeshUVFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshUVFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_MeshUVFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshUVFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.InnerSingleton;
}

// IntersectsUVBox2D @ 14ce6ede0

bool __cdecl
UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D
          (TBox2<double> *param_1,TBox2<double> *param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  double dVar7;
  undefined1 local_res8 [8];
  
  if ((param_1->bIsValid != false) && (param_2->bIsValid != false)) {
    if (param_3) {
      `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
                (local_res8,(double *)param_1,(double *)&param_1->Max);
      `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
                (local_res8,(double *)param_2,(double *)&param_2->Max);
      dVar1 = (param_1->Max).field0_0x0._s_0.X;
      dVar2 = (param_1->Min).field0_0x0._s_0.X;
      dVar5 = (param_2->Max).field0_0x0._s_0.X;
      dVar7 = (param_2->Min).field0_0x0._s_0.X;
      if ((dVar1 - dVar2 < __real_3ff0000000000000) && (dVar5 - dVar7 < __real_3ff0000000000000)) {
        uVar6 = SUB84(dVar2,0);
        uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if (dVar5 <= __real_3ff0000000000000) {
          dVar4 = dVar1;
          if (dVar1 <= __real_3ff0000000000000) {
            if (dVar1 < dVar7) {
              return false;
            }
            if (dVar5 < dVar2) {
              return false;
            }
            goto LAB_14ce6ef04;
          }
        }
        else {
          if (__real_3ff0000000000000 < dVar1) goto LAB_14ce6ef04;
          uVar6 = SUB84(dVar7,0);
          uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
          dVar4 = dVar5;
          dVar5 = dVar1;
          dVar7 = dVar2;
        }
        if ((dVar4 - __real_3ff0000000000000 < dVar7) && (dVar5 < (double)CONCAT44(uVar8,uVar6))) {
          return false;
        }
      }
LAB_14ce6ef04:
      `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
                (local_res8,&(param_1->Min).field0_0x0._s_0.Y,&(param_1->Max).field0_0x0._s_0.Y);
      `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
                (local_res8,&(param_2->Min).field0_0x0._s_0.Y,&(param_2->Max).field0_0x0._s_0.Y);
      bVar3 = `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_2>::
              operator()(local_res8,(param_1->Min).field0_0x0._s_0.Y,
                         (param_1->Max).field0_0x0._s_0.Y,(param_2->Min).field0_0x0._s_0.Y,
                         (param_2->Max).field0_0x0._s_0.Y);
      return bVar3;
    }
    if (((((param_1->Min).field0_0x0._s_0.X <= (param_2->Max).field0_0x0._s_0.X) &&
         ((param_2->Min).field0_0x0._s_0.X <= (param_1->Max).field0_0x0._s_0.X)) &&
        ((param_1->Min).field0_0x0._s_0.Y <= (param_2->Max).field0_0x0._s_0.Y)) &&
       ((param_2->Min).field0_0x0._s_0.Y <= (param_1->Max).field0_0x0._s_0.Y)) {
      return true;
    }
  }
  return false;
}

// LayoutMeshUVs @ 14ce6f430

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::LayoutMeshUVs
          (UDynamicMesh *param_1,int param_2,FGeometryScriptLayoutUVsOptions *param_3,
          FGeometryScriptMeshSelection *param_4,UGeometryScriptDebug *param_5)

{
  void *pvVar1;
  FText *pFVar2;
  int local_res10 [6];
  UGeometryScriptDebug *local_58;
  undefined1 local_50 [16];
  FGeometryScriptLayoutUVsOptions *local_40;
  FGeometryScriptMeshSelection *local_38;
  int *local_30;
  UGeometryScriptDebug **local_28;
  
  local_58 = param_5;
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_50,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"LayoutMeshUVs_InvalidInput",L"LayoutMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(local_58,InvalidInputs,pFVar2);
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
    }
    *(undefined4 *)&(param_3->UDIMResolutions).field_0x48 = 0;
    pvVar1 = *(void **)&(param_3->UDIMResolutions).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_3->UDIMResolutions);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_30 = local_res10;
  local_28 = &local_58;
  local_50._8_8_ = &local_40;
  local_50._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::LayoutMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_40 = param_3;
  local_38 = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_50,
             AttributeEdit,UVs,false);
  *(undefined4 *)&(param_3->UDIMResolutions).field_0x48 = 0;
  pvVar1 = *(void **)&(param_3->UDIMResolutions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_3->UDIMResolutions);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// RecomputeMeshUVs @ 14ce70ce0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs
          (UDynamicMesh *param_1,int param_2,FGeometryScriptRecomputeUVsOptions *param_3,
          FGeometryScriptMeshSelection *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  char local_res8 [8];
  int local_68 [2];
  code *local_60;
  FGeometryScriptRecomputeUVsOptions **local_58;
  undefined1 local_50 [16];
  FGeometryScriptRecomputeUVsOptions *local_40;
  FGeometryScriptMeshSelection *local_38;
  UGeometryScriptDebug **local_30;
  int *local_28;
  char *local_20;
  code **local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_50,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RecomputeMeshUVs_InvalidInput",L"RecomputeMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_30 = &param_5;
    local_58 = &local_40;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_28 = local_68;
    local_res8[0] = '\0';
    local_20 = local_res8;
    local_18 = &local_60;
    local_50._8_8_ = &local_28;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_68[0] = param_2;
    local_40 = param_3;
    local_38 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_50,
               GeneralEdit,Unknown,false);
    if (local_res8[0] == '\0') {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_50,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"RecomputeMeshUVs_InvalidUVSet",
                          L"RecomputeMeshUVs: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
      if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// RepackMeshUVs @ 14ce711c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs
          (UDynamicMesh *param_1,int param_2,FGeometryScriptRepackUVsOptions param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  char local_res8 [8];
  FGeometryScriptRepackUVsOptions local_res18 [2];
  int local_58 [2];
  FGeometryScriptRepackUVsOptions *local_50;
  code *local_48;
  undefined8 **local_40;
  undefined1 local_38 [16];
  int *local_28;
  char *local_20;
  code **local_18;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RepackMeshUVs_InvalidInput",L"RepackMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_50 = local_res18;
  local_40 = &local_50;
  local_res8[0] = '\0';
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
  local_28 = local_58;
  local_20 = local_res8;
  local_18 = &local_48;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58[0] = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  if (local_res8[0] == '\0') {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RepackMeshUVs_InvalidUVSet",
                        L"RepackMeshUVs: UVSetIndex does not exist on TargetMesh");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
  }
  return param_1;
}

// RotateMeshUVs @ 14ce716c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs
          (UDynamicMesh *param_1,int param_2,float param_3,TVector2<double> *param_4,
          FGeometryScriptMeshSelection *param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  undefined8 extraout_XMM0_Qa;
  char local_res8 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  float local_60;
  float local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  code *local_48;
  FGeometryScriptMeshSelection **local_40;
  FGeometryScriptMeshSelection *local_38;
  undefined4 *local_30;
  float *local_28;
  int *local_20;
  char *local_18;
  code **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_70,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RotateMeshUVs_InvalidInput",L"RotateMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    __libm_sse2_sincosf_();
    local_50 = (uint)extraout_XMM0_Qa;
    local_54 = local_50 ^ __xmm_80000000800000008000000080000000;
    local_30 = &local_58;
    local_58 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
    local_28 = &local_60;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_20 = local_78;
    local_18 = local_res8;
    local_10 = &local_48;
    local_70._8_8_ = &local_20;
    local_60 = (float)(param_4->field0_0x0)._s_0.X;
    local_70._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_38 = param_5;
    local_res8[0] = '\0';
    local_5c = (float)(param_4->field0_0x0)._s_0.Y;
    local_78[0] = param_2;
    local_4c = local_58;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_70,
               GeneralEdit,Unknown,false);
    if (local_res8[0] == '\0') {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_70,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"RotateMeshUVs_InvalidUVSet",
                          L"RotateMeshUVs: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
      if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// ScaleMeshUVs @ 14ce719f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs
          (UDynamicMesh *param_1,int param_2,TVector2<double> *param_3,TVector2<double> *param_4,
          FGeometryScriptMeshSelection *param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  char local_res8 [8];
  int local_78 [2];
  undefined8 local_70;
  undefined1 local_68 [16];
  float local_58;
  float local_54;
  code *local_50;
  FGeometryScriptMeshSelection **local_48;
  FGeometryScriptMeshSelection *local_40;
  float *local_38;
  undefined8 *local_30;
  int *local_28;
  char *local_20;
  code **local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ScaleMeshUVs_InvalidInput",L"ScaleMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_70._4_4_ = (undefined4)(param_3->field0_0x0)._s_0.Y;
  local_70._0_4_ = (undefined4)(param_3->field0_0x0)._s_0.X;
  if ((double)SQRT((float)local_70._4_4_ * (float)local_70._4_4_ +
                   (float)(undefined4)local_70 * (float)(undefined4)local_70) <
      __real_3f1a36e2eb1c432d) {
    local_70 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  }
  local_38 = &local_58;
  local_30 = &local_70;
  local_48 = &local_40;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
  local_28 = local_78;
  local_20 = local_res8;
  local_18 = &local_50;
  local_68._8_8_ = &local_28;
  local_58 = (float)(param_4->field0_0x0)._s_0.X;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_40 = param_5;
  local_res8[0] = '\0';
  local_54 = (float)(param_4->field0_0x0)._s_0.Y;
  local_78[0] = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
             GeneralEdit,Unknown,false);
  if (local_res8[0] == '\0') {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ScaleMeshUVs_InvalidUVSet",
                        L"ScaleMeshUVs: UVSetIndex does not exist on TargetMesh");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetMeshTriangleUVElementIDs @ 14ce74030

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVElementIDs
          (UDynamicMesh *param_1,int param_2,int param_3,TIntVector3<int> *param_4,bool *param_5,
          bool param_6)

{
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  TIntVector3<int> *local_18;
  bool *local_10;
  
  *param_5 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_10 = param_5;
    local_28 = local_res18;
    local_30 = &local_28;
    local_20 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVElementIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_18 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_6);
  }
  return param_1;
}

// SetMeshTriangleUVs @ 14ce740b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs
          (UDynamicMesh *param_1,int param_2,int param_3,FGeometryScriptUVTriangle *param_4,
          bool *param_5,bool param_6)

{
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  bool *local_18;
  FGeometryScriptUVTriangle *local_10;
  
  *param_5 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_18 = param_5;
    local_28 = local_res18;
    local_30 = &local_28;
    local_20 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_10 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_6);
  }
  return param_1;
}

// SetMeshUVElementPosition @ 14ce74130

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVElementPosition
          (UDynamicMesh *param_1,int param_2,int param_3,TVector2<double> *param_4,bool *param_5,
          bool param_6)

{
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  bool *local_18;
  TVector2<double> *local_10;
  
  *param_5 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_18 = param_5;
    local_28 = local_res10;
    local_30 = &local_28;
    local_20 = local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVElementPosition'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_10 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_6);
  }
  return param_1;
}

// SetMeshUVsFromBoxProjection @ 14ce741b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection
          (UDynamicMesh *param_1,int param_2,TTransform<double> *param_3,
          FGeometryScriptMeshSelection *param_4,int param_5,UGeometryScriptDebug *param_6)

{
  UGeometryScriptDebug *pUVar1;
  FText *pFVar2;
  char local_78 [8];
  int local_70 [2];
  undefined1 local_68 [16];
  code *local_58;
  FGeometryScriptMeshSelection **local_50;
  FGeometryScriptMeshSelection *local_48;
  TTransform<double> *local_40;
  int *local_38;
  int *local_30;
  char *local_28;
  code **local_20;
  
  pUVar1 = param_6;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromBoxProjection_InvalidInput",
                        L"SetMeshUVsFromBoxProjection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar1,InvalidInputs,pFVar2);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_38 = &param_5;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_30 = local_70;
    local_78[0] = '\0';
    local_28 = local_78;
    local_20 = &local_58;
    local_68._8_8_ = &local_30;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_70[0] = param_2;
    local_48 = param_4;
    local_40 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
    if (local_78[0] == '\0') {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetMeshUVsFromBoxProjection_InvalidUVSet",
                          L"SetMeshUVsFromBoxProjection: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(pUVar1,InvalidInputs,pFVar2);
      if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// SetMeshUVsFromCylinderProjection @ 14ce742f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection
          (UDynamicMesh *param_1,int param_2,TTransform<double> *param_3,
          FGeometryScriptMeshSelection *param_4,float param_5,UGeometryScriptDebug *param_6)

{
  UGeometryScriptDebug *pUVar1;
  FText *pFVar2;
  char local_78 [8];
  int local_70 [2];
  undefined1 local_68 [16];
  code *local_58;
  FGeometryScriptMeshSelection **local_50;
  FGeometryScriptMeshSelection *local_48;
  TTransform<double> *local_40;
  float *local_38;
  int *local_30;
  char *local_28;
  code **local_20;
  
  pUVar1 = param_6;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromCylinderProjection_InvalidInput",
                        L"SetMeshUVsFromCylinderProjection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar1,InvalidInputs,pFVar2);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_38 = &param_5;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_30 = local_70;
    local_78[0] = '\0';
    local_28 = local_78;
    local_20 = &local_58;
    local_68._8_8_ = &local_30;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_70[0] = param_2;
    local_48 = param_4;
    local_40 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,false);
    if (local_78[0] == '\0') {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_68,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetMeshUVsFromCylinderProjection_InvalidUVSet",
                          L"SetMeshUVsFromCylinderProjection: UVSetIndex does not exist on TargetMesh"
                         );
      UE::Geometry::AppendError(pUVar1,InvalidInputs,pFVar2);
      if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// SetMeshUVsFromPlanarProjection @ 14ce74430

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection
          (UDynamicMesh *param_1,int param_2,TTransform<double> *param_3,
          FGeometryScriptMeshSelection *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  char local_68 [8];
  int local_60 [2];
  undefined1 local_58 [16];
  FGeometryScriptMeshSelection *local_48;
  TTransform<double> *local_40;
  code *local_38;
  FGeometryScriptMeshSelection **local_30;
  int *local_28;
  char *local_20;
  code **local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_58,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromPlanarProjection_InvalidInput",
                        L"SetMeshUVsFromPlanarProjection: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_28 = local_60;
    local_20 = local_68;
    local_68[0] = '\0';
    local_18 = &local_38;
    local_58._8_8_ = &local_28;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_60[0] = param_2;
    local_48 = param_4;
    local_40 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_58,
               GeneralEdit,Unknown,false);
    if (local_68[0] == '\0') {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_58,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetMeshUVsFromPlanarProjection_InvalidUVSet",
                          L"SetMeshUVsFromPlanarProjection: UVSetIndex does not exist on TargetMesh"
                         );
      UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
      if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// SetNumUVSets @ 14ce74630

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int *local_res8;
  int local_res10 [2];
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetNumUVSets_InvalidInput",L"SetNumUVSets: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 < 9) {
    local_res8 = local_res10;
    local_18._8_8_ = &local_res8;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
               GeneralEdit,Unknown,false);
  }
  else {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetNumUVSets_InvalidNumUVSets",
                        L"SetNumUVSets: Maximum of 8 UV Sets are supported");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
      return param_1;
    }
  }
  return param_1;
}

// SetUVSeamsAlongSelectedEdges @ 14ce74be0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::SetUVSeamsAlongSelectedEdges
          (UDynamicMesh *param_1,int param_2,FGeometryScriptMeshSelection *param_3,bool param_4,
          bool param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  char local_res8 [8];
  int local_58 [2];
  FGeometryScriptMeshSelection *local_50;
  undefined1 local_48;
  code *local_40;
  FGeometryScriptMeshSelection **local_38;
  undefined1 local_30 [16];
  int *local_20;
  char *local_18;
  code **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetUVSeamsAlongSelectedEdges_InvalidInput",
                        L"SetUVSeamsAlongSelectedEdges: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_38 = &local_50;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetUVSeamsAlongSelectedEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
  local_20 = local_58;
  local_18 = local_res8;
  local_res8[0] = '\0';
  local_10 = &local_40;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58[0] = param_2;
  local_50 = param_3;
  local_48 = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,param_5);
  if (local_res8[0] == '\0') {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetUVSeamsAlongSelectedEdges_InvalidUVSet",
                        L"SetUVSeamsAlongSelectedEdges: UV Channel does not exist on TargetMesh");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions @ 14ce75280

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1d;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransferMeshUVsByProjection @ 14ce75300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection
          (UDynamicMesh *param_1,int param_2,FGeometryScriptMeshSelection *param_3,
          TTransform<double> *param_4,UDynamicMesh *param_5,FGeometryScriptDynamicMeshBVH *param_6,
          int param_7,FGeometryScriptMeshSelection *param_8,TTransform<double> *param_9,
          FGeometryScriptMeshProjectionSettings *param_10,TVector<double> *param_11,double param_12,
          UGeometryScriptDebug *param_13)

{
  bool bVar1;
  FText *pFVar2;
  undefined1 auStack_1e8 [32];
  char local_1b8 [8];
  int local_1b0 [2];
  undefined1 local_1a8 [16];
  longlong local_198;
  undefined1 local_190 [16];
  UDynamicMesh *local_180;
  TTransform<double> *local_178;
  int *local_170;
  char *local_168;
  undefined1 *local_160;
  int local_158 [2];
  UDynamicMesh **local_150;
  FGeometryScriptDynamicMeshBVH *local_148;
  FGeometryScriptMeshSelection *local_140;
  FGeometryScriptMeshSelection *local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  FGeometryScriptMeshProjectionSettings *local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_180 = param_5;
  local_1b0[0] = param_2;
  local_178 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_1a8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromMeshProjection_InvalidInput_Target",
                        L"SetMeshUVsFromMeshProjection: TargetMesh is Null");
    UE::Geometry::AppendError(param_13,InvalidInputs,pFVar2);
    if ((ITextData *)local_1a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1a8._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_6->FWNTree).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_6->Spatial).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_8->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_5 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_1a8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromMeshProjection_InvalidInput_Source",
                        L"SetMeshUVsFromMeshProjection: SourceMesh is Null");
    UE::Geometry::AppendError(param_13,InvalidInputs,pFVar2);
    if ((ITextData *)local_1a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1a8._0_8_ + 0x10))(local_1a8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_6->FWNTree).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_6->Spatial).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_8->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  else {
    local_190._0_8_ = &local_198;
    local_1a8._8_8_ = local_190;
    local_1a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_198 = 0;
    local_190._8_4_ = param_7;
    UDynamicMesh::ProcessMesh
              (param_5,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_1a8)
    ;
    if (local_198 == 0) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_1a8,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetMeshUVsFromMeshProjection_InvalidSourceUVSet",
                          L"SetMeshUVsFromMeshProjection: Source UV Channel does not exist on SourceMesh"
                         );
      UE::Geometry::AppendError(param_13,InvalidInputs,pFVar2);
      if ((ITextData *)local_1a8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1a8._0_8_ + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_6->FWNTree).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_6->Spatial).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_8->GeoSelection).SharedReferenceCount.ReferenceController);
    }
    else {
      bVar1 = FGeometryScriptMeshSelection::IsEmpty(param_3);
      if (((!bVar1) || (param_10->bProcessAllIfEmptySelection != false)) &&
         ((bVar1 = FGeometryScriptMeshSelection::IsEmpty(param_8), !bVar1 ||
          (param_10->bProcessAllIfEmptySelection != false)))) {
        local_150 = &local_180;
        local_158[0] = param_7;
        local_148 = param_6;
        local_138 = param_8;
        local_130 = (param_11->field0_0x0)._s_0.X;
        dStack_128 = (param_11->field0_0x0)._s_0.Y;
        local_110 = param_10;
        local_120 = (param_11->field0_0x0)._s_0.Z;
        local_1b8[0] = '\0';
        local_118 = param_12;
        local_108 = (local_178->Rotation).XY.m128d_f64[0];
        dStack_100 = (local_178->Rotation).XY.m128d_f64[1];
        local_f8 = (local_178->Rotation).ZW.m128d_f64[0];
        dStack_f0 = (local_178->Rotation).ZW.m128d_f64[1];
        local_e8 = (local_178->Translation).XY.m128d_f64[0];
        dStack_e0 = (local_178->Translation).XY.m128d_f64[1];
        local_d8 = (local_178->Translation).ZW.m128d_f64[0];
        dStack_d0 = (local_178->Translation).ZW.m128d_f64[1];
        local_c8 = (local_178->Scale3D).XY.m128d_f64[0];
        dStack_c0 = (local_178->Scale3D).XY.m128d_f64[1];
        local_b8 = (local_178->Scale3D).ZW.m128d_f64[0];
        dStack_b0 = (local_178->Scale3D).ZW.m128d_f64[1];
        local_a8 = (param_9->Rotation).XY.m128d_f64[0];
        dStack_a0 = (param_9->Rotation).XY.m128d_f64[1];
        local_98 = (param_9->Rotation).ZW.m128d_f64[0];
        dStack_90 = (param_9->Rotation).ZW.m128d_f64[1];
        local_88 = (param_9->Translation).XY.m128d_f64[0];
        dStack_80 = (param_9->Translation).XY.m128d_f64[1];
        local_78 = (param_9->Translation).ZW.m128d_f64[0];
        dStack_70 = (param_9->Translation).ZW.m128d_f64[1];
        local_68 = (param_9->Scale3D).XY.m128d_f64[0];
        dStack_60 = (param_9->Scale3D).XY.m128d_f64[1];
        local_58 = (param_9->Scale3D).ZW.m128d_f64[0];
        dStack_50 = (param_9->Scale3D).ZW.m128d_f64[1];
        local_1a8._8_8_ = local_158;
        local_1a8._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
        local_170 = local_1b0;
        local_168 = local_1b8;
        local_160 = local_1a8;
        local_190._8_8_ = &local_170;
        local_190._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
        local_140 = param_3;
        UDynamicMesh::EditMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_190,
                   GeneralEdit,Unknown,false);
        if (local_1b8[0] == '\0') {
          pFVar2 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)local_1a8,L"UGeometryScriptLibrary_MeshUVFunctions",
                              L"SetMeshUVsFromMeshProjection_InvalidUVSet",
                              L"SetMeshUVsFromMeshProjection: Target UV Channel does not exist on TargetMesh"
                             );
          UE::Geometry::AppendError(param_13,InvalidInputs,pFVar2);
          if ((ITextData *)local_1a8._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_1a8._0_8_ + 0x10))();
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_6->FWNTree).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_6->Spatial).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_8->GeoSelection).SharedReferenceCount.ReferenceController);
    }
  }
  return param_1;
}

// TranslateMeshUVs @ 14ce759f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs
          (UDynamicMesh *param_1,int param_2,TVector2<double> *param_3,
          FGeometryScriptMeshSelection *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  char local_res8 [8];
  int local_58 [2];
  FGeometryScriptMeshSelection *local_50;
  TVector2<double> *local_48;
  code *local_40;
  FGeometryScriptMeshSelection **local_38;
  undefined1 local_30 [16];
  int *local_20;
  char *local_18;
  code **local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"TranslateMeshUVs_InvalidInput",L"TranslateMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_38 = &local_50;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
  local_20 = local_58;
  local_18 = local_res8;
  local_res8[0] = '\0';
  local_10 = &local_40;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58[0] = param_2;
  local_50 = param_4;
  local_48 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  if (local_res8[0] == '\0') {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"TranslateMeshUVs_InvalidUVSet",
                        L"TranslateMeshUVs: UVSetIndex does not exist on TargetMesh");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// execAddUVElementToMesh @ 14ce77120

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execAddUVElementToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  bool bVar5;
  uchar local_res10 [8];
  uchar local_res18 [8];
  int local_res20 [2];
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  UDynamicMesh *local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined4 **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  uchar *local_40;
  uchar *local_38;
  undefined8 *local_30;
  
  local_88[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_98[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = '\0';
  local_res18[1] = '\0';
  local_res18[2] = '\0';
  local_res18[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res18;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar2 = local_88[0];
  bVar5 = local_res20[0] != 0;
  local_58 = local_78;
  uStack_50 = uStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar3 = '\0';
  local_90[0] = local_98[0];
  puVar4[0] = 0xff;
  puVar4[1] = 0xff;
  puVar4[2] = 0xff;
  puVar4[3] = 0xff;
  if (local_88[0] != (UDynamicMesh *)0x0) {
    local_48 = local_90;
    local_30 = &local_58;
    local_60 = &local_48;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::AddUVElementToMesh'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_40 = puVar3;
    local_38 = puVar4;
    UDynamicMesh::EditMesh
              (local_88[0],(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
               GeneralEdit,Unknown,bVar5);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execApplyTexelDensityUVScaling @ 14ce88330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execApplyTexelDensityUVScaling
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UGeometryScriptDebug *pUVar3;
  UDynamicMesh *pUVar4;
  uint uVar5;
  FText *pFVar6;
  UDynamicMesh *pUVar7;
  undefined1 auStackY_1a8 [32];
  undefined4 local_178 [2];
  undefined4 local_170 [2];
  UGeometryScriptDebug *local_168;
  UDynamicMesh *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined1 local_140 [32];
  void *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ForElementType<FSetElementId> local_100;
  int local_f8;
  UGeometryScriptDebug *local_f0;
  FGeometryScriptMeshSelection local_e8;
  undefined1 local_d8 [16];
  FGeometrySelection *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  undefined1 *local_b8;
  FGeometrySelection **local_b0;
  undefined4 *local_a8;
  UGeometryScriptDebug **local_a0;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pUVar7 = (UDynamicMesh *)0x0;
  local_160 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_178[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_178);
  }
  local_58 = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_98[0] = 0;
  local_94 = 0x42c80000;
  local_90 = 0x44800000;
  local_8c = 0x44800000;
  local_88 = 0;
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_8_ = 0;
  local_60 = (void *)0x0;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_e8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_168 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar3 = local_168;
  local_c8 = local_e8.GeoSelection.Object;
  pTStack_c0 = local_e8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_e8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_154 = local_94;
  local_14c = local_8c;
  local_158[0] = local_98[0];
  local_118 = ___xmm_00000000ffffffff0000008000000000;
  uStack_110 = _UNK_150631d98;
  local_148 = local_88;
  local_150 = local_90;
  local_140._0_8_ = (FScriptContainerElement *)0x0;
  local_140._8_8_ = 0;
  local_120 = (void *)0x0;
  local_100 = (ForElementType<FSetElementId>)0x0;
  local_f8 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             local_140,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             local_80);
  pUVar4 = local_160;
  local_170[0] = local_178[0];
  local_f0 = pUVar3;
  if (local_160 == (UDynamicMesh *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_d8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ApplyTexelDensityUVScaling_InvalidInput",
                        L"ApplyTexelDensityUVScaling: TargetMesh is Null");
    UE::Geometry::AppendError(local_f0,InvalidInputs,pFVar6);
    if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
    }
    local_f8 = 0;
    if (local_100 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_100);
    }
    iVar2 = SUB84(local_140._8_8_,4);
    local_140._8_8_ = local_140._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_140,0,(int *)(local_140 + 0xc));
    }
    uVar5 = local_118._4_4_;
    uStack_110 = 0xffffffff;
    local_118 = (ulonglong)local_118._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_118 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_140 + 0x10),0);
    }
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_140._0_8_);
    }
  }
  else {
    local_b8 = local_158;
    local_b0 = &local_c8;
    local_a8 = local_170;
    local_a0 = &local_f0;
    local_d8._8_8_ = &local_b8;
    local_d8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ApplyTexelDensityUVScaling'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_160,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_d8,
               AttributeEdit,UVs,false);
    local_f8 = 0;
    if (local_100 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_100);
    }
    iVar2 = SUB84(local_140._8_8_,4);
    local_140._8_8_ = local_140._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_140,0,(int *)(local_140 + 0xc));
    }
    uVar5 = local_118._4_4_;
    uStack_110 = 0xffffffff;
    local_118 = (ulonglong)local_118._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_118 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_140 + 0x10),0);
    }
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    pUVar7 = pUVar4;
    if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_140._0_8_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  *(UDynamicMesh **)param_3 = pUVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.GeoSelection.SharedReferenceCount.ReferenceController);
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  iVar2 = SUB84(local_80._8_8_,4);
  local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
  }
  uVar5 = local_58._4_4_;
  uStack_50 = 0xffffffff;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  if (0x80 < uVar5) {
    local_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  return;
}

// execAutoGeneratePatchBuilderMeshUVs @ 14ce88be0

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execAutoGeneratePatchBuilderMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UGeometryScriptDebug *local_f8;
  UDynamicMesh *local_f0;
  UGeometryScriptDebug *local_e8;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 *local_98;
  UGeometryScriptDebug **local_90;
  code *local_88;
  undefined8 **local_80;
  undefined4 *local_78;
  char *local_70;
  code **local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_f0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_d0 = 100;
  uStack_cc = 2;
  uStack_c8 = 0x3f800000;
  uStack_c4 = 0x3fc00000;
  local_c0 = 0x42340000;
  uStack_b8 = 0x3e800000;
  uStack_b4 = uStack_b4 & 0xffffff00;
  local_b0 = CONCAT31(local_b0._1_3_,1);
  uStack_ac = 0;
  uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
  uStack_a4 = 0x200;
  local_a0 = CONCAT31(local_a0._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_f8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  pUVar2 = local_f0;
  local_58 = CONCAT44(uStack_cc,local_d0);
  uStack_50 = CONCAT44(uStack_c4,uStack_c8);
  uStack_40 = CONCAT44(uStack_b4,uStack_b8);
  local_38 = CONCAT44(uStack_ac,local_b0);
  uStack_30 = CONCAT44(uStack_a4,uStack_a8);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_a0;
  local_48 = local_c0;
  local_e8 = local_f8;
  if (local_f0 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_e0,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"AutoGeneratePatchBuilderMeshUVs_InvalidInput",
                        L"AutoGeneratePatchBuilderMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(local_e8,InvalidInputs,pFVar3);
    if ((ITextData *)local_e0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_e0._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_98 = &local_58;
    local_res10[0] = '\0';
    local_90 = &local_e8;
    local_80 = &local_98;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_res20[0] = local_res18[0];
    local_78 = local_res20;
    local_70 = local_res10;
    local_68 = &local_88;
    local_e0._8_8_ = &local_78;
    local_e0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_f0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_e0,
               GeneralEdit,Unknown,false);
    if (local_res10[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_e0,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"AutoGeneratePatchBuilderMeshUVs_InvalidUVSet",
                          L"AutoGeneratePatchBuilderMeshUVs: UVSetIndex does not exist on TargetMesh"
                         );
      UE::Geometry::AppendError(local_e8,InvalidInputs,pFVar3);
      if ((ITextData *)local_e0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_e0._0_8_ + 0x10))();
      }
    }
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execAutoGenerateXAtlasMeshUVs @ 14ce88ea0

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execAutoGenerateXAtlasMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  UGeometryScriptDebug *local_78;
  UDynamicMesh *local_70;
  UGeometryScriptDebug *local_68;
  undefined1 local_60 [16];
  UGeometryScriptDebug **local_50;
  undefined4 *local_48;
  code *local_40;
  undefined8 **local_38;
  undefined4 *local_30;
  char *local_28;
  code **local_20;
  
  local_70 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 2;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_78 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar2 = local_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = local_78;
  local_88[0] = local_res18[0];
  if (local_70 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"AutoGenerateXAtlasMeshUVs_InvalidInput",
                        L"AutoGenerateXAtlasMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(local_68,InvalidInputs,pFVar3);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_50 = &local_68;
    local_res10[0] = '\0';
    local_48 = local_88;
    local_38 = &local_50;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_80[0] = local_res20[0];
    local_30 = local_80;
    local_28 = local_res10;
    local_20 = &local_40;
    local_60._8_8_ = &local_30;
    local_60._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_70,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_60,
               GeneralEdit,Unknown,false);
    if (local_res10[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_60,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"AutoGenerateXAtlasMeshUVs_InvalidUVSet",
                          L"AutoGenerateXAtlasMeshUVs: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(local_68,InvalidInputs,pFVar3);
      if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
      }
    }
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execClearUVChannel @ 14ce89620

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execClearUVChannel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10 [2];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined4 local_38 [2];
  UGeometryScriptDebug *local_30;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ClearUVChannel_InvalidInput",L"ClearUVChannel: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_38[0] = local_res10[0];
  local_28._8_8_ = local_38;
  local_30 = local_res18;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ClearUVChannel'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             AttributeEdit,UVs,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execComputeMeshLocalUVParam @ 14ce89b40

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execComputeMeshLocalUVParam
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  void **ppvVar4;
  void **ppvVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_178 [2];
  UGeometryScriptDebug *local_170;
  undefined8 local_168;
  undefined8 local_160;
  UDynamicMesh *local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  UGeometryScriptDebug *local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  UGeometryScriptDebug **local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  void **local_a0;
  void **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_158 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_140 = (void *)0x0;
  local_138 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_150 = (void *)0x0;
  local_148 = 0;
  ppvVar5 = &local_140;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_160 = 0;
  ppvVar4 = &local_150;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar6 = local_res18[0] != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_168 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_170 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  pUVar3 = local_158;
  local_68 = local_108;
  uStack_60 = uStack_100;
  local_58 = local_f8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_f0;
  uStack_80 = uStack_e8;
  local_78 = local_e0;
  local_130 = local_170;
  local_118 = local_168;
  local_110 = local_160;
  local_178[0] = local_res20[0];
  local_res10[0] = bVar6;
  if (local_158 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_128,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ComputeMeshLocalUVParam_InvalidInput",
                        L"ComputeMeshLocalUVParam: TargetMesh is Null");
    UE::Geometry::AppendError(local_130,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_128._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_128._0_8_ + 0x10))();
    }
  }
  else {
    local_d8 = local_178;
    local_d0 = &local_130;
    local_c8 = &local_88;
    local_c0 = local_res10;
    local_b8 = &local_68;
    local_b0 = &local_118;
    local_a8 = &local_110;
    local_128._8_8_ = &local_d8;
    local_128._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_a0 = ppvVar5;
    local_98 = ppvVar4;
    UDynamicMesh::ProcessMesh
              (local_158,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_128);
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  if (local_150 != (void *)0x0) {
    FMemory::Free(local_150);
  }
  if (local_140 != (void *)0x0) {
    FMemory::Free(local_140);
  }
  return;
}

// execCopyMeshToMeshUVLayer @ 14ce8d1b0

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execCopyMeshToMeshUVLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  UDynamicMesh *pUVar2;
  FProperty *pFVar3;
  FText *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uchar *puVar7;
  uchar *puVar8;
  bool bVar9;
  uchar local_res10 [8];
  undefined8 *local_res18;
  uchar local_res20 [8];
  undefined1 local_c8 [8];
  int local_c0;
  undefined4 local_bc;
  uchar *local_b8;
  UGeometryScriptDebug *local_b0;
  UDynamicMesh *local_a8;
  undefined1 local_a0 [16];
  undefined4 local_90 [2];
  undefined1 local_88 [72];
  uchar *local_40;
  
  local_88._24_8_ = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88 + 0x18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88 + 0x18);
  }
  local_bc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_bc,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_bc);
  }
  local_88._0_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  pUVar2 = (UDynamicMesh *)param_2->MostRecentPropertyAddress;
  local_88._8_8_ = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_a8 = (UDynamicMesh *)local_88;
  if (pUVar2 != (UDynamicMesh *)0x0) {
    local_a8 = pUVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88 + 8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88 + 8);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_b8 = local_88 + 8;
  if (puVar8 != (uchar *)0x0) {
    local_b8 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res10;
  if (puVar8 != (uchar *)0x0) {
    puVar7 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_c0 = 0;
  puVar8 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  bVar9 = local_c0 != 0;
  local_88._16_8_ = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88 + 0x10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88 + 0x10);
  }
  pUVar2 = local_a8;
  local_b0 = (UGeometryScriptDebug *)local_88._16_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_90[0] = local_bc;
  local_a8 = (UDynamicMesh *)local_88._24_8_;
  pUVar2 = (UDynamicMesh *)pUVar2->_padding_;
  local_c8[0] = bVar9;
  if ((UDynamicMesh *)local_88._24_8_ == (UDynamicMesh *)0x0) {
    pwVar6 = L"CopyMeshToMeshUVLayer: CopyFromUVMesh is Null";
    pwVar5 = L"CopyMeshToMeshUVLayer_InvalidInput";
  }
  else if (pUVar2 == (UDynamicMesh *)0x0) {
    pwVar6 = L"CopyMeshToMeshUVLayer: CopyToUVMesh is Null";
    pwVar5 = L"CopyMeshToMeshUVLayer_InvalidInput2";
  }
  else {
    if ((UDynamicMesh *)local_88._24_8_ != pUVar2) {
      local_88._32_8_ = local_90;
      *puVar7 = '\0';
      local_88._40_8_ = &local_b0;
      *puVar8 = '\0';
      local_88._56_8_ = &local_a8;
      local_88._64_8_ = local_c8;
      local_a0._8_8_ = local_88 + 0x20;
      local_a0._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      local_88._48_8_ = puVar8;
      local_40 = puVar7;
      UDynamicMesh::EditMesh
                (pUVar2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_a0,
                 GeneralEdit,Unknown,false);
      *(UDynamicMesh **)local_b8 = pUVar2;
      goto LAB_14ce8d449;
    }
    pwVar6 = 
    L"CopyMeshToMeshUVLayer: CopyFromUVMesh and CopyToMesh are the same mesh, this is not supported"
    ;
    pwVar5 = L"CopyMeshToMeshUVLayer_SameMeshes";
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_a0,L"UGeometryScriptLibrary_MeshUVFunctions",pwVar5,pwVar6);
  UE::Geometry::AppendError(local_b0,InvalidInputs,pFVar4);
  if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 0x10))();
  }
LAB_14ce8d449:
  *local_res18 = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)local_b8);
  }
  return;
}

// execCopyMeshUVLayerToMesh @ 14ce8d530

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execCopyMeshUVLayerToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *this;
  FText *pFVar2;
  uchar *puVar3;
  UDynamicMesh *pUVar4;
  UDynamicMesh *this_00;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined4 local_res20 [2];
  UGeometryScriptDebug *local_2d8;
  undefined1 local_2d0 [16];
  undefined4 local_2c0 [2];
  uchar local_2b8 [8];
  undefined8 local_2b0;
  UGeometryScriptDebug *local_2a8;
  UDynamicMesh *local_2a0;
  undefined4 *local_298;
  UGeometryScriptDebug **local_290;
  uchar *local_288;
  FDynamicMesh3 *local_280;
  uchar *local_278;
  FDynamicMesh3 local_268;
  
  pUVar4 = (UDynamicMesh *)0x0;
  local_2a0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_2b8[0] = '\0';
  local_2b8[1] = '\0';
  local_2b8[2] = '\0';
  local_2b8[3] = '\0';
  local_2b8[4] = '\0';
  local_2b8[5] = '\0';
  local_2b8[6] = '\0';
  local_2b8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2b8);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_2b0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_2b8;
  if (puVar8 != (uchar *)0x0) {
    puVar3 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b0);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = (uchar *)&local_2b0;
  if (puVar8 != (uchar *)0x0) {
    puVar7 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_res18[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_res10;
  if (puVar8 != (uchar *)0x0) {
    puVar9 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_2a8 = (UGeometryScriptDebug *)0x0;
  puVar8 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  this_00 = local_2a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UDynamicMesh **)puVar3;
  local_2d8 = local_2a8;
  local_2c0[0] = local_res20[0];
  if (local_2a0 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_2d0,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"CopyMeshUVLayerToMesh_InvalidInput",
                        L"CopyMeshUVLayerToMesh: CopyFromMesh is Null");
    UE::Geometry::AppendError(local_2d8,InvalidInputs,pFVar2);
    this_00 = pUVar4;
    if ((ITextData *)local_2d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2d0._0_8_ + 0x10))();
    }
  }
  else {
    if (this == (UDynamicMesh *)0x0) {
      pwVar6 = L"CopyMeshUVLayerToMesh: CopyToUVMesh is Null";
      pwVar5 = L"CopyMeshUVLayerToMesh_InvalidInput2";
    }
    else {
      if (local_2a0 != this) {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
        local_298 = local_2c0;
        *puVar8 = '\0';
        local_290 = &local_2d8;
        *puVar9 = '\0';
        local_280 = &local_268;
        local_2d0._8_8_ = &local_298;
        local_2d0._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
        local_288 = puVar8;
        local_278 = puVar9;
        UDynamicMesh::ProcessMesh
                  (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           local_2d0);
        if (0 < ((local_268.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum) {
          pUVar4 = *(UDynamicMesh **)
                    ((local_268.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
        }
        UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
                  ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pUVar4,true);
        UDynamicMesh::SetMesh(this,&local_268);
        *(UDynamicMesh **)puVar7 = this;
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
        goto LAB_14ce8d8df;
      }
      pwVar6 = 
      L"CopyMeshUVLayerToMesh: CopyFromMesh and CopyToUVMesh are the same mesh, this is not supported"
      ;
      pwVar5 = L"CopyMeshToUVMesh_SameMeshes";
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_2d0,L"UGeometryScriptLibrary_MeshUVFunctions",pwVar5,pwVar6);
    UE::Geometry::AppendError(local_2d8,InvalidInputs,pFVar2);
    if ((ITextData *)local_2d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_2d0._0_8_ + 0x10))();
    }
  }
LAB_14ce8d8df:
  *(UDynamicMesh **)param_3 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar7);
  }
  return;
}

// execCopyUVSet @ 14ce8db10

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execCopyUVSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_68 [2];
  UGeometryScriptDebug *local_60;
  UDynamicMesh *local_58;
  UGeometryScriptDebug *local_50;
  undefined1 local_48 [16];
  int *local_38;
  int *local_30;
  UGeometryScriptDebug **local_28;
  
  local_58 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_60 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pUVar2 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = local_60;
  local_68[0] = local_res10[0];
  local_res20[0] = local_res18[0];
  if (local_58 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"CopyUVSet_InvalidInput",L"CopyUVSet: TargetMesh is Null");
    UE::Geometry::AppendError(local_50,InvalidInputs,pFVar3);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (local_res18[0] == local_res10[0]) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_48,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"CopyUVSet_SameSet",L"CopyUVSet: From and To UV Sets have the same Index"
                         );
      UE::Geometry::AppendError(local_50,InvalidInputs,pFVar3);
      if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
      }
    }
    else {
      local_38 = local_res20;
      local_30 = local_68;
      local_28 = &local_50;
      local_48._8_8_ = &local_38;
      local_48._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
           ::Call;
      UDynamicMesh::EditMesh
                (local_58,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
                 GeneralEdit,Unknown,false);
    }
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execGetMeshPerVertexUVs @ 14ce92d60

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execGetMeshPerVertexUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptUVList *pFVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  bool *pbVar4;
  FGeometryScriptUVList *pFVar5;
  bool *pbVar6;
  bool *pbVar7;
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_res20 [8];
  int local_68 [2];
  UGeometryScriptDebug *local_60;
  UDynamicMesh *local_58;
  FGeometryScriptUVList local_50;
  
  local_58 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_50.List.Object = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_50.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pFVar1 = (FGeometryScriptUVList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_50;
  if (pFVar1 != (FGeometryScriptUVList *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  local_res18[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar7 = local_res10;
  if (pbVar4 != (bool *)0x0) {
    pbVar7 = pbVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  local_res20[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar6 = local_res18;
  if (pbVar4 != (bool *)0x0) {
    pbVar6 = pbVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_60 = (UGeometryScriptDebug *)0x0;
  pbVar4 = local_res20;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetMeshPerVertexUVs(local_58,local_68[0],pFVar5,pbVar7,pbVar6,pbVar4,local_60);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetMeshTriangleUVElementIDs @ 14ce93810

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execGetMeshTriangleUVElementIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  UDynamicMesh *local_78;
  uchar local_70 [16];
  code *local_60;
  undefined4 **local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  uchar *local_40;
  uchar *local_38;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_70;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_78;
  local_40 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_40 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88[0] = local_res18[0];
  local_80[0] = local_res20[0];
  *local_40 = '\0';
  if (local_78 != (UDynamicMesh *)0x0) {
    local_50 = local_88;
    local_48 = local_80;
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::GetMeshTriangleUVElementIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_38 = puVar4;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60
              );
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetMeshUVElementPosition @ 14ce93b70

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execGetMeshUVElementPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  UDynamicMesh *local_78;
  uchar local_70 [16];
  code *local_60;
  undefined4 **local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  uchar *local_40;
  uchar *local_38;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_70;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_78;
  local_40 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_40 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_80[0] = local_res18[0];
  local_88[0] = local_res20[0];
  *local_40 = '\0';
  if (local_78 != (UDynamicMesh *)0x0) {
    local_50 = local_88;
    local_48 = local_80;
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVElementPosition'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_38 = puVar4;
    UDynamicMesh::ProcessMesh
              (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60
              );
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetMeshUVSizeInfo @ 14ce93d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execGetMeshUVSizeInfo
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ITextData *pIVar1;
  undefined1 (*pauVar2) [16];
  double *pdVar3;
  FProperty *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  uchar *puVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  FText *pFVar11;
  undefined1 (*pauVar12) [16];
  UDynamicMesh *this;
  uchar *puVar13;
  double *pdVar14;
  uchar *puVar15;
  bool bVar16;
  double dVar18;
  undefined1 auVar17 [16];
  undefined1 auStack_208 [32];
  uchar local_1e8 [8];
  undefined1 local_1e0 [8];
  int local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  undefined4 local_1b0 [2];
  uchar local_1a8 [8];
  ITextData local_1a0;
  UGeometryScriptDebug *local_198;
  UDynamicMesh *local_190;
  UGeometryScriptDebug *local_188 [2];
  FGeometryScriptMeshSelection local_178;
  undefined8 *local_168;
  undefined4 *local_160;
  UGeometryScriptDebug **local_158;
  uchar *local_150;
  FGeometrySelection **ppFStack_148;
  uchar *puStack_140;
  undefined1 *puStack_138;
  uchar *local_130;
  double *local_128;
  ITextData *local_120;
  undefined8 *local_118;
  FGeometrySelection *local_108;
  TReferenceControllerBase<1> *pTStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8 [5];
  undefined1 local_a0 [48];
  undefined1 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_190 = (UDynamicMesh *)0x0;
  local_168 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_1d4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d4,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d4);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_178);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_1a8[0] = '\0';
  local_1a8[1] = '\0';
  local_1a8[2] = '\0';
  local_1a8[3] = '\0';
  local_1a8[4] = '\0';
  local_1a8[5] = '\0';
  local_1a8[6] = '\0';
  local_1a8[7] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a8);
  }
  puVar15 = param_2->MostRecentPropertyAddress;
  local_1a0 = (ITextData)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_1d0 = local_1a8;
  if (puVar15 != (uchar *)0x0) {
    local_1d0 = puVar15;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  pIVar1 = (ITextData *)param_2->MostRecentPropertyAddress;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_1c0._0_8_ = &local_1a0;
  if (pIVar1 != (ITextData *)0x0) {
    local_1c0._0_8_ = pIVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  pauVar2 = (undefined1 (*) [16])param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pauVar12 = (undefined1 (*) [16])local_a0;
  if (pauVar2 != (undefined1 (*) [16])0x0) {
    pauVar12 = pauVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  local_1e8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar14 = local_c8;
  if (pdVar3 != (double *)0x0) {
    pdVar14 = pdVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8);
  }
  puVar15 = param_2->MostRecentPropertyAddress;
  local_1e8[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar13 = local_1e8;
  if (puVar15 != (uchar *)0x0) {
    puVar13 = puVar15;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8 + 1,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8 + 1);
  }
  local_1d8 = 0;
  puVar15 = local_1e8 + 1;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  bVar16 = local_1d8 != 0;
  local_198 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  this = local_190;
  uVar9 = local_1c0._0_8_;
  puVar8 = local_1d0;
  local_108 = local_178.GeoSelection.Object;
  pTStack_100 = local_178.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_178.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188[0] = local_198;
  local_1b0[0] = local_1d4;
  *(ITextData *)local_1c0._0_8_ = (ITextData)0x0;
  local_1d0[0] = '\0';
  local_1d0[1] = '\0';
  local_1d0[2] = '\0';
  local_1d0[3] = '\0';
  local_1d0[4] = '\0';
  local_1d0[5] = '\0';
  local_1d0[6] = '\0';
  local_1d0[7] = '\0';
  local_1e0[0] = bVar16;
  *puVar13 = '\0';
  *puVar15 = '\0';
  if (this == (UDynamicMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_1c0,L"UGeometryScriptLibrary_MeshUVFunctions",
                         L"GetMeshUVSizeInfo_InvalidInput",L"GetMeshUVSizeInfo: TargetMesh is Null")
    ;
    UE::Geometry::AppendError(local_188[0],InvalidInputs,pFVar11);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_1c0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1c0._0_8_ + 0x10))();
    }
  }
  else {
    local_1d0 = (uchar *)0x7f7fffff7f7fffff;
    local_1c8 = 0xff7fffffff7fffff;
    local_160 = local_1b0;
    local_158 = local_188;
    puStack_138 = local_1e0;
    local_128 = &local_f8;
    local_118 = &local_1d0;
    local_1c0._8_8_ = &local_160;
    local_f8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_f0 = _UNK_150a9e648;
    local_130 = puVar8;
    local_120 = (ITextData *)uVar9;
    local_1c0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_e8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e0 = _UNK_150a9e6d8;
    local_d8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d0 = _UNK_1508ffb58;
    dVar18 = _UNK_150a9e6d8;
    local_150 = puVar13;
    ppFStack_148 = &local_108;
    puStack_140 = puVar15;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_1c0);
    auVar7._8_8_ = uStack_f0;
    auVar7._0_8_ = local_f8;
    local_150 = (uchar *)local_e8;
    ppFStack_148 = (FGeometrySelection **)dStack_e0;
    puStack_138 = (undefined1 *)dStack_d0;
    if (((dStack_e0 < local_f8) ||
        (auVar6._4_8_ = dVar18, auVar6._0_4_ = (int)((ulonglong)local_f8 >> 0x20),
        auVar17._0_8_ = auVar6._0_8_ << 0x20, auVar17._8_4_ = (int)uStack_f0,
        auVar17._12_4_ = (int)((ulonglong)uStack_f0 >> 0x20), local_d8 < auVar17._8_8_)) ||
       (dStack_d0 < local_e8)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    local_130 = (uchar *)CONCAT71(local_130._1_7_,uVar10);
    *pauVar12 = auVar7;
    *(double *)pauVar12[1] = local_e8;
    *(double *)(pauVar12[1] + 8) = dStack_e0;
    *(double *)pauVar12[2] = local_d8;
    *(double *)(pauVar12[2] + 8) = dStack_d0;
    *(uchar **)pauVar12[3] = local_130;
    if (((float)local_1c8 < (float)local_1d0) || (local_1c8._4_4_ < local_1d0._4_4_)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    *pdVar14 = (double)(float)local_1d0;
    pdVar14[1] = (double)local_1d0._4_4_;
    puStack_140 = (uchar *)CONCAT71((int7)((ulonglong)local_d8 >> 8),uVar10);
    auVar5._8_4_ = SUB84((double)local_1c8._4_4_,0);
    auVar5._0_8_ = (double)(float)local_1c8;
    auVar5._12_4_ = (int)((ulonglong)(double)local_1c8._4_4_ >> 0x20);
    *(undefined1 (*) [16])(pdVar14 + 2) = auVar5;
    pdVar14[4] = (double)puStack_140;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_100);
  *local_168 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execIntersectsUVBox2D @ 14ce978a0

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execIntersectsUVBox2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined1 local_res10 [8];
  int local_res18 [4];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double adStack_e0 [3];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double adStack_b0 [3];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  char local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  char local_50;
  
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8 = local_70;
  dStack_f0 = dStack_68;
  local_e8 = local_60;
  adStack_e0[0] = dStack_58;
  local_c8 = local_98;
  dStack_c0 = dStack_90;
  local_b8 = local_88;
  adStack_b0[0] = dStack_80;
  if ((local_78 == '\0') || (local_50 == '\0')) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res18[0] == 0) {
    if ((((local_98 <= local_60) && (local_70 <= local_88)) && (dStack_90 <= dStack_58)) &&
       (dStack_68 <= dStack_80)) {
      *(undefined1 *)param_3 = 1;
      return;
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
            (local_res10,&local_c8,&local_b8);
  `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
            (local_res10,&local_f8,&local_e8);
  uVar5 = SUB84(local_b8,0);
  uVar7 = (undefined4)((ulonglong)local_b8 >> 0x20);
  uVar9 = (undefined4)((ulonglong)local_e8 >> 0x20);
  uVar10 = SUB84(local_c8,0);
  uVar11 = (undefined4)((ulonglong)local_c8 >> 0x20);
  if ((local_b8 - local_c8 < __real_3ff0000000000000) &&
     (local_e8 - local_f8 < __real_3ff0000000000000)) {
    if (local_e8 <= __real_3ff0000000000000) {
      uVar6 = uVar5;
      uVar8 = uVar7;
      uVar5 = SUB84(local_e8,0);
      uVar7 = uVar9;
      uVar10 = SUB84(local_f8,0);
      uVar11 = (int)((ulonglong)local_f8 >> 0x20);
      dVar12 = local_c8;
      if (local_b8 <= __real_3ff0000000000000) {
        if ((local_f8 <= local_b8) && (local_c8 <= local_e8)) goto LAB_14ce97ada;
        goto LAB_14ce97b51;
      }
    }
    else {
      uVar6 = SUB84(local_e8,0);
      uVar8 = uVar9;
      dVar12 = local_f8;
      if (__real_3ff0000000000000 < local_b8) goto LAB_14ce97ada;
    }
    dVar3 = (double)CONCAT44(uVar8,uVar6) - __real_3ff0000000000000;
    if ((dVar3 <= (double)CONCAT44(uVar11,uVar10) && (double)CONCAT44(uVar11,uVar10) != dVar3) &&
       ((double)CONCAT44(uVar7,uVar5) < dVar12)) {
LAB_14ce97b51:
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
LAB_14ce97ada:
  `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
            (local_res10,&dStack_c0,adStack_b0);
  `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_1>::operator()
            (local_res10,&dStack_f0,adStack_e0);
  bVar4 = `UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D'::__l10::<lambda_2>::operator()
                    (local_res10,dStack_c0,adStack_b0[0],dStack_f0,adStack_e0[0]);
  *(bool *)param_3 = bVar4;
  return;
}

// execLayoutMeshUVs @ 14ce98a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execLayoutMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UGeometryScriptDebug *pUVar3;
  UDynamicMesh *pUVar4;
  uint uVar5;
  FText *pFVar6;
  UDynamicMesh *pUVar7;
  undefined1 auStackY_1c8 [32];
  undefined4 local_198 [2];
  undefined4 local_190 [2];
  UGeometryScriptDebug *local_188;
  UDynamicMesh *local_180;
  UGeometryScriptDebug *local_178;
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_148 [32];
  void *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ForElementType<FSetElementId> local_108;
  int local_100;
  FGeometryScriptMeshSelection local_f8;
  undefined1 local_e8 [16];
  FGeometrySelection *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined1 *local_c8;
  FGeometrySelection **local_c0;
  undefined4 *local_b8;
  UGeometryScriptDebug **local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar7 = (UDynamicMesh *)0x0;
  local_180 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_198[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_198);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_58 = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_a8[0] = 2;
  local_a4 = 0x400;
  local_a0 = 0x3f800000;
  local_88 = 0;
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_8_ = 0;
  local_60 = (void *)0x0;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_f8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_188 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  pUVar3 = local_188;
  local_d8 = local_f8.GeoSelection.Object;
  pTStack_d0 = local_f8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_170[0] = local_a8[0];
  local_16c = local_a4;
  local_150 = (undefined1)local_88;
  local_14f = local_88._1_1_;
  local_14e = local_88._2_1_;
  local_168 = local_a0;
  local_14d = local_88._3_1_;
  local_160 = local_98;
  uStack_158 = uStack_90;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_8_ = 0;
  local_128 = (void *)0x0;
  local_120 = ___xmm_00000000ffffffff0000008000000000;
  uStack_118 = _UNK_150631d98;
  local_108 = (ForElementType<FSetElementId>)0x0;
  local_100 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             local_148,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             local_80);
  pUVar4 = local_180;
  local_190[0] = local_198[0];
  local_178 = pUVar3;
  if (local_180 == (UDynamicMesh *)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_e8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"LayoutMeshUVs_InvalidInput",L"LayoutMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(local_178,InvalidInputs,pFVar6);
    if ((ITextData *)local_e8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_e8._0_8_ + 0x10))();
    }
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    iVar2 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    uVar5 = local_120._4_4_;
    uStack_118 = 0xffffffff;
    local_120 = (ulonglong)local_120._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_120 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
  }
  else {
    local_c8 = local_170;
    local_c0 = &local_d8;
    local_b8 = local_190;
    local_b0 = &local_178;
    local_e8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::LayoutMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_e8._8_8_ = &local_c8;
    UDynamicMesh::EditMesh
              (local_180,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_e8,
               AttributeEdit,UVs,false);
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    iVar2 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    uVar5 = local_120._4_4_;
    uStack_118 = 0xffffffff;
    local_120 = (ulonglong)local_120._4_4_ << 0x20;
    if (0x80 < uVar5) {
      local_120 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    pUVar7 = pUVar4;
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  *(UDynamicMesh **)param_3 = pUVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.GeoSelection.SharedReferenceCount.ReferenceController);
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  iVar2 = SUB84(local_80._8_8_,4);
  local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
  }
  uVar5 = local_58._4_4_;
  uStack_50 = 0xffffffff;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  if (0x80 < uVar5) {
    local_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  return;
}

// execRecomputeMeshUVs @ 14ce99420

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execRecomputeMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UGeometryScriptDebug *local_e8;
  UDynamicMesh *local_e0;
  UGeometryScriptDebug *local_d8;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined1 local_b0 [24];
  FGeometryScriptMeshSelection local_98;
  code *local_88;
  undefined8 **local_80;
  FGeometrySelection *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 *local_68;
  FGeometrySelection **local_60;
  UGeometryScriptDebug **local_58;
  undefined4 *local_50;
  char *local_48;
  code **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_e0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_d0 = 0x102;
  uStack_cc = 0;
  uStack_c8 = 0x3e800000;
  uStack_c4 = CONCAT31(uStack_c4._1_3_,1);
  local_c0 = CONCAT31(local_c0._1_3_,1);
  uStack_bc = 0;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_e8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pUVar3 = local_e0;
  local_78 = local_98.GeoSelection.Object;
  pTStack_70 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = CONCAT44(uStack_cc,CONCAT22(uStack_ce,local_d0));
  uStack_30 = CONCAT44(uStack_c4,uStack_c8);
  local_28 = CONCAT44(uStack_bc,local_c0);
  local_20 = local_b8;
  local_d8 = local_e8;
  if (local_e0 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_b0,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RecomputeMeshUVs_InvalidInput",L"RecomputeMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(local_d8,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_b0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b0._0_8_ + 0x10))();
    }
  }
  else {
    local_68 = &local_38;
    local_res10[0] = '\0';
    local_60 = &local_78;
    local_58 = &local_d8;
    local_80 = &local_68;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_res20[0] = local_res18[0];
    local_50 = local_res20;
    local_48 = local_res10;
    local_40 = &local_88;
    local_b0._8_8_ = &local_50;
    local_b0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_e0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_b0,
               GeneralEdit,Unknown,false);
    if (local_res10[0] == '\0') {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_b0,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"RecomputeMeshUVs_InvalidUVSet",
                          L"RecomputeMeshUVs: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(local_d8,InvalidInputs,pFVar2);
      if ((ITextData *)local_b0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_b0._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execRepackMeshUVs @ 14ce9a020

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execRepackMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  UGeometryScriptDebug *local_80;
  UDynamicMesh *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  undefined4 *local_40;
  char *local_38;
  code **local_30;
  
  local_78 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_88 = 0x200;
  uStack_84 = CONCAT31(uStack_84._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_80 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pUVar3 = local_78;
  pUVar2 = local_80;
  local_60 = CONCAT44(uStack_84,local_88);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_70,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RepackMeshUVs_InvalidInput",L"RepackMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_58 = &local_60;
  local_res10[0] = '\0';
  local_48 = &local_58;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
             ::Call;
  local_res20[0] = local_res18[0];
  local_40 = local_res20;
  local_38 = local_res10;
  local_30 = &local_50;
  local_70._8_8_ = &local_40;
  local_70._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_78,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_70,
             GeneralEdit,Unknown,false);
  if (local_res10[0] == '\0') {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_70,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RepackMeshUVs_InvalidUVSet",
                        L"RepackMeshUVs: UVSetIndex does not exist on TargetMesh");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execRotateMeshUVs @ 14ce9ab80

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execRotateMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *this;
  uint extraout_XMM0_Da;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_d8 [2];
  UGeometryScriptDebug *local_d0;
  UDynamicMesh *local_c8;
  undefined1 local_c0 [16];
  float local_b0;
  float local_ac;
  undefined1 local_a8 [4];
  uint local_a4;
  FGeometryScriptMeshSelection local_98;
  double local_88;
  double local_80;
  code *local_78;
  undefined8 **local_70;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FGeometrySelection **local_58;
  undefined1 *local_50;
  float *local_48;
  undefined4 *local_40;
  char *local_38;
  code **local_30;
  
  local_c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_d0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  this = local_c8;
  pUVar2 = local_d0;
  local_68 = local_98.GeoSelection.Object;
  pTStack_60 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_c8 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c0,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"RotateMeshUVs_InvalidInput",L"RotateMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    this = (UDynamicMesh *)0x0;
    if ((ITextData *)local_c0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c0._0_8_ + 0x10))();
    }
  }
  else {
    __libm_sse2_sincosf_();
    local_a4 = extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000;
    local_58 = &local_68;
    local_50 = local_a8;
    local_48 = &local_b0;
    local_70 = &local_58;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_d8[0] = local_res20[0];
    local_40 = local_d8;
    local_38 = local_res10;
    local_30 = &local_78;
    local_c0._8_8_ = &local_40;
    local_b0 = (float)local_88;
    local_c0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_res10[0] = '\0';
    local_ac = (float)local_80;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_c0,
               GeneralEdit,Unknown,false);
    if (local_res10[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_c0,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"RotateMeshUVs_InvalidUVSet",
                          L"RotateMeshUVs: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
      if ((ITextData *)local_c0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_c0._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execScaleMeshUVs @ 14ce9b360

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execScaleMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UGeometryScriptDebug *local_d8;
  UDynamicMesh *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  float local_b0;
  float local_ac;
  FGeometryScriptMeshSelection local_a8;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  code *local_78;
  undefined8 **local_70;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FGeometrySelection **local_58;
  float *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  char *local_38;
  code **local_30;
  
  local_d0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_a8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_d8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pUVar4 = local_d0;
  pUVar2 = local_d8;
  local_68 = local_a8.GeoSelection.Object;
  pTStack_60 = local_a8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_d0 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c0,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"ScaleMeshUVs_InvalidInput",L"ScaleMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_c0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c0._0_8_ + 0x10))();
    }
  }
  else {
    local_c8._4_4_ = (undefined4)local_90;
    local_c8._0_4_ = (undefined4)local_98;
    if ((double)SQRT((float)local_c8._4_4_ * (float)local_c8._4_4_ +
                     (float)(undefined4)local_c8 * (float)(undefined4)local_c8) <
        __real_3f1a36e2eb1c432d) {
      local_c8 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
    }
    local_58 = &local_68;
    local_50 = &local_b0;
    local_res10[0] = '\0';
    local_48 = &local_c8;
    local_70 = &local_58;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_res20[0] = local_res18[0];
    local_40 = local_res20;
    local_38 = local_res10;
    local_30 = &local_78;
    local_c0._8_8_ = &local_40;
    local_b0 = (float)local_88;
    local_c0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_ac = (float)local_80;
    UDynamicMesh::EditMesh
              (local_d0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_c0,
               GeneralEdit,Unknown,false);
    if (local_res10[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_c0,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"ScaleMeshUVs_InvalidUVSet",
                          L"ScaleMeshUVs: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
      if ((ITextData *)local_c0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_c0._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSetMeshTriangleUVElementIDs @ 14ce9e8d0

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetMeshTriangleUVElementIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  UDynamicMesh *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 **local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 *local_38;
  uchar *local_30;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_98[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar2 = local_80;
  bVar4 = local_res18[0] != 0;
  local_68 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = local_70;
  local_90[0] = local_res20[0];
  local_88[0] = local_98[0];
  *puVar3 = '\0';
  if (local_80 != (UDynamicMesh *)0x0) {
    local_48 = local_90;
    local_40 = local_88;
    local_38 = &local_68;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVElementIDs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_30 = puVar3;
    UDynamicMesh::EditMesh
              (local_80,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_58,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execSetMeshTriangleUVs @ 14ce9eb00

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetMeshTriangleUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_d8 [2];
  undefined4 local_d0 [2];
  undefined4 local_c8 [2];
  UDynamicMesh *local_c0;
  code *local_b8;
  undefined4 **local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 *local_78;
  undefined4 *local_70;
  uchar *local_68;
  double *local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  local_c0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_d8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_a8 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_98 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_88 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar2 = local_c0;
  bVar4 = local_res18[0] != 0;
  local_58 = (double)local_a8._0_8_;
  dStack_50 = (double)local_a8._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0[0] = local_res20[0];
  local_48 = (double)local_98._0_8_;
  dStack_40 = (double)local_98._8_8_;
  local_38 = (double)local_88._0_8_;
  dStack_30 = (double)local_88._8_8_;
  local_c8[0] = local_d8[0];
  *puVar3 = '\0';
  if (local_c0 != (UDynamicMesh *)0x0) {
    local_78 = local_d0;
    local_70 = local_c8;
    local_60 = &local_58;
    local_b0 = &local_78;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_68 = puVar3;
    UDynamicMesh::EditMesh
              (local_c0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_b8,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execSetMeshUVElementPosition @ 14ce9ed50

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVElementPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  UDynamicMesh *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined4 **local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  uchar *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_98[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar2 = local_80;
  bVar4 = local_res18[0] != 0;
  local_38 = local_78;
  uStack_30 = uStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88[0] = local_res20[0];
  local_90[0] = local_98[0];
  *puVar3 = '\0';
  if (local_80 != (UDynamicMesh *)0x0) {
    local_58 = local_90;
    local_50 = local_88;
    local_40 = &local_38;
    local_60 = &local_58;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVElementPosition'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_48 = puVar3;
    UDynamicMesh::EditMesh
              (local_80,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execSetMeshUVsFromBoxProjection @ 14ce9ef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromBoxProjection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  undefined1 auStack_1b8 [32];
  char local_188 [4];
  undefined4 local_184;
  undefined4 local_180 [2];
  undefined4 local_178 [2];
  undefined4 local_170 [2];
  UGeometryScriptDebug *local_168;
  UDynamicMesh *local_160;
  undefined1 local_158 [16];
  FGeometryScriptMeshSelection local_148;
  code *local_138;
  undefined8 **local_130;
  FGeometrySelection *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FGeometrySelection **local_118;
  double *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  char *local_f8;
  code **local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_160 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_180[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_180);
  }
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_58 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_50 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_38 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_30 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_148);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_184 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_168 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar4 = local_160;
  pUVar2 = local_168;
  local_128 = local_148.GeoSelection.Object;
  pTStack_120 = local_148.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_148.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = local_88;
  dStack_e0 = dStack_80;
  local_d8 = local_78;
  dStack_d0 = dStack_70;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58;
  dStack_b0 = dStack_50;
  local_a8 = local_48._0_8_;
  uStack_a0 = local_48._8_8_;
  local_98 = local_38;
  dStack_90 = dStack_30;
  local_178[0] = local_184;
  if (local_160 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_158,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromBoxProjection_InvalidInput",
                        L"SetMeshUVsFromBoxProjection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 0x10))();
    }
  }
  else {
    local_118 = &local_128;
    local_188[0] = '\0';
    local_110 = &local_e8;
    local_108 = local_178;
    local_130 = &local_118;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
                ::Call;
    local_170[0] = local_180[0];
    local_100 = local_170;
    local_f8 = local_188;
    local_f0 = &local_138;
    local_158._8_8_ = &local_100;
    local_158._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_160,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_158,
               GeneralEdit,Unknown,false);
    if (local_188[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_158,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetMeshUVsFromBoxProjection_InvalidUVSet",
                          L"SetMeshUVsFromBoxProjection: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
      if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSetMeshUVsFromCylinderProjection @ 14ce9f340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromCylinderProjection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  undefined1 auStack_1b8 [32];
  char local_188 [4];
  undefined4 local_184;
  undefined4 local_180 [2];
  undefined4 local_178 [2];
  undefined4 local_170 [2];
  UGeometryScriptDebug *local_168;
  UDynamicMesh *local_160;
  undefined1 local_158 [16];
  FGeometryScriptMeshSelection local_148;
  code *local_138;
  undefined8 **local_130;
  FGeometrySelection *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FGeometrySelection **local_118;
  double *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  char *local_f8;
  code **local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_160 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_180[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_180);
  }
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_58 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_50 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_38 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_30 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_148);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_184 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_168 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar4 = local_160;
  pUVar2 = local_168;
  local_128 = local_148.GeoSelection.Object;
  pTStack_120 = local_148.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_148.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = local_88;
  dStack_e0 = dStack_80;
  local_d8 = local_78;
  dStack_d0 = dStack_70;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58;
  dStack_b0 = dStack_50;
  local_a8 = local_48._0_8_;
  uStack_a0 = local_48._8_8_;
  local_98 = local_38;
  dStack_90 = dStack_30;
  local_178[0] = local_184;
  if (local_160 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_158,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromCylinderProjection_InvalidInput",
                        L"SetMeshUVsFromCylinderProjection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 0x10))();
    }
  }
  else {
    local_118 = &local_128;
    local_188[0] = '\0';
    local_110 = &local_e8;
    local_108 = local_178;
    local_130 = &local_118;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
                ::Call;
    local_170[0] = local_180[0];
    local_100 = local_170;
    local_f8 = local_188;
    local_f0 = &local_138;
    local_158._8_8_ = &local_100;
    local_158._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_160,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_158,
               GeneralEdit,Unknown,false);
    if (local_188[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_158,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetMeshUVsFromCylinderProjection_InvalidUVSet",
                          L"SetMeshUVsFromCylinderProjection: UVSetIndex does not exist on TargetMesh"
                         );
      UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
      if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSetMeshUVsFromPlanarProjection @ 14ce9f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromPlanarProjection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  undefined1 auStack_1a8 [32];
  char local_178 [4];
  undefined4 local_174;
  undefined4 local_170 [2];
  UGeometryScriptDebug *local_168;
  UDynamicMesh *local_160;
  undefined1 local_158 [16];
  FGeometryScriptMeshSelection local_148;
  FGeometrySelection **local_138;
  double *local_130;
  code *local_128;
  undefined8 **local_120;
  FGeometrySelection *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  undefined4 *local_108;
  char *local_100;
  code **local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_160 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_174 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_174,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_174);
  }
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_58 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_50 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_38 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_30 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_148);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_168 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  pUVar4 = local_160;
  pUVar2 = local_168;
  local_118 = local_148.GeoSelection.Object;
  pTStack_110 = local_148.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_148.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = local_88;
  dStack_e0 = dStack_80;
  local_d8 = local_78;
  dStack_d0 = dStack_70;
  local_c8 = local_68._0_8_;
  uStack_c0 = local_68._8_8_;
  local_b8 = local_58;
  dStack_b0 = dStack_50;
  local_a8 = local_48._0_8_;
  uStack_a0 = local_48._8_8_;
  local_98 = local_38;
  dStack_90 = dStack_30;
  if (local_160 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_158,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetMeshUVsFromPlanarProjection_InvalidInput",
                        L"SetMeshUVsFromPlanarProjection: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 0x10))();
    }
  }
  else {
    local_138 = &local_118;
    local_178[0] = '\0';
    local_130 = &local_e8;
    local_120 = &local_138;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
                ::Call;
    local_170[0] = local_174;
    local_108 = local_170;
    local_100 = local_178;
    local_f8 = &local_128;
    local_158._8_8_ = &local_108;
    local_158._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_160,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_158,
               GeneralEdit,Unknown,false);
    if (local_178[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_158,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetMeshUVsFromPlanarProjection_InvalidUVSet",
                          L"SetMeshUVsFromPlanarProjection: UVSetIndex does not exist on TargetMesh"
                         );
      UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
      if ((ITextData *)local_158._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_158._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_110);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSetNumUVSets @ 14ce9fc30

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetNumUVSets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  int local_res10 [2];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_38;
  int *local_30;
  undefined1 local_28 [16];
  
  local_38 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_38;
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  if (local_38 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetNumUVSets_InvalidInput",L"SetNumUVSets: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  if (local_res10[0] < 9) {
    local_30 = local_res18;
    local_28._8_8_ = &local_30;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_38,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
               GeneralEdit,Unknown,false);
  }
  else {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetNumUVSets_InvalidNumUVSets",
                        L"SetNumUVSets: Maximum of 8 UV Sets are supported");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
      *(UDynamicMesh **)param_3 = pUVar3;
      return;
    }
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execSetUVSeamsAlongSelectedEdges @ 14cea0b00

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execSetUVSeamsAlongSelectedEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  bool bVar5;
  bool bVar6;
  char local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_c8 [2];
  undefined4 local_c0 [2];
  UGeometryScriptDebug *local_b8;
  UDynamicMesh *local_b0;
  undefined1 local_a8 [16];
  FGeometryScriptMeshSelection local_98;
  FGeometrySelection **local_88;
  undefined1 local_80;
  code *local_78;
  undefined8 **local_70;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 *local_58;
  char *local_50;
  code **local_48;
  
  local_b0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_c8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_b8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pUVar4 = local_b0;
  pUVar2 = local_b8;
  local_68 = local_98.GeoSelection.Object;
  pTStack_60 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_b0 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"SetUVSeamsAlongSelectedEdges_InvalidInput",
                        L"SetUVSeamsAlongSelectedEdges: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
  }
  else {
    local_88 = &local_68;
    local_70 = &local_88;
    local_res10[0] = '\0';
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::SetUVSeamsAlongSelectedEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_c0[0] = local_c8[0];
    local_58 = local_c0;
    local_50 = local_res10;
    local_48 = &local_78;
    local_a8._8_8_ = &local_58;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_80 = bVar5;
    UDynamicMesh::EditMesh
              (local_b0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_a8,
               GeneralEdit,Unknown,bVar6);
    if (local_res10[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_a8,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"SetUVSeamsAlongSelectedEdges_InvalidUVSet",
                          L"SetUVSeamsAlongSelectedEdges: UV Channel does not exist on TargetMesh");
      UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
      if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execTransferMeshUVsByProjection @ 14cea11a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execTransferMeshUVsByProjection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined1 auStackY_3d8 [32];
  int local_368;
  int local_364;
  UGeometryScriptDebug *local_360;
  double local_358;
  UDynamicMesh *local_350;
  UDynamicMesh *local_348;
  undefined4 local_340;
  float fStack_33c;
  float fStack_338;
  uint uStack_334;
  FGeometryScriptMeshSelection local_328;
  FGeometryScriptMeshSelection local_318;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_308;
  TReferenceControllerBase<1> *pTStack_300;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_2f8;
  TReferenceControllerBase<1> *pTStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  FGeometryScriptDynamicMeshBVH local_2d0;
  double local_2b0;
  double dStack_2a8;
  FGeometryScriptMeshProjectionSettings local_298;
  FGeometryScriptMeshSelection local_288;
  FGeometryScriptMeshSelection local_278;
  TVector<double>_u_0 local_268;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_348 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_348,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_348);
  }
  local_364 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_364,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_364);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_318);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_350 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_350,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_350);
  }
  local_308 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  pTStack_300 = (TReferenceControllerBase<1> *)0x0;
  local_2f8 = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0;
  pTStack_2f0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_308,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_308);
  }
  local_368 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_368,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_368);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_328);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_328,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_328);
  }
  local_188 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_180 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_178 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_170 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_158 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_150 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_168._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_138 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_130 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_148._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_340 = CONCAT31(local_340._1_3_,1);
  fStack_33c = 8.796093e+12;
  fStack_338 = -8.796093e+12;
  uStack_334 = uStack_334 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_340,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_340);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  local_358 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_358,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_358);
  }
  local_360 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_360,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_360);
  }
  local_298.ProjectionRangeMax = fStack_33c;
  local_298._0_4_ = local_340;
  local_298._12_4_ = uStack_334;
  local_298.ProjectionRangeMin = fStack_338;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_2b0 = local_138;
  dStack_2a8 = dStack_130;
  local_288.GeoSelection.Object = local_328.GeoSelection.Object;
  local_288.GeoSelection.SharedReferenceCount.ReferenceController =
       local_328.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_328.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_328.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_328.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2d0.Spatial.Object = local_308;
  local_2d0.Spatial.SharedReferenceCount.ReferenceController = pTStack_300;
  if (pTStack_300 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_300->SharedReferenceCount = (atomic<int>)((int)pTStack_300->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2d0.FWNTree.Object = local_2f8;
  local_2d0.FWNTree.SharedReferenceCount.ReferenceController = pTStack_2f0;
  if (pTStack_2f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2f0->SharedReferenceCount = (atomic<int>)((int)pTStack_2f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_278.GeoSelection.Object = local_318.GeoSelection.Object;
  local_278.GeoSelection.SharedReferenceCount.ReferenceController =
       local_318.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_318.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_318.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_318.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_268._s_0.X = local_2e8;
  local_268._s_0.Y = dStack_2e0;
  local_268._s_0.Z = local_2d8;
  local_248.Rotation.XY.m128d_f64[0] = local_188;
  local_248.Rotation.XY.m128d_f64[1] = dStack_180;
  local_248.Rotation.ZW.m128d_f64[0] = local_178;
  local_248.Rotation.ZW.m128d_f64[1] = dStack_170;
  local_248.Translation.XY.m128d_f64[0] = (double)local_168._0_8_;
  local_248.Translation.XY.m128d_f64[1] = (double)local_168._8_8_;
  local_248.Translation.ZW.m128d_f64[0] = local_158;
  local_248.Translation.ZW.m128d_f64[1] = dStack_150;
  local_248.Scale3D.XY.m128d_f64[0] = (double)local_148._0_8_;
  local_248.Scale3D.XY.m128d_f64[1] = (double)local_148._8_8_;
  local_248.Scale3D.ZW.m128d_f64[0] = local_138;
  local_248.Scale3D.ZW.m128d_f64[1] = dStack_130;
  local_1e8.Rotation.XY.m128d_f64[0] = local_128;
  local_1e8.Rotation.XY.m128d_f64[1] = dStack_120;
  local_1e8.Rotation.ZW.m128d_f64[0] = local_118;
  local_1e8.Rotation.ZW.m128d_f64[1] = dStack_110;
  local_1e8.Translation.XY.m128d_f64[0] = (double)local_108._0_8_;
  local_1e8.Translation.XY.m128d_f64[1] = (double)local_108._8_8_;
  local_1e8.Translation.ZW.m128d_f64[0] = local_f8;
  local_1e8.Translation.ZW.m128d_f64[1] = dStack_f0;
  local_1e8.Scale3D.XY.m128d_f64[0] = (double)local_e8._0_8_;
  local_1e8.Scale3D.XY.m128d_f64[1] = (double)local_e8._8_8_;
  local_1e8.Scale3D.ZW.m128d_f64[0] = local_d8;
  local_1e8.Scale3D.ZW.m128d_f64[1] = dStack_d0;
  pUVar2 = TransferMeshUVsByProjection
                     (local_348,local_364,&local_278,&local_1e8,local_350,&local_2d0,local_368,
                      &local_288,&local_248,&local_298,(TVector<double> *)&local_268._s_0,local_358,
                      local_360);
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.GeoSelection.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_300);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execTranslateMeshUVs @ 14cea2160

void __cdecl
UGeometryScriptLibrary_MeshUVFunctions::execTranslateMeshUVs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  char local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  UGeometryScriptDebug *local_c8;
  UDynamicMesh *local_c0;
  undefined1 local_b8 [16];
  FGeometryScriptMeshSelection local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  FGeometrySelection **local_88;
  undefined8 *local_80;
  code *local_78;
  undefined8 **local_70;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined4 *local_58;
  char *local_50;
  code **local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_c0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_a8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_c8 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pUVar4 = local_c0;
  pUVar2 = local_c8;
  local_68 = local_a8.GeoSelection.Object;
  pTStack_60 = local_a8.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = local_98;
  uStack_30 = uStack_90;
  if (local_c0 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_b8,L"UGeometryScriptLibrary_MeshUVFunctions",
                        L"TranslateMeshUVs_InvalidInput",L"TranslateMeshUVs: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 0x10))();
    }
  }
  else {
    local_88 = &local_68;
    local_res10[0] = '\0';
    local_80 = &local_38;
    local_70 = &local_88;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_*,UE::Geometry::FDynamicMeshUVEditor_&>
               ::Call;
    local_res20[0] = local_res18[0];
    local_58 = local_res20;
    local_50 = local_res10;
    local_48 = &local_78;
    local_b8._8_8_ = &local_58;
    local_b8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`ApplyMeshUVEditorOperation'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_c0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_b8,
               GeneralEdit,Unknown,false);
    if (local_res10[0] == '\0') {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_b8,L"UGeometryScriptLibrary_MeshUVFunctions",
                          L"TranslateMeshUVs_InvalidUVSet",
                          L"TranslateMeshUVs: UVSetIndex does not exist on TargetMesh");
      UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
      if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

