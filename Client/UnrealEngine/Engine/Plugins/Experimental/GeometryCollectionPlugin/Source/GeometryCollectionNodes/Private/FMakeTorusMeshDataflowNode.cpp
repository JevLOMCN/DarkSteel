// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8597d0

UScriptStruct * __cdecl FMakeTorusMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTorusMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeTorusMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e859c70

FName __thiscall FMakeTorusMeshDataflowNode::GetType(FMakeTorusMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeTorusMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e859ce0

bool __thiscall FMakeTorusMeshDataflowNode::IsA(FMakeTorusMeshDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FMakeTorusMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e859d48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e859d48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e859d66;
      }
    }
  }
  bVar5 = true;
LAB_14e859d66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e859e20

FStructOnScope * __thiscall
FMakeTorusMeshDataflowNode::NewStructOnScope(FMakeTorusMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeTorusMeshDataflowNode,(UObject *)pUVar2,
                           L"MakeTorusMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e85a020

void __thiscall
FMakeTorusMeshDataflowNode::SerializeInternal(FMakeTorusMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTorusMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeTorusMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85a09d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e85a0b0

FName __thiscall FMakeTorusMeshDataflowNode::GetDisplayName(FMakeTorusMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeTorusMesh");
  return in_RDX;
}

// GetCategory @ 14e85a0e0

FName __thiscall FMakeTorusMeshDataflowNode::GetCategory(FMakeTorusMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Mesh");
  return in_RDX;
}

// GetTags @ 14e85a110

FString * __thiscall
FMakeTorusMeshDataflowNode::GetTags
          (FMakeTorusMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e85a140

UScriptStruct * __thiscall
FMakeTorusMeshDataflowNode::TypedScriptStruct(FMakeTorusMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTorusMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeTorusMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeTorusMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e85a320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FMakeTorusMeshDataflowNode::Evaluate
          (FMakeTorusMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  uint uVar15;
  undefined1 *puVar16;
  FDataflowInput *this_00;
  TVector<double> *pTVar17;
  UObject *pUVar18;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  double extraout_XMM0_Qa;
  double dVar28;
  double extraout_XMM0_Qa_00;
  double dVar29;
  double extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  double extraout_XMM0_Qb_00;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_448 [32];
  double local_408;
  ForAnyElementType local_400;
  undefined8 local_3f8;
  ForAnyElementType local_3f0;
  undefined8 local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  double local_3b8;
  double dStack_3b0;
  undefined1 auStack_3a8 [16];
  double dStack_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  FDynamicMesh3 *local_360;
  TObjectPtr<UDynamicMesh>_u_0 local_358 [2];
  double local_348;
  double local_338;
  double local_328;
  FConnectionReference local_318;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8 [16];
  double local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_278 [160];
  ForAnyElementType local_1d8;
  int local_1d0;
  int local_1cc;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  TBitArray<FDefaultBitArrayAllocator> local_198;
  undefined4 local_178;
  undefined4 local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  TVector2<double>_u_0 local_158;
  TVector2<double>_u_0 local_148;
  bool local_138;
  float local_134;
  undefined4 local_130;
  EProfileSweepQuadSplit local_12c;
  double local_128;
  EProfileSweepPolygonGrouping local_120;
  FProgressCancel *local_118;
  ForAnyElementType FStack_110;
  undefined8 local_108;
  ForAnyElementType local_100 [2];
  undefined1 local_f0 [8];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar16 == &this->Mesh) {
    local_318.Reference = &this->Origin;
    uVar27 = 0;
    local_318.ContainerReference = (void *)0x0;
    local_318.Index = -1;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_318);
    pTVar17 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (this_00,param_1,local_318.Reference);
    local_300 = (pTVar17->field0_0x0)._s_0.X;
    dStack_2f8 = (pTVar17->field0_0x0)._s_0.Y;
    local_2f0 = (pTVar17->field0_0x0)._s_0.Z;
    pUVar18 = GetTransientPackageAsObject();
    this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar18);
    local_358[0].DebugPtr = this_01.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
    }
    UDynamicMesh::Reset(this_01.DebugPtr);
    local_360 = ((this_01.DebugPtr)->Mesh).Ptr;
    uVar15 = this->ProfileVertexCount;
    local_3f0.Data = (FScriptContainerElement *)0x0;
    local_3e8 = 0;
    if ((int)uVar15 < 1) {
      uVar25 = uVar27;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar15,&local_3f0,(int *)&local_3e8,(int *)((longlong)&local_3e8 + 4));
      uVar25 = local_3e8 & 0xffffffff;
    }
    uVar15 = this->SweepVertexCount;
    local_400.Data = (FScriptContainerElement *)0x0;
    local_3f8 = 0;
    if ((int)uVar15 < 1) {
      uVar20 = uVar27;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar15,&local_400,(int *)&local_3f8,(int *)((longlong)&local_3f8 + 4));
      uVar25 = local_3e8 & 0xffffffff;
      uVar20 = local_3f8 & 0xffffffff;
    }
    dVar7 = __real_3ff0000000000000;
    uVar35 = SUB84(__real_3ff0000000000000,0);
    uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar8 = 0.0;
    dVar28 = 0.0;
    local_328 = 0.0;
    dVar29 = (double)(float)((uint)this->Radius1 ^ __xmm_80000000800000008000000080000000);
    iVar24 = (int)uVar25;
    if (0 < this->ProfileVertexCount) {
      __libm_sse2_sincos_();
      dVar7 = dVar7 - extraout_XMM0_Qb;
      uVar20 = uVar27;
      uVar23 = uVar27;
      do {
        uVar19 = (uint)uVar20;
        uVar15 = 0;
        if ((int)uVar19 < (int)uVar25) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar20 = (ulonglong)(uVar19 + 1);
        *(double *)(local_3f0.Data + uVar23) = dVar8;
        *(double *)(local_3f0.Data + uVar23 + 8) = dVar29;
        *(double *)(local_3f0.Data + uVar23 + 0x10) = local_328;
        uVar23 = uVar23 + 0x18;
        uVar25 = local_3e8 & 0xffffffff;
        dVar4 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y *
                UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X * dVar7;
        dVar32 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z *
                 UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar7;
        dVar34 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z *
                 UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X * dVar7;
        dVar5 = (dVar4 - extraout_XMM0_Qa * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z
                ) * dVar29;
        dVar33 = (extraout_XMM0_Qa * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X +
                 dVar32) * dVar29;
        dVar29 = (UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y *
                  UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar7 +
                 extraout_XMM0_Qb) * dVar29 +
                 (extraout_XMM0_Qa * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z +
                 dVar4) * dVar8 +
                 (dVar32 - extraout_XMM0_Qa *
                           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X) * dVar28;
        dVar4 = (extraout_XMM0_Qa * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y +
                dVar34) * dVar28;
        dVar28 = (dVar34 - extraout_XMM0_Qa *
                           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y) * dVar8 +
                 dVar33 + (UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z *
                           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z * dVar7 +
                          extraout_XMM0_Qb) * dVar28;
        dVar8 = dVar8 * (UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X *
                         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X * dVar7 +
                        extraout_XMM0_Qb) + dVar5 + dVar4;
        local_328 = dVar28;
      } while ((int)(uVar19 + 1) < this->ProfileVertexCount);
      uVar20 = local_3f8 & 0xffffffff;
      uVar35 = SUB84(__real_3ff0000000000000,0);
      uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      iVar24 = (int)local_3e8;
    }
    dVar29 = 0.0;
    iVar26 = this->SweepVertexCount;
    local_3e0 = (double)(float)((uint)this->Radius2 ^ __xmm_80000000800000008000000080000000);
    local_3d8 = 0.0;
    local_408 = 0.0;
    __libm_sse2_sincos_();
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_380 = extraout_XMM0._0_8_;
    local_388 = local_380 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    uStack_2c0 = extraout_XMM0._8_8_;
    local_2d8._8_4_ = extraout_XMM0._0_4_;
    local_2d8._0_8_ = uStack_2c0;
    local_2d8._12_4_ = extraout_XMM0._4_4_;
    local_2c8 = local_380 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_380 = local_380 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_3b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_398 = _UNK_15061cbc8;
    local_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_2e4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_2dc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_3c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_3c4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_3c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_3bc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dStack_3b0 = 0.0;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = ___xmm_3ff00000000000000000000000000000;
    auStack_3a8 = auVar9 << 0x40;
    iVar22 = (int)uVar20;
    if (0 < iVar26) {
      __libm_sse2_sincos_();
      lVar21 = 0;
      uVar37 = auStack_3a8._12_4_;
      uVar30 = SUB84(local_2f0,0);
      uVar31 = (undefined4)((ulonglong)local_2f0 >> 0x20);
      local_3d0 = (double)CONCAT44(uVar36,uVar35) - extraout_XMM0_Qb_00;
      local_378 = local_2f0;
      local_370 = dStack_2f8;
      local_368 = local_300;
      local_2b8 = uVar38;
      uStack_2b4 = uVar10;
      uStack_2b0 = uVar11;
      uStack_2ac = uVar12;
      uVar35 = auStack_3a8._8_4_;
      uVar36 = auStack_3a8._8_4_;
      uVar38 = uVar37;
      dVar8 = (double)auStack_3a8._0_8_;
      dVar7 = dStack_398;
      dVar28 = dStack_3b0;
      dVar4 = (double)auStack_3a8._0_8_;
      local_348 = extraout_XMM0_Qb_00;
      local_338 = extraout_XMM0_Qa_00;
      while( true ) {
        uVar19 = (uint)uVar27;
        dStack_2a0 = dStack_3b0;
        dVar29 = local_368 + dVar29;
        local_390 = dStack_398;
        local_2a8 = (double)CONCAT44(uVar31,uVar30) + local_408;
        dVar5 = local_370 + local_3e0;
        uVar15 = 0;
        if ((int)uVar19 < (int)uVar20) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        auVar3._8_4_ = SUB84(dVar5,0);
        auVar3._0_8_ = dVar29;
        auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])(local_400.Data + lVar21) = auVar3;
        *(double *)(local_400.Data + lVar21 + 0x10) = local_2a8;
        *(double *)(local_400.Data + lVar21 + 0x10 + 8) = dStack_2a0;
        auVar6._8_4_ = uVar35;
        auVar6._0_8_ = dVar8;
        auVar6._12_4_ = uVar37;
        *(undefined1 (*) [16])(local_400.Data + lVar21 + 0x20) = auVar6;
        *(double *)(local_400.Data + lVar21 + 0x30) = local_390;
        dVar34 = (dVar7 * local_388 + dVar28 * (double)local_2d8._0_8_ +
                 (double)CONCAT44(uVar38,uVar36) * local_380) - dVar4 * local_2c8;
        dVar33 = (dVar7 * local_380 + dVar4 * (double)local_2d8._0_8_ + dVar28 * local_2c8) -
                 (double)CONCAT44(uVar38,uVar36) * local_388;
        dVar32 = (dVar7 * local_2c8 + (double)CONCAT44(uVar38,uVar36) * (double)local_2d8._0_8_ +
                 dVar4 * local_388) - dVar28 * local_380;
        dVar5 = ((dVar7 * (double)local_2d8._0_8_ - dVar28 * local_388) - dVar4 * local_380) -
                (double)CONCAT44(uVar38,uVar36) * local_2c8;
        dVar29 = SQRT(dVar33 * dVar33 + dVar34 * dVar34 + dVar5 * dVar5 + dVar32 * dVar32);
        if (0.0 < dVar29) {
          dVar29 = __real_3ff0000000000000 / dVar29;
          dVar33 = dVar29 * dVar33;
          if (0.0 < dVar29) {
            uVar35 = SUB84(dVar29 * dVar32,0);
            uVar37 = (undefined4)((ulonglong)(dVar29 * dVar32) >> 0x20);
            auStack_3a8._8_4_ = uVar35;
            auStack_3a8._0_8_ = dVar33;
            auStack_3a8._12_4_ = uVar37;
            uVar36 = uVar35;
            uVar38 = uVar37;
            dVar7 = dVar29 * dVar5;
            dVar8 = dVar33;
            dVar28 = dVar29 * dVar34;
            dVar4 = dVar33;
            dStack_3b0 = dVar29 * dVar34;
            dStack_398 = dVar29 * dVar5;
          }
        }
        uVar27 = (ulonglong)(uVar19 + 1);
        uVar20 = local_3f8 & 0xffffffff;
        lVar21 = lVar21 + 0x38;
        dVar33 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z *
                 UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * local_3d0;
        dVar29 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y *
                 UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * local_3d0;
        dVar32 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z *
                 UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * local_3d0;
        dVar34 = (dVar33 + local_338 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X) *
                 local_3e0;
        dVar5 = (dVar29 - local_338 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z) *
                local_3e0;
        local_3e0 = (UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y *
                     UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * local_3d0 +
                    local_348) * local_3e0 +
                    (dVar29 + local_338 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z)
                    * local_3d8 +
                    (dVar33 - local_338 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X)
                    * local_408;
        dVar29 = (UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X *
                  UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * local_3d0 + local_348)
                 * local_3d8 + dVar5 +
                 (dVar32 + local_338 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y) *
                 local_408;
        local_408 = dVar34 + (dVar32 - local_338 *
                                       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y) *
                             local_3d8 +
                    (UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z *
                     UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z * local_3d0 +
                    local_348) * local_408;
        local_3d8 = dVar29;
        if (this->SweepVertexCount <= (int)(uVar19 + 1)) break;
        uVar30 = SUB84(local_378,0);
        uVar31 = (undefined4)((ulonglong)local_378 >> 0x20);
        local_2b8 = local_2e8;
        uStack_2b4 = uStack_2e4;
        uStack_2b0 = uStack_2e0;
        uStack_2ac = uStack_2dc;
      }
      iVar24 = (int)local_3e8;
      iVar22 = (int)local_3f8;
    }
    FVar13.Data = local_3f0.Data;
    local_158._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_158._s_0.Y = _UNK_150689688;
    local_148._s_0.X = 0.0;
    local_148._s_0.Y = 0.0;
    local_128 = __real_3f847ae147ae147b;
    local_278._8_8_ = (FScriptContainerElement *)0x0;
    local_278._16_8_ = 0;
    local_278._24_8_ = (FScriptContainerElement *)0x0;
    local_278._32_8_ = 0;
    local_278._40_8_ = (FScriptContainerElement *)0x0;
    local_278._48_8_ = 0;
    local_278._56_8_ = (FScriptContainerElement *)0x0;
    local_278._64_8_ = 0;
    local_278._72_8_ = (FScriptContainerElement *)0x0;
    local_278._80_8_ = 0;
    local_278._88_8_ = (FScriptContainerElement *)0x0;
    local_278._96_8_ = 0;
    local_278._104_8_ = (FScriptContainerElement *)0x0;
    local_278._112_8_ = 0;
    local_278._120_8_ = (FScriptContainerElement *)0x0;
    local_278._128_8_ = 0;
    local_278._136_8_ = (FScriptContainerElement *)0x0;
    local_278._144_8_ = 0;
    local_278[0x98] = false;
    local_278._0_8_ = &___7FProfileSweepGenerator_Geometry_UE__6B_;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1cc = 0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0._0_4_ = 0;
    local_1c0._4_4_ = 0;
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0._0_4_ = 0;
    local_1b0._4_4_ = 0;
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    local_198.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_198.NumBits = 0;
    local_198.MaxBits = 0x80;
    local_178 = 0xffffffff;
    local_174 = 0;
    local_168 = (ForElementType<FSetElementId>)0x0;
    local_160 = 0;
    local_138 = false;
    local_134 = 100.0;
    local_130._0_1_ = false;
    local_130._1_1_ = false;
    local_130._2_1_ = true;
    local_130._3_1_ = true;
    local_12c = ShortestDiagonal;
    local_120 = PerFace;
    local_118 = (FProgressCancel *)0x0;
    FStack_110.Data = (FScriptContainerElement *)0x0;
    local_108._0_4_ = 0;
    local_108._4_4_ = 0;
    local_100[0].Data = (FScriptContainerElement *)0x0;
    local_100[1].Data = (FScriptContainerElement *)0x0;
    iVar26 = 0;
    local_1d0 = iVar24;
    if (iVar24 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar24,0,&local_1d8,iVar24,&local_1cc);
      memcpy(local_1d8.Data,FVar13.Data,(longlong)iVar24 * 0x18);
      iVar22 = (int)local_3f8;
      iVar26 = local_1c0._4_4_;
    }
    FVar13.Data = local_400.Data;
    local_1c0._0_4_ = iVar22;
    if ((iVar22 == 0) && (iVar26 == 0)) {
      local_1c0._0_4_ = 0;
      local_1c0._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar22,iVar26,&local_1c8,iVar22,(int *)((longlong)&local_1c0 + 4));
      if (iVar22 != 0) {
        memcpy(local_1c8.Data,FVar13.Data,(longlong)iVar22 * 0x38);
      }
    }
    local_130._0_1_ = true;
    local_130._1_1_ = true;
    UE::Geometry::FProfileSweepGenerator::Generate((FProfileSweepGenerator *)local_278);
    UE::Geometry::FDynamicMesh3::Copy(local_360,(FMeshShapeGenerator *)local_278);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_358[0].ObjectPtr,
               &this->Mesh);
    puVar16 = local_f0;
    lVar21 = 2;
    do {
      puVar1 = (undefined8 *)(puVar16 + -0x10);
      puVar16 = puVar16 + -0x10;
      lVar21 = lVar21 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar21 != 0);
    local_160 = 0;
    if (local_168 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_168);
    }
    uVar27 = local_1a0 >> 0x20;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    if ((int)uVar27 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
    }
    local_178 = 0xffffffff;
    local_174 = 0;
    local_198.NumBits = 0;
    if (0x80 < (uint)local_198.MaxBits) {
      local_198.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_198,0);
    }
    if (local_198.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
    }
    if (local_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data);
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    local_278._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((FScriptContainerElement *)local_278._136_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._136_8_);
    }
    if ((FScriptContainerElement *)local_278._120_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._120_8_);
    }
    if ((FScriptContainerElement *)local_278._104_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._104_8_);
    }
    if ((FScriptContainerElement *)local_278._88_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._88_8_);
    }
    if ((FScriptContainerElement *)local_278._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._72_8_);
    }
    if ((FScriptContainerElement *)local_278._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._56_8_);
    }
    if ((FScriptContainerElement *)local_278._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._40_8_);
    }
    if ((FScriptContainerElement *)local_278._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._24_8_);
    }
    if ((FScriptContainerElement *)local_278._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._8_8_);
    }
    if (local_400.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data);
    }
    if (local_3f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data);
    }
  }
  return;
}

// FMakeTorusMeshDataflowNode @ 14e923bd0

FMakeTorusMeshDataflowNode * __thiscall
FMakeTorusMeshDataflowNode::FMakeTorusMeshDataflowNode
          (FMakeTorusMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FDataflowInput *pFVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->Radius1 = 4.0;
  this->ProfileVertexCount = 0xc;
  this->_padding_ = (longlong)&___7FMakeTorusMeshDataflowNode__6B_;
  local_48.Reference = &this->Origin;
  this->Radius2 = 10.0;
  (((TVector<double> *)local_48.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  this->SweepVertexCount = 0xc;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Mesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FMakeTorusMeshDataflowNode @ 14e923ce0

FMakeTorusMeshDataflowNode * __thiscall
FMakeTorusMeshDataflowNode::FMakeTorusMeshDataflowNode(FMakeTorusMeshDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Radius1 = 4.0;
  this->_padding_ = (longlong)&___7FMakeTorusMeshDataflowNode__6B_;
  (this->Origin).field0_0x0._s_0.X = 0.0;
  (this->Origin).field0_0x0._s_0.Y = 0.0;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->ProfileVertexCount = 0xc;
  this->Radius2 = 10.0;
  this->SweepVertexCount = 0xc;
  return this;
}

