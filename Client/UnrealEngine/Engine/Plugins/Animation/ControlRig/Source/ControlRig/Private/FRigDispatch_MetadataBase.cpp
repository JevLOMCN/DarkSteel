// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 21

// StaticStruct @ 14a4dd200

UScriptStruct * __cdecl FRigDispatch_MetadataBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_MetadataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_MetadataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_MetadataBase,(UObject *)pUVar1,
                         L"RigDispatch_MetadataBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_MetadataBase.OuterSingleton;
}

// GetArgumentInfos @ 14a4dd390

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_MetadataBase::GetArgumentInfos
          (FRigDispatch_MetadataBase *this,FRigVMRegistryHandle *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FName FVar3;
  FName FVar4;
  int iVar5;
  UEnum *pUVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  FRigVMRegistry_NoLock *pFVar10;
  UScriptStruct *pUVar11;
  FString *pFVar12;
  UPackage *pUVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  FName local_res18;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  FString local_48;
  
  plVar1 = &this->_padding_;
  if ((int)this->_padding_ == 0) {
    pFVar10 = FRigVMRegistryHandle::operator->(param_1);
    pUVar11 = FRigElementKey::StaticStruct();
    pFVar12 = RigVMTypeUtils::GetUniqueStructTypeName(&local_48,pUVar11);
    pwVar15 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)local_58,pwVar14);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_58._8_8_ = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (**(code **)(pFVar10->_padding_ + 0xe0))(pFVar10,local_68);
    iVar9 = (int)this->_padding_;
    if (iVar9 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    lVar2 = *plVar1;
    FLazyName::Resolve(&ItemArgName);
    local_58._0_8_ = local_68._0_8_;
    local_58._8_4_ = local_68._8_4_;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar9 * 0x50),local_res18,Input,
               (TRigVMTypeIndex *)local_58);
    this->ItemArgIndex = iVar9;
    iVar9 = (int)this->_padding_;
    if (iVar9 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    *(int *)&this->_padding_ = iVar9 + 1;
    iVar5 = RigVMTypeUtils::TypeIndex::FName.Index;
    FVar3 = RigVMTypeUtils::TypeIndex::FName.Name;
    lVar2 = *plVar1;
    FLazyName::Resolve(&NameArgName);
    FVar4 = RigVMTypeUtils::TypeIndex::FName.Name;
    RigVMTypeUtils::TypeIndex::FName.Name.ComparisonIndex = FVar3.ComparisonIndex.Value;
    RigVMTypeUtils::TypeIndex::FName.Name.Number = FVar3.Number;
    local_58._0_4_ = RigVMTypeUtils::TypeIndex::FName.Name.ComparisonIndex.Value;
    local_58._4_4_ = RigVMTypeUtils::TypeIndex::FName.Name.Number;
    local_58._8_4_ = iVar5;
    RigVMTypeUtils::TypeIndex::FName.Name = FVar4;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar9 * 0x50),local_res18,Input,
               (TRigVMTypeIndex *)local_58);
    this->NameArgIndex = iVar9;
    pFVar10 = FRigVMRegistryHandle::operator->(param_1);
    if (Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton == (UEnum *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace,(UObject *)pUVar13,
                         L"ERigMetaDataNameSpace");
    }
    pUVar6 = Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton;
    pFVar12 = RigVMTypeUtils::CPPTypeFromEnum
                        (&local_48,Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)local_68,pwVar14);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_68._8_8_ = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (**(code **)(pFVar10->_padding_ + 0xe0))(pFVar10,local_58);
    iVar9 = (int)this->_padding_;
    if (iVar9 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    uVar7 = local_58._0_8_;
    uVar8 = local_58._8_4_;
    *(int *)&this->_padding_ = iVar9 + 1;
    lVar2 = *plVar1;
    FLazyName::Resolve(&NameSpaceArgName);
    local_68._0_8_ = uVar7;
    local_68._8_4_ = uVar8;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar9 * 0x50),local_res18,Input,
               (TRigVMTypeIndex *)local_68);
    this->NameSpaceArgIndex = iVar9;
    pFVar10 = FRigVMRegistryHandle::operator->(param_1);
    pUVar11 = FCachedRigElement::StaticStruct();
    pFVar12 = RigVMTypeUtils::GetUniqueStructTypeName(&local_48,pUVar11);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)local_68,pwVar15);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_68._8_8_ = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (**(code **)(pFVar10->_padding_ + 0xe0))(pFVar10,local_58,local_68);
    iVar9 = (int)this->_padding_;
    if (iVar9 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    uVar7 = local_58._0_8_;
    uVar8 = local_58._8_4_;
    *(int *)&this->_padding_ = iVar9 + 1;
    lVar2 = *plVar1;
    FLazyName::Resolve(&CacheArgName);
    local_68._0_8_ = uVar7;
    local_68._8_4_ = uVar8;
    FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
              ((FRigVMTemplateArgumentInfo *)(lVar2 + (longlong)iVar9 * 0x50),local_res18,Hidden,
               (TRigVMTypeIndex *)local_68);
    this->CacheArgIndex = iVar9;
  }
  return (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)plVar1;
}

// IsSetMetadata @ 14a4dd7e0

bool __thiscall FRigDispatch_MetadataBase::IsSetMetadata(FRigDispatch_MetadataBase *this)

{
  return false;
}

// ArrayEquals<UE::Math::TQuat<double>_> @ 14a4fead0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TQuat<double>_>
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  dVar14 = __real_3f1a36e2e0000000;
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (param_1->ArrayNum == param_2->ArrayNum) {
    uVar20 = 0;
    if (0 < param_1->ArrayNum) {
      lVar21 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if (uVar17 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            uVar16 = (*pcVar3)();
            return (bool)uVar16;
          }
        }
        iVar18 = param_1->ArrayNum;
        pFVar1 = (param_2->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar20 < iVar18) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if (uVar17 == 0) {
          iVar18 = 0x506106c8;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            uVar16 = (*pcVar3)();
            return (bool)uVar16;
          }
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        dVar23 = *(double *)(pFVar2 + lVar21 + 0x10);
        dVar24 = *(double *)(pFVar2 + lVar21 + 0x10 + 8);
        dVar25 = *(double *)(pFVar2 + lVar21);
        dVar26 = *(double *)(pFVar2 + lVar21 + 8);
        dVar8 = *(double *)(pFVar1 + lVar21 + 0x10) + dVar23;
        dVar9 = *(double *)(pFVar1 + lVar21 + 0x10 + 8) + dVar24;
        dVar23 = dVar23 - *(double *)(pFVar1 + lVar21 + 0x10);
        dVar24 = dVar24 - *(double *)(pFVar1 + lVar21 + 0x10 + 8);
        dVar27 = *(double *)(pFVar1 + lVar21) + dVar25;
        dVar28 = *(double *)(pFVar1 + lVar21 + 8) + dVar26;
        dVar25 = dVar25 - *(double *)(pFVar1 + lVar21);
        dVar26 = dVar26 - *(double *)(pFVar1 + lVar21 + 8);
        lVar22 = -(ulonglong)
                  (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar13,
                                             SUB84(dVar24,0) & uVar12));
        auVar4._8_4_ = (int)lVar22;
        auVar4._0_8_ = -(ulonglong)
                        (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar11,
                                                   SUB84(dVar23,0) & uVar10));
        auVar4._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        iVar18 = movmskpd(iVar18,auVar4);
        lVar22 = -(ulonglong)
                  (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                             SUB84(dVar26,0) & uVar12));
        auVar5._8_4_ = (int)lVar22;
        auVar5._0_8_ = -(ulonglong)
                        (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar11,
                                                   SUB84(dVar25,0) & uVar10));
        auVar5._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        uVar17 = movmskpd((int)pFVar2,auVar5);
        uVar19 = iVar18 << 2 | uVar17;
        if (uVar19 != 0) {
          lVar22 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar13,
                                               SUB84(dVar9,0) & uVar12));
          auVar6._8_4_ = (int)lVar22;
          auVar6._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar11,
                                                     SUB84(dVar8,0) & uVar10));
          auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
          uVar19 = movmskpd(uVar19,auVar6);
          lVar22 = -(ulonglong)
                    (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar13,
                                               SUB84(dVar28,0) & uVar12));
          auVar7._8_4_ = (int)lVar22;
          auVar7._0_8_ = -(ulonglong)
                          (dVar14 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar11,
                                                     SUB84(dVar27,0) & uVar10));
          auVar7._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
          iVar18 = movmskpd(uVar17,auVar7);
          if ((uVar19 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_14a4fec5b;
        }
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x20;
      } while ((int)uVar20 < param_1->ArrayNum);
    }
    bVar15 = true;
  }
  else {
LAB_14a4fec5b:
    bVar15 = false;
  }
  return bVar15;
}

// ArrayEquals<UE::Math::TRotator<double>_> @ 14a4fec90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TRotator<double>_>
          (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  
  dVar15 = __real_3f1a36e2e0000000;
  uVar14 = _UNK_15061cc8c;
  uVar13 = _UNK_15061cc88;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (param_1->ArrayNum == param_2->ArrayNum) {
    uVar20 = 0;
    if (0 < param_1->ArrayNum) {
      lVar21 = 0;
      uVar48 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
      uVar49 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
      uVar50 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
      uVar51 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      uVar52 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
      uVar53 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
      uVar54 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
      uVar55 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
      uVar56 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
      uVar57 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
      uVar58 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
      uVar59 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
      uVar60 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
      uVar61 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
      uVar62 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
      uVar63 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      do {
        uVar19 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if (uVar19 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar4 = (code *)swi(3);
            uVar17 = (*pcVar4)();
            return (bool)uVar17;
          }
          uVar60 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
          uVar61 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
          uVar62 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
          uVar63 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
          uVar56 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
          uVar57 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
          uVar58 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
          uVar59 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
          uVar52 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
          uVar53 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
          uVar54 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
          uVar55 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
          uVar48 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
          uVar49 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
          uVar50 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
          uVar51 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
        }
        iVar18 = param_1->ArrayNum;
        pFVar2 = (param_2->AllocatorInstance).Data;
        uVar19 = 0;
        if ((int)uVar20 < iVar18) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if (uVar19 == 0) {
          iVar18 = 0x506106c8;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar4 = (code *)swi(3);
            uVar17 = (*pcVar4)();
            return (bool)uVar17;
          }
          uVar60 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
          uVar61 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
          uVar62 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
          uVar63 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
          uVar56 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
          uVar57 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
          uVar58 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
          uVar59 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
          uVar52 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
          uVar53 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
          uVar54 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
          uVar55 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
          uVar48 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
          uVar49 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
          uVar50 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
          uVar51 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar1 = pFVar2 + lVar21;
        dVar44 = *(double *)(pFVar3 + lVar21) - *(double *)pFVar1;
        dVar46 = *(double *)(pFVar3 + lVar21 + 8) - *(double *)(pFVar1 + 8);
        dVar7 = *(double *)(pFVar3 + lVar21 + 0x10) - *(double *)(pFVar2 + lVar21 + 0x10);
        auVar29._8_4_ = SUB84(dVar46,0);
        auVar29._0_8_ = dVar44;
        auVar29._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        auVar10._4_4_ = uVar53;
        auVar10._0_4_ = uVar52;
        auVar10._8_4_ = uVar54;
        auVar10._12_4_ = uVar55;
        auVar30 = divpd(auVar29,auVar10);
        auVar30 = roundpd(in_XMM1,auVar30,3);
        auVar39._0_8_ = auVar30._0_8_ * (double)CONCAT44(uVar53,uVar52);
        auVar39._8_8_ = auVar30._8_8_ * (double)CONCAT44(uVar55,uVar54);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = dVar7;
        dVar44 = dVar44 - auVar39._0_8_;
        dVar46 = dVar46 - auVar39._8_8_;
        auVar9._4_4_ = uVar49;
        auVar9._0_4_ = uVar48;
        auVar9._8_4_ = uVar50;
        auVar9._12_4_ = uVar51;
        auVar30 = divpd(auVar31,auVar9);
        auVar30 = roundpd(auVar39,auVar30,3);
        auVar32._8_4_ = SUB84(dVar46,0);
        auVar32._0_8_ = dVar44;
        auVar32._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        dVar7 = dVar7 - auVar30._0_8_ * (double)CONCAT44(uVar49,uVar48);
        dVar8 = 0.0 - auVar30._8_8_ * (double)CONCAT44(uVar51,uVar50);
        dVar28 = dVar44 + (double)CONCAT44(uVar53,uVar52);
        dVar38 = auVar32._8_8_ + (double)CONCAT44(uVar55,uVar54);
        uVar22 = -(ulonglong)(0.0 <= dVar7);
        uVar24 = -(ulonglong)(0.0 <= dVar8);
        uVar23 = -(ulonglong)(0.0 <= dVar44);
        uVar25 = -(ulonglong)(0.0 <= dVar46);
        auVar40._0_8_ = uVar23 & (ulonglong)dVar44;
        auVar40._8_4_ = (undefined4)(uVar25 & (ulonglong)dVar46);
        auVar40._12_4_ = (undefined4)((uVar25 & (ulonglong)dVar46) >> 0x20);
        auVar47._0_4_ = ~(uint)uVar23 & SUB84(dVar28,0);
        auVar47._4_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)dVar28 >> 0x20);
        auVar47._8_4_ = ~(uint)uVar25 & SUB84(dVar38,0);
        auVar47._12_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
        auVar47 = auVar47 | auVar40;
        auVar33._8_4_ = SUB84(dVar8,0);
        auVar33._0_8_ = dVar7;
        auVar33._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        dVar28 = dVar7 + (double)CONCAT44(uVar49,uVar48);
        dVar38 = auVar33._8_8_ + (double)CONCAT44(uVar51,uVar50);
        uVar23 = -(ulonglong)((double)CONCAT44(uVar61,uVar60) < auVar47._0_8_);
        uVar25 = -(ulonglong)((double)CONCAT44(uVar63,uVar62) < auVar47._8_8_);
        auVar45._0_4_ = ~(uint)uVar22 & SUB84(dVar28,0);
        auVar45._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar28 >> 0x20);
        auVar45._8_4_ = ~(uint)uVar24 & SUB84(dVar38,0);
        auVar45._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
        auVar34._0_8_ = (double)CONCAT44(uVar57,uVar56);
        auVar34._8_4_ = uVar58;
        auVar34._12_4_ = uVar59;
        auVar30._8_4_ = (int)((ulonglong)dVar8 & uVar24);
        auVar30._0_8_ = (ulonglong)dVar7 & uVar22;
        auVar30._12_4_ = (int)(((ulonglong)dVar8 & uVar24) >> 0x20);
        auVar45 = auVar45 | auVar30;
        uVar24 = -(ulonglong)(auVar34._0_8_ < auVar45._0_8_);
        uVar26 = -(ulonglong)(auVar34._8_8_ < auVar45._8_8_);
        auVar41._0_8_ = uVar24 & (ulonglong)(auVar45._0_8_ - (double)CONCAT44(uVar49,uVar48));
        uVar22 = uVar26 & (ulonglong)(auVar45._8_8_ - (double)CONCAT44(uVar51,uVar50));
        auVar41._8_4_ = (undefined4)uVar22;
        auVar41._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar35._0_4_ = ~(uint)uVar24 & auVar45._0_4_;
        auVar35._4_4_ = ~(uint)(uVar24 >> 0x20) & auVar45._4_4_;
        auVar35._8_4_ = ~(uint)uVar26 & auVar45._8_4_;
        auVar35._12_4_ = ~(uint)(uVar26 >> 0x20) & auVar45._12_4_;
        auVar41 = auVar41 | auVar35;
        auVar36._8_4_ = SUB84(dVar15,0);
        auVar36._0_8_ = dVar15;
        auVar36._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        auVar42._0_8_ = (double)CONCAT44(auVar41._4_4_ & uVar12,auVar41._0_4_ & uVar11);
        auVar42._8_4_ = auVar41._8_4_ & uVar13;
        auVar42._12_4_ = auVar41._12_4_ & uVar14;
        auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < auVar42._8_8_);
        auVar37._0_8_ = -(ulonglong)(dVar15 < auVar42._0_8_);
        uVar19 = movmskpd(iVar18,auVar37);
        auVar43._0_8_ = uVar23 & (ulonglong)(auVar47._0_8_ - (double)CONCAT44(uVar53,uVar52));
        uVar22 = uVar25 & (ulonglong)(auVar47._8_8_ - (double)CONCAT44(uVar55,uVar54));
        auVar43._8_4_ = (undefined4)uVar22;
        auVar43._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar6._4_4_ = ~(uint)(uVar23 >> 0x20) & auVar47._4_4_;
        auVar6._0_4_ = ~(uint)uVar23 & auVar47._0_4_;
        auVar6._8_4_ = ~(uint)uVar25 & auVar47._8_4_;
        auVar6._12_4_ = ~(uint)(uVar25 >> 0x20) & auVar47._12_4_;
        auVar43 = auVar43 | auVar6;
        in_XMM1._0_8_ = (double)CONCAT44(auVar43._4_4_ & uVar12,auVar43._0_4_ & uVar11);
        in_XMM1._8_4_ = auVar43._8_4_ & uVar13;
        in_XMM1._12_4_ = auVar43._12_4_ & uVar14;
        lVar27 = -(ulonglong)(dVar15 < in_XMM1._8_8_);
        auVar5._8_4_ = (int)lVar27;
        auVar5._0_8_ = -(ulonglong)(dVar15 < in_XMM1._0_8_);
        auVar5._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        iVar18 = movmskpd((int)pFVar3,auVar5);
        if ((uVar19 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_14a4feeee;
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x18;
      } while ((int)uVar20 < param_1->ArrayNum);
    }
    bVar16 = true;
  }
  else {
LAB_14a4feeee:
    bVar16 = false;
  }
  return bVar16;
}

// ArrayEquals<UE::Math::TTransform<double>_> @ 14a4fef40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRigDispatch_MetadataBase::ArrayEquals<UE::Math::TTransform<double>_>
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  undefined7 extraout_var;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  dVar16 = __real_3f1a36e2e0000000;
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (param_1->ArrayNum == param_2->ArrayNum) {
    uVar23 = 0;
    if (0 < param_1->ArrayNum) {
      lVar24 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar23 < param_2->ArrayNum) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if (uVar20 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
        }
        iVar19 = param_1->ArrayNum;
        pFVar1 = (param_2->AllocatorInstance).Data;
        uVar20 = 0;
        if ((int)uVar23 < iVar19) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if (uVar20 == 0) {
          iVar19 = 0x506106c8;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar20 = (uint)CONCAT71(extraout_var,bVar17);
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            uVar18 = (*pcVar3)();
            return (bool)uVar18;
          }
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        dVar26 = *(double *)(pFVar2 + lVar24 + 0x30) - *(double *)(pFVar1 + lVar24 + 0x30);
        dVar28 = *(double *)(pFVar2 + lVar24 + 0x30 + 8) - *(double *)(pFVar1 + lVar24 + 0x30 + 8);
        dVar30 = *(double *)(pFVar2 + lVar24 + 0x20) - *(double *)(pFVar1 + lVar24 + 0x20);
        dVar32 = *(double *)(pFVar2 + lVar24 + 0x20 + 8) - *(double *)(pFVar1 + lVar24 + 0x20 + 8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                             SUB84(dVar28,0) & uVar14));
        auVar4._8_4_ = (int)lVar25;
        auVar4._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                   SUB84(dVar26,0) & uVar12));
        auVar4._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar21 = movmskpd(iVar19,auVar4);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                             SUB84(dVar32,0) & uVar14));
        auVar9._8_4_ = (int)lVar25;
        auVar9._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                                   SUB84(dVar30,0) & uVar12));
        auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar19 = movmskpd(uVar20,auVar9);
        if ((uVar21 & 0x3fffffff) != 0 || iVar19 != 0) goto LAB_14a4ff14d;
        dVar26 = *(double *)(pFVar2 + lVar24 + 0x10);
        dVar28 = *(double *)(pFVar2 + lVar24 + 0x10 + 8);
        dVar30 = *(double *)(pFVar2 + lVar24);
        dVar32 = *(double *)(pFVar2 + lVar24 + 8);
        dVar27 = dVar26 - *(double *)(pFVar1 + lVar24 + 0x10);
        dVar29 = dVar28 - *(double *)(pFVar1 + lVar24 + 0x10 + 8);
        dVar26 = dVar26 + *(double *)(pFVar1 + lVar24 + 0x10);
        dVar28 = dVar28 + *(double *)(pFVar1 + lVar24 + 0x10 + 8);
        dVar31 = dVar30 - *(double *)(pFVar1 + lVar24);
        dVar33 = dVar32 - *(double *)(pFVar1 + lVar24 + 8);
        dVar30 = dVar30 + *(double *)(pFVar1 + lVar24);
        dVar32 = dVar32 + *(double *)(pFVar1 + lVar24 + 8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar15,
                                             SUB84(dVar29,0) & uVar14));
        auVar5._8_4_ = (int)lVar25;
        auVar5._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar13,
                                                   SUB84(dVar27,0) & uVar12));
        auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar22 = movmskpd(0,auVar5);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar15,
                                             SUB84(dVar33,0) & uVar14));
        auVar6._8_4_ = (int)lVar25;
        auVar6._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar13,
                                                   SUB84(dVar31,0) & uVar12));
        auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar20 = movmskpd(iVar19,auVar6);
        uVar21 = iVar22 << 2 | uVar20;
        if (uVar21 != 0) {
          lVar25 = -(ulonglong)
                    (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                               SUB84(dVar28,0) & uVar14));
          auVar7._8_4_ = (int)lVar25;
          auVar7._0_8_ = -(ulonglong)
                          (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                     SUB84(dVar26,0) & uVar12));
          auVar7._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
          uVar21 = movmskpd(uVar21,auVar7);
          lVar25 = -(ulonglong)
                    (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                               SUB84(dVar32,0) & uVar14));
          auVar10._8_4_ = (int)lVar25;
          auVar10._0_8_ =
               -(ulonglong)
                (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                           SUB84(dVar30,0) & uVar12));
          auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
          uVar20 = movmskpd(uVar20,auVar10);
          if ((uVar21 & 0x3fffffff) != 0 || uVar20 != 0) goto LAB_14a4ff14d;
        }
        dVar26 = *(double *)(pFVar2 + lVar24 + 0x50) - *(double *)(pFVar1 + lVar24 + 0x50);
        dVar28 = *(double *)(pFVar2 + lVar24 + 0x50 + 8) - *(double *)(pFVar1 + lVar24 + 0x50 + 8);
        dVar30 = *(double *)(pFVar2 + lVar24 + 0x40) - *(double *)(pFVar1 + lVar24 + 0x40);
        dVar32 = *(double *)(pFVar2 + lVar24 + 0x40 + 8) - *(double *)(pFVar1 + lVar24 + 0x40 + 8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                             SUB84(dVar28,0) & uVar14));
        auVar8._8_4_ = (int)lVar25;
        auVar8._0_8_ = -(ulonglong)
                        (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar13,
                                                   SUB84(dVar26,0) & uVar12));
        auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        uVar21 = movmskpd(0,auVar8);
        lVar25 = -(ulonglong)
                  (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                             SUB84(dVar32,0) & uVar14));
        auVar11._8_4_ = (int)lVar25;
        auVar11._0_8_ =
             -(ulonglong)
              (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar13,
                                         SUB84(dVar30,0) & uVar12));
        auVar11._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar19 = movmskpd(uVar20,auVar11);
        if ((uVar21 & 0x3fffffff) != 0 || iVar19 != 0) goto LAB_14a4ff14d;
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 0x60;
      } while ((int)uVar23 < param_1->ArrayNum);
    }
    bVar17 = true;
  }
  else {
LAB_14a4ff14d:
    bVar17 = false;
  }
  return bVar17;
}

// Equals<UE::Math::TQuat<double>_> @ 14a5000b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRigDispatch_MetadataBase::Equals<UE::Math::TQuat<double>_>
          (TQuat<double> *param_1,TQuat<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_EAX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar7 = param_2->Z + param_1->Z;
  dVar8 = param_2->W + param_1->W;
  dVar13 = param_1->Z - param_2->Z;
  dVar14 = param_1->W - param_2->W;
  dVar5 = param_2->X + param_1->X;
  dVar6 = param_2->Y + param_1->Y;
  dVar15 = param_1->X - param_2->X;
  dVar16 = param_1->Y - param_2->Y;
  lVar12 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar12;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  iVar10 = movmskpd((int)param_1,auVar1);
  lVar12 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar2._8_4_ = (int)lVar12;
  auVar2._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  uVar9 = movmskpd(in_EAX,auVar2);
  uVar11 = iVar10 << 2 | uVar9;
  if (uVar11 != 0) {
    lVar12 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar8,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar12;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar11 = movmskpd(uVar11,auVar3);
    lVar12 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar6,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar12;
    auVar4._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    iVar10 = movmskpd(uVar9,auVar4);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
      return false;
    }
  }
  return true;
}

// Equals<UE::Math::TRotator<double>_> @ 14a500160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRigDispatch_MetadataBase::Equals<UE::Math::TRotator<double>_>
          (TRotator<double> *param_1,TRotator<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  
  dVar31 = param_1->Pitch - param_2->Pitch;
  dVar33 = param_1->Yaw - param_2->Yaw;
  dVar2 = param_1->Roll - param_2->Roll;
  auVar17._8_4_ = SUB84(dVar33,0);
  auVar17._0_8_ = dVar31;
  auVar17._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar18 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar18 = roundpd(in_XMM1,auVar18,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar25._0_8_ = auVar18._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar25._8_8_ = auVar18._8_8_ * dVar7;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar2;
  dVar31 = dVar31 - auVar25._0_8_;
  dVar33 = dVar33 - auVar25._8_8_;
  auVar18 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar18 = roundpd(auVar25,auVar18,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar33,0);
  auVar20._0_8_ = dVar31;
  auVar20._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  dVar2 = dVar2 - auVar18._0_8_ * dVar4;
  dVar3 = 0.0 - auVar18._8_8_ * dVar5;
  uVar11 = -(ulonglong)(0.0 <= dVar31);
  uVar13 = -(ulonglong)(0.0 <= dVar33);
  auVar26._0_8_ = uVar11 & (ulonglong)dVar31;
  auVar26._8_4_ = (undefined4)(uVar13 & (ulonglong)dVar33);
  auVar26._12_4_ = (undefined4)((uVar13 & (ulonglong)dVar33) >> 0x20);
  dVar33 = auVar20._8_8_ + dVar7;
  uVar12 = -(ulonglong)(0.0 <= dVar2);
  uVar14 = -(ulonglong)(0.0 <= dVar3);
  auVar34._0_4_ = ~(uint)uVar11 & SUB84(dVar31 + dVar6,0);
  auVar34._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar31 + dVar6) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar13 & SUB84(dVar33,0);
  auVar34._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar33 >> 0x20);
  auVar34 = auVar34 | auVar26;
  auVar21._8_4_ = SUB84(dVar3,0);
  auVar21._0_8_ = dVar2;
  auVar21._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar33 = auVar21._8_8_ + dVar5;
  auVar32._0_4_ = ~(uint)uVar12 & SUB84(dVar2 + dVar4,0);
  auVar32._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
  auVar32._8_4_ = ~(uint)uVar14 & SUB84(dVar33,0);
  auVar32._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar33 >> 0x20);
  auVar18._8_4_ = (int)((ulonglong)dVar3 & uVar14);
  auVar18._0_8_ = (ulonglong)dVar2 & uVar12;
  auVar18._12_4_ = (int)(((ulonglong)dVar3 & uVar14) >> 0x20);
  auVar32 = auVar32 | auVar18;
  uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar32._0_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar32._8_8_);
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar34._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar34._8_8_);
  auVar27._0_8_ = uVar12 & (ulonglong)(auVar32._0_8_ - dVar4);
  uVar11 = uVar14 & (ulonglong)(auVar32._8_8_ - dVar5);
  auVar27._8_4_ = (undefined4)uVar11;
  auVar27._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar12 & auVar32._0_4_;
  auVar22._4_4_ = ~(uint)(uVar12 >> 0x20) & auVar32._4_4_;
  auVar22._8_4_ = ~(uint)uVar14 & auVar32._8_4_;
  auVar22._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar32._12_4_;
  auVar27 = auVar27 | auVar22;
  auVar23._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar23._0_8_ = __real_3f1a36e2e0000000;
  auVar23._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar28._0_8_ =
       (double)CONCAT44(auVar27._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar27._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar28._8_4_ = auVar27._8_4_ & _UNK_15061cc88;
  auVar28._12_4_ = auVar27._12_4_ & _UNK_15061cc8c;
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < auVar28._8_8_);
  auVar24._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar28._0_8_);
  uVar10 = movmskpd((int)param_1,auVar24);
  auVar29._0_8_ = uVar13 & (ulonglong)(auVar34._0_8_ - dVar6);
  uVar11 = uVar15 & (ulonglong)(auVar34._8_8_ - dVar7);
  auVar29._8_4_ = (undefined4)uVar11;
  auVar29._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar1._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar34._4_4_;
  auVar1._0_4_ = ~(uint)uVar13 & auVar34._0_4_;
  auVar1._8_4_ = ~(uint)uVar15 & auVar34._8_4_;
  auVar1._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar34._12_4_;
  auVar29 = auVar29 | auVar1;
  auVar30._0_8_ =
       (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
  auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
  lVar16 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar30._8_8_);
  auVar8._8_4_ = (int)lVar16;
  auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar30._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar8);
  return (uVar10 & 0x3fffffff) == 0 && iVar9 == 0;
}

// Equals<UE::Math::TTransform<double>_> @ 14a500290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FRigDispatch_MetadataBase::Equals<UE::Math::TTransform<double>_>
          (TTransform<double> *param_1,TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_EAX;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar14 = (param_1->Translation).ZW.m128d_f64[0] - (param_2->Translation).ZW.m128d_f64[0];
  dVar16 = (param_1->Translation).ZW.m128d_f64[1] - (param_2->Translation).ZW.m128d_f64[1];
  dVar18 = (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  dVar20 = (param_1->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
  lVar13 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar16,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)param_1,auVar1);
  lVar13 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar20,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar6);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar18 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar20 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar14 = (param_1->Rotation).XY.m128d_f64[0];
    dVar16 = (param_1->Rotation).XY.m128d_f64[1];
    dVar15 = dVar18 - (param_2->Rotation).ZW.m128d_f64[0];
    dVar17 = dVar20 - (param_2->Rotation).ZW.m128d_f64[1];
    dVar18 = dVar18 + (param_2->Rotation).ZW.m128d_f64[0];
    dVar20 = dVar20 + (param_2->Rotation).ZW.m128d_f64[1];
    dVar19 = dVar14 - (param_2->Rotation).XY.m128d_f64[0];
    dVar21 = dVar16 - (param_2->Rotation).XY.m128d_f64[1];
    dVar14 = dVar14 + (param_2->Rotation).XY.m128d_f64[0];
    dVar16 = dVar16 + (param_2->Rotation).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar20,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar18,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar16,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar13;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar14,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar7);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) {
        return false;
      }
    }
    dVar14 = (param_1->Scale3D).ZW.m128d_f64[0] - (param_2->Scale3D).ZW.m128d_f64[0];
    dVar16 = (param_1->Scale3D).ZW.m128d_f64[1] - (param_2->Scale3D).ZW.m128d_f64[1];
    dVar18 = (param_1->Scale3D).XY.m128d_f64[0] - (param_2->Scale3D).XY.m128d_f64[0];
    dVar20 = (param_1->Scale3D).XY.m128d_f64[1] - (param_2->Scale3D).XY.m128d_f64[1];
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar16,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar13;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar13 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar20,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar13;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar8);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      return true;
    }
  }
  return false;
}

// Equals<UE::Math::TVector<double>_> @ 14a5003d0

bool __cdecl
FRigDispatch_MetadataBase::Equals<UE::Math::TVector<double>_>
          (TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (dVar1 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y,
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (dVar1 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z,
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return true;
  }
  return false;
}

// Equals<FLinearColor> @ 14a500430

bool __cdecl
FRigDispatch_MetadataBase::Equals<FLinearColor>(FLinearColor *param_1,FLinearColor *param_2)

{
  if (((((float)((uint)((param_1->field0_0x0)._s_0.R - (param_2->field0_0x0)._s_0.R) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717) &&
       ((float)((uint)((param_1->field0_0x0)._s_0.G - (param_2->field0_0x0)._s_0.G) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)) &&
      ((float)((uint)((param_1->field0_0x0)._s_0.B - (param_2->field0_0x0)._s_0.B) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)) &&
     ((float)((uint)((param_1->field0_0x0)._s_0.A - (param_2->field0_0x0)._s_0.A) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717)) {
    return true;
  }
  return false;
}

// Equals<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14a5004a0

bool __cdecl
FRigDispatch_MetadataBase::Equals<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + lVar7 * 4) != *(int *)(pFVar1 + lVar7 * 4)) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14a5005c0

bool __cdecl
FRigDispatch_MetadataBase::Equals<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_322bcc77;
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar7 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (fVar3 < (float)((uint)(*(float *)((param_1->AllocatorInstance).Data + lVar9 * 4) -
                                *(float *)(pFVar1 + lVar9 * 4)) & uVar4)) {
        return false;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14a500710

bool __cdecl
FRigDispatch_MetadataBase::Equals<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  dVar6 = __real_3f1a36e2e0000000;
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar11 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar9 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((dVar6 < (double)CONCAT44((uint)((ulonglong)
                                            (*(double *)(pFVar2 + lVar10) -
                                            *(double *)(pFVar1 + lVar10)) >> 0x20) & uVar5,
                                     SUB84(*(double *)(pFVar2 + lVar10) -
                                           *(double *)(pFVar1 + lVar10),0) & uVar4)) ||
          (dVar6 < (double)CONCAT44((uint)((ulonglong)
                                           (*(double *)(pFVar2 + lVar10 + 8) -
                                           *(double *)(pFVar1 + lVar10 + 8)) >> 0x20) & uVar5,
                                    SUB84(*(double *)(pFVar2 + lVar10 + 8) -
                                          *(double *)(pFVar1 + lVar10 + 8),0) & uVar4))) ||
         (dVar6 < (double)CONCAT44((uint)((ulonglong)
                                          (*(double *)(pFVar2 + lVar10 + 0x10) -
                                          *(double *)(pFVar1 + lVar10 + 0x10)) >> 0x20) & uVar5,
                                   SUB84(*(double *)(pFVar2 + lVar10 + 0x10) -
                                         *(double *)(pFVar1 + lVar10 + 0x10),0) & uVar4))) {
        return false;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar11 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14a5008b0

bool __cdecl
FRigDispatch_MetadataBase::Equals<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_38d1b717;
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar10 = 0;
  if (0 < param_1->ArrayNum) {
    lVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((((fVar4 <= (float)((uint)(*(float *)(pFVar2 + lVar9) - *(float *)(pFVar1 + lVar9)) &
                             uVar5)) ||
           (fVar4 <= (float)((uint)(*(float *)(pFVar2 + lVar9 + 4) - *(float *)(pFVar1 + lVar9 + 4))
                            & uVar5))) ||
          (fVar4 <= (float)((uint)(*(float *)(pFVar2 + lVar9 + 8) - *(float *)(pFVar1 + lVar9 + 8))
                           & uVar5))) ||
         (fVar4 <= (float)((uint)(*(float *)(pFVar2 + lVar9 + 0xc) -
                                 *(float *)(pFVar1 + lVar9 + 0xc)) & uVar5))) {
        return false;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar10 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> @ 14a500a60

bool __cdecl
FRigDispatch_MetadataBase::Equals<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar2 + lVar8 + 4) != *(longlong *)(pFVar1 + lVar8 + 4)) ||
         (pFVar2[lVar8] != pFVar1[lVar8])) {
        return false;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14a500ba0

bool __cdecl
FRigDispatch_MetadataBase::Equals<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_2->AllocatorInstance).Data + lVar8 * 8;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (param_1->AllocatorInstance).Data + lVar8 * 8;
      if ((*(int *)pFVar2 != *(int *)pFVar1) || (*(int *)(pFVar2 + 4) != *(int *)(pFVar1 + 4))) {
        return false;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return true;
}

// Equals<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14a500cd0

bool __cdecl
FRigDispatch_MetadataBase::Equals<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TArray<bool,TSizedDefaultAllocator<32>_> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar5 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((param_1->AllocatorInstance).Data[lVar7] != pFVar1[lVar7]) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return true;
}

// FRigDispatch_MetadataBase @ 14a50ae90

FRigDispatch_MetadataBase * __thiscall
FRigDispatch_MetadataBase::FRigDispatch_MetadataBase(FRigDispatch_MetadataBase *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  this->ItemArgIndex = -1;
  this->NameArgIndex = -1;
  this->_padding_ = (longlong)&___7FRigDispatch_MetadataBase__6B_;
  (this->ValueTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTypes).ArrayNum = 0;
  (this->ValueTypes).ArrayMax = 0;
  this->NameSpaceArgIndex = -1;
  this->CacheArgIndex = -1;
  this->DefaultArgIndex = -1;
  this->ValueArgIndex = -1;
  this->FoundArgIndex = -1;
  this->SuccessArgIndex = -1;
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_MetadataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_MetadataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_MetadataBase,(UObject *)pUVar1,
                         L"RigDispatch_MetadataBase");
  }
  this->_padding_ =
       (longlong)Z_Registration_Info_UScriptStruct_FRigDispatch_MetadataBase.OuterSingleton;
  return this;
}

// operator= @ 14a519d90

FRigDispatch_MetadataBase * __thiscall
FRigDispatch_MetadataBase::operator=
          (FRigDispatch_MetadataBase *this,FRigDispatch_MetadataBase *param_1)

{
  int *piVar1;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FRigDispatchFactory::operator=((FRigDispatchFactory *)this,(FRigDispatchFactory *)param_1);
  this->ItemArgIndex = param_1->ItemArgIndex;
  pTVar2 = &this->ValueTypes;
  this->NameArgIndex = param_1->NameArgIndex;
  this->NameSpaceArgIndex = param_1->NameSpaceArgIndex;
  this->CacheArgIndex = param_1->CacheArgIndex;
  this->DefaultArgIndex = param_1->DefaultArgIndex;
  this->ValueArgIndex = param_1->ValueArgIndex;
  this->FoundArgIndex = param_1->FoundArgIndex;
  this->SuccessArgIndex = param_1->SuccessArgIndex;
  if (pTVar2 != &param_1->ValueTypes) {
    iVar3 = (param_1->ValueTypes).ArrayNum;
    piVar1 = &(this->ValueTypes).ArrayMax;
    _Src = (param_1->ValueTypes).AllocatorInstance.Data;
    (this->ValueTypes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  return this;
}

// GetValueTypes @ 14a531c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_MetadataBase::GetValueTypes
          (FRigDispatch_MetadataBase *this,FRigVMRegistryHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMRegistry_NoLock *pFVar4;
  UScriptStruct *pUVar5;
  FString *pFVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  FScriptContainerElement *local_300;
  longlong local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  int local_2d0;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *local_2c8;
  FRigVMTemplateArgumentType local_2c0;
  FRigVMTemplateArgumentType local_2b0;
  FRigVMTemplateArgumentType local_2a0;
  FRigVMTemplateArgumentType local_290;
  FRigVMTemplateArgumentType local_280;
  FRigVMTemplateArgumentType local_270;
  FName local_260;
  UScriptStruct *local_258;
  FName local_250;
  UScriptStruct *local_248;
  FName local_240;
  UScriptStruct *local_238;
  FName local_230;
  UScriptStruct *local_228;
  FName local_220;
  UScriptStruct *local_218;
  FName local_210;
  UScriptStruct *local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  TRigVMTypeIndex local_138;
  FName local_12c;
  int local_124;
  FName local_120;
  int local_118;
  FName local_114;
  int local_10c;
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  FName local_c0;
  int local_b8;
  FName local_b4;
  int local_ac;
  FName local_a8;
  int local_a0;
  FName local_9c;
  int local_94;
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_328;
  pTVar8 = &this->ValueTypes;
  if ((this->ValueTypes).ArrayNum == 0) {
    local_138.Name = RigVMTypeUtils::TypeIndex::Bool.Name;
    local_138.Index = RigVMTypeUtils::TypeIndex::Bool.Index;
    local_12c = RigVMTypeUtils::TypeIndex::Float.Name;
    local_124 = RigVMTypeUtils::TypeIndex::Float.Index;
    local_120 = RigVMTypeUtils::TypeIndex::Int32.Name;
    local_118 = RigVMTypeUtils::TypeIndex::Int32.Index;
    local_114 = RigVMTypeUtils::TypeIndex::FName.Name;
    local_10c = RigVMTypeUtils::TypeIndex::FName.Index;
    local_2c8 = pTVar8;
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    pUVar5 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_200,pUVar5);
    pwVar12 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_260,pwVar11);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    local_258 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_108,&local_260);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_1f0,pUVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_250,pwVar11);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    local_248 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_fc,&local_250);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    pUVar5 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_1e0,pUVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_240,pwVar11);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    local_238 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_f0,&local_240);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    pUVar5 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_1d0,pUVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_230,pwVar11);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    local_228 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_e4,&local_230);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    pUVar5 = TBaseStructure<FLinearColor>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_1c0,pUVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_220,pwVar11);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    local_218 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_d8,&local_220);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    pUVar5 = FRigElementKey::StaticStruct();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_1b0,pUVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_210,pwVar11);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    local_208 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_cc,&local_210);
    local_c0 = RigVMTypeUtils::TypeIndex::BoolArray.Name;
    local_b8 = RigVMTypeUtils::TypeIndex::BoolArray.Index;
    local_b4 = RigVMTypeUtils::TypeIndex::FloatArray.Name;
    local_ac = RigVMTypeUtils::TypeIndex::FloatArray.Index;
    local_a8 = RigVMTypeUtils::TypeIndex::Int32Array.Name;
    local_a0 = RigVMTypeUtils::TypeIndex::Int32Array.Index;
    local_9c = RigVMTypeUtils::TypeIndex::FNameArray.Name;
    local_94 = RigVMTypeUtils::TypeIndex::FNameArray.Index;
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    TVar7.DebugPtr = (UObject *)TBaseStructure<UE::Math::TVector<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_1a0,(UScriptStruct *)TVar7.DebugPtr);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_2c0.CPPType,pwVar11);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    local_2c0.CPPTypeObject.field0_0x0 =
         (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar7.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)TVar7.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    FRigVMTemplateArgumentType::ConvertToArray(&local_2c0);
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_90,&local_2c0);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    TVar7.DebugPtr = (UObject *)TBaseStructure<UE::Math::TRotator<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_190,(UScriptStruct *)TVar7.DebugPtr);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_2b0.CPPType,pwVar11);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    local_2b0.CPPTypeObject.field0_0x0 =
         (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar7.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)TVar7.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    FRigVMTemplateArgumentType::ConvertToArray(&local_2b0);
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_84,&local_2b0);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    TVar7.DebugPtr = (UObject *)TBaseStructure<UE::Math::TQuat<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_180,(UScriptStruct *)TVar7.DebugPtr);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_2a0.CPPType,pwVar11);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    local_2a0.CPPTypeObject.field0_0x0 =
         (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar7.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)TVar7.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    FRigVMTemplateArgumentType::ConvertToArray(&local_2a0);
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_78,&local_2a0);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    TVar7.DebugPtr = (UObject *)TBaseStructure<UE::Math::TTransform<double>_>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_170,(UScriptStruct *)TVar7.DebugPtr);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_290.CPPType,pwVar11);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    local_290.CPPTypeObject.field0_0x0 =
         (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar7.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)TVar7.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    FRigVMTemplateArgumentType::ConvertToArray(&local_290);
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_6c,&local_290);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    TVar7.DebugPtr = (UObject *)TBaseStructure<FLinearColor>::Get();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_160,(UScriptStruct *)TVar7.DebugPtr);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_280.CPPType,pwVar11);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    local_280.CPPTypeObject.field0_0x0 =
         (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar7.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)TVar7.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    FRigVMTemplateArgumentType::ConvertToArray(&local_280);
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_60,&local_280);
    pFVar4 = FRigVMRegistryHandle::operator->(param_1);
    TVar7.DebugPtr = (UObject *)FRigElementKey::StaticStruct();
    pFVar6 = RigVMTypeUtils::GetUniqueStructTypeName(&local_150,(UScriptStruct *)TVar7.DebugPtr);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_270.CPPType,pwVar12);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    local_270.CPPTypeObject.field0_0x0 =
         (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar7.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)TVar7.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    FRigVMTemplateArgumentType::ConvertToArray(&local_270);
    (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,local_54,&local_270);
    TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::CopyToEmpty<TRigVMTypeIndex,int>
              (pTVar8,&local_138,0x14,(this->ValueTypes).ArrayMax);
    pFVar1 = (pTVar8->AllocatorInstance).Data;
    local_2d8 = 0;
    local_2d0 = 0;
    if ((pFVar1 <= (FScriptContainerElement *)&local_2d8) &&
       (lVar16 = (longlong)(this->ValueTypes).ArrayMax,
       (FScriptContainerElement *)&local_2d8 < pFVar1 + lVar16 * 0xc)) {
      local_2f0 = (longlong)(this->ValueTypes).ArrayNum;
      local_2e8 = 0xc;
      local_308 = &local_2d8;
      local_300 = pFVar1;
      local_2f8 = lVar16;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar10 = (this->ValueTypes).ArrayNum;
    lVar16 = (longlong)iVar10;
    if (iVar10 != 0) {
      iVar17 = 0;
      pFVar1 = (pTVar8->AllocatorInstance).Data;
      bVar3 = *(int *)(pFVar1 + 8) != local_2d0;
      lVar13 = 0;
      iVar10 = local_2d0;
      iVar14 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar15 = iVar14 + 1;
        if (lVar13 < lVar16) {
          pFVar9 = pFVar1 + lVar13 * 0xc + 8;
          do {
            if (bVar3 != (*(int *)pFVar9 != iVar10)) break;
            iVar15 = iVar15 + 1;
            lVar13 = lVar13 + 1;
            pFVar9 = pFVar9 + 0xc;
          } while (lVar13 < lVar16);
        }
        if (bVar3 != false) {
          if (iVar17 != iVar14) {
            memmove(pFVar1 + (longlong)iVar17 * 0xc,pFVar1 + (longlong)iVar14 * 0xc,
                    (longlong)(iVar15 - iVar14) * 0xc);
            iVar10 = local_2d0;
          }
          iVar17 = iVar17 + (iVar15 - iVar14);
        }
        bVar3 = (bool)(bVar3 ^ 1);
        iVar14 = iVar15;
      } while (lVar13 < lVar16);
      local_2c8->ArrayNum = iVar17;
      pTVar8 = local_2c8;
    }
  }
  return pTVar8;
}

