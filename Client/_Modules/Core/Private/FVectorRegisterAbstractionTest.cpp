// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141c5a570

EAutomationTestFlags __thiscall
FVectorRegisterAbstractionTest::GetTestFlags(FVectorRegisterAbstractionTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5a580

bool __thiscall FVectorRegisterAbstractionTest::IsStressTest(FVectorRegisterAbstractionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5a590

uint __thiscall
FVectorRegisterAbstractionTest::GetRequiredDeviceNum(FVectorRegisterAbstractionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5a5a0

FString * __thiscall
FVectorRegisterAbstractionTest::GetTestSourceFileName
          (FVectorRegisterAbstractionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\UnrealMathTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5a5d0

int __thiscall
FVectorRegisterAbstractionTest::GetTestSourceFileLine(FVectorRegisterAbstractionTest *this)

{
  return 0x935;
}

// GetTests @ 141c5a5e0

/* WARNING: Removing unreachable block (ram,0x000141c5a75e) */

void __thiscall
FVectorRegisterAbstractionTest::GetTests
          (FVectorRegisterAbstractionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141c5a780

bool __thiscall
FVectorRegisterAbstractionTest::RunTest(FVectorRegisterAbstractionTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5a7b0

FString * __thiscall
FVectorRegisterAbstractionTest::GetBeautifiedTestName
          (FVectorRegisterAbstractionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FVectorRegisterAbstractionTest @ 141c8e740

FVectorRegisterAbstractionTest * __thiscall
FVectorRegisterAbstractionTest::FVectorRegisterAbstractionTest
          (FVectorRegisterAbstractionTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FVectorRegisterAbstractionTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::Vector Register Abstraction Test");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141caebd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVectorRegisterAbstractionTest::TestBody(FVectorRegisterAbstractionTest *this,FString *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar5;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  float afVar12 [4];
  ulong64 uVar13;
  ulong64 uVar14;
  undefined8 uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float afVar21 [4];
  float afVar22 [4];
  TQuat<float> TVar23;
  __m128 _Var24;
  bool bVar25;
  undefined4 extraout_EAX;
  int iVar26;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  undefined4 extraout_EAX_04;
  undefined4 extraout_EAX_05;
  undefined4 extraout_EAX_06;
  undefined4 extraout_EAX_07;
  undefined4 extraout_EAX_08;
  undefined4 extraout_EAX_09;
  undefined4 extraout_EAX_10;
  undefined4 extraout_EAX_11;
  undefined4 extraout_EAX_12;
  undefined4 extraout_EAX_13;
  undefined4 extraout_EAX_14;
  undefined4 extraout_EAX_15;
  undefined4 extraout_EAX_16;
  undefined4 extraout_EAX_17;
  undefined4 extraout_EAX_18;
  undefined4 extraout_EAX_19;
  undefined4 extraout_EAX_20;
  undefined4 extraout_EAX_21;
  undefined4 extraout_EAX_22;
  undefined4 extraout_EAX_23;
  undefined4 extraout_EAX_24;
  undefined4 extraout_EAX_25;
  undefined4 uVar27;
  undefined4 extraout_EAX_26;
  undefined4 extraout_EAX_27;
  undefined4 extraout_EAX_28;
  undefined4 extraout_EAX_29;
  undefined4 extraout_EAX_30;
  TRotator<float> *pTVar28;
  TQuat<float> *pTVar29;
  __m128 *p_Var30;
  TRotator<float> *pTVar31;
  TQuat<double> *pTVar32;
  TVector<float>_u_0_s_0 *pTVar33;
  TRotationMatrix<float> *pTVar34;
  TQuatRotationMatrix<float> *pTVar35;
  TVector<float>_u_0 *pTVar36;
  TQuat<float> *pTVar37;
  TVector<float> *pTVar38;
  float *pfVar39;
  TMatrix<float> *pTVar40;
  ForAnyElementType FVar41;
  wchar_t *pwVar42;
  float *pfVar43;
  double *pdVar44;
  float *pfVar45;
  TVector<float> *pTVar46;
  __m128 *in_R8;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  float fVar55;
  float fVar56;
  undefined8 extraout_XMM0_Qa;
  uint extraout_XMM0_Dc;
  undefined1 auVar59 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Db_01;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar106;
  float fVar108;
  float fVar110;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar107;
  float fVar109;
  float fVar111;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar112 [16];
  float fVar113;
  float fVar115;
  float fVar116;
  undefined1 auVar114 [16];
  undefined1 auVar117 [16];
  float fVar122;
  undefined1 auVar118 [16];
  __m128 _Var119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar123;
  __m128 _Var124;
  __m128 _Var125;
  float fVar126;
  undefined1 auVar127 [16];
  undefined1 auStack_12d8 [32];
  undefined1 local_1298 [8];
  undefined8 uStack_1290;
  undefined1 local_1288 [8];
  undefined8 uStack_1280;
  undefined1 local_1278 [8];
  undefined8 uStack_1270;
  double local_1268;
  double dStack_1260;
  TQuat<float> local_1258;
  TQuat<float> local_1248;
  TRotator<float> local_1238;
  float local_1228;
  float fStack_1224;
  undefined4 local_1220;
  float local_1218;
  float fStack_1214;
  undefined4 local_1210;
  undefined1 local_1208 [8];
  undefined8 uStack_1200;
  double local_11f8;
  double dStack_11f0;
  float local_11e8 [2];
  float afStack_11e0 [2];
  float local_11d8 [2];
  float afStack_11d0 [2];
  TQuat<float> local_11c8;
  TRotator<float> local_11b8;
  __m128 local_11a8;
  double local_1198;
  double dStack_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  float local_1168;
  float fStack_1164;
  undefined4 local_1160;
  TVector4<float>_u_0 local_1158;
  undefined1 local_1148 [8];
  float fStack_1140;
  float fStack_113c;
  TRotator<float> local_1138;
  TVector4<float>_u_0 local_1128;
  undefined1 local_1118 [8];
  float fStack_1110;
  float fStack_110c;
  TVector4<float>_u_0 local_1108;
  undefined1 local_10f8 [8];
  float fStack_10f0;
  float fStack_10ec;
  TQuat<float> local_10e8;
  TQuat<double> local_10d8;
  TQuat<double> local_10b8;
  TQuat<float> local_1098;
  TVector<float>_u_0 local_107c;
  TRotator<float> local_1070;
  TVector<float>_u_0 local_1064;
  TRotator<float> local_1058;
  TRotator<float> local_104c;
  TVector<float>_u_0 local_1040;
  TRotator<float> local_1030;
  TRotator<float> local_1020;
  TRotator<float> local_1010;
  TRotator<float> local_1000;
  TRotator<float> local_ff4;
  TRotator<float> local_fe8;
  TRotator<float> local_fdc;
  TRotator<float> local_fd0;
  TRotator<float> local_fc4;
  TVector<float>_u_0 local_fb8;
  TQuat<float> local_fa8;
  TQuat<float> local_f98;
  float local_f88 [3];
  undefined4 uStack_f7c;
  float local_f78;
  float local_f74;
  float local_f70;
  undefined4 local_f6c;
  FString local_f68;
  FString local_f58;
  FString local_f48;
  FString local_f38;
  FString local_f28;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined4 local_f08;
  undefined4 local_f04;
  TVector<float> local_f00;
  TRotator<float> local_ef0 [2];
  TQuat<float> local_ed8;
  TQuat<float> local_ec8;
  TQuat<float> local_eb8;
  TRotator<double> local_ea8;
  TRotator<double> local_e90;
  TQuat<float> local_e78;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined1 local_e28 [24];
  TVector<float> local_e10;
  TVector<float> local_e04;
  TVector<float> local_df8;
  TVector<float> local_dec;
  TVector<float> local_de0;
  TVector<float> local_dd4;
  TVector<float> local_dc8;
  TVector<float> local_dbc;
  TVector<float> local_db0;
  TVector<float> local_da4;
  TVector<float> local_d98;
  TQuat<float> local_d88;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined1 local_d18 [16];
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined1 local_c48 [16];
  undefined4 local_c38;
  TRotator<float> local_c34;
  TQuat<float> local_c28;
  TQuat<float> local_c18;
  TQuat<float> local_c08;
  TQuat<float> local_bf8;
  TQuat<float> local_be8;
  TQuat<float> local_bd8;
  TQuat<float> local_bc8;
  TQuat<float> local_bb8;
  TQuat<float> local_ba8;
  TQuat<float> local_b98;
  TQuat<float> local_b88 [2];
  TQuat<float> local_b68;
  TQuat<float> local_b58 [2];
  TQuat<float> local_b38;
  TQuat<float> local_b28;
  TQuat<float> local_b18;
  TQuat<float> local_b08;
  TQuat<float> local_af8;
  TQuat<float> local_ae8;
  TQuat<float> local_ad8;
  TQuat<float> local_ac8;
  TQuat<float> local_ab8;
  TQuat<float> local_aa8 [2];
  TQuat<float> local_a88 [2];
  TQuat<float> local_a68 [2];
  TQuat<float> local_a48 [2];
  TQuat<float> local_a28 [2];
  TQuat<float> local_a08;
  TQuat<float> local_9f8;
  TQuat<float> local_9e8 [2];
  TQuat<float> local_9c8 [6];
  TQuat<float> local_968;
  TQuat<float> local_958;
  TQuat<double> local_948;
  TQuat<double> local_928;
  TQuat<double> local_908;
  TQuat<double> local_8e8;
  TQuat<double> local_8c8;
  TQuat<double> local_8a8;
  TQuat<double> local_888;
  TQuat<double> local_868;
  TQuat<double> local_848;
  TQuat<double> local_828;
  TQuat<double> local_808;
  TQuat<double> local_7e8;
  TQuat<double> local_7c8;
  TQuat<double> local_7a8;
  TRotationMatrix<float> local_788;
  TRotationMatrix<float> local_748;
  TQuatRotationMatrix<float> local_708;
  TRotationMatrix<float> local_6c8;
  TRotationMatrix<float> local_688;
  TQuatRotationMatrix<float> local_648;
  TRotationMatrix<float> local_608;
  TQuatRotationMatrix<float> local_5c8;
  TQuatRotationMatrix<float> local_588;
  TQuatRotationMatrix<float> local_548;
  __m128 local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  __m128 local_4c8;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  TMatrix<float> local_488;
  TMatrix<float> local_448;
  undefined1 local_408 [24];
  double dStack_3f0;
  float local_3e8 [2];
  float afStack_3e0 [2];
  float local_3d8 [2];
  float afStack_3d0 [2];
  undefined1 local_3c8 [24];
  double dStack_3b0;
  float local_3a8 [2];
  float afStack_3a0 [2];
  float local_398 [2];
  float afStack_390 [2];
  TLookFromMatrix<float> local_388;
  TMatrix<float> local_348;
  TMatrix<float> local_308;
  TMatrix<float> local_2c8;
  TMatrix<float> local_288;
  TMatrix<float> local_248;
  undefined1 local_208 [12];
  undefined8 local_1fc;
  float local_1f4;
  undefined8 local_1f0;
  float local_1e8;
  undefined8 local_1e4;
  float local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190 [8];
  undefined1 local_188 [16];
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
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [4];
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  afVar12 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_12d8;
  ResetPassing();
  uVar14 = _UNK_15076b1f8;
  uVar13 = ___xmm_3f8000003f8000003f8000003f800000;
  local_1278 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
  uStack_1270 = _UNK_15076b1f8;
  local_1288 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
  uStack_1280 = _UNK_15076b1f8;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"MakeVectorRegister",bVar25);
  _local_1278 = (__m128)ZEXT816(0);
  _local_1288 = (__m128)ZEXT816(0);
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorZero",bVar25);
  _local_1288 = GlobalVectorConstants::FloatOne;
  local_1278 = (undefined1  [8])uVar13;
  uStack_1270 = uVar14;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorOne",bVar25);
  uVar14 = _UNK_15076c5e8;
  uVar13 = ___xmm_bf000000be800000400000003f800000;
  GScratch[0] = (float)___xmm_bf000000be800000400000003f800000;
  fVar92 = GScratch[0];
  GScratch[1] = (float)(___xmm_bf000000be800000400000003f800000 >> 0x20);
  fVar108 = GScratch[1];
  GScratch[2] = (float)_UNK_15076c5e8;
  fVar122 = GScratch[2];
  GScratch[3] = (float)(_UNK_15076c5e8 >> 0x20);
  fVar56 = GScratch[3];
  local_1278 = (undefined1  [8])___xmm_bf000000be800000400000003f800000;
  uStack_1270 = _UNK_15076c5e8;
  local_1288 = (undefined1  [8])___xmm_bf000000be800000400000003f800000;
  uStack_1280 = _UNK_15076c5e8;
  GScratch[4] = 5.0;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoad",bVar25);
  GScratch[4] = 5.0;
  local_1288 = (undefined1  [8])uVar13;
  uStack_1280 = uVar14;
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoad",bVar25);
  GScratch[4] = 5.0;
  local_1288 = (undefined1  [8])uVar13;
  uStack_1280 = uVar14;
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadAligned",bVar25);
  uVar14 = _UNK_15076af68;
  uVar13 = ___xmm_00000000bf000000be80000040000000;
  GScratch[4] = 5.0;
  local_1278 = (undefined1  [8])CONCAT44(fVar122,fVar108);
  uStack_1270 = CONCAT44(0x40a00000,fVar56);
  local_1288 = (undefined1  [8])___xmm_00000000bf000000be80000040000000;
  uStack_1280 = _UNK_15076af68;
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual3((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadFloat3",bVar25);
  GScratch[4] = 5.0;
  local_1278 = (undefined1  [8])___xmm_00000000be800000400000003f800000;
  uStack_1270 = _UNK_15076af58;
  local_1288 = (undefined1  [8])___xmm_00000000be800000400000003f800000;
  uStack_1280 = _UNK_15076af58;
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadFloat3_W0",bVar25);
  uVar17 = _UNK_15076b378;
  uVar16 = ___xmm_3f800000be800000400000003f800000;
  local_1278 = (undefined1  [8])___xmm_3f800000be800000400000003f800000;
  uStack_1270 = _UNK_15076b378;
  local_1288 = (undefined1  [8])___xmm_3f800000be800000400000003f800000;
  uStack_1280 = _UNK_15076b378;
  GScratch[4] = 5.0;
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadFloat3_W1",bVar25);
  local_1278 = (undefined1  [8])___xmm_bf000000bf000000bf000000bf000000;
  uStack_1270 = _UNK_150689728;
  local_1288 = (undefined1  [8])___xmm_bf000000bf000000bf000000bf000000;
  uStack_1280 = _UNK_150689728;
  GScratch[4] = 5.0;
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadFloat1",bVar25);
  GScratch[4] = 5.0;
  local_1278 = (undefined1  [8])uVar13;
  uStack_1270 = uVar14;
  local_1288 = (undefined1  [8])uVar13;
  uStack_1280 = uVar14;
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual3((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorSetFloat3",bVar25);
  local_1278 = (undefined1  [8])___xmm_40a00000bf000000be80000040000000;
  uStack_1270 = _UNK_15076c0b8;
  GScratch[4] = 5.0;
  local_1288 = (undefined1  [8])CONCAT44(fVar122,fVar108);
  uStack_1280 = CONCAT44(0x40a00000,fVar56);
  GScratch[0] = fVar92;
  GScratch[1] = fVar108;
  GScratch[2] = fVar122;
  GScratch[3] = fVar56;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorSet",bVar25);
  local_1278 = (undefined1  [8])uVar16;
  uStack_1270 = uVar17;
  GScratch[8] = (float)uVar16;
  GScratch[9] = (float)(uVar16 >> 0x20);
  GScratch[10] = (float)uVar17;
  GScratch[0xb] = (float)(uVar17 >> 0x20);
  local_1288 = (undefined1  [8])uVar16;
  uStack_1280 = uVar17;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorStoreAligned",bVar25);
  local_1278 = (undefined1  [8])___xmm_3f800000bf0ccccd400000003f800000;
  uStack_1270 = _UNK_15076b388;
  uStack_1280 = _UNK_15076b388;
  local_1288 = (undefined1  [8])___xmm_3f800000bf0ccccd400000003f800000;
  GScratch[7] = (float)___xmm_3f800000bf0ccccd400000003f800000;
  GScratch[8] = (float)(___xmm_3f800000bf0ccccd400000003f800000 >> 0x20);
  GScratch[9] = (float)_UNK_15076b388;
  GScratch[10] = (float)(_UNK_15076b388 >> 0x20);
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorStore",bVar25);
  GScratch[4] = 5.0;
  GScratch[0] = ___xmm_bf8000003f8000004040000040a00000;
  GScratch[1] = _UNK_15076c634;
  GScratch[2] = _UNK_15076c638;
  GScratch[3] = -0.5;
  local_1288._4_4_ = _UNK_15076c634;
  local_1288._0_4_ = ___xmm_bf8000003f8000004040000040a00000;
  uStack_1280._0_4_ = _UNK_15076c638;
  uStack_1280._4_4_ = 0xbf000000;
  local_1278 = (undefined1  [8])___xmm_bf0000003f8000004040000040a00000;
  uStack_1270 = _UNK_15076c5d8;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorStoreFloat3",bVar25);
  GScratch[0] = 1.0;
  GScratch[2] = -0.25;
  GScratch[3] = -0.5;
  GScratch[1] = 5.0;
  uStack_1280 = 0xbf000000be800000;
  local_1288 = (undefined1  [8])0x40a000003f800000;
  uStack_1270 = _UNK_15076c5f8;
  local_1278 = (undefined1  [8])___xmm_bf000000be80000040a000003f800000;
  GScratch[4] = 5.0;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorStoreFloat1",bVar25);
  TestVectorReplicate<float,__m128>();
  TestVectorSwizzle<float,__m128>();
  TestVectorShuffle<float,__m128>();
  uVar20 = _UNK_15076be0c;
  uVar19 = _UNK_15076be08;
  uVar18 = _UNK_15076be04;
  uVar27 = ___xmm_40400000400000003f80000000000000;
  local_1278._4_4_ = _UNK_15076be04;
  local_1278._0_4_ = ___xmm_40400000400000003f80000000000000;
  uStack_1270._0_4_ = _UNK_15076be08;
  uStack_1270._4_4_ = _UNK_15076be0c;
  local_1288._4_4_ = _UNK_15076bd94;
  local_1288._0_4_ = ___xmm_00000000000000004000000000000000;
  uStack_1280._0_4_ = _UNK_15076ace4;
  uStack_1280._4_4_ = _UNK_15076bd9c;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorGetComponent<float>",bVar25);
  uStack_1200 = _UNK_15076cb08;
  local_1208 = (undefined1  [8])___xmm_ffffffe000000012fffffff800000002;
  local_11a8.m128_u64[0] = ___xmm_ffffffe000000012fffffff800000002;
  local_11a8.m128_u64[1] = _UNK_15076cb08;
  bVar25 = TestVectorsEqualBitwise(&local_11a8,(__m128 *)local_1208);
  LogTest<int>(L"VectorIntMultiply",bVar25);
  uVar14 = _UNK_15076c058;
  uVar13 = ___xmm_4080000040400000400000003f800000;
  local_1288._4_4_ = _UNK_15076c8f4 & _UNK_15061cc74;
  local_1288._0_4_ =
       ___xmm_c080000040400000c00000003f800000 & __xmm_7fffffff7fffffff7fffffff7fffffff;
  uStack_1280._0_4_ = _UNK_15076c8f8 & _UNK_15061cc78;
  uStack_1280._4_4_ = _UNK_15076c8fc & _UNK_15061cc7c;
  local_1278 = (undefined1  [8])___xmm_4080000040400000400000003f800000;
  uStack_1270 = _UNK_15076c058;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorAbs",bVar25);
  local_1288 = (undefined1  [8])___xmm_40800000c040000040000000bf800000;
  uStack_1280 = _UNK_15076c078;
  local_1278 = (undefined1  [8])___xmm_40800000c040000040000000bf800000;
  uStack_1270 = _UNK_15076c078;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorNegate",bVar25);
  uVar53 = _UNK_15076c17c;
  uVar51 = _UNK_15076c178;
  uVar49 = _UNK_15076c174;
  uVar47 = ___xmm_4100000040c000004080000040000000;
  local_1288 = (undefined1  [8])___xmm_414000004110000040c0000040400000;
  uStack_1280 = _UNK_15076c228;
  local_1278 = (undefined1  [8])___xmm_414000004110000040c0000040400000;
  uStack_1270 = _UNK_15076c228;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorAdd",bVar25);
  uStack_1280 = uVar14;
  local_1288 = (undefined1  [8])uVar13;
  local_1278 = (undefined1  [8])uVar13;
  uStack_1270 = uVar14;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorSubtract",bVar25);
  fVar56 = _UNK_15076c2ac;
  fVar122 = _UNK_15076c2a8;
  fVar108 = _UNK_15076c2a4;
  fVar92 = ___xmm_42000000419000004100000040000000;
  local_e8._4_4_ = _UNK_15076c2a4;
  local_e8._0_4_ = ___xmm_42000000419000004100000040000000;
  uStack_e0._0_4_ = _UNK_15076c2a8;
  uStack_e0._4_4_ = _UNK_15076c2ac;
  local_1298._4_4_ = _UNK_15076c2a4;
  local_1298._0_4_ = ___xmm_42000000419000004100000040000000;
  uStack_1290._0_4_ = _UNK_15076c2a8;
  uStack_1290._4_4_ = _UNK_15076c2ac;
  bVar25 = TestVectorsEqual((__m128 *)local_1298,(__m128 *)local_e8,0.0);
  LogTest<float>(L"VectorMultiply",bVar25);
  local_e8._4_4_ = fVar108 + GlobalVectorConstants::FloatOne.m128_f32[1];
  local_e8._0_4_ = fVar92 + GlobalVectorConstants::FloatOne.m128_f32[0];
  uStack_e0._0_4_ = fVar122 + GlobalVectorConstants::FloatOne.m128_f32[2];
  uStack_e0._4_4_ = fVar56 + GlobalVectorConstants::FloatOne.m128_f32[3];
  local_1298 = (undefined1  [8])___xmm_42040000419800004110000040400000;
  uStack_1290 = _UNK_15076c2b8;
  bVar25 = TestVectorsEqual((__m128 *)local_1298,(__m128 *)local_e8,0.0);
  LogTest<float>(L"VectorMultiplyAdd",bVar25);
  uVar15 = _UNK_15076c278;
  uVar5 = ___xmm_41e0000041e0000041e0000041e00000;
  uStack_1270 = _UNK_15076c278;
  local_1278 = (undefined1  [8])___xmm_41e0000041e0000041e0000041e00000;
  fVar126 = fVar122 + fVar108 + fVar92;
  local_1288._4_4_ = fVar126;
  local_1288._0_4_ = fVar126;
  uStack_1280._0_4_ = fVar126;
  uStack_1280._4_4_ = fVar126;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorDot3",bVar25);
  fVar115 = _UNK_15076c3ac;
  fVar110 = _UNK_15076c3a8;
  fVar55 = _UNK_15076c3a4;
  fVar106 = ___xmm_42aa0000421c000041b0000040e00000;
  _Var119 = ___xmm_42880000428800004288000042880000;
  _local_1278 = ___xmm_42880000428800004288000042880000;
  fVar123 = _UNK_15076c3a8 + _UNK_15076c3a4 + ___xmm_42aa0000421c000041b0000040e00000;
  local_1288._4_4_ = fVar123;
  local_1288._0_4_ = fVar123;
  uStack_1280._0_4_ = fVar123;
  uStack_1280._4_4_ = fVar123;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorDot3",bVar25);
  uStack_1270 = uVar15;
  local_1278 = (undefined1  [8])uVar5;
  local_1288._4_4_ = fVar126;
  local_1288._0_4_ = fVar126;
  uStack_1280._0_4_ = fVar126;
  uStack_1280._4_4_ = fVar126;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorDot3Scalar",bVar25);
  _local_1278 = _Var119;
  local_1288._4_4_ = fVar123;
  local_1288._0_4_ = fVar123;
  uStack_1280._0_4_ = fVar123;
  uStack_1280._4_4_ = fVar123;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorDot3Scalar",bVar25);
  local_1288._4_4_ = fVar122 + fVar56 + fVar92 + fVar108;
  local_1288._0_4_ = fVar56 + fVar122 + fVar108 + fVar92;
  uStack_1280._0_4_ = fVar108 + fVar92 + fVar56 + fVar122;
  uStack_1280._4_4_ = fVar92 + fVar108 + fVar122 + fVar56;
  local_1278 = (undefined1  [8])___xmm_42700000427000004270000042700000;
  uStack_1270 = _UNK_15076c378;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorDot4",bVar25);
  fVar92 = fVar55 + fVar106;
  fVar106 = fVar106 + fVar55;
  fVar108 = fVar115 + fVar110;
  fVar110 = fVar110 + fVar115;
  local_1288._4_4_ = fVar110 + fVar106;
  local_1288._0_4_ = fVar108 + fVar92;
  uStack_1280._0_4_ = fVar92 + fVar108;
  uStack_1280._4_4_ = fVar106 + fVar110;
  local_1278 = (undefined1  [8])___xmm_43190000431900004319000043190000;
  uStack_1270 = _UNK_15076c3e8;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorDot4",bVar25);
  local_1278 = (undefined1  [8])___xmm_00000000400000000000000000000000;
  uStack_1270 = _UNK_15076aed8;
  local_1288._4_4_ =
       ___xmm_40800000000000004000000000000000 * _UNK_15076c118 -
       ___xmm_4100000000000000000000003f800000 * _UNK_15076c028;
  local_1288._0_4_ = _UNK_15076c028 * _UNK_15076c114 - _UNK_15076c118 * _UNK_15076c024;
  uStack_1280._0_4_ =
       _UNK_15076c024 * ___xmm_4100000000000000000000003f800000 -
       _UNK_15076c114 * ___xmm_40800000000000004000000000000000;
  uStack_1280._4_4_ = _UNK_15076c02c * _UNK_15076c11c - _UNK_15076c11c * _UNK_15076c02c;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorCross",bVar25);
  uStack_1270 = _UNK_15076afd8;
  local_1278 = (undefined1  [8])___xmm_00000000c040000040c00000c0400000;
  local_1288._4_4_ =
       ___xmm_4080000040e0000040c0000040a00000 * _UNK_15076c158 -
       ___xmm_41000000408000004040000040000000 * _UNK_15076c068;
  local_1288._0_4_ = _UNK_15076c068 * _UNK_15076c154 - _UNK_15076c158 * _UNK_15076c064;
  uStack_1280._0_4_ =
       _UNK_15076c064 * ___xmm_41000000408000004040000040000000 -
       _UNK_15076c154 * ___xmm_4080000040e0000040c0000040a00000;
  uStack_1280._4_4_ = _UNK_15076c06c * _UNK_15076c15c - _UNK_15076c15c * _UNK_15076c06c;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorCross",bVar25);
  uVar15 = _UNK_15076b328;
  uVar5 = ___xmm_3f800000400000004040000040800000;
  __vdecl_powf4();
  _local_1278 = ___xmm_41000000421000004280000041800000;
  _Var125 = ___xmm_41000000421000004280000041800000;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,__real_3a83126f);
  LogTest<float>(L"VectorPow",bVar25);
  afVar21 = ___xmm_c000000040000000c000000040000000;
  fVar92 = __real_3b83126f;
  uStack_1280 = _UNK_15076b0c8;
  local_1288 = (undefined1  [8])___xmm_3e8000003e8000003e8000003e800000;
  local_1278 = (undefined1  [8])___xmm_3e8000003e8000003e8000003e800000;
  uStack_1270 = _UNK_15076b0c8;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,__real_3b83126f);
  LogTest<float>(L"VectorReciprocalLenEstimate",bVar25);
  auVar118 = sqrtps((undefined1  [16])_Var119,___xmm_41800000418000004180000041800000);
  _local_1288 = (float  [4])divps(GlobalVectorConstants::FloatOne.m128_f32,auVar118);
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,__real_38d1b717);
  LogTest<float>(L"VectorReciprocalLenAccurate",bVar25);
  uVar14 = _UNK_15076c5c8;
  uVar13 = ___xmm_bf0000003f000000bf0000003f000000;
  uStack_1280 = _UNK_15076c5c8;
  local_1288 = (undefined1  [8])___xmm_bf0000003f000000bf0000003f000000;
  uStack_1270 = _UNK_15076c5c8;
  local_1278 = (undefined1  [8])___xmm_bf0000003f000000bf0000003f000000;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,fVar92);
  LogTest<float>(L"VectorNormalizeEstimate",bVar25);
  fVar92 = __real_322bcc77;
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_1288._4_4_ = auVar118._4_4_ * afVar21[1];
  local_1288._0_4_ = auVar118._0_4_ * afVar21[0];
  uStack_1280._0_4_ = auVar118._8_4_ * afVar21[2];
  uStack_1280._4_4_ = auVar118._12_4_ * afVar21[3];
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,__real_322bcc77);
  p_Var30 = (__m128 *)(ulonglong)bVar25;
  LogTest<float>(L"VectorNormalizeAccurate",bVar25);
  afVar22 = ___xmm_c000000040000000c000000040000000;
  ___xmm_c000000040000000c000000040000000 = afVar21[0];
  _UNK_15076c7a4 = afVar21[1];
  _UNK_15076c7a8 = afVar21[2];
  _UNK_15076c7ac = afVar21[3];
  local_1278._0_4_ = ___xmm_c000000040000000c000000040000000;
  local_1278._4_4_ = _UNK_15076c7a4;
  uStack_1270._0_4_ = _UNK_15076c7a8;
  uStack_1270._4_4_ = _UNK_15076c7ac;
  ___xmm_c000000040000000c000000040000000 = afVar22;
  TestVectorNormalize_Sqrt((__m128 *)local_1278,p_Var30);
  uStack_1270 = uVar14;
  local_1278 = (undefined1  [8])uVar13;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,fVar92);
  p_Var30 = (__m128 *)(ulonglong)bVar25;
  LogTest<float>(L"TestVectorNormalize_Sqrt",bVar25);
  afVar22 = ___xmm_c000000040000000c000000040000000;
  ___xmm_c000000040000000c000000040000000 = afVar21[0];
  _UNK_15076c7a4 = afVar21[1];
  _UNK_15076c7a8 = afVar21[2];
  _UNK_15076c7ac = afVar21[3];
  local_1278._0_4_ = ___xmm_c000000040000000c000000040000000;
  local_1278._4_4_ = _UNK_15076c7a4;
  uStack_1270._0_4_ = _UNK_15076c7a8;
  uStack_1270._4_4_ = _UNK_15076c7ac;
  ___xmm_c000000040000000c000000040000000 = afVar22;
  TestVectorNormalize_InvSqrt((__m128 *)local_1278,p_Var30);
  uStack_1270 = uVar14;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,fVar92);
  p_Var30 = (__m128 *)(ulonglong)bVar25;
  LogTest<float>(L"TestVectorNormalize_InvSqrt",bVar25);
  afVar22 = ___xmm_c000000040000000c000000040000000;
  ___xmm_c000000040000000c000000040000000 = afVar21[0];
  _UNK_15076c7a4 = afVar21[1];
  _UNK_15076c7a8 = afVar21[2];
  _UNK_15076c7ac = afVar21[3];
  local_1278._0_4_ = ___xmm_c000000040000000c000000040000000;
  local_1278._4_4_ = _UNK_15076c7a4;
  uStack_1270._0_4_ = _UNK_15076c7a8;
  uStack_1270._4_4_ = _UNK_15076c7ac;
  ___xmm_c000000040000000c000000040000000 = afVar22;
  TestVectorNormalize_InvSqrtEst((__m128 *)local_1278,p_Var30);
  uStack_1270 = uVar14;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,__real_358637bd);
  LogTest<float>(L"TestVectorNormalize_InvSqrtEst",bVar25);
  _local_1288 = (float  [4])insertps(afVar21,afVar21,8);
  local_1278 = (undefined1  [8])___xmm_0000000040000000c000000040000000;
  uStack_1270 = _UNK_15076aee8;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorSet_W0",bVar25);
  _local_1288 = (float  [4])blendps(afVar21,GlobalVectorConstants::FloatOne.m128_f32,8);
  local_1278 = (undefined1  [8])___xmm_3f80000040000000c000000040000000;
  uStack_1270 = _UNK_15076b348;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorSet_W1",bVar25);
  local_1288 = (undefined1  [8])___xmm_3f800000400000004040000040000000;
  uStack_1280 = _UNK_15076b318;
  local_1278 = (undefined1  [8])___xmm_3f800000400000004040000040000000;
  uStack_1270 = _UNK_15076b318;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorMin",bVar25);
  uStack_1280 = _UNK_15076c188;
  local_1288 = (undefined1  [8])___xmm_4100000040c000004080000040800000;
  local_1278 = (undefined1  [8])___xmm_4100000040c000004080000040800000;
  uStack_1270 = _UNK_15076c188;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorMax",bVar25);
  local_e8 = (undefined1  [8])___xmm_40a00000bf80000040800000c0000000;
  uStack_e0 = _UNK_15076c0c8;
  local_1298 = (undefined1  [8])___xmm_40a00000bf80000040800000c0000000;
  uStack_1290 = _UNK_15076c0c8;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorClamp",bVar25);
  uVar54 = _UNK_15076c0fc;
  uVar52 = _UNK_15076c0f8;
  uVar50 = _UNK_15076c0f4;
  uVar48 = ___xmm_40e0000040a00000404000003f800000;
  local_1288._4_4_ = _UNK_15076c0fc;
  local_1288._0_4_ = _UNK_15076c0f8;
  uStack_1280._0_4_ = uVar51;
  uStack_1280._4_4_ = uVar53;
  local_1278 = (undefined1  [8])___xmm_4100000040c0000040e0000040a00000;
  uStack_1270 = _UNK_15076c198;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorCombineHigh",bVar25);
  local_1288._4_4_ = uVar50;
  local_1288._0_4_ = uVar48;
  uStack_1280._0_4_ = uVar47;
  uStack_1280._4_4_ = uVar49;
  uStack_1270 = _UNK_15076c048;
  local_1278 = (undefined1  [8])___xmm_4080000040000000404000003f800000;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorCombineLow",bVar25);
  auVar118 = pmovzxbd((undefined1  [16])_Var125,ZEXT416(0xc87d4b19));
  local_1288 = (undefined1  [8])___xmm_4348000042fa00004296000041c80000;
  uStack_1280 = _UNK_15076c418;
  local_1278._4_4_ = (float)auVar118._4_4_;
  local_1278._0_4_ = (float)auVar118._0_4_;
  uStack_1270._0_4_ = (float)auVar118._8_4_;
  uStack_1270._4_4_ = (float)auVar118._12_4_;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadByte4",bVar25);
  uStack_1280 = _UNK_15076c268;
  local_1288 = (undefined1  [8])___xmm_41c800004296000042fa000043480000;
  local_1278._4_4_ = (float)auVar118._8_4_;
  local_1278._0_4_ = (float)auVar118._12_4_;
  uStack_1270._0_4_ = (float)auVar118._4_4_;
  uStack_1270._4_4_ = (float)auVar118._0_4_;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadByte4Reverse",bVar25);
  auVar118 = packssdw(___xmm_00000001000000020000000300000004,
                      ___xmm_00000001000000020000000300000004);
  sVar8 = auVar118._0_2_;
  sVar9 = auVar118._2_2_;
  sVar10 = auVar118._4_2_;
  sVar11 = auVar118._6_2_;
  auVar118 = ZEXT416(CONCAT13((0 < sVar11) * (sVar11 < 0x100) * auVar118[6] - (0xff < sVar11),
                              CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar118[4] -
                                       (0xff < sVar10),
                                       CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar118[2] -
                                                (0xff < sVar9),
                                                (0 < sVar8) * (sVar8 < 0x100) * auVar118[0] -
                                                (0xff < sVar8)))));
  uStack_1270 = uVar15;
  local_1278 = (undefined1  [8])uVar5;
  auVar118 = pmovzxbd(auVar118,auVar118);
  _Var119._0_4_ = (float)auVar118._0_4_;
  _Var119._4_4_ = (float)auVar118._4_4_;
  _Var119._8_4_ = (float)auVar118._8_4_;
  _Var119._12_4_ = (float)auVar118._12_4_;
  _local_1288 = _Var119;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorStoreByte4",bVar25);
  auVar118 = pmovsxbd((undefined1  [16])_Var119,ZEXT416(0xce7db519));
  uStack_1280 = _UNK_15076c9b8;
  local_1288 = (undefined1  [8])___xmm_c248000042fa0000c296000041c80000;
  local_1278._4_4_ = (float)auVar118._4_4_;
  local_1278._0_4_ = (float)auVar118._0_4_;
  uStack_1270._0_4_ = (float)auVar118._8_4_;
  uStack_1270._4_4_ = (float)auVar118._12_4_;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadSignedByte4",bVar25);
  uStack_1270 = _UNK_15076b398;
  local_1278 = (undefined1  [8])___xmm_3f800000c000000040400000c0800000;
  auVar118 = packssdw(___xmm_00000001fffffffe00000003fffffffc,
                      ___xmm_00000001fffffffe00000003fffffffc);
  auVar118 = packsswb(auVar118,auVar118);
  auVar118 = pmovsxbd(ZEXT416(auVar118._0_4_),ZEXT416(auVar118._0_4_));
  _Var125._0_4_ = (float)auVar118._0_4_;
  _Var125._4_4_ = (float)auVar118._4_4_;
  _Var125._8_4_ = (float)auVar118._8_4_;
  _Var125._12_4_ = (float)auVar118._12_4_;
  _local_1288 = _Var125;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorStoreSignedByte4",bVar25);
  local_e8 = (undefined1  [8])0xfa000d80092904d2;
  auVar118 = pmovzxwd((undefined1  [16])_Var125,0xfa000d80092904d2);
  uStack_1280 = _UNK_15076c4b8;
  local_1288 = (undefined1  [8])___xmm_477a00004558000045129000449a4000;
  local_1278._4_4_ = (float)auVar118._4_4_;
  local_1278._0_4_ = (float)auVar118._0_4_;
  uStack_1270._0_4_ = (float)auVar118._8_4_;
  uStack_1270._4_4_ = (float)auVar118._12_4_;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadURGBA16N",bVar25);
  auVar118._0_4_ = (int)(float)__xmm_477fff00436a000042f6000000000000;
  auVar118._4_4_ = (int)__xmm_477fff00436a000042f6000000000000._4_4_;
  auVar118._8_4_ = (int)__xmm_477fff00436a000042f6000000000000._8_4_;
  auVar118._12_4_ = (int)__xmm_477fff00436a000042f6000000000000._12_4_;
  local_1278._0_4_ = ___xmm_477fff00436a000042f6000000000000;
  local_1278._4_4_ = _UNK_15076c4c4;
  uStack_1270._0_4_ = _UNK_15076c4c8;
  uStack_1270._4_4_ = _UNK_15076c4cc;
  auVar118 = packusdw(auVar118,auVar118);
  auVar59._0_8_ = auVar118._0_8_;
  auVar59._8_8_ = 0;
  auVar118 = pmovzxwd((undefined1  [16])___xmm_477fff00436a000042f6000000000000,auVar59);
  local_1288._4_4_ = (float)auVar118._4_4_;
  local_1288._0_4_ = (float)auVar118._0_4_;
  uStack_1280._0_4_ = (float)auVar118._8_4_;
  uStack_1280._4_4_ = (float)auVar118._12_4_;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorStoreURGBA16N",bVar25);
  local_e8 = (undefined1  [8])0x810c0d80f6d704d2;
  auVar118 = pmovsxwd(auVar118,0x810c0d80f6d704d2);
  local_1288 = (undefined1  [8])___xmm_c6fde80045580000c5129000449a4000;
  uStack_1280 = _UNK_15076ca78;
  local_1278._4_4_ = (float)auVar118._4_4_;
  local_1278._0_4_ = (float)auVar118._0_4_;
  uStack_1270._0_4_ = (float)auVar118._8_4_;
  uStack_1270._4_4_ = (float)auVar118._12_4_;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadSRGBA16N",bVar25);
  iVar26 = movmskps(extraout_EAX,___xmm_ffffffffffffffffffffffff00000000);
  LogTest<float>(L"VectorAnyGreaterThan-true",iVar26 != 0);
  _Var119 = ___xmm_00000000ffffffff0000000000000000;
  iVar26 = movmskps(extraout_EAX_00,(undefined1  [16])___xmm_00000000ffffffff0000000000000000);
  LogTest<float>(L"VectorAnyGreaterThan-true",iVar26 != 0);
  LogTest<float>(L"VectorAnyGreaterThan-false",true);
  iVar26 = movmskps(extraout_EAX_01,(undefined1  [16])afVar12);
  LogTest<float>(L"VectorAnyLesserThan-true",iVar26 != 0);
  LogTest<float>(L"VectorAnyLesserThan-false",true);
  LogTest<float>(L"VectorAllGreaterThan-true",true);
  iVar26 = movmskps(extraout_EAX_02,___xmm_0000000000000000ffffffff00000000);
  LogTest<float>(L"VectorAllGreaterThan-false",iVar26 != 0);
  LogTest<float>(L"VectorAllLesserThan-true",true);
  iVar26 = movmskps(extraout_EAX_03,___xmm_000000000000000000000000ffffffff);
  LogTest<float>(L"VectorAllLesserThan-false",iVar26 != 0);
  fVar115 = _UNK_15076c13c;
  fVar110 = _UNK_15076c138;
  fVar55 = _UNK_15076c134;
  fVar106 = ___xmm_4100000040000000404000003f800000;
  fVar56 = _UNK_15076b33c;
  fVar122 = _UNK_15076b338;
  fVar108 = _UNK_15076b334;
  fVar92 = ___xmm_3f800000400000004080000040000000;
  uStack_e0 = _UNK_15076cb18;
  local_e8 = (undefined1  [8])___xmm_ffffffff000000000000000000000000;
  local_1298 = (undefined1  [8])___xmm_ffffffff000000000000000000000000;
  uStack_1290 = _UNK_15076cb18;
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareGT",bVar25);
  fVar123 = afVar12[0];
  fVar126 = afVar12[1];
  fVar116 = afVar12[2];
  fVar113 = afVar12[3];
  _local_1298 = (__m128)ZEXT816(0);
  local_e8._4_4_ = -(uint)(fVar126 < fVar55);
  local_e8._0_4_ = -(uint)(fVar123 < fVar106);
  uStack_e0._0_4_ = -(uint)(fVar116 < fVar110);
  uStack_e0._4_4_ = -(uint)(fVar113 < fVar115);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareGT (NaN)",bVar25);
  local_e8._4_4_ = -(uint)(fVar55 < fVar126);
  local_e8._0_4_ = -(uint)(fVar106 < fVar123);
  uStack_e0._0_4_ = -(uint)(fVar110 < fVar116);
  uStack_e0._4_4_ = -(uint)(fVar115 < fVar113);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareGT (NaN)",bVar25);
  uVar14 = _UNK_15076cb68;
  uVar13 = ___xmm_ffffffffffffffff0000000000000000;
  uStack_e0 = _UNK_15076cb68;
  local_e8 = (undefined1  [8])___xmm_ffffffffffffffff0000000000000000;
  local_1298 = (undefined1  [8])___xmm_ffffffffffffffff0000000000000000;
  uStack_1290 = _UNK_15076cb68;
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareGE",bVar25);
  _local_1298 = (__m128)ZEXT816(0);
  local_e8._4_4_ = -(uint)(fVar126 <= fVar55);
  local_e8._0_4_ = -(uint)(fVar123 <= fVar106);
  uStack_e0._0_4_ = -(uint)(fVar116 <= fVar110);
  uStack_e0._4_4_ = -(uint)(fVar113 <= fVar115);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareGE (NaN)",bVar25);
  uStack_e0 = _UNK_15076cb18;
  local_e8 = (undefined1  [8])___xmm_ffffffff000000000000000000000000;
  local_1298 = (undefined1  [8])___xmm_ffffffff000000000000000000000000;
  uStack_1290 = _UNK_15076cb18;
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareLT",bVar25);
  _local_1298 = (__m128)ZEXT816(0);
  local_e8._4_4_ = -(uint)(fVar108 < fVar126);
  local_e8._0_4_ = -(uint)(fVar92 < fVar123);
  uStack_e0._0_4_ = -(uint)(fVar122 < fVar116);
  uStack_e0._4_4_ = -(uint)(fVar56 < fVar113);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareLT (NaN)",bVar25);
  local_e8._4_4_ = -(uint)(fVar126 < fVar108);
  local_e8._0_4_ = -(uint)(fVar123 < fVar92);
  uStack_e0._0_4_ = -(uint)(fVar116 < fVar122);
  uStack_e0._4_4_ = -(uint)(fVar113 < fVar56);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareLT (NaN)",bVar25);
  uStack_e0 = uVar14;
  local_e8 = (undefined1  [8])uVar13;
  local_1298 = (undefined1  [8])uVar13;
  uStack_1290 = uVar14;
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareLE",bVar25);
  _local_1298 = (__m128)ZEXT816(0);
  local_e8._4_4_ = -(uint)(fVar108 <= fVar126);
  local_e8._0_4_ = -(uint)(fVar92 <= fVar123);
  uStack_e0._0_4_ = -(uint)(fVar122 <= fVar116);
  uStack_e0._4_4_ = -(uint)(fVar56 <= fVar113);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareLE (NaN)",bVar25);
  _local_e8 = _Var119;
  _local_1298 = _Var119;
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareEQ",bVar25);
  _local_1298 = (__m128)ZEXT816(0);
  local_e8._4_4_ = -(uint)(fVar55 == fVar126);
  local_e8._0_4_ = -(uint)(fVar106 == fVar123);
  uStack_e0._0_4_ = -(uint)(fVar110 == fVar116);
  uStack_e0._4_4_ = -(uint)(fVar115 == fVar113);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareEQ (NaN)",bVar25);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareEQ (NaN)",bVar25);
  uStack_e0 = _UNK_15076cb38;
  local_e8 = (undefined1  [8])___xmm_ffffffff00000000ffffffffffffffff;
  uStack_1290 = _UNK_15076cb38;
  local_1298 = (undefined1  [8])___xmm_ffffffff00000000ffffffffffffffff;
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareNE",bVar25);
  _local_1298 = afVar12;
  local_e8._4_4_ = -(uint)(fVar55 != fVar126);
  local_e8._0_4_ = -(uint)(fVar106 != fVar123);
  uStack_e0._0_4_ = -(uint)(fVar110 != fVar116);
  uStack_e0._4_4_ = -(uint)(fVar115 != fVar113);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareNE (NaN)",bVar25);
  bVar25 = TestVectorsEqualBitwise((__m128 *)local_e8,(__m128 *)local_1298);
  LogTest<float>(L"VectorCompareNE (NaN)",bVar25);
  local_e8._4_4_ = ~_UNK_15076cb24 & (uint)fVar108 | _UNK_15076cb24 & (uint)fVar55;
  local_e8._0_4_ =
       ~___xmm_ffffffff0000000000000000ffffffff & (uint)fVar92 |
       ___xmm_ffffffff0000000000000000ffffffff & (uint)fVar106;
  uStack_e0._0_4_ = ~_UNK_15076cb28 & (uint)fVar122 | _UNK_15076cb28 & (uint)fVar110;
  uStack_e0._4_4_ = ~_UNK_15076cb2c & (uint)fVar56 | _UNK_15076cb2c & (uint)fVar115;
  local_1298 = (undefined1  [8])___xmm_4100000040000000408000003f800000;
  uStack_1290 = _UNK_15076c148;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorSelect",bVar25);
  local_e8._4_4_ = _UNK_15076b004 & uVar50 | ~_UNK_15076b004 & uVar49;
  local_e8._0_4_ =
       ___xmm_00000000ffffffffffffffff00000000 & uVar48 |
       ~___xmm_00000000ffffffffffffffff00000000 & uVar47;
  uStack_e0._0_4_ = _UNK_15076b008 & uVar52 | ~_UNK_15076b008 & uVar51;
  uStack_e0._4_4_ = _UNK_15076b00c & uVar54 | ~_UNK_15076b00c & uVar53;
  local_1298 = (undefined1  [8])___xmm_4100000040a000004040000040000000;
  uStack_1290 = _UNK_15076c168;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorSelect",bVar25);
  local_e8 = (undefined1  [8])___xmm_3f80000040000000404000003f800000;
  uStack_e0 = _UNK_15076b308;
  local_1298 = (undefined1  [8])___xmm_3f80000040000000404000003f800000;
  uStack_1290 = _UNK_15076b308;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorBitwiseOr-Float1",bVar25);
  uStack_e0 = _UNK_150651578 | _UNK_15076c308;
  local_e8 = (undefined1  [8])
             (CONCAT44(_UNK_150651574,__xmm_80000000800000008000000080000000) |
             ___xmm_4210000041c00000404000003f800000);
  local_1298 = (undefined1  [8])___xmm_c2100000c1c00000c0400000bf800000;
  uStack_1290 = _UNK_15076c978;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorBitwiseOr-Float2",bVar25);
  auVar118 = ___xmm_42100000c1c00000c0400000bf800000;
  uVar47 = (uint)__xmm_42100000c1c00000c0400000bf800000;
  uVar49 = __xmm_42100000c1c00000c0400000bf800000._4_4_;
  uVar51 = __xmm_42100000c1c00000c0400000bf800000._8_4_;
  uVar53 = __xmm_42100000c1c00000c0400000bf800000._12_4_;
  local_e8._4_4_ = _UNK_15076cb44 & uVar49;
  local_e8._0_4_ = ___xmm_ffffffff7fffffff7fffffffffffffff & uVar47;
  uStack_e0._0_4_ = _UNK_15076cb48 & uVar51;
  uStack_e0._4_4_ = _UNK_15076cb4c & uVar53;
  local_1298 = (undefined1  [8])___xmm_4210000041c0000040400000bf800000;
  uStack_1290 = _UNK_15076c318;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorBitwiseAnd-Float",bVar25);
  local_e8._4_4_ = _UNK_15076c584 ^ uVar49;
  local_e8._0_4_ = ___xmm_80000000800000000000000080000000 ^ uVar47;
  uStack_e0._0_4_ = _UNK_15076c588 ^ uVar51;
  uStack_e0._4_4_ = _UNK_15076c58c ^ uVar53;
  local_1298 = (undefined1  [8])___xmm_c210000041c00000c04000003f800000;
  uStack_1290 = _UNK_15076c968;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorBitwiseXor-Float",bVar25);
  auVar59 = ___xmm_4240000041b80000420c000040a00000;
  _local_e8 = (__m128)blendps(auVar118,___xmm_4240000041b80000420c000040a00000,8);
  local_1298 = (undefined1  [8])___xmm_42400000c1c00000c0400000bf800000;
  uStack_1290 = _UNK_15076c358;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorMergeXYZ_VecW-1",bVar25);
  _local_e8 = (__m128)blendps(auVar59,auVar118,8);
  uStack_1290 = _UNK_15076c2f8;
  local_1298 = (undefined1  [8])___xmm_4210000041b80000420c000040a00000;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorMergeXYZ_VecW-2",bVar25);
  auVar118 = ___xmm_420c0000325f569b497424003f800000;
  auVar59 = rcpps(extraout_XMM0,___xmm_420c0000325f569b497424003f800000);
  fVar108 = (float)__xmm_420c0000325f569b497424003f800000;
  fVar122 = __xmm_420c0000325f569b497424003f800000._4_4_;
  fVar56 = __xmm_420c0000325f569b497424003f800000._8_4_;
  fVar106 = __xmm_420c0000325f569b497424003f800000._12_4_;
  local_1298._4_4_ = auVar59._4_4_ * fVar122;
  local_1298._0_4_ = auVar59._0_4_ * fVar108;
  uStack_1290._0_4_ = auVar59._8_4_ * fVar56;
  uStack_1290._4_4_ = auVar59._12_4_ * fVar106;
  _local_1208 = GlobalVectorConstants::FloatOne;
  bVar25 = TestVectorsEqual((__m128 *)local_1208,(__m128 *)local_1298,__real_3c03126f);
  LogTest<float>(L"VectorReciprocalEstimate",bVar25);
  _local_1208 = GlobalVectorConstants::FloatOne;
  local_1298._4_4_ = _UNK_15076b1d4 * GlobalVectorConstants::FloatOne.m128_f32[1];
  local_1298._0_4_ =
       ___xmm_3f8000003f7fffff3f8000003f800000 * GlobalVectorConstants::FloatOne.m128_f32[0];
  uStack_1290._0_4_ = _UNK_15076b1d8 * GlobalVectorConstants::FloatOne.m128_f32[2];
  uStack_1290._4_4_ = _UNK_15076b1dc * GlobalVectorConstants::FloatOne.m128_f32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_1208,(__m128 *)local_1298,__real_33d6bf95);
  LogTest<float>(L"VectorReciprocalAccurate",bVar25);
  uStack_1290 = _UNK_15076b178;
  local_1298 = (undefined1  [8])___xmm_3f7fffff3f7fffff3f8000013f800000;
  _local_1208 = GlobalVectorConstants::FloatOne;
  bVar25 = TestVectorsEqual((__m128 *)local_1208,(__m128 *)local_1298,__real_3be56042);
  LogTest<float>(L"VectorReciprocalSqrtEstimate",bVar25);
  fVar92 = __real_358637bd;
  auVar118 = sqrtps(extraout_XMM0_00,auVar118);
  _local_1208 = GlobalVectorConstants::FloatOne;
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_1298._4_4_ = auVar118._4_4_ * auVar118._4_4_ * fVar122;
  local_1298._0_4_ = auVar118._0_4_ * auVar118._0_4_ * fVar108;
  uStack_1290._0_4_ = auVar118._8_4_ * auVar118._8_4_ * fVar56;
  uStack_1290._4_4_ = auVar118._12_4_ * auVar118._12_4_ * fVar106;
  bVar25 = TestVectorsEqual((__m128 *)local_1208,(__m128 *)local_1298,__real_358637bd);
  LogTest<float>(L"VectorReciprocalSqrtAccurate",bVar25);
  GScratch[0] = (float)___xmm_4080000040400000400000003f800000;
  GScratch[1] = (float)(___xmm_4080000040400000400000003f800000 >> 0x20);
  GScratch[2] = (float)_UNK_15076c058;
  GScratch[3] = (float)(_UNK_15076c058 >> 0x20);
  GScratch[4] = 0.0;
  uStack_1270 = CONCAT44(GScratch[2],GScratch[1]);
  local_1278 = (undefined1  [8])___xmm_4080000040400000400000003f800000;
  uStack_1280 = _UNK_15076be38;
  local_1288 = (undefined1  [8])___xmm_4040000040000000400000003f800000;
  bVar25 = TestVectorsEqual((__m128 *)local_1278,(__m128 *)local_1288,0.0);
  LogTest<float>(L"VectorLoadTwoPairsFloat",bVar25);
  local_1288._4_4_ = uVar50;
  local_1288._0_4_ = uVar48;
  uStack_1280._0_4_ = uVar52;
  uStack_1280._4_4_ = uVar54;
  local_e8._4_4_ = uVar19;
  local_e8._0_4_ = uVar27;
  uStack_e0._0_4_ = __xmm_40e0000040c0000040a0000040800000;
  uStack_e0._4_4_ = DAT_15076c108;
  uStack_1270 = _UNK_15076c0d8;
  local_1278 = (undefined1  [8])___xmm_40c00000408000004000000000000000;
  local_1298._4_4_ = uVar20;
  local_1298._0_4_ = uVar18;
  uStack_1290._0_4_ = DAT_15076c104;
  uStack_1290._4_4_ = DAT_15076c10c;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1278,0.0);
  if ((bVar25) && (bVar25 = TestVectorsEqual((__m128 *)local_1298,(__m128 *)local_1288,0.0), bVar25)
     ) {
    bVar25 = true;
  }
  else {
    bVar25 = false;
  }
  LogTest<float>(L"VectorDeinterleave",bVar25);
  uVar53 = _UNK_15076be1c;
  uVar51 = _UNK_15076be18;
  uVar49 = _UNK_15076be14;
  uVar47 = ___xmm_40400000400000003f99999a40000000;
  local_1278 = (undefined1  [8])___xmm_3fc0000040333333404ccccd00000000;
  uStack_1270 = _UNK_15076b6d8;
  local_1288._4_4_ = _UNK_15076be14;
  local_1288._0_4_ = ___xmm_40400000400000003f99999a40000000;
  uStack_1280._0_4_ = _UNK_15076be18;
  uStack_1280._4_4_ = _UNK_15076be1c;
  TestReferenceMod((__m128 *)local_1278,(__m128 *)local_1288,in_R8);
  uVar54 = _UNK_15061cc7c;
  uVar52 = _UNK_15061cc78;
  uVar50 = _UNK_15061cc74;
  uVar48 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar47 = -(uint)((float)(uVar47 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                  GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar49 = -(uint)((float)(uVar49 & _UNK_15061cc74) <=
                  GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar51 = -(uint)((float)(uVar51 & _UNK_15061cc78) <=
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar53 = -(uint)((float)(uVar53 & _UNK_15061cc7c) <=
                  GlobalVectorConstants::SmallNumber.m128_f32[3]);
  __vdecl_fmodf4();
  local_1298._4_4_ =
       ~uVar49 & extraout_XMM0_Db | uVar49 & GlobalVectorConstants::FloatZero.m128_u32[1];
  local_1298._0_4_ =
       ~uVar47 & extraout_XMM0_Da | uVar47 & GlobalVectorConstants::FloatZero.m128_u32[0];
  uStack_1290._0_4_ =
       ~uVar51 & extraout_XMM0_Dc | uVar51 & GlobalVectorConstants::FloatZero.m128_u32[2];
  uStack_1290._4_4_ =
       ~uVar53 & extraout_XMM0_Dd | uVar53 & GlobalVectorConstants::FloatZero.m128_u32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorMod positive",bVar25);
  uVar53 = _UNK_15076be6c;
  uVar51 = _UNK_15076be68;
  uVar49 = _UNK_15076be64;
  uVar47 = ___xmm_4040000040000000bf99999abfc00000;
  uStack_1270 = _UNK_15076c688;
  local_1278 = (undefined1  [8])___xmm_bfc00000c0333333404ccccdc0000000;
  local_1288._4_4_ = _UNK_15076be64;
  local_1288._0_4_ = ___xmm_4040000040000000bf99999abfc00000;
  uStack_1280._0_4_ = _UNK_15076be68;
  uStack_1280._4_4_ = _UNK_15076be6c;
  TestReferenceMod((__m128 *)local_1278,(__m128 *)local_1288,in_R8);
  uVar47 = -(uint)((float)(uVar47 & uVar48) <= GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar49 = -(uint)((float)(uVar49 & uVar50) <= GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar51 = -(uint)((float)(uVar51 & uVar52) <= GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar53 = -(uint)((float)(uVar53 & uVar54) <= GlobalVectorConstants::SmallNumber.m128_f32[3]);
  __vdecl_fmodf4();
  local_1298._4_4_ =
       ~uVar49 & extraout_XMM0_Db_00 | uVar49 & GlobalVectorConstants::FloatZero.m128_u32[1];
  local_1298._0_4_ =
       ~uVar47 & extraout_XMM0_Da_00 | uVar47 & GlobalVectorConstants::FloatZero.m128_u32[0];
  uStack_1290._0_4_ =
       ~uVar51 & extraout_XMM0_Dc_00 | uVar51 & GlobalVectorConstants::FloatZero.m128_u32[2];
  uStack_1290._4_4_ =
       ~uVar53 & extraout_XMM0_Dd_00 | uVar53 & GlobalVectorConstants::FloatZero.m128_u32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorMod negative",bVar25);
  afVar12 = ___xmm_c3870ccdc38000004334000042b3cccd;
  uVar53 = _UNK_15076c40c;
  uVar51 = _UNK_15076c408;
  uVar49 = _UNK_15076c404;
  uVar47 = ___xmm_4334000043b400003dcccccd43b40000;
  local_1278._0_4_ = ___xmm_c3870ccdc38000004334000042b3cccd;
  local_1278._4_4_ = _UNK_15076ca24;
  uStack_1270._0_4_ = _UNK_15076ca28;
  uStack_1270._4_4_ = _UNK_15076ca2c;
  local_1288._4_4_ = _UNK_15076c404;
  local_1288._0_4_ = ___xmm_4334000043b400003dcccccd43b40000;
  uStack_1280._0_4_ = _UNK_15076c408;
  uStack_1280._4_4_ = _UNK_15076c40c;
  TestReferenceMod((__m128 *)local_1278,(__m128 *)local_1288,in_R8);
  uVar47 = -(uint)((float)(uVar47 & uVar48) <= GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar50 = -(uint)((float)(uVar49 & uVar50) <= GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar52 = -(uint)((float)(uVar51 & uVar52) <= GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar54 = -(uint)((float)(uVar53 & uVar54) <= GlobalVectorConstants::SmallNumber.m128_f32[3]);
  __vdecl_fmodf4();
  local_1298._4_4_ =
       ~uVar50 & extraout_XMM0_Db_01 | uVar50 & GlobalVectorConstants::FloatZero.m128_u32[1];
  local_1298._0_4_ =
       ~uVar47 & extraout_XMM0_Da_01 | uVar47 & GlobalVectorConstants::FloatZero.m128_u32[0];
  uStack_1290._0_4_ =
       ~uVar52 & extraout_XMM0_Dc_01 | uVar52 & GlobalVectorConstants::FloatZero.m128_u32[2];
  uStack_1290._4_4_ =
       ~uVar54 & extraout_XMM0_Dd_01 | uVar54 & GlobalVectorConstants::FloatZero.m128_u32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorMod common",bVar25);
  _Var119 = GlobalVectorConstants::Float360;
  fVar108 = GlobalVectorConstants::Float360.m128_f32[3];
  _local_1288 = GlobalVectorConstants::Float360;
  TestReferenceMod((__m128 *)local_1278,(__m128 *)local_1288,in_R8);
  auVar118 = divps((undefined1  [16])afVar12,(undefined1  [16])_Var119);
  auVar118 = roundps(extraout_XMM0_01,auVar118,3);
  local_1298._4_4_ = afVar12[1] - auVar118._4_4_ * _Var119.m128_f32[1];
  local_1298._0_4_ = afVar12[0] - auVar118._0_4_ * _Var119.m128_f32[0];
  uStack_1290._0_4_ = afVar12[2] - auVar118._8_4_ * _Var119.m128_f32[2];
  uStack_1290._4_4_ = afVar12[3] - auVar118._12_4_ * fVar108;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorMod360",bVar25);
  afVar12 = ___xmm_4640e47ec4d70333c486fccd00000000;
  _Var119 = GlobalVectorConstants::Float360;
  fVar108 = GlobalVectorConstants::Float360.m128_f32[3];
  local_1278._0_4_ = ___xmm_4640e47ec4d70333c486fccd00000000;
  local_1278._4_4_ = _UNK_15076c4a4;
  uStack_1270._0_4_ = _UNK_15076c4a8;
  uStack_1270._4_4_ = _UNK_15076c4ac;
  _local_1288 = GlobalVectorConstants::Float360;
  TestReferenceMod((__m128 *)local_1278,(__m128 *)local_1288,in_R8);
  auVar118 = divps((undefined1  [16])afVar12,(undefined1  [16])_Var119);
  auVar118 = roundps(extraout_XMM0_02,auVar118,3);
  _Var124._0_4_ = afVar12[0] - auVar118._0_4_ * _Var119.m128_f32[0];
  _Var124._4_4_ = afVar12[1] - auVar118._4_4_ * _Var119.m128_f32[1];
  _Var124._8_4_ = afVar12[2] - auVar118._8_4_ * _Var119.m128_f32[2];
  _Var124._12_4_ = afVar12[3] - auVar118._12_4_ * fVar108;
  _local_1298 = _Var124;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorMod360",bVar25);
  uVar50 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[0] <=
                  ___xmm_c040000000000000c000000040000000);
  uVar52 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[1] <= _UNK_15076c854);
  uVar54 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[2] <= _UNK_15076c858);
  uVar47 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[3] <= _UNK_15076c85c);
  local_e8 = (undefined1  [8])___xmm_bf8000003f800000bf8000003f800000;
  uStack_e0 = _UNK_15076c648;
  local_1298._4_4_ =
       uVar52 & GlobalVectorConstants::FloatOne.m128_u32[1] |
       ~uVar52 & GlobalVectorConstants::FloatMinusOne.m128_u32[1];
  local_1298._0_4_ =
       uVar50 & GlobalVectorConstants::FloatOne.m128_u32[0] |
       ~uVar50 & GlobalVectorConstants::FloatMinusOne.m128_u32[0];
  uStack_1290._0_4_ =
       uVar54 & GlobalVectorConstants::FloatOne.m128_u32[2] |
       ~uVar54 & GlobalVectorConstants::FloatMinusOne.m128_u32[2];
  uStack_1290._4_4_ =
       uVar47 & GlobalVectorConstants::FloatOne.m128_u32[3] |
       ~uVar47 & GlobalVectorConstants::FloatMinusOne.m128_u32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorSign",bVar25);
  uVar50 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[0] <=
                  ___xmm_c040000000000000c000000040000000);
  uVar52 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[1] <= _UNK_15076c854);
  uVar54 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[2] <= _UNK_15076c858);
  uVar47 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[3] <= _UNK_15076c85c);
  local_e8 = (undefined1  [8])___xmm_000000003f800000000000003f800000;
  uStack_e0 = _UNK_15076ae28;
  local_1298._4_4_ =
       ~uVar52 & (uint)GlobalVectorConstants::FloatZero.m128_f32[1] |
       uVar52 & GlobalVectorConstants::FloatOne.m128_u32[1];
  local_1298._0_4_ =
       ~uVar50 & (uint)GlobalVectorConstants::FloatZero.m128_f32[0] |
       uVar50 & GlobalVectorConstants::FloatOne.m128_u32[0];
  uStack_1290._0_4_ =
       ~uVar54 & (uint)GlobalVectorConstants::FloatZero.m128_f32[2] |
       uVar54 & GlobalVectorConstants::FloatOne.m128_u32[2];
  uStack_1290._4_4_ =
       ~uVar47 & (uint)GlobalVectorConstants::FloatZero.m128_f32[3] |
       uVar47 & GlobalVectorConstants::FloatOne.m128_u32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorStep",bVar25);
  auVar118 = ___xmm_00000000bf4ccccdbf800000bfe66666;
  fVar122 = __real_38d1b717;
  _Var125.m128_f32 = (float  [4])roundps(_Var124.m128_f32,___xmm_00000000bf4ccccdbf800000bfe66666,3)
  ;
  local_e8 = (undefined1  [8])___xmm_0000000000000000bf800000bf800000;
  uStack_e0 = _UNK_15076ad58;
  _local_1298 = _Var125;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,__real_38d1b717);
  LogTest<float>(L"VectorTruncate",bVar25);
  auVar59 = ___xmm_3fe666663f8000003f4ccccd00000000;
  uVar14 = _UNK_15076b1e8;
  uVar13 = ___xmm_3f8000003f8000000000000000000000;
  _Var119.m128_f32 = (float  [4])roundps(_Var119.m128_f32,___xmm_3fe666663f8000003f4ccccd00000000,3)
  ;
  local_e8 = (undefined1  [8])___xmm_3f8000003f8000000000000000000000;
  uStack_e0 = _UNK_15076b1e8;
  _local_1298 = _Var119;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar122);
  LogTest<float>(L"VectorTruncate",bVar25);
  local_e8 = (undefined1  [8])___xmm_00000000bf4ccccd00000000bf4ccccd;
  uStack_e0 = _UNK_15076af98;
  local_1298._4_4_ = auVar118._4_4_ - _Var125.m128_f32[1];
  local_1298._0_4_ = auVar118._0_4_ - _Var125.m128_f32[0];
  uStack_1290._0_4_ = auVar118._8_4_ - _Var125.m128_f32[2];
  uStack_1290._4_4_ = auVar118._12_4_ - _Var125.m128_f32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar122);
  LogTest<float>(L"VectorFractional",bVar25);
  uStack_e0 = _UNK_15076b148;
  local_e8 = (undefined1  [8])___xmm_3f4ccccd000000003f4ccccd00000000;
  local_1298._4_4_ = auVar59._4_4_ - _Var119.m128_f32[1];
  local_1298._0_4_ = auVar59._0_4_ - _Var119.m128_f32[0];
  uStack_1290._0_4_ = auVar59._8_4_ - _Var119.m128_f32[2];
  uStack_1290._4_4_ = auVar59._12_4_ - _Var119.m128_f32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar122);
  LogTest<float>(L"VectorFractional",bVar25);
  _local_e8 = ___xmm_0000000080000000bf800000bf800000;
  _local_1298 = (float  [4])roundps(___xmm_0000000080000000bf800000bf800000,auVar118,2);
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar122);
  LogTest<float>(L"VectorCeil",bVar25);
  _local_e8 = ___xmm_400000003f8000003f80000000000000;
  _local_1298 = (float  [4])roundps(___xmm_400000003f8000003f80000000000000,auVar59,2);
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar122);
  LogTest<float>(L"VectorCeil",bVar25);
  _local_e8 = ___xmm_00000000bf800000bf800000c0000000;
  _local_1298 = (float  [4])roundps(___xmm_00000000bf800000bf800000c0000000,auVar118,1);
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar122);
  LogTest<float>(L"VectorFloor",bVar25);
  _local_1298 = (__m128)roundps(extraout_XMM0_03,auVar59,1);
  uStack_e0 = uVar14;
  local_e8 = (undefined1  [8])uVar13;
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,0.0);
  LogTest<float>(L"VectorFloor",bVar25);
  LogTest<float>(L"VectorMaskBits",true);
  LogTest<float>(L"VectorMaskBits",true);
  LogTest<float>(L"VectorMaskBits",true);
  local_1208 = (undefined1  [8])___xmm_00000008000000020000000400000001;
  uStack_1200 = _UNK_15076b048;
  local_11a8.m128_u64[0] = ___xmm_00000008000000020000000400000001;
  local_11a8.m128_u64[1] = _UNK_15076b048;
  bVar25 = TestVectorsEqualBitwise(&local_11a8,(__m128 *)local_1208);
  LogTest<int>(L"VectorIntSelect",bVar25);
  local_1208 = (undefined1  [8])___xmm_00000008000000050000000300000002;
  uStack_1200 = _UNK_15076b058;
  local_11a8.m128_u64[0] = ___xmm_00000008000000050000000300000002;
  local_11a8.m128_u64[1] = _UNK_15076b058;
  bVar25 = TestVectorsEqualBitwise(&local_11a8,(__m128 *)local_1208);
  LogTest<int>(L"VectorIntSelect",bVar25);
  local_1208 = (undefined1  [8])___xmm_ffffff9c0000001e0000000c00000005;
  uStack_1200 = _UNK_15076caf8;
  local_11a8.m128_u64[0] = ___xmm_ffffff9c0000001e0000000c00000005;
  local_11a8.m128_u64[1] = _UNK_15076caf8;
  bVar25 = TestVectorsEqualBitwise(&local_11a8,(__m128 *)local_1208);
  LogTest<int>(L"VectorIntMin",bVar25);
  local_1208 = (undefined1  [8])___xmm_00000016000000200000000e0000000a;
  uStack_1200 = _UNK_15076b068;
  local_11a8.m128_u64[0] = ___xmm_00000016000000200000000e0000000a;
  local_11a8.m128_u64[1] = _UNK_15076b068;
  bVar25 = TestVectorsEqualBitwise(&local_11a8,(__m128 *)local_1208);
  LogTest<int>(L"VectorIntMax",bVar25);
  uStack_1200 = _UNK_150631e38;
  local_1208 = (undefined1  [8])___xmm_00000004000000030000000200000001;
  local_11a8.m128_u64[0] = ___xmm_00000004000000030000000200000001;
  local_11a8.m128_u64[1] = _UNK_150631e38;
  bVar25 = TestVectorsEqualBitwise(&local_11a8,(__m128 *)local_1208);
  LogTest<int>(L"VectorIntAbs",bVar25);
  uStack_1280._0_4_ = 0xc5000000;
  local_1288 = (undefined1  [8])0xc400000044800000;
  _local_1298 = ZEXT812(0x3f800000) << 0x20;
  uStack_e0._0_4_ = 0x45000000;
  local_e8 = (undefined1  [8])0x44000000c4800000;
  UE::Math::TLookFromMatrix<float>::TLookFromMatrix<float>
            (&local_388,(TVector<float> *)local_1288,(TVector<float> *)local_e8,
             (TVector<float> *)local_1298);
  local_4c8.m128_u64[0] = local_388._0_8_;
  local_4c8.m128_u64[1] = local_388._8_8_;
  _local_4b8 = local_388._16_8_;
  _fStack_4b0 = local_388._24_8_;
  _local_4a8 = local_388._32_8_;
  _fStack_4a0 = local_388._40_8_;
  _local_498 = local_388._48_8_;
  _fStack_490 = local_388._56_8_;
  local_508.m128_u64[0] = ___xmm_0000000000000000000000003a888889;
  local_508.m128_u64[1] = _UNK_15076ac08;
  local_4f8 = ___xmm_0000000000000000baf2b9d600000000;
  uStack_4f0 = _UNK_15076ad38;
  local_4e8 = ___xmm_00000000bba3d70a0000000000000000;
  uStack_4e0 = _UNK_15076af48;
  local_4d8 = ___xmm_3f8000003f0000003f800000bf800000;
  uStack_4d0 = _UNK_15076b1c8;
  VectorMatrixMultiply(&local_308,(TMatrix<float> *)&local_4c8,(TMatrix<float> *)&local_508);
  p_Var30 = &local_508;
  TestVectorMatrixMultiply<float>
            ((TMatrix<float> *)local_1208,(TMatrix<float> *)&local_4c8,(TMatrix<float> *)p_Var30);
  bVar25 = TestMatricesEqual(&local_308,(TMatrix<float> *)local_1208,fVar92);
  LogTest<float>(L"VectorMatrixMultiply",bVar25);
  FMath::MatrixInverse(&local_308,(TMatrix<float> *)&local_508);
  TestVectorMatrixInverse<float>((TMatrix<float> *)local_1208,(TMatrix<float> *)&local_508);
  bVar25 = TestMatricesEqual(&local_308,(TMatrix<float> *)local_1208,fVar92);
  LogTest<float>(L"VectorMatrixInverse",bVar25);
  local_1278._4_4_ = _UNK_15076b354;
  local_1278._0_4_ = ___xmm_3f80000043480000c2c8000042c80000;
  uStack_1270._0_4_ = _UNK_15076b358;
  uStack_1270._4_4_ = _UNK_15076b35c;
  local_1288._4_4_ =
       _UNK_15076b354 * fStack_4b4 + ___xmm_3f80000043480000c2c8000042c80000 * local_4c8.m128_f32[1]
       + _UNK_15076b358 * fStack_4a4 + _UNK_15076b35c * fStack_494;
  local_1288._0_4_ =
       _UNK_15076b354 * local_4b8 + ___xmm_3f80000043480000c2c8000042c80000 * local_4c8.m128_f32[0]
       + _UNK_15076b358 * local_4a8 + _UNK_15076b35c * local_498;
  uStack_1280._0_4_ =
       _UNK_15076b354 * fStack_4b0 + ___xmm_3f80000043480000c2c8000042c80000 * local_4c8.m128_f32[2]
       + _UNK_15076b358 * fStack_4a0 + _UNK_15076b35c * fStack_490;
  uStack_1280._4_4_ =
       _UNK_15076b354 * fStack_4ac + ___xmm_3f80000043480000c2c8000042c80000 * local_4c8.m128_f32[3]
       + _UNK_15076b358 * fStack_49c + _UNK_15076b35c * fStack_48c;
  TestVectorTransformVector((__m128 *)local_1278,&local_4c8,(TMatrix<float> *)p_Var30);
  fVar108 = __real_322bcc77;
  bVar25 = TestVectorsEqual((__m128 *)local_1288,(__m128 *)local_e8,__real_322bcc77);
  LogTest<float>(L"VectorTransformVector",bVar25);
  local_1278._4_4_ = _UNK_15076b3a4;
  local_1278._0_4_ = ___xmm_3f800000c5fd00004800000047000000;
  uStack_1270._0_4_ = _UNK_15076b3a8;
  uStack_1270._4_4_ = _UNK_15076b3ac;
  local_1288._4_4_ =
       _UNK_15076b3a4 * local_4f8._4_4_ +
       ___xmm_3f800000c5fd00004800000047000000 * local_508.m128_f32[1] +
       _UNK_15076b3a8 * local_4e8._4_4_ + _UNK_15076b3ac * local_4d8._4_4_;
  local_1288._0_4_ =
       _UNK_15076b3a4 * (float)local_4f8 +
       ___xmm_3f800000c5fd00004800000047000000 * local_508.m128_f32[0] +
       _UNK_15076b3a8 * (float)local_4e8 + _UNK_15076b3ac * (float)local_4d8;
  uStack_1280._0_4_ =
       _UNK_15076b3a4 * (float)uStack_4f0 +
       ___xmm_3f800000c5fd00004800000047000000 * local_508.m128_f32[2] +
       _UNK_15076b3a8 * (float)uStack_4e0 + _UNK_15076b3ac * (float)uStack_4d0;
  uStack_1280._4_4_ =
       _UNK_15076b3a4 * uStack_4f0._4_4_ +
       ___xmm_3f800000c5fd00004800000047000000 * local_508.m128_f32[3] +
       _UNK_15076b3a8 * uStack_4e0._4_4_ + _UNK_15076b3ac * uStack_4d0._4_4_;
  TestVectorTransformVector((__m128 *)local_1278,&local_508,(TMatrix<float> *)p_Var30);
  uStack_e0 = extraout_XMM0_Qb;
  local_e8 = (undefined1  [8])extraout_XMM0_Qa;
  bVar25 = TestVectorsEqual((__m128 *)local_1288,(__m128 *)local_e8,fVar108);
  LogTest<float>(L"VectorTransformVector",bVar25);
  TestTransformFunctions<UE::Math::TTransform<float>_>();
  GScratch[4] = 0.0;
  GScratch[0] = 0.0;
  GScratch[1] = 0.0;
  GScratch[2] = 0.0;
  GScratch[3] = 0.0;
  iVar26 = movmskps(extraout_EAX_04,(undefined1  [16])___xmm_ffffffffffffffffffffffffffffffff);
  LogTest<float>(L"VectorContainsNaNOrInfinite true",iVar26 != 0);
  iVar26 = movmskps(extraout_EAX_05,___xmm_000000000000000000000000ffffffff);
  LogTest<float>(L"VectorContainsNaNOrInfinite true",iVar26 != 0);
  auVar117._8_8_ = _UNK_15076cb18;
  auVar117._0_8_ = ___xmm_ffffffff000000000000000000000000;
  iVar26 = movmskps(extraout_EAX_06,auVar117);
  LogTest<float>(L"VectorContainsNaNOrInfinite true",iVar26 != 0);
  fVar110 = _UNK_1506896ec;
  fVar55 = _UNK_1506896e8;
  fVar106 = _UNK_1506896e4;
  fVar56 = __xmm_7f8000007f8000007f8000007f800000;
  auVar121._8_4_ = 0xffffffff;
  auVar121._0_8_ = 0xffffffffffffffff;
  auVar121._12_4_ = 0xffffffff;
  iVar26 = movmskps(extraout_EAX_07,auVar121);
  LogTest<float>(L"VectorContainsNaNOrInfinite true",iVar26 != 0);
  auVar60._4_4_ = -(uint)((float)(_UNK_15076cac4 & (uint)fVar106) == fVar106);
  auVar60._0_4_ = -(uint)((float)(___xmm_ff800000ff800000ff800000ff800000 & (uint)fVar56) == fVar56)
  ;
  auVar60._8_4_ = -(uint)((float)(_UNK_15076cac8 & (uint)fVar55) == fVar55);
  auVar60._12_4_ = -(uint)((float)(_UNK_15076cacc & (uint)fVar110) == fVar110);
  iVar26 = movmskps(extraout_EAX_08,auVar60);
  LogTest<float>(L"VectorContainsNaNOrInfinite true",iVar26 != 0);
  auVar127._4_4_ = -(uint)((float)((uint)fVar126 & (uint)fVar106) == fVar106);
  auVar127._0_4_ = -(uint)((float)((uint)fVar123 & (uint)fVar56) == fVar56);
  auVar127._8_4_ = -(uint)((float)((uint)fVar116 & (uint)fVar55) == fVar55);
  auVar127._12_4_ = -(uint)((float)((uint)fVar113 & (uint)fVar110) == fVar110);
  iVar26 = movmskps(extraout_EAX_09,auVar127);
  LogTest<float>(L"VectorContainsNaNOrInfinite true",iVar26 != 0);
  auVar61._4_4_ =
       -(uint)((float)((uint)fVar106 & GlobalVectorConstants::FloatZero.m128_u32[1]) == fVar106);
  auVar61._0_4_ =
       -(uint)((float)((uint)fVar56 & GlobalVectorConstants::FloatZero.m128_u32[0]) == fVar56);
  auVar61._8_4_ =
       -(uint)((float)((uint)fVar55 & GlobalVectorConstants::FloatZero.m128_u32[2]) == fVar55);
  auVar61._12_4_ =
       -(uint)((float)((uint)fVar110 & GlobalVectorConstants::FloatZero.m128_u32[3]) == fVar110);
  iVar26 = movmskps(extraout_EAX_10,auVar61);
  LogTest<float>(L"VectorContainsNaNOrInfinite false",iVar26 == 0);
  auVar62._4_4_ =
       -(uint)((float)((uint)fVar106 & GlobalVectorConstants::FloatOne.m128_u32[1]) == fVar106);
  auVar62._0_4_ =
       -(uint)((float)((uint)fVar56 & GlobalVectorConstants::FloatOne.m128_u32[0]) == fVar56);
  auVar62._8_4_ =
       -(uint)((float)((uint)fVar55 & GlobalVectorConstants::FloatOne.m128_u32[2]) == fVar55);
  auVar62._12_4_ =
       -(uint)((float)((uint)fVar110 & GlobalVectorConstants::FloatOne.m128_u32[3]) == fVar110);
  iVar26 = movmskps(extraout_EAX_11,auVar62);
  LogTest<float>(L"VectorContainsNaNOrInfinite false",iVar26 == 0);
  auVar63._4_4_ =
       -(uint)((float)((uint)fVar106 & GlobalVectorConstants::FloatMinusOneHalf.m128_u32[1]) ==
              fVar106);
  auVar63._0_4_ =
       -(uint)((float)((uint)fVar56 & GlobalVectorConstants::FloatMinusOneHalf.m128_u32[0]) ==
              fVar56);
  auVar63._8_4_ =
       -(uint)((float)((uint)fVar55 & GlobalVectorConstants::FloatMinusOneHalf.m128_u32[2]) ==
              fVar55);
  auVar63._12_4_ =
       -(uint)((float)((uint)fVar110 & GlobalVectorConstants::FloatMinusOneHalf.m128_u32[3]) ==
              fVar110);
  iVar26 = movmskps(extraout_EAX_12,auVar63);
  LogTest<float>(L"VectorContainsNaNOrInfinite false",iVar26 == 0);
  auVar64._4_4_ =
       -(uint)((float)((uint)fVar106 & GlobalVectorConstants::SmallNumber.m128_u32[1]) == fVar106);
  auVar64._0_4_ =
       -(uint)((float)((uint)fVar56 & GlobalVectorConstants::SmallNumber.m128_u32[0]) == fVar56);
  auVar64._8_4_ =
       -(uint)((float)((uint)fVar55 & GlobalVectorConstants::SmallNumber.m128_u32[2]) == fVar55);
  auVar64._12_4_ =
       -(uint)((float)((uint)fVar110 & GlobalVectorConstants::SmallNumber.m128_u32[3]) == fVar110);
  iVar26 = movmskps(extraout_EAX_13,auVar64);
  LogTest<float>(L"VectorContainsNaNOrInfinite false",iVar26 == 0);
  auVar65._4_4_ =
       -(uint)((float)((uint)fVar106 & GlobalVectorConstants::BigNumber.m128_u32[1]) == fVar106);
  auVar65._0_4_ =
       -(uint)((float)((uint)fVar56 & GlobalVectorConstants::BigNumber.m128_u32[0]) == fVar56);
  auVar65._8_4_ =
       -(uint)((float)((uint)fVar55 & GlobalVectorConstants::BigNumber.m128_u32[2]) == fVar55);
  auVar65._12_4_ =
       -(uint)((float)((uint)fVar110 & GlobalVectorConstants::BigNumber.m128_u32[3]) == fVar110);
  iVar26 = movmskps(extraout_EAX_14,auVar65);
  LogTest<float>(L"VectorContainsNaNOrInfinite false",iVar26 == 0);
  pfVar43 = &XYArray[0].Y;
  do {
    fVar56 = ((XYPair *)(pfVar43 + -1))->X;
    fVar106 = *pfVar43;
    fVar55 = FGenericPlatformMath::Fmod(fVar56,fVar106);
    fVar56 = fmodf(fVar56,fVar106);
    if ((fVar106 == 0.0) || (iVar26 = _isnan((double)fVar56), iVar26 == 0)) {
      if (fVar108 < (float)((uint)(fVar55 - fVar56) & uVar48)) {
        if (4 < (byte)LogUnrealMathTest._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
        }
        CheckPassing(false);
      }
    }
    else if (2 < (byte)LogUnrealMathTest._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
    }
    uVar52 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar50 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    bVar25 = pfVar43 != &XYArray[0x1e].Y;
    pfVar43 = pfVar43 + 2;
  } while (bVar25);
  pdVar44 = &XYArray[0].Y;
  do {
    dVar58 = ((XYPair *)(pdVar44 + -1))->X;
    dVar4 = *pdVar44;
    dVar57 = FGenericPlatformMath::Fmod(dVar58,dVar4);
    dVar58 = fmod(dVar58,dVar4);
    dVar57 = (double)CONCAT44((uint)((ulonglong)(dVar57 - dVar58) >> 0x20) & uVar52,
                              SUB84(dVar57 - dVar58,0) & uVar50);
    if ((dVar4 == 0.0) || (iVar26 = _isnan(dVar58), iVar26 == 0)) {
      if ((__real_3e45798ee2308c3a < dVar57) &&
         (dVar57 = dVar57 - (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar52,
                                             SUB84(dVar4,0) & uVar50),
         __real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar52,SUB84(dVar57,0) & uVar50))) {
        if (4 < (byte)LogUnrealMathTest._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
        }
        CheckPassing(false);
      }
    }
    else if (2 < (byte)LogUnrealMathTest._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
    }
    fVar108 = __real_3f800000;
    bVar25 = pdVar44 != &XYArray[0x1f].Y;
    pdVar44 = pdVar44 + 2;
  } while (bVar25);
  FGenericPlatformMath::Fmod(__real_3f800000,__real_3f800000);
  FGenericPlatformMath::Fmod(fVar108,fVar108);
  FGenericPlatformMath::Fmod(fVar108,fVar108);
  FGenericPlatformMath::Fmod(fVar108,fVar108);
  dVar58 = __real_3ff0000000000000;
  FGenericPlatformMath::Fmod(__real_3ff0000000000000,__real_3ff0000000000000);
  FGenericPlatformMath::Fmod(fVar108,fVar108);
  FGenericPlatformMath::Fmod(dVar58,dVar58);
  FGenericPlatformMath::Fmod(dVar58,dVar58);
  FGenericPlatformMath::Fmod(dVar58,dVar58);
  FGenericPlatformMath::Fmod(fVar108,fVar108);
  auVar94._8_8_ = 0;
  auVar94._0_8_ = dVar58;
  FGenericPlatformMath::Fmod(dVar58,dVar58);
  CheckPassing(true);
  CheckPassing(true);
  CheckPassing(true);
  CheckPassing(true);
  CheckPassing(true);
  CheckPassing(true);
  UE::LWC::FloatToIntCastChecked<int,float>(fVar108);
  UE::LWC::FloatToIntCastChecked<int,double>(0.0);
  UE::LWC::FloatToIntCastChecked<__int64,float>(fVar108);
  UE::LWC::FloatToIntCastChecked<__int64,double>(0.0);
  UE::LWC::FloatToIntCastChecked<int,float>(fVar108);
  UE::LWC::FloatToIntCastChecked<int,double>(0.0);
  UE::LWC::FloatToIntCastChecked<int,float>(__real_4effffff);
  fVar108 = __real_cf000000;
  UE::LWC::FloatToIntCastChecked<int,float>(__real_cf000000);
  UE::LWC::FloatToIntCastChecked<__int64,float>(__real_4f000000);
  UE::LWC::FloatToIntCastChecked<__int64,float>(fVar108);
  UE::LWC::FloatToIntCastChecked<__int64,float>(__real_5effffff);
  UE::LWC::FloatToIntCastChecked<__int64,float>(__real_df000000);
  UE::LWC::FloatToIntCastChecked<int,double>(__real_41dfffffffc00000);
  UE::LWC::FloatToIntCastChecked<int,double>(__real_c1e0000000000000);
  UE::LWC::FloatToIntCastChecked<__int64,double>(__real_43dfffffffffffff);
  UE::LWC::FloatToIntCastChecked<__int64,double>(__real_c3e0000000000000);
  TestVectorTrigFunctions<float,__m128>();
  TestVectorExpLogFunctions<float,__m128>();
  _Var119 = _local_1298;
  fVar55 = UE::Math::TRotator<float>::ZeroRotator.Roll;
  fVar106 = UE::Math::TRotator<float>::ZeroRotator.Yaw;
  fVar56 = UE::Math::TRotator<float>::ZeroRotator.Pitch;
  local_1298._4_4_ = UE::Math::TRotator<float>::ZeroRotator.Yaw;
  local_1298._0_4_ = UE::Math::TRotator<float>::ZeroRotator.Pitch;
  uStack_1290._4_4_ = _Var119.m128_i32[3];
  uStack_1290._0_4_ = UE::Math::TRotator<float>::ZeroRotator.Roll;
  pTVar28 = UE::Math::TRotator<float>::TRotator<float>
                      (&local_11b8,&UE::Math::TQuat<float>::Identity);
  uVar54 = _UNK_15061cc7c;
  uVar52 = _UNK_15061cc78;
  uVar50 = _UNK_15061cc74;
  uVar48 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar66._4_4_ = fVar106 - local_11b8.Yaw;
  auVar66._0_4_ = fVar56 - local_11b8.Pitch;
  fVar108 = GlobalVectorConstants::Float360.m128_f32[3];
  auVar66._8_4_ = fVar55 - local_11b8.Roll;
  auVar66._12_4_ = 0;
  auVar118 = divps(auVar66,(undefined1  [16])GlobalVectorConstants::Float360);
  auVar118 = roundps(auVar94,auVar118,3);
  fVar116 = GlobalVectorConstants::Float360.m128_f32[0];
  fVar113 = GlobalVectorConstants::Float360.m128_f32[1];
  fVar93 = GlobalVectorConstants::Float360.m128_f32[2];
  fVar110 = (fVar56 - local_11b8.Pitch) - auVar118._0_4_ * fVar116;
  fVar115 = (fVar106 - local_11b8.Yaw) - auVar118._4_4_ * fVar113;
  fVar123 = (fVar55 - local_11b8.Roll) - auVar118._8_4_ * fVar93;
  fVar126 = 0.0 - auVar118._12_4_ * fVar108;
  fVar110 = (float)(~-(uint)(0.0 <= fVar110) & (uint)(fVar110 + fVar116) |
                   -(uint)(0.0 <= fVar110) & (uint)fVar110);
  fVar115 = (float)(~-(uint)(0.0 <= fVar115) & (uint)(fVar115 + fVar113) |
                   -(uint)(0.0 <= fVar115) & (uint)fVar115);
  fVar123 = (float)(~-(uint)(0.0 <= fVar123) & (uint)(fVar123 + fVar93) |
                   -(uint)(0.0 <= fVar123) & (uint)fVar123);
  fVar126 = (float)(~-(uint)(0.0 <= fVar126) & (uint)(fVar126 + fVar108) |
                   -(uint)(0.0 <= fVar126) & (uint)fVar126);
  uVar47 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar110);
  uVar49 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar115);
  uVar51 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar123);
  uVar53 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar126);
  auVar67._4_4_ =
       -(uint)(0.0 < (float)(((uint)(fVar115 - fVar113) & uVar49 | ~uVar49 & (uint)fVar115) &
                            _UNK_15061cc74));
  auVar67._0_4_ =
       -(uint)(0.0 < (float)(((uint)(fVar110 - fVar116) & uVar47 | ~uVar47 & (uint)fVar110) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar67._8_4_ =
       -(uint)(0.0 < (float)(((uint)(fVar123 - fVar93) & uVar51 | ~uVar51 & (uint)fVar123) &
                            _UNK_15061cc78));
  auVar67._12_4_ =
       -(uint)(0.0 < (float)(((uint)(fVar126 - fVar108) & uVar53 | ~uVar53 & (uint)fVar126) &
                            _UNK_15061cc7c));
  iVar26 = movmskps((int)pTVar28,auVar67);
  LogRotatorTest(true,L"FRotator3f::ZeroRotator ~= FQuat4f::Identity : Rotator",
                 (TRotator<float> *)local_1298,&local_11b8,iVar26 == 0);
  if (((fVar56 == local_11b8.Pitch) && (fVar106 == local_11b8.Yaw)) && (fVar55 == local_11b8.Roll))
  {
    bVar25 = true;
  }
  else {
    bVar25 = false;
  }
  LogRotatorTest(true,L"FRotator3f::ZeroRotator == FQuat4f::Identity : Rotator",
                 (TRotator<float> *)local_1298,&local_11b8,bVar25);
  if (((fVar56 == local_11b8.Pitch) && (fVar106 == local_11b8.Yaw)) && (fVar55 == local_11b8.Roll))
  {
    bVar25 = true;
  }
  else {
    bVar25 = false;
  }
  LogRotatorTest(true,L"FRotator3f::ZeroRotator not != FQuat4f::Identity : Rotator",
                 (TRotator<float> *)local_1298,&local_11b8,bVar25);
  local_1258 = UE::Math::TQuat<float>::Identity;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&UE::Math::TRotator<float>::ZeroRotator,local_a28)
  ;
  local_1248.X = pTVar29->X;
  local_1248.Y = pTVar29->Y;
  local_1248.Z = pTVar29->Z;
  local_1248.W = pTVar29->W;
  auVar68._4_4_ = -(uint)(0.0 < (float)((uint)(local_1258.Y - local_1248.Y) & uVar50));
  auVar68._0_4_ = -(uint)(0.0 < (float)((uint)(local_1258.X - local_1248.X) & uVar48));
  auVar68._8_4_ = -(uint)(0.0 < (float)((uint)(local_1258.Z - local_1248.Z) & uVar52));
  auVar68._12_4_ = -(uint)(0.0 < (float)((uint)(local_1258.W - local_1248.W) & uVar54));
  iVar26 = movmskps((int)pTVar29,auVar68);
  if ((iVar26 == 0) ||
     (auVar120._4_4_ = -(uint)(0.0 < (float)((uint)(local_1258.Y + local_1248.Y) & uVar50)),
     auVar120._0_4_ = -(uint)(0.0 < (float)((uint)(local_1258.X + local_1248.X) & uVar48)),
     auVar120._8_4_ = -(uint)(0.0 < (float)((uint)(local_1258.Z + local_1248.Z) & uVar52)),
     auVar120._12_4_ = -(uint)(0.0 < (float)((uint)(local_1258.W + local_1248.W) & uVar54)),
     iVar26 = movmskps(iVar26,auVar120), iVar26 == 0)) {
    bVar25 = true;
  }
  else {
    bVar25 = false;
  }
  LogQuaternionTest(L"FRotator3f::ZeroRotator ~= FQuat4f::Identity : Quaternion",&local_1258,
                    &local_1248,bVar25);
  auVar69._4_4_ = -(uint)(local_1258.Y == local_1248.Y);
  auVar69._0_4_ = -(uint)(local_1258.X == local_1248.X);
  auVar69._8_4_ = -(uint)(local_1258.Z == local_1248.Z);
  auVar69._12_4_ = -(uint)(local_1258.W == local_1248.W);
  iVar26 = movmskps(extraout_EAX_15,auVar69);
  LogQuaternionTest(L"FRotator3f::ZeroRotator == FQuat4f::Identity : Quaternion",&local_1258,
                    &local_1248,iVar26 == 0xf);
  auVar70._4_4_ = -(uint)(local_1258.Y != local_1248.Y);
  auVar70._0_4_ = -(uint)(local_1258.X != local_1248.X);
  auVar70._8_4_ = -(uint)(local_1258.Z != local_1248.Z);
  auVar70._12_4_ = -(uint)(local_1258.W != local_1248.W);
  iVar26 = movmskps(extraout_EAX_16,auVar70);
  LogQuaternionTest(L"FRotator3f::ZeroRotator not != FQuat4f::Identity : Quaternion",&local_1258,
                    &local_1248,iVar26 == 0);
  fVar55 = _UNK_1506895ec;
  fVar106 = _UNK_1506895e8;
  fVar56 = _UNK_1506895e4;
  fVar108 = ___xmm_38d1b71738d1b71738d1b71738d1b717;
  pTVar28 = (TRotator<float> *)(local_190 + 8);
  pfVar43 = (float *)(local_188 + 4);
  local_188._0_8_ = ram0x00015076b090;
  local_188._8_8_ = _UNK_15076b098;
  local_168 = ___xmm_c334000043340000c334000043340000;
  uStack_160 = _UNK_15076ca18;
  local_178 = ___xmm_c33400004334000037d1b717b7d1b717;
  uStack_170 = _UNK_15076ca08;
  local_148 = ___xmm_c4160000c2340000c386ffff42effffd;
  uStack_140 = _UNK_15076ca48;
  local_158 = ___xmm_c233fff94386ffffc2effffd4233fff9;
  uStack_150 = _UNK_15076c988;
  local_128 = ___xmm_43b4800044870000c434000043b40000;
  uStack_120 = _UNK_15076c458;
  local_138 = ___xmm_43e100004416000042340000c3e10000;
  uStack_130 = _UNK_15076c468;
  local_108 = ___xmm_cb0000014afffffe4b00000044870000;
  uStack_100 = _UNK_15076ca98;
  local_118 = ___xmm_c434000043b4000144872000c433c000;
  local_f8 = 0x4b000000;
  local_f4 = 0x4b000000;
  local_f0 = 0xcb000000;
  auVar96 = ___xmm_c434000043b4000144872000c433c000;
  do {
    pTVar31 = (TRotator<float> *)(local_190 + 8);
    do {
      fVar110 = UE::Math::TRotator<float>::NormalizeAxis(pTVar28->Pitch - pTVar31->Pitch);
      uVar27 = extraout_EAX_17;
      if (((fVar122 < (float)((uint)fVar110 & uVar48)) ||
          (fVar110 = UE::Math::TRotator<float>::NormalizeAxis(pTVar28->Yaw - pTVar31->Yaw),
          uVar27 = extraout_EAX_18, fVar122 < (float)((uint)fVar110 & uVar48))) ||
         (fVar110 = UE::Math::TRotator<float>::NormalizeAxis(pTVar28->Roll - pTVar31->Roll),
         uVar27 = extraout_EAX_19, fVar122 < (float)((uint)fVar110 & uVar48))) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      uVar1 = pTVar31->Pitch;
      uVar6 = pTVar31->Yaw;
      fVar115 = pTVar28->Pitch - (float)uVar1;
      auVar71._4_4_ = *pfVar43 - (float)uVar6;
      auVar71._0_4_ = fVar115;
      fVar126 = pTVar28->Roll - pTVar31->Roll;
      fVar110 = GlobalVectorConstants::Float360.m128_f32[3];
      auVar71._8_4_ = fVar126;
      auVar71._12_4_ = 0;
      auVar118 = divps(auVar71,(undefined1  [16])GlobalVectorConstants::Float360);
      auVar118 = roundps(auVar96,auVar118,3);
      fVar113 = GlobalVectorConstants::Float360.m128_f32[0];
      fVar93 = GlobalVectorConstants::Float360.m128_f32[1];
      fVar107 = GlobalVectorConstants::Float360.m128_f32[2];
      fVar115 = fVar115 - auVar118._0_4_ * fVar113;
      fVar123 = (*pfVar43 - (float)uVar6) - auVar118._4_4_ * fVar93;
      fVar126 = fVar126 - auVar118._8_4_ * fVar107;
      fVar116 = 0.0 - auVar118._12_4_ * fVar110;
      fVar115 = (float)(~-(uint)(0.0 <= fVar115) & (uint)(fVar115 + fVar113) |
                       -(uint)(0.0 <= fVar115) & (uint)fVar115);
      fVar123 = (float)(~-(uint)(0.0 <= fVar123) & (uint)(fVar123 + fVar93) |
                       -(uint)(0.0 <= fVar123) & (uint)fVar123);
      fVar126 = (float)(~-(uint)(0.0 <= fVar126) & (uint)(fVar126 + fVar107) |
                       -(uint)(0.0 <= fVar126) & (uint)fVar126);
      fVar116 = (float)(~-(uint)(0.0 <= fVar116) & (uint)(fVar116 + fVar110) |
                       -(uint)(0.0 <= fVar116) & (uint)fVar116);
      uVar47 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar115);
      uVar49 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar123);
      uVar51 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar126);
      uVar53 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar116);
      auVar95._0_4_ =
           (float)(((uint)(fVar115 - fVar113) & uVar47 | ~uVar47 & (uint)fVar115) & uVar48);
      auVar95._4_4_ =
           (float)(((uint)(fVar123 - fVar93) & uVar49 | ~uVar49 & (uint)fVar123) & uVar50);
      auVar95._8_4_ =
           (float)(((uint)(fVar126 - fVar107) & uVar51 | ~uVar51 & (uint)fVar126) & uVar52);
      auVar95._12_4_ =
           (float)(((uint)(fVar116 - fVar110) & uVar53 | ~uVar53 & (uint)fVar116) & uVar54);
      auVar72._4_4_ = -(uint)(fVar56 < auVar95._4_4_);
      auVar72._0_4_ = -(uint)(fVar108 < auVar95._0_4_);
      auVar72._8_4_ = -(uint)(fVar106 < auVar95._8_4_);
      auVar72._12_4_ = -(uint)(fVar55 < auVar95._12_4_);
      iVar26 = movmskps(uVar27,auVar72);
      LogRotatorTest(bVar25,L"TestRotatorEqual1",pTVar28,pTVar31,iVar26 == 0);
      uVar2 = pTVar28->Pitch;
      uVar3 = pTVar31->Pitch;
      uVar7 = pTVar31->Yaw;
      fVar123 = (*pTVar28).Yaw - (float)uVar7;
      auVar73._4_4_ = fVar123;
      auVar73._0_4_ = (float)uVar2 - (float)uVar3;
      fVar126 = (*pTVar28).Roll - pTVar31->Roll;
      fVar110 = GlobalVectorConstants::Float360.m128_f32[3];
      auVar73._8_4_ = fVar126;
      auVar73._12_4_ = 0;
      auVar118 = divps(auVar73,(undefined1  [16])GlobalVectorConstants::Float360);
      auVar118 = roundps(auVar95,auVar118,3);
      fVar113 = GlobalVectorConstants::Float360.m128_f32[0];
      fVar93 = GlobalVectorConstants::Float360.m128_f32[1];
      fVar107 = GlobalVectorConstants::Float360.m128_f32[2];
      fVar115 = ((float)uVar2 - (float)uVar3) - auVar118._0_4_ * fVar113;
      fVar123 = fVar123 - auVar118._4_4_ * fVar93;
      fVar126 = fVar126 - auVar118._8_4_ * fVar107;
      fVar116 = 0.0 - auVar118._12_4_ * fVar110;
      fVar115 = (float)(~-(uint)(0.0 <= fVar115) & (uint)(fVar115 + fVar113) |
                       -(uint)(0.0 <= fVar115) & (uint)fVar115);
      fVar123 = (float)(~-(uint)(0.0 <= fVar123) & (uint)(fVar123 + fVar93) |
                       -(uint)(0.0 <= fVar123) & (uint)fVar123);
      fVar126 = (float)(~-(uint)(0.0 <= fVar126) & (uint)(fVar126 + fVar107) |
                       -(uint)(0.0 <= fVar126) & (uint)fVar126);
      fVar116 = (float)(~-(uint)(0.0 <= fVar116) & (uint)(fVar116 + fVar110) |
                       -(uint)(0.0 <= fVar116) & (uint)fVar116);
      uVar47 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar115);
      uVar49 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar123);
      uVar51 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar126);
      uVar53 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar116);
      auVar74._4_4_ =
           -(uint)(fVar56 < (float)(((uint)(fVar123 - fVar93) & uVar49 | ~uVar49 & (uint)fVar123) &
                                   uVar50));
      auVar74._0_4_ =
           -(uint)(fVar108 <
                  (float)(((uint)(fVar115 - fVar113) & uVar47 | ~uVar47 & (uint)fVar115) & uVar48));
      auVar74._8_4_ =
           -(uint)(fVar106 <
                  (float)(((uint)(fVar126 - fVar107) & uVar51 | ~uVar51 & (uint)fVar126) & uVar52));
      auVar74._12_4_ =
           -(uint)(fVar55 < (float)(((uint)(fVar116 - fVar110) & uVar53 | ~uVar53 & (uint)fVar116) &
                                   uVar54));
      iVar26 = movmskps(extraout_EAX_20,auVar74);
      LogRotatorTest(bVar25,L"TestRotatorEqual2",pTVar28,pTVar31,iVar26 == 0);
      fVar110 = GlobalVectorConstants::Float360.m128_f32[3];
      fVar123 = pTVar28->Yaw - pTVar31->Yaw;
      fVar126 = pTVar28->Pitch - pTVar31->Pitch;
      fVar115 = pTVar28->Roll - pTVar31->Roll;
      auVar75._4_4_ = fVar123;
      auVar75._0_4_ = fVar126;
      auVar75._8_4_ = fVar115;
      auVar75._12_4_ = 0;
      auVar118 = divps(auVar75,(undefined1  [16])GlobalVectorConstants::Float360);
      auVar118 = roundps(ZEXT416((uint)fVar123),auVar118,3);
      fVar113 = GlobalVectorConstants::Float360.m128_f32[0];
      fVar93 = GlobalVectorConstants::Float360.m128_f32[1];
      fVar107 = GlobalVectorConstants::Float360.m128_f32[2];
      fVar126 = fVar126 - auVar118._0_4_ * fVar113;
      fVar123 = fVar123 - auVar118._4_4_ * fVar93;
      fVar115 = fVar115 - auVar118._8_4_ * fVar107;
      fVar116 = 0.0 - auVar118._12_4_ * fVar110;
      fVar126 = (float)(~-(uint)(0.0 <= fVar126) & (uint)(fVar126 + fVar113) |
                       -(uint)(0.0 <= fVar126) & (uint)fVar126);
      fVar123 = (float)(~-(uint)(0.0 <= fVar123) & (uint)(fVar123 + fVar93) |
                       -(uint)(0.0 <= fVar123) & (uint)fVar123);
      fVar115 = (float)(~-(uint)(0.0 <= fVar115) & (uint)(fVar115 + fVar107) |
                       -(uint)(0.0 <= fVar115) & (uint)fVar115);
      fVar116 = (float)(~-(uint)(0.0 <= fVar116) & (uint)(fVar116 + fVar110) |
                       -(uint)(0.0 <= fVar116) & (uint)fVar116);
      uVar47 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar126);
      uVar49 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar123);
      uVar51 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar115);
      uVar53 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar116);
      auVar96._0_4_ =
           (float)(((uint)(fVar126 - fVar113) & uVar47 | ~uVar47 & (uint)fVar126) & uVar48);
      auVar96._4_4_ =
           (float)(((uint)(fVar123 - fVar93) & uVar49 | ~uVar49 & (uint)fVar123) & uVar50);
      auVar96._8_4_ =
           (float)(((uint)(fVar115 - fVar107) & uVar51 | ~uVar51 & (uint)fVar115) & uVar52);
      auVar96._12_4_ =
           (float)(((uint)(fVar116 - fVar110) & uVar53 | ~uVar53 & (uint)fVar116) & uVar54);
      auVar76._4_4_ = -(uint)(fVar56 < auVar96._4_4_);
      auVar76._0_4_ = -(uint)(fVar108 < auVar96._0_4_);
      auVar76._8_4_ = -(uint)(fVar106 < auVar96._8_4_);
      auVar76._12_4_ = -(uint)(fVar55 < auVar96._12_4_);
      iVar26 = movmskps(extraout_EAX_21,auVar76);
      LogRotatorTest(bVar25,L"TestRotatorEqual3",pTVar28,pTVar31,iVar26 == 0);
      pTVar31 = pTVar31 + 1;
    } while (pTVar31 != (TRotator<float> *)local_ec);
    pTVar28 = pTVar28 + 1;
    pfVar43 = pfVar43 + 3;
  } while (pTVar28 != (TRotator<float> *)local_ec);
  pTVar28 = (TRotator<float> *)(local_190 + 8);
  do {
    TestRotatorToQuaternion((TQuat<float> *)&local_11a8,pTVar28);
    p_Var30 = (__m128 *)UE::Math::TRotator<float>::Quaternion(pTVar28,&local_a08);
    _local_1208 = *p_Var30;
    bVar25 = TestQuatsEqual((TQuat<float> *)&local_11a8,(TQuat<float> *)local_1208,fVar92);
    LogQuaternionTest(L"TestRotatorToQuaternion",(TQuat<float> *)&local_11a8,
                      (TQuat<float> *)local_1208,bVar25);
    fVar55 = _UNK_1506895ec;
    fVar106 = _UNK_1506895e8;
    fVar56 = _UNK_1506895e4;
    fVar108 = ___xmm_38d1b71738d1b71738d1b71738d1b717;
    pTVar28 = pTVar28 + 1;
  } while (pTVar28 != (TRotator<float> *)local_ec);
  pTVar28 = (TRotator<float> *)local_d18;
  local_d18._0_4_ = ___xmm_41f00000000000000000000000000000;
  local_d18._4_4_ = _UNK_15076c284;
  local_d18._8_8_ = _UNK_15076c288;
  local_d08 = ___xmm_c234000041f0000041f0000041f00000;
  uStack_d00 = _UNK_15076c998;
  local_cf8 = ___xmm_c2f00000427000004234000042b40000;
  uStack_cf0 = _UNK_15076c9f8;
  local_ce8 = ___xmm_000000000000000042b4000000000000;
  uStack_ce0 = _UNK_15076ad28;
  local_cd8 = ___xmm_433400000000000000000000c2b40000;
  uStack_cd0 = _UNK_15076c3f8;
  local_cc8 = ___xmm_00000000c33400000000000000000000;
  uStack_cc0 = _UNK_15076afe8;
  local_cb8 = ___xmm_c2b40000000000000000000042b40000;
  uStack_cb0 = _UNK_15076c9c8;
  local_ca8 = ___xmm_00000000431600000000000000000000;
  uStack_ca0 = _UNK_15076af28;
  local_c98 = ___xmm_42340000000000000000000000000000;
  uStack_c90 = _UNK_15076c338;
  local_c88 = ___xmm_43b40000c23400000000000000000000;
  uStack_c80 = _UNK_15076c448;
  local_c78 = ___xmm_c433c00043b4800044870000c4340000;
  uStack_c70 = _UNK_15076ca58;
  local_c68 = ___xmm_44870000c434000043b4000144872000;
  uStack_c60 = _UNK_15076c498;
  local_c58 = ___xmm_4b0000004b4b7078ce2ba95054518c2e;
  uStack_c50 = _UNK_15076c4f8;
  local_c48 = ___xmm_4b0000004b000001cb0000014afffffe;
  local_c38 = 0xcb000001;
  auVar97 = ___xmm_4b0000004b000001cb0000014afffffe;
  do {
    pTVar29 = TestRotatorToQuaternion(&local_9f8,pTVar28);
    local_1258 = *pTVar29;
    UE::Math::TQuat<float>::Rotator(&local_1258,&local_1138);
    pTVar31 = TestQuaternionToRotator((TRotator<float> *)local_1288,&local_1258);
    fVar110 = GlobalVectorConstants::Float360.m128_f32[3];
    fVar115 = local_1138.Pitch - (float)local_1288._0_4_;
    fVar123 = local_1138.Yaw - (float)local_1288._4_4_;
    auVar77._4_4_ = fVar123;
    auVar77._0_4_ = fVar115;
    auVar77._8_4_ = local_1138.Roll - (float)(undefined4)uStack_1280;
    auVar77._12_4_ = 0;
    auVar118 = divps(auVar77,(undefined1  [16])GlobalVectorConstants::Float360);
    auVar118 = roundps(auVar97,auVar118,3);
    fVar113 = GlobalVectorConstants::Float360.m128_f32[0];
    fVar93 = GlobalVectorConstants::Float360.m128_f32[1];
    fVar107 = GlobalVectorConstants::Float360.m128_f32[2];
    fVar115 = fVar115 - auVar118._0_4_ * fVar113;
    fVar123 = fVar123 - auVar118._4_4_ * fVar93;
    fVar126 = (local_1138.Roll - (float)(undefined4)uStack_1280) - auVar118._8_4_ * fVar107;
    fVar116 = 0.0 - auVar118._12_4_ * fVar110;
    fVar115 = (float)(~-(uint)(0.0 <= fVar115) & (uint)(fVar115 + fVar113) |
                     -(uint)(0.0 <= fVar115) & (uint)fVar115);
    fVar123 = (float)(~-(uint)(0.0 <= fVar123) & (uint)(fVar123 + fVar93) |
                     -(uint)(0.0 <= fVar123) & (uint)fVar123);
    fVar126 = (float)(~-(uint)(0.0 <= fVar126) & (uint)(fVar126 + fVar107) |
                     -(uint)(0.0 <= fVar126) & (uint)fVar126);
    fVar116 = (float)(~-(uint)(0.0 <= fVar116) & (uint)(fVar116 + fVar110) |
                     -(uint)(0.0 <= fVar116) & (uint)fVar116);
    uVar47 = -(uint)(GlobalVectorConstants::Float180.m128_f32[0] < fVar115);
    uVar49 = -(uint)(GlobalVectorConstants::Float180.m128_f32[1] < fVar123);
    uVar51 = -(uint)(GlobalVectorConstants::Float180.m128_f32[2] < fVar126);
    uVar53 = -(uint)(GlobalVectorConstants::Float180.m128_f32[3] < fVar116);
    auVar97._0_4_ = (float)(((uint)(fVar115 - fVar113) & uVar47 | ~uVar47 & (uint)fVar115) & uVar48)
    ;
    auVar97._4_4_ = (float)(((uint)(fVar123 - fVar93) & uVar49 | ~uVar49 & (uint)fVar123) & uVar50);
    auVar97._8_4_ = (float)(((uint)(fVar126 - fVar107) & uVar51 | ~uVar51 & (uint)fVar126) & uVar52)
    ;
    auVar97._12_4_ =
         (float)(((uint)(fVar116 - fVar110) & uVar53 | ~uVar53 & (uint)fVar116) & uVar54);
    auVar78._4_4_ = -(uint)(fVar56 < auVar97._4_4_);
    auVar78._0_4_ = -(uint)(fVar108 < auVar97._0_4_);
    auVar78._8_4_ = -(uint)(fVar106 < auVar97._8_4_);
    auVar78._12_4_ = -(uint)(fVar55 < auVar97._12_4_);
    iVar26 = movmskps((int)pTVar31,auVar78);
    if (iVar26 != 0) {
      if ((4 < (byte)LogUnrealMathTest._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest),
         4 < (byte)LogUnrealMathTest._0_1_)) {
        ::FString::PrintfImpl(&local_f58,L"P=%f Y=%f R=%f");
        ::FString::PrintfImpl(&local_f68,L"P=%f Y=%f R=%f");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
        if (local_f68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f68.Data.AllocatorInstance.Data);
        }
        if (local_f58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f58.Data.AllocatorInstance.Data);
        }
      }
      CheckPassing(false);
    }
    pTVar28 = pTVar28 + 1;
  } while (pTVar28 != &local_c34);
  auVar118 = insertps((undefined1  [16])UE::Math::TQuat<float>::Identity,
                      (undefined1  [16])UE::Math::TQuat<float>::Identity,8);
  fVar110 = auVar118._0_4_;
  fVar115 = auVar118._4_4_;
  fVar123 = auVar118._8_4_;
  fVar108 = auVar118._12_4_ * auVar118._12_4_;
  fVar56 = fVar115 * fVar115 + fVar110 * fVar110;
  fVar106 = fVar110 * fVar110 + fVar115 * fVar115;
  fVar55 = fVar108 + fVar123 * fVar123;
  fVar108 = fVar123 * fVar123 + fVar108;
  auVar79._0_4_ = fVar55 + fVar56;
  auVar79._4_4_ = fVar108 + fVar106;
  auVar79._8_4_ = fVar56 + fVar55;
  auVar79._12_4_ = fVar106 + fVar108;
  uVar48 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar79._0_4_);
  uVar50 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar79._4_4_);
  uVar52 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar79._8_4_);
  auVar118 = sqrtps(auVar79,auVar79);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_1278._4_4_ =
       (uint)(auVar118._4_4_ * fVar115) & uVar50 |
       ~uVar50 & GlobalVectorConstants::Float1000.m128_u32[1];
  local_1278._0_4_ =
       (uint)(auVar118._0_4_ * fVar110) & uVar48 |
       ~uVar48 & GlobalVectorConstants::Float1000.m128_u32[0];
  uStack_1290._0_4_ =
       (uint)(auVar118._8_4_ * fVar123) & uVar52 |
       ~uVar52 & GlobalVectorConstants::Float1000.m128_u32[2];
  local_1298 = local_1278;
  bVar25 = TestFVector3Equal((TVector<float> *)local_1298,&UE::Math::TVector<float>::XAxisVector,0.0
                            );
  LogTest<float>(L"FQuat4f::Identity.GetRotationAxis() == FVector3f::XAxisVector",bVar25);
  fVar108 = __real_3f800000;
  pTVar29 = &local_e78;
  local_e78.X = ___xmm_3f800000000000000000000000000000;
  local_e78.Y = _UNK_150689644;
  local_e78.Z = _UNK_150689648;
  local_e78.W = _UNK_15068964c;
  local_e58 = ___xmm_00000000000000003f80000000000000;
  uStack_e50 = _UNK_150689508;
  local_e68 = ___xmm_0000000000000000000000003f800000;
  uStack_e60 = _UNK_1506894f8;
  local_e38 = ___xmm_3f7ffffe39985c00b88f800038435600;
  uStack_e30 = _UNK_15076b168;
  local_e48 = ___xmm_000000003f8000000000000000000000;
  uStack_e40 = _UNK_150689538;
  do {
    auVar118 = insertps((undefined1  [16])*pTVar29,(undefined1  [16])*pTVar29,8);
    fVar115 = auVar118._0_4_;
    fVar123 = auVar118._4_4_;
    fVar126 = auVar118._8_4_;
    fVar56 = auVar118._12_4_ * auVar118._12_4_;
    fVar106 = fVar123 * fVar123 + fVar115 * fVar115;
    fVar55 = fVar115 * fVar115 + fVar123 * fVar123;
    fVar110 = fVar56 + fVar126 * fVar126;
    fVar56 = fVar126 * fVar126 + fVar56;
    auVar80._0_4_ = fVar110 + fVar106;
    auVar80._4_4_ = fVar56 + fVar55;
    auVar80._8_4_ = fVar106 + fVar110;
    auVar80._12_4_ = fVar55 + fVar56;
    uVar48 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar80._0_4_);
    uVar50 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar80._4_4_);
    uVar52 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar80._8_4_);
    auVar118 = sqrtps(auVar80,auVar80);
    auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
    local_1278._4_4_ =
         (uint)(auVar118._4_4_ * fVar123) & uVar50 |
         ~uVar50 & GlobalVectorConstants::Float1000.m128_u32[1];
    local_1278._0_4_ =
         (uint)(auVar118._0_4_ * fVar115) & uVar48 |
         ~uVar48 & GlobalVectorConstants::Float1000.m128_u32[0];
    uStack_1290._0_4_ =
         (uint)(auVar118._8_4_ * fVar126) & uVar52 |
         ~uVar52 & GlobalVectorConstants::Float1000.m128_u32[2];
    local_1298 = local_1278;
    bVar25 = TestQuatNormalized(pTVar29,fVar92);
    LogTest<float>(L"Quat -> Axis and Angle: Q is Normalized",bVar25);
    bVar25 = TestFVector3Normalized((TVector<float> *)local_1298,fVar92);
    LogTest<float>(L"Quat -> Axis and Angle: Axis is Normalized",bVar25);
    pTVar29 = pTVar29 + 1;
  } while (pTVar29 != (TQuat<float> *)local_e28);
  local_1030.Pitch = 300.0;
  local_1030.Yaw = -45.0;
  local_1030.Roll = 0.0;
  local_1010.Pitch = 10.0;
  local_1010.Yaw = 270.0;
  local_1010.Roll = 30.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1030,local_9e8);
  local_1258.X = pTVar29->X;
  local_1258.Y = pTVar29->Y;
  local_1258.Z = pTVar29->Z;
  local_1258.W = pTVar29->W;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1010,local_9c8);
  fVar115 = __real_3e800000;
  local_1248.X = pTVar29->X;
  local_1248.Y = pTVar29->Y;
  local_1248.Z = pTVar29->Z;
  local_1248.W = pTVar29->W;
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized
                      (&local_968,&local_1258,&local_1248,__real_3e800000);
  fVar113 = _UNK_1506895dc;
  fVar116 = _UNK_1506895d8;
  fVar126 = _UNK_1506895d4;
  fVar123 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar81._0_4_ = fVar109 + fVar93;
  auVar81._4_4_ = fVar111 + fVar107;
  auVar81._8_4_ = fVar93 + fVar109;
  auVar81._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar81,auVar81);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_1278._4_4_ =
       (uint)(auVar118._4_4_ * fVar106) & -(uint)(_UNK_1506895d4 <= auVar81._4_4_) |
       ~-(uint)(_UNK_1506895d4 <= auVar81._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
  local_1278._0_4_ =
       (uint)(auVar118._0_4_ * fVar56) &
       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar81._0_4_) |
       ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar81._0_4_) &
       GlobalVectorConstants::Float0001.m128_u32[0];
  uStack_1270._0_4_ =
       (uint)(auVar118._8_4_ * fVar55) & -(uint)(_UNK_1506895d8 <= auVar81._8_4_) |
       ~-(uint)(_UNK_1506895d8 <= auVar81._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
  uStack_1270._4_4_ =
       (uint)(auVar118._12_4_ * fVar110) & -(uint)(_UNK_1506895dc <= auVar81._12_4_) |
       ~-(uint)(_UNK_1506895dc <= auVar81._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_958,&local_1258,&local_1248,fVar115);
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar82._0_4_ = fVar109 + fVar93;
  auVar82._4_4_ = fVar111 + fVar107;
  auVar82._8_4_ = fVar93 + fVar109;
  auVar82._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar82,auVar82);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_11c8.X = (float)((uint)(auVar118._0_4_ * fVar56) & -(uint)(fVar123 <= auVar82._0_4_) |
                        ~-(uint)(fVar123 <= auVar82._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]);
  local_11c8.Y = (float)((uint)(auVar118._4_4_ * fVar106) & -(uint)(fVar126 <= auVar82._4_4_) |
                        ~-(uint)(fVar126 <= auVar82._4_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[1]);
  local_11c8.Z = (float)((uint)(auVar118._8_4_ * fVar55) & -(uint)(fVar116 <= auVar82._8_4_) |
                        ~-(uint)(fVar116 <= auVar82._8_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[2]);
  local_11c8.W = (float)((uint)(auVar118._12_4_ * fVar110) & -(uint)(fVar113 <= auVar82._12_4_) |
                        ~-(uint)(fVar113 <= auVar82._12_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[3]);
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  p_Var30 = (__m128 *)Old_Slerp<float>(&local_c28,&local_1258,&local_1248,fVar115);
  _local_1278 = *p_Var30;
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_c18,&local_1258,&local_1248,fVar115);
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar83._0_4_ = fVar109 + fVar93;
  auVar83._4_4_ = fVar111 + fVar107;
  auVar83._8_4_ = fVar93 + fVar109;
  auVar83._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar83,auVar83);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_1278._4_4_ =
       (uint)(auVar118._4_4_ * fVar106) & -(uint)(fVar126 <= auVar83._4_4_) |
       ~-(uint)(fVar126 <= auVar83._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
  local_1278._0_4_ =
       (uint)(auVar118._0_4_ * fVar56) & -(uint)(fVar123 <= auVar83._0_4_) |
       ~-(uint)(fVar123 <= auVar83._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
  uStack_1270._0_4_ =
       (uint)(auVar118._8_4_ * fVar55) & -(uint)(fVar116 <= auVar83._8_4_) |
       ~-(uint)(fVar116 <= auVar83._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
  uStack_1270._4_4_ =
       (uint)(auVar118._12_4_ * fVar110) & -(uint)(fVar113 <= auVar83._12_4_) |
       ~-(uint)(fVar113 <= auVar83._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_c08,&local_1258,&local_1248,fVar115);
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar84._0_4_ = fVar109 + fVar93;
  auVar84._4_4_ = fVar111 + fVar107;
  auVar84._8_4_ = fVar93 + fVar109;
  auVar84._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar84,auVar84);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_11c8.X = (float)((uint)(auVar118._0_4_ * fVar56) & -(uint)(fVar123 <= auVar84._0_4_) |
                        ~-(uint)(fVar123 <= auVar84._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]);
  local_11c8.Y = (float)((uint)(auVar118._4_4_ * fVar106) & -(uint)(fVar126 <= auVar84._4_4_) |
                        ~-(uint)(fVar126 <= auVar84._4_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[1]);
  local_11c8.Z = (float)((uint)(auVar118._8_4_ * fVar55) & -(uint)(fVar116 <= auVar84._8_4_) |
                        ~-(uint)(fVar116 <= auVar84._8_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[2]);
  local_11c8.W = (float)((uint)(auVar118._12_4_ * fVar110) & -(uint)(fVar113 <= auVar84._12_4_) |
                        ~-(uint)(fVar113 <= auVar84._12_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[3]);
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  p_Var30 = (__m128 *)Old_Slerp<float>(&local_bf8,&local_1258,&local_1248,fVar115);
  _local_1278 = *p_Var30;
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  fVar115 = __real_be800000;
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized
                      (&local_be8,&local_1258,&local_1248,__real_be800000);
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar85._0_4_ = fVar109 + fVar93;
  auVar85._4_4_ = fVar111 + fVar107;
  auVar85._8_4_ = fVar93 + fVar109;
  auVar85._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar85,auVar85);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_1278._4_4_ =
       (uint)(auVar118._4_4_ * fVar106) & -(uint)(fVar126 <= auVar85._4_4_) |
       ~-(uint)(fVar126 <= auVar85._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
  local_1278._0_4_ =
       (uint)(auVar118._0_4_ * fVar56) & -(uint)(fVar123 <= auVar85._0_4_) |
       ~-(uint)(fVar123 <= auVar85._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
  uStack_1270._0_4_ =
       (uint)(auVar118._8_4_ * fVar55) & -(uint)(fVar116 <= auVar85._8_4_) |
       ~-(uint)(fVar116 <= auVar85._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
  uStack_1270._4_4_ =
       (uint)(auVar118._12_4_ * fVar110) & -(uint)(fVar113 <= auVar85._12_4_) |
       ~-(uint)(fVar113 <= auVar85._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_bd8,&local_1258,&local_1248,fVar115);
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar86._0_4_ = fVar109 + fVar93;
  auVar86._4_4_ = fVar111 + fVar107;
  auVar86._8_4_ = fVar93 + fVar109;
  auVar86._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar86,auVar86);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_11c8.X = (float)((uint)(auVar118._0_4_ * fVar56) & -(uint)(fVar123 <= auVar86._0_4_) |
                        ~-(uint)(fVar123 <= auVar86._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]);
  local_11c8.Y = (float)((uint)(auVar118._4_4_ * fVar106) & -(uint)(fVar126 <= auVar86._4_4_) |
                        ~-(uint)(fVar126 <= auVar86._4_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[1]);
  local_11c8.Z = (float)((uint)(auVar118._8_4_ * fVar55) & -(uint)(fVar116 <= auVar86._8_4_) |
                        ~-(uint)(fVar116 <= auVar86._8_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[2]);
  local_11c8.W = (float)((uint)(auVar118._12_4_ * fVar110) & -(uint)(fVar113 <= auVar86._12_4_) |
                        ~-(uint)(fVar113 <= auVar86._12_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[3]);
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  p_Var30 = (__m128 *)Old_Slerp<float>(&local_bc8,&local_1258,&local_1248,fVar115);
  _local_1278 = *p_Var30;
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_bb8,&local_1258,&local_1248,fVar115);
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar87._0_4_ = fVar109 + fVar93;
  auVar87._4_4_ = fVar111 + fVar107;
  auVar87._8_4_ = fVar93 + fVar109;
  auVar87._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar87,auVar87);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_1278._4_4_ =
       (uint)(auVar118._4_4_ * fVar106) & -(uint)(fVar126 <= auVar87._4_4_) |
       ~-(uint)(fVar126 <= auVar87._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
  local_1278._0_4_ =
       (uint)(auVar118._0_4_ * fVar56) & -(uint)(fVar123 <= auVar87._0_4_) |
       ~-(uint)(fVar123 <= auVar87._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
  uStack_1270._0_4_ =
       (uint)(auVar118._8_4_ * fVar55) & -(uint)(fVar116 <= auVar87._8_4_) |
       ~-(uint)(fVar116 <= auVar87._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
  uStack_1270._4_4_ =
       (uint)(auVar118._12_4_ * fVar110) & -(uint)(fVar113 <= auVar87._12_4_) |
       ~-(uint)(fVar113 <= auVar87._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
  pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_ba8,&local_1258,&local_1248,fVar115);
  fVar56 = pTVar29->X;
  fVar106 = pTVar29->Y;
  fVar55 = pTVar29->Z;
  fVar110 = pTVar29->W;
  fVar93 = fVar106 * fVar106 + fVar56 * fVar56;
  fVar107 = fVar56 * fVar56 + fVar106 * fVar106;
  fVar109 = fVar110 * fVar110 + fVar55 * fVar55;
  fVar111 = fVar55 * fVar55 + fVar110 * fVar110;
  auVar88._0_4_ = fVar109 + fVar93;
  auVar88._4_4_ = fVar111 + fVar107;
  auVar88._8_4_ = fVar93 + fVar109;
  auVar88._12_4_ = fVar107 + fVar111;
  auVar118 = sqrtps(auVar88,auVar88);
  auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
  local_11c8.X = (float)((uint)(auVar118._0_4_ * fVar56) & -(uint)(fVar123 <= auVar88._0_4_) |
                        ~-(uint)(fVar123 <= auVar88._0_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[0]);
  local_11c8.Y = (float)((uint)(auVar118._4_4_ * fVar106) & -(uint)(fVar126 <= auVar88._4_4_) |
                        ~-(uint)(fVar126 <= auVar88._4_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[1]);
  local_11c8.Z = (float)((uint)(auVar118._8_4_ * fVar55) & -(uint)(fVar116 <= auVar88._8_4_) |
                        ~-(uint)(fVar116 <= auVar88._8_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[2]);
  local_11c8.W = (float)((uint)(auVar118._12_4_ * fVar110) & -(uint)(fVar113 <= auVar88._12_4_) |
                        ~-(uint)(fVar113 <= auVar88._12_4_) &
                        GlobalVectorConstants::Float0001.m128_u32[3]);
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  p_Var30 = (__m128 *)Old_Slerp<float>(&local_b98,&local_1258,&local_1248,fVar115);
  _local_1278 = *p_Var30;
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"TestQuatLerp",bVar25);
  local_ea8.Roll = 0.0;
  local_ea8.Pitch = ___xmm_4046800000000000403e000000000000;
  local_ea8.Yaw = _UNK_15076bf18;
  pTVar32 = UE::Math::TRotator<double>::Quaternion(&local_ea8,&local_7c8);
  local_10d8.Z = pTVar32->Z;
  local_10d8.W = pTVar32->W;
  local_10d8.X = pTVar32->X;
  local_10d8.Y = pTVar32->Y;
  local_e90.Pitch = ___xmm_c070e000000000004024000000000000;
  local_e90.Yaw = _UNK_15076c8c8;
  local_e90.Roll = __real_c060400000000000;
  pTVar32 = UE::Math::TRotator<double>::Quaternion(&local_e90,&local_7a8);
  dVar57 = __real_3fd0000000000000;
  local_10b8.X = pTVar32->X;
  local_10b8.Y = pTVar32->Y;
  local_10b8.Z = pTVar32->Z;
  local_10b8.W = pTVar32->W;
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (&local_948,&local_10d8,&local_10b8,__real_3fd0000000000000);
  dVar58 = __real_3e45798ee0000000;
  UE::Math::TQuat<double>::GetNormalized
            (pTVar32,(TQuat<double> *)&local_11a8,__real_3e45798ee0000000);
  local_1208 = (undefined1  [8])local_11a8.m128_u64[0];
  uStack_1200 = local_11a8.m128_u64[1];
  local_11f8 = local_1198;
  dStack_11f0 = dStack_1190;
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_928,&local_10d8,&local_10b8,dVar57);
  UE::Math::TQuat<double>::GetNormalized(pTVar32,(TQuat<double> *)local_1278,dVar58);
  dVar4 = __real_3eb0c6f7a0000000;
  local_11a8.m128_u64[0] = (ulong64)local_1278;
  local_11a8.m128_u64[1] = uStack_1270;
  local_1198 = local_1268;
  dStack_1190 = dStack_1260;
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,
                          __real_3eb0c6f7a0000000);
  LogTest<double>(L"TestQuatLerp",bVar25);
  pTVar32 = Old_Slerp<double>(&local_908,&local_10d8,&local_10b8,dVar57);
  local_1208 = (undefined1  [8])pTVar32->X;
  uStack_1200 = pTVar32->Y;
  local_11f8 = pTVar32->Z;
  dStack_11f0 = pTVar32->W;
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,dVar4);
  LogTest<double>(L"TestQuatLerp",bVar25);
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_8e8,&local_10d8,&local_10b8,dVar57);
  UE::Math::TQuat<double>::GetNormalized(pTVar32,(TQuat<double> *)local_1278,dVar58);
  local_1208 = local_1278;
  uStack_1200 = uStack_1270;
  local_11f8 = local_1268;
  dStack_11f0 = dStack_1260;
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_8c8,&local_10d8,&local_10b8,dVar57);
  UE::Math::TQuat<double>::GetNormalized(pTVar32,(TQuat<double> *)local_1278,dVar58);
  local_11a8.m128_u64[0] = (ulong64)local_1278;
  local_11a8.m128_u64[1] = uStack_1270;
  local_1198 = local_1268;
  dStack_1190 = dStack_1260;
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,dVar4);
  LogTest<double>(L"TestQuatLerp",bVar25);
  pTVar32 = Old_Slerp<double>(&local_8a8,&local_10d8,&local_10b8,dVar57);
  local_1208 = (undefined1  [8])pTVar32->X;
  uStack_1200 = pTVar32->Y;
  local_11f8 = pTVar32->Z;
  dStack_11f0 = pTVar32->W;
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,dVar4);
  LogTest<double>(L"TestQuatLerp",bVar25);
  dVar57 = __real_bfd0000000000000;
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (&local_888,&local_10d8,&local_10b8,__real_bfd0000000000000);
  UE::Math::TQuat<double>::GetNormalized(pTVar32,(TQuat<double> *)local_1278,dVar58);
  local_1208 = local_1278;
  uStack_1200 = uStack_1270;
  local_11f8 = local_1268;
  dStack_11f0 = dStack_1260;
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_868,&local_10d8,&local_10b8,dVar57);
  UE::Math::TQuat<double>::GetNormalized(pTVar32,(TQuat<double> *)local_1278,dVar58);
  local_11a8.m128_u64[0] = (ulong64)local_1278;
  local_11a8.m128_u64[1] = uStack_1270;
  local_1198 = local_1268;
  dStack_1190 = dStack_1260;
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,dVar4);
  LogTest<double>(L"TestQuatLerp",bVar25);
  pTVar32 = Old_Slerp<double>(&local_848,&local_10d8,&local_10b8,dVar57);
  local_1208 = (undefined1  [8])pTVar32->X;
  uStack_1200 = pTVar32->Y;
  local_11f8 = pTVar32->Z;
  dStack_11f0 = pTVar32->W;
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,dVar4);
  LogTest<double>(L"TestQuatLerp",bVar25);
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_828,&local_10d8,&local_10b8,dVar57);
  UE::Math::TQuat<double>::GetNormalized(pTVar32,(TQuat<double> *)local_1278,dVar58);
  local_1208 = local_1278;
  uStack_1200 = uStack_1270;
  local_11f8 = local_1268;
  dStack_11f0 = dStack_1260;
  pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized(&local_808,&local_10d8,&local_10b8,dVar57);
  UE::Math::TQuat<double>::GetNormalized(pTVar32,(TQuat<double> *)local_1278,dVar58);
  local_11a8.m128_u64[0] = (ulong64)local_1278;
  local_11a8.m128_u64[1] = uStack_1270;
  local_1198 = local_1268;
  dStack_1190 = dStack_1260;
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,dVar4);
  LogTest<double>(L"TestQuatLerp",bVar25);
  p_Var30 = (__m128 *)Old_Slerp<double>(&local_7e8,&local_10d8,&local_10b8,dVar57);
  _local_1208 = *p_Var30;
  local_11f8 = (double)p_Var30[1].m128_u64[0];
  dStack_11f0 = *(double *)((longlong)p_Var30 + 0x18);
  bVar25 = TestQuatsEqual((TQuat<double> *)local_1208,(TQuat<double> *)&local_11a8,dVar4);
  LogTest<double>(L"TestQuatLerp",bVar25);
  local_1238.Pitch = 30.0;
  local_1238.Yaw = -45.0;
  local_1238.Roll = 90.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1238,local_b88);
  local_1258.X = pTVar29->X;
  local_1258.Y = pTVar29->Y;
  local_1258.Z = pTVar29->Z;
  local_1258.W = pTVar29->W;
  pTVar29 = TestRotatorToQuaternion(&local_b68,&local_1238);
  local_1248.X = pTVar29->X;
  local_1248.Y = pTVar29->Y;
  local_1248.Z = pTVar29->Z;
  local_1248.W = pTVar29->W;
  bVar25 = TestQuatsEqual(&local_1258,&local_1248,fVar92);
  LogTest<float>(L"TestRotatorToQuaternion",bVar25);
  pTVar33 = (TVector<float>_u_0_s_0 *)UE::Math::TRotator<float>::Vector(&local_1238,&local_db0);
  _local_1298 = (undefined1  [12])*pTVar33;
  pTVar34 = UE::Math::TRotationMatrix<float>::TRotationMatrix<float>(&local_788,&local_1238);
  pTVar33 = (TVector<float>_u_0_s_0 *)
            UE::Math::TMatrix<float>::GetScaledAxis((TMatrix<float> *)pTVar34,&local_dbc,X);
  _local_e8 = (undefined1  [12])*pTVar33;
  bVar25 = TestFVector3Equal((TVector<float> *)local_1298,(TVector<float> *)local_e8,fVar92);
  LogTest<float>(L"Test0 Rotator::Vector()",bVar25);
  pTVar34 = UE::Math::TRotationMatrix<float>::TRotationMatrix<float>(&local_748,&local_1238);
  pTVar33 = (TVector<float>_u_0_s_0 *)
            UE::Math::TMatrix<float>::GetScaledAxis((TMatrix<float> *)pTVar34,&local_dc8,X);
  _local_1298 = *(undefined1 (*) [12])pTVar33;
  local_f98.X = local_1258.X;
  local_f98.Y = local_1258.Y;
  local_f98.Z = local_1258.Z;
  local_f98.W = local_1258.W;
  pTVar35 = UE::Math::TQuatRotationMatrix<float>::TQuatRotationMatrix<float>(&local_708,&local_f98);
  pTVar33 = (TVector<float>_u_0_s_0 *)
            UE::Math::TMatrix<float>::GetScaledAxis((TMatrix<float> *)pTVar35,&local_dd4,X);
  fVar56 = __real_3727c5ac;
  _local_e8 = *(undefined1 (*) [12])pTVar33;
  bVar25 = TestFVector3Equal((TVector<float> *)local_1298,(TVector<float> *)local_e8,__real_3727c5ac
                            );
  LogTest<float>(L"Test0 FQuatRotationMatrix",bVar25);
  local_1238.Pitch = 45.0;
  local_1238.Yaw = 60.0;
  local_1238.Roll = 120.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1238,local_b58);
  local_1258 = *pTVar29;
  pTVar29 = TestRotatorToQuaternion(&local_b38,&local_1238);
  local_1248.X = pTVar29->X;
  local_1248.Y = pTVar29->Y;
  local_1248.Z = pTVar29->Z;
  local_1248.W = pTVar29->W;
  bVar25 = TestQuatsEqual(&local_1258,&local_1248,fVar92);
  LogTest<float>(L"TestRotatorToQuaternion",bVar25);
  pTVar33 = (TVector<float>_u_0_s_0 *)UE::Math::TRotator<float>::Vector(&local_1238,&local_dec);
  _local_1298 = *(undefined1 (*) [12])pTVar33;
  pTVar34 = UE::Math::TRotationMatrix<float>::TRotationMatrix<float>(&local_6c8,&local_1238);
  pTVar33 = (TVector<float>_u_0_s_0 *)
            UE::Math::TMatrix<float>::GetScaledAxis
                      ((TMatrix<float> *)pTVar34,(TVector<float> *)(local_e28 + 0xc),X);
  _local_e8 = *(undefined1 (*) [12])pTVar33;
  bVar25 = TestFVector3Equal((TVector<float> *)local_1298,(TVector<float> *)local_e8,fVar92);
  LogTest<float>(L"Test1 Rotator::Vector()",bVar25);
  pTVar34 = UE::Math::TRotationMatrix<float>::TRotationMatrix<float>(&local_688,&local_1238);
  pTVar33 = (TVector<float>_u_0_s_0 *)
            UE::Math::TMatrix<float>::GetScaledAxis((TMatrix<float> *)pTVar34,&local_de0,X);
  TVar23 = local_1258;
  _local_1298 = *(undefined1 (*) [12])pTVar33;
  local_fa8.X = local_1258.X;
  local_fa8.Y = local_1258.Y;
  local_fa8.Z = local_1258.Z;
  local_fa8.W = local_1258.W;
  local_1258 = TVar23;
  pTVar35 = UE::Math::TQuatRotationMatrix<float>::TQuatRotationMatrix<float>(&local_648,&local_fa8);
  pTVar33 = (TVector<float>_u_0_s_0 *)
            UE::Math::TMatrix<float>::GetScaledAxis((TMatrix<float> *)pTVar35,&local_d98,X);
  _local_e8 = *(undefined1 (*) [12])pTVar33;
  bVar25 = TestFVector3Equal((TVector<float> *)local_1298,(TVector<float> *)local_e8,fVar56);
  LogTest<float>(L"Test1 FQuatRotationMatrix",bVar25);
  pTVar34 = UE::Math::TRotationMatrix<float>::TRotationMatrix<float>
                      (&local_608,&UE::Math::TRotator<float>::ZeroRotator);
  pTVar36 = &UE::Math::TMatrix<float>::GetScaledAxis
                       ((TMatrix<float> *)pTVar34,(TVector<float> *)local_e28,X)->field0_0x0;
  _local_1298 = (undefined1  [12])*pTVar36;
  pTVar35 = UE::Math::TQuatRotationMatrix<float>::TQuatRotationMatrix<float>
                      (&local_5c8,&UE::Math::TQuat<float>::Identity);
  pTVar36 = &UE::Math::TMatrix<float>::GetScaledAxis((TMatrix<float> *)pTVar35,&local_da4,X)->
             field0_0x0;
  _local_e8 = (undefined1  [12])*pTVar36;
  bVar25 = TestFVector3Equal((TVector<float> *)local_1298,(TVector<float> *)local_e8,fVar92);
  LogTest<float>(L"Test2 FQuatRotationMatrix",bVar25);
  local_d88 = UE::Math::TQuat<float>::Identity;
  local_1000.Pitch = 30.0;
  local_1000.Yaw = 30.0;
  local_1000.Roll = 30.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1000,&local_b28);
  local_d78._0_4_ = pTVar29->X;
  local_d78._4_4_ = pTVar29->Y;
  uStack_d70._0_4_ = pTVar29->Z;
  uStack_d70._4_4_ = pTVar29->W;
  local_ff4.Pitch = 30.0;
  local_ff4.Yaw = -45.0;
  local_ff4.Roll = 90.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_ff4,&local_b18);
  local_d68._0_4_ = pTVar29->X;
  local_d68._4_4_ = pTVar29->Y;
  uStack_d60._0_4_ = pTVar29->Z;
  uStack_d60._4_4_ = pTVar29->W;
  local_fe8.Pitch = 45.0;
  local_fe8.Yaw = 60.0;
  local_fe8.Roll = 120.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_fe8,&local_b08);
  local_d58._0_4_ = pTVar29->X;
  local_d58._4_4_ = pTVar29->Y;
  uStack_d50._0_4_ = pTVar29->Z;
  uStack_d50._4_4_ = pTVar29->W;
  local_fdc.Pitch = 0.0;
  local_fdc.Yaw = 180.0;
  local_fdc.Roll = 45.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_fdc,&local_af8);
  local_d48._0_4_ = pTVar29->X;
  local_d48._4_4_ = pTVar29->Y;
  uStack_d40._0_4_ = pTVar29->Z;
  uStack_d40._4_4_ = pTVar29->W;
  local_fd0.Pitch = -120.0;
  local_fd0.Yaw = -90.0;
  local_fd0.Roll = 0.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_fd0,&local_ae8);
  local_d38._0_4_ = pTVar29->X;
  local_d38._4_4_ = pTVar29->Y;
  uStack_d30._0_4_ = pTVar29->Z;
  uStack_d30._4_4_ = pTVar29->W;
  local_fc4.Pitch = -0.01;
  local_fc4.Yaw = 0.02;
  local_fc4.Roll = -0.03;
  pTVar37 = UE::Math::TRotator<float>::Quaternion(&local_fc4,&local_ad8);
  pTVar29 = &local_d88;
  uVar48 = 0;
  pfVar43 = &local_d88.Y;
  local_d28._0_4_ = pTVar37->X;
  local_d28._4_4_ = pTVar37->Y;
  uStack_d20._0_4_ = pTVar37->Z;
  uStack_d20._4_4_ = pTVar37->W;
  local_208._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_1fc = CONCAT44(UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X);
  local_1f0 = UE::Math::TVector<float>::RightVector.field0_0x0._0_8_;
  local_208._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_1e4 = UE::Math::TVector<float>::UpVector.field0_0x0._0_8_;
  local_208._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_1f4 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  local_1d8 = ___xmm_c234000042f00000c270000042340000;
  uStack_1d0 = _UNK_15076c9a8;
  local_1c8 = ___xmm_3f13cd3a3f13cd3ac2f0000042700000;
  uStack_1c0 = _UNK_15076b108;
  local_1e8 = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Z;
  local_1b8 = ___xmm_3cf5c28f3ca3d70a3c23d70a3f13cd3a;
  uStack_1b0 = _UNK_15076b0b8;
  local_1dc = UE::Math::TVector<float>::UpVector.field0_0x0._s_0.Z;
  local_1a8 = ___xmm_3c23d70abcf5c28f3ca3d70abc23d70a;
  uStack_1a0 = _UNK_15076b0a8;
  local_198 = 0xbca3d70a;
  local_194 = 0x3cf5c28f;
  do {
    uVar50 = 0;
    pTVar46 = (TVector<float> *)local_208;
    do {
      ::FString::PrintfImpl(&local_f48,L"Test Quat%d: Vec%d: %s");
      pTVar38 = TestQuaternionRotateVectorScalar(&local_e10,pTVar29,pTVar46);
      fVar92 = pTVar29->Y;
      fVar56 = pTVar29->X;
      fVar106 = pfVar43[1];
      uVar5 = *(undefined8 *)&pTVar46->field0_0x0;
      fVar55 = (pTVar46->field0_0x0)._s_0.Z;
      fVar110 = pTVar29->W;
      local_1278 = (undefined1  [8])uVar5;
      _Var119 = _local_1278;
      local_1278._0_4_ = (undefined4)uVar5;
      fVar126 = (float)((ulonglong)uVar5 >> 0x20);
      fVar116 = fVar126 * fVar56 - (float)local_1278._0_4_ * fVar92;
      fVar123 = (float)local_1278._0_4_ * fVar106 - fVar55 * fVar56;
      fVar116 = fVar116 + fVar116;
      fVar115 = fVar55 * fVar92 - fVar126 * fVar106;
      fVar123 = fVar123 + fVar123;
      fVar115 = fVar115 + fVar115;
      local_fb8._s_0.X =
           (fVar116 * fVar92 - fVar123 * fVar106) + fVar115 * fVar110 + (float)local_1278._0_4_;
      local_fb8._s_0.Z = (fVar56 * fVar123 - fVar115 * fVar92) + fVar116 * fVar110 + fVar55;
      local_fb8._s_0.Y = (fVar115 * fVar106 - fVar56 * fVar116) + fVar123 * fVar110 + fVar126;
      _local_1278 = _Var119;
      bVar25 = TestFVector3Equal((TVector<float> *)&local_fb8._s_0,pTVar38,fVar122);
      FVar41.Data = (FScriptContainerElement *)L"";
      if (local_f48.Data.ArrayNum != 0) {
        FVar41.Data = local_f48.Data.AllocatorInstance.Data;
      }
      LogTest<float>((wchar_t *)FVar41.Data,bVar25);
      if (local_f48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f48.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_f28,L"Test Quat%d: Vec%d: %s");
      pTVar38 = TestQuaternionRotateVectorRegister(&local_e04,pTVar29,pTVar46);
      fVar92 = pTVar29->Y;
      fVar56 = pTVar29->X;
      fVar106 = pfVar43[1];
      uVar5 = *(undefined8 *)&pTVar46->field0_0x0;
      fVar55 = (pTVar46->field0_0x0)._s_0.Z;
      fVar110 = pTVar29->W;
      local_1288 = (undefined1  [8])uVar5;
      _Var119 = _local_1288;
      local_1288._0_4_ = (undefined4)uVar5;
      fVar126 = (float)((ulonglong)uVar5 >> 0x20);
      fVar116 = fVar126 * fVar56 - (float)local_1288._0_4_ * fVar92;
      fVar123 = (float)local_1288._0_4_ * fVar106 - fVar55 * fVar56;
      fVar116 = fVar116 + fVar116;
      fVar115 = fVar55 * fVar92 - fVar126 * fVar106;
      fVar123 = fVar123 + fVar123;
      fVar115 = fVar115 + fVar115;
      local_1064._s_0.X =
           (fVar116 * fVar92 - fVar123 * fVar106) + fVar115 * fVar110 + (float)local_1288._0_4_;
      local_1064._s_0.Z = (fVar56 * fVar123 - fVar115 * fVar92) + fVar116 * fVar110 + fVar55;
      local_1064._s_0.Y = (fVar115 * fVar106 - fVar56 * fVar116) + fVar123 * fVar110 + fVar126;
      _local_1288 = _Var119;
      bVar25 = TestFVector3Equal((TVector<float> *)&local_1064._s_0,pTVar38,fVar122);
      FVar41.Data = (FScriptContainerElement *)L"";
      if (local_f28.Data.ArrayNum != 0) {
        FVar41.Data = local_f28.Data.AllocatorInstance.Data;
      }
      LogTest<float>((wchar_t *)FVar41.Data,bVar25);
      if (local_f28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f28.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_f38,L"Test Quat%d: Vec%d: %s");
      pTVar38 = TestQuaternionMultiplyVector(&local_df8,pTVar29,pTVar46);
      fVar92 = pTVar29->Y;
      fVar56 = pTVar29->X;
      fVar106 = pfVar43[1];
      uVar5 = *(undefined8 *)&pTVar46->field0_0x0;
      fVar55 = (pTVar46->field0_0x0)._s_0.Z;
      fVar110 = pTVar29->W;
      local_1298 = (undefined1  [8])uVar5;
      _Var119 = _local_1298;
      local_1298._0_4_ = (undefined4)uVar5;
      fVar126 = (float)((ulonglong)uVar5 >> 0x20);
      fVar116 = fVar126 * fVar56 - (float)local_1298._0_4_ * fVar92;
      fVar123 = (float)local_1298._0_4_ * fVar106 - fVar55 * fVar56;
      fVar116 = fVar116 + fVar116;
      fVar115 = fVar55 * fVar92 - fVar126 * fVar106;
      fVar123 = fVar123 + fVar123;
      fVar115 = fVar115 + fVar115;
      local_1040._s_0.X =
           (fVar116 * fVar92 - fVar123 * fVar106) + fVar115 * fVar110 + (float)local_1298._0_4_;
      local_1040._s_0.Z = (fVar56 * fVar123 - fVar115 * fVar92) + fVar116 * fVar110 + fVar55;
      local_1040._s_0.Y = (fVar115 * fVar106 - fVar56 * fVar116) + fVar123 * fVar110 + fVar126;
      _local_1298 = _Var119;
      bVar25 = TestFVector3Equal((TVector<float> *)&local_1040._s_0,pTVar38,fVar122);
      FVar41.Data = (FScriptContainerElement *)L"";
      if (local_f38.Data.ArrayNum != 0) {
        FVar41.Data = local_f38.Data.AllocatorInstance.Data;
      }
      LogTest<float>((wchar_t *)FVar41.Data,bVar25);
      if (local_f38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f38.Data.AllocatorInstance.Data);
      }
      uVar50 = uVar50 + 1;
      pTVar46 = pTVar46 + 1;
    } while (uVar50 < 10);
    uVar48 = uVar48 + 1;
    pTVar29 = pTVar29 + 1;
    pfVar43 = pfVar43 + 4;
  } while (uVar48 < 7);
  local_f18 = ___xmm_bf8000003f8000003f8000003f800000;
  uStack_f10 = _UNK_15076c628;
  local_f08 = 0xbf800000;
  local_f04 = 0xbf800000;
  pfVar43 = (float *)((longlong)&local_f18 + 4);
  do {
    pTVar46 = (TVector<float> *)local_208;
    do {
      pfVar45 = (float *)(local_208 + 8);
      do {
        uVar48 = __xmm_80000000800000008000000080000000;
        fVar92 = (pTVar46->field0_0x0)._s_0.X;
        fVar56 = (pTVar46->field0_0x0)._s_0.Y;
        fVar106 = (pTVar46->field0_0x0)._s_0.Z;
        _local_1228 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
        fVar55 = fVar56 * fVar56 + fVar92 * fVar92 + fVar106 * fVar106;
        if (fVar55 == fVar108) {
          _local_1218 = *(undefined8 *)&pTVar46->field0_0x0;
          local_1210 = (pTVar46->field0_0x0)._s_0.Z;
        }
        else if (__real_322bcc77 <= fVar55) {
          fVar55 = fVar108 / SQRT(fVar55);
          local_1210 = fVar106 * fVar55;
          fStack_1214 = fVar55 * fVar56;
          local_1218 = fVar92 * fVar55;
        }
        else {
          local_1210 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          _local_1218 = _local_1228;
        }
        fVar106 = pfVar45[-1] * *pfVar43;
        fVar56 = pfVar45[-2] * pfVar43[-1];
        local_1220 = *pfVar45 * pfVar43[1];
        fVar92 = fVar56 * fVar56 + fVar106 * fVar106 + (float)local_1220 * (float)local_1220;
        if (fVar92 == fVar108) {
          _local_1228 = CONCAT44(fVar106,fVar56);
        }
        else if (__real_322bcc77 <= fVar92) {
          fVar92 = fVar108 / SQRT(fVar92);
          local_1220 = fVar92 * (float)local_1220;
          fStack_1224 = fVar92 * fVar106;
          local_1228 = fVar92 * fVar56;
        }
        else {
          local_1220 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        FindBetween_Old((TQuat<float> *)&local_11a8,(TVector<float> *)&local_1218,
                        (TVector<float> *)&local_1228);
        fVar108 = fStack_1224 * fStack_1214 + local_1228 * local_1218 +
                  (float)local_1220 * (float)local_1210 + fVar108;
        if (fVar108 < __real_358637bd) {
          if ((float)((uint)local_1218 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
              (float)((uint)fStack_1214 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            local_f74 = (float)(local_1210 ^ uVar48);
            pfVar39 = &local_f78;
            local_f70 = fStack_1214;
            local_f78 = 0.0;
            local_f6c = 0;
          }
          else {
            local_f88[0] = (float)(local_1210 ^ uVar48);
            pfVar39 = local_f88;
            local_f88[2] = local_1218;
            local_f88[1] = 0.0;
            uStack_f7c = 0;
          }
          fVar92 = *pfVar39;
          fVar56 = pfVar39[1];
          fVar106 = pfVar39[2];
          fVar108 = pfVar39[3];
        }
        else {
          fVar92 = (float)local_1220 * fStack_1214 - fStack_1224 * (float)local_1210;
          fVar56 = local_1228 * (float)local_1210 - (float)local_1220 * local_1218;
          fVar106 = fStack_1224 * local_1218 - local_1228 * fStack_1214;
        }
        fVar55 = fVar56 * fVar56 + fVar92 * fVar92;
        fVar110 = fVar92 * fVar92 + fVar56 * fVar56;
        fVar115 = fVar108 * fVar108 + fVar106 * fVar106;
        fVar123 = fVar106 * fVar106 + fVar108 * fVar108;
        auVar89._0_4_ = fVar115 + fVar55;
        auVar89._4_4_ = fVar123 + fVar110;
        auVar89._8_4_ = fVar55 + fVar115;
        auVar89._12_4_ = fVar110 + fVar123;
        auVar118 = sqrtps(auVar89,auVar89);
        auVar118 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar118);
        fVar115 = (float)((uint)(auVar118._0_4_ * fVar92) &
                          -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar89._0_4_) |
                         ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar89._0_4_) &
                         GlobalVectorConstants::Float0001.m128_u32[0]);
        fVar123 = (float)((uint)(auVar118._4_4_ * fVar56) & -(uint)(_UNK_1506895d4 <= auVar89._4_4_)
                         | ~-(uint)(_UNK_1506895d4 <= auVar89._4_4_) &
                           GlobalVectorConstants::Float0001.m128_u32[1]);
        fVar126 = (float)((uint)(auVar118._8_4_ * fVar106) &
                          -(uint)(_UNK_1506895d8 <= auVar89._8_4_) |
                         ~-(uint)(_UNK_1506895d8 <= auVar89._8_4_) &
                         GlobalVectorConstants::Float0001.m128_u32[2]);
        fVar116 = (float)((uint)(auVar118._12_4_ * fVar108) &
                          -(uint)(_UNK_1506895dc <= auVar89._12_4_) |
                         ~-(uint)(_UNK_1506895dc <= auVar89._12_4_) &
                         GlobalVectorConstants::Float0001.m128_u32[3]);
        local_1208._4_4_ = fVar123;
        local_1208._0_4_ = fVar115;
        uStack_1200._0_4_ = fVar126;
        uStack_1200._4_4_ = fVar116;
        UE::Math::TQuat<float>::FindBetweenNormals
                  (&local_10e8,(TVector<float> *)&local_1218,(TVector<float> *)&local_1228);
        local_107c._s_0.Z = *pfVar45 * pfVar43[1];
        local_107c._s_0.Y = pfVar45[-1] * *pfVar43;
        local_107c._s_0.X = pfVar45[-2] * pfVar43[-1];
        UE::Math::TQuat<float>::FindBetweenVectors
                  (&local_1098,pTVar46,(TVector<float> *)&local_107c._s_0);
        _Var24 = _local_e8;
        _Var124 = _local_1278;
        _Var125 = _local_1288;
        _Var119 = _local_1298;
        fVar92 = __real_358637bd;
        fVar106 = local_11a8.m128_f32[0] * fStack_1214 - local_11a8.m128_f32[1] * local_1218;
        fVar56 = local_11a8.m128_f32[2] * local_1218 - local_11a8.m128_f32[0] * (float)local_1210;
        fVar106 = fVar106 + fVar106;
        fVar108 = local_11a8.m128_f32[1] * (float)local_1210 - local_11a8.m128_f32[2] * fStack_1214;
        fVar56 = fVar56 + fVar56;
        fVar108 = fVar108 + fVar108;
        local_1288._4_4_ =
             (fVar108 * local_11a8.m128_f32[2] - fVar106 * local_11a8.m128_f32[0]) +
             fVar56 * local_11a8.m128_f32[3] + fStack_1214;
        local_1288._0_4_ =
             (fVar106 * local_11a8.m128_f32[1] - fVar56 * local_11a8.m128_f32[2]) +
             fVar108 * local_11a8.m128_f32[3] + local_1218;
        uStack_1280._4_4_ = _Var125.m128_i32[3];
        uStack_1280._0_4_ =
             (fVar56 * local_11a8.m128_f32[0] - fVar108 * local_11a8.m128_f32[1]) +
             fVar106 * local_11a8.m128_f32[3] + (float)local_1210;
        fVar55 = fVar115 * fStack_1214 - fVar123 * local_1218;
        fVar106 = fVar126 * local_1218 - fVar115 * (float)local_1210;
        fVar55 = fVar55 + fVar55;
        fVar56 = fVar123 * (float)local_1210 - fVar126 * fStack_1214;
        fVar106 = fVar106 + fVar106;
        fVar56 = fVar56 + fVar56;
        fVar108 = (fVar123 * fVar55 - fVar126 * fVar106) + fVar116 * fVar56 + local_1218;
        local_1298._0_4_ = fVar108;
        _Var125 = _local_1298;
        fVar110 = local_10e8.X * fStack_1214 - local_10e8.Y * local_1218;
        fVar110 = fVar110 + fVar110;
        uStack_1290._4_4_ = _Var119.m128_i32[3];
        local_1298 = _Var125.m128_u64[0];
        uStack_1290._0_4_ =
             (fVar115 * fVar106 - fVar123 * fVar56) + fVar116 * fVar55 + (float)local_1210;
        local_1298._4_4_ = (fVar126 * fVar56 - fVar115 * fVar55) + fVar116 * fVar106 + fStack_1214;
        fVar56 = local_10e8.Z * local_1218 - local_10e8.X * (float)local_1210;
        fVar108 = local_10e8.Y * (float)local_1210 - local_10e8.Z * fStack_1214;
        fVar56 = fVar56 + fVar56;
        fVar108 = fVar108 + fVar108;
        local_e8._4_4_ =
             (local_10e8.Z * fVar108 - local_10e8.X * fVar110) + local_10e8.W * fVar56 + fStack_1214
        ;
        local_e8._0_4_ =
             (local_10e8.Y * fVar110 - local_10e8.Z * fVar56) + local_10e8.W * fVar108 + local_1218;
        uStack_e0._4_4_ = _Var24.m128_i32[3];
        uStack_e0._0_4_ =
             (local_10e8.X * fVar56 - local_10e8.Y * fVar108) +
             local_10e8.W * fVar110 + (float)local_1210;
        fVar106 = local_1098.X * fStack_1214 - local_1098.Y * local_1218;
        fVar56 = local_1098.Z * local_1218 - local_1098.X * (float)local_1210;
        fVar106 = fVar106 + fVar106;
        fVar108 = local_1098.Y * (float)local_1210 - local_1098.Z * fStack_1214;
        fVar56 = fVar56 + fVar56;
        fVar108 = fVar108 + fVar108;
        local_1278._4_4_ =
             (local_1098.Z * fVar108 - local_1098.X * fVar106) + local_1098.W * fVar56 + fStack_1214
        ;
        local_1278._0_4_ =
             (local_1098.Y * fVar106 - local_1098.Z * fVar56) + local_1098.W * fVar108 + local_1218;
        uStack_1270._4_4_ = _Var124.m128_i32[3];
        uStack_1270._0_4_ =
             (local_1098.X * fVar56 - local_1098.Y * fVar108) +
             local_1098.W * fVar106 + (float)local_1210;
        if (((((pTVar46->field0_0x0)._s_0.X == 0.0) && ((pTVar46->field0_0x0)._s_0.Y == 0.0)) &&
            ((pTVar46->field0_0x0)._s_0.Z == 0.0)) ||
           (((pfVar45[-2] == 0.0 && (pfVar45[-1] == 0.0)) && (*pfVar45 == 0.0)))) {
          bVar25 = TestQuatsEqual((TQuat<float> *)&local_11a8,&local_10e8,__real_358637bd);
          LogTest<float>(L"FindBetween: Old == New (normal)",bVar25);
          bVar25 = TestQuatsEqual((TQuat<float> *)local_1208,&local_10e8,fVar92);
          LogTest<float>(L"FindBetween: Old_5_2 == New (normal)",bVar25);
          bVar25 = TestQuatsEqual((TQuat<float> *)&local_11a8,&local_1098,fVar92);
          pwVar42 = L"FindBetween: Old == New (vector)";
        }
        else {
          bVar25 = TestQuatsEqual((TQuat<float> *)local_1208,&local_10e8,__real_358637bd);
          LogTest<float>(L"FindBetween: Old_5_2 == New (normal)",bVar25);
          bVar25 = TestFVector3Equal((TVector<float> *)local_1288,(TVector<float> *)&local_1228,
                                     fVar122);
          LogTest<float>(L"FindBetween: Old A->B",bVar25);
          bVar25 = TestFVector3Equal((TVector<float> *)local_1298,(TVector<float> *)&local_1228,
                                     fVar122);
          LogTest<float>(L"FindBetween: Old_5_2 A->B",bVar25);
          bVar25 = TestFVector3Equal((TVector<float> *)local_e8,(TVector<float> *)&local_1228,
                                     fVar122);
          LogTest<float>(L"FindBetween: New A->B (normal)",bVar25);
          bVar25 = TestFVector3Equal((TVector<float> *)local_1278,(TVector<float> *)&local_1228,
                                     fVar122);
          pwVar42 = L"FindBetween: New A->B (vector)";
        }
        LogTest<float>(pwVar42,bVar25);
        pfVar39 = pfVar45 + 1;
        pfVar45 = pfVar45 + 3;
        fVar108 = __real_3f800000;
      } while (pfVar39 != (float *)local_190);
      pTVar46 = pTVar46 + 1;
    } while (pTVar46 != (TVector<float> *)local_190);
    pTVar46 = (TVector<float> *)(pfVar43 + 2);
    pfVar43 = pfVar43 + 3;
  } while (pTVar46 != &local_f00);
  pTVar46 = (TVector<float> *)local_208;
  do {
    fVar106 = __real_322bcc77;
    fVar92 = (pTVar46->field0_0x0)._s_0.X;
    fVar108 = (pTVar46->field0_0x0)._s_0.Y;
    fVar56 = (pTVar46->field0_0x0)._s_0.Z;
    fVar55 = fVar108 * fVar108 + fVar92 * fVar92 + fVar56 * fVar56;
    if (fVar55 == __real_3f800000) {
      _local_1168 = *(undefined8 *)&pTVar46->field0_0x0;
      local_1160 = (pTVar46->field0_0x0)._s_0.Z;
    }
    else if (__real_322bcc77 <= fVar55) {
      fVar55 = __real_3f800000 / SQRT(fVar55);
      local_1160 = fVar56 * fVar55;
      fStack_1164 = fVar55 * fVar108;
      local_1168 = fVar55 * fVar92;
    }
    else {
      _local_1168 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      local_1160 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    pTVar29 = UE::Math::TQuat<float>::FindBetweenNormals
                        (&local_ac8,&UE::Math::TVector<float>::ForwardVector,
                         (TVector<float> *)&local_1168);
    local_1258 = *pTVar29;
    pTVar29 = UE::Math::TVector<float>::ToOrientationQuat(pTVar46,&local_ab8);
    local_1248.X = pTVar29->X;
    local_1248.Y = pTVar29->Y;
    local_1248.Z = pTVar29->Z;
    local_1248.W = pTVar29->W;
    UE::Math::TVector<float>::ToOrientationRotator(pTVar46,local_ef0);
    _Var124 = _local_1278;
    _Var119 = _local_1298;
    fVar55 = local_1258.X * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y -
             local_1258.Y * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
    fVar56 = local_1258.Z * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X -
             local_1258.X * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
    fVar55 = fVar55 + fVar55;
    fVar108 = local_1258.Y * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z -
              local_1258.Z * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
    fVar56 = fVar56 + fVar56;
    fVar108 = fVar108 + fVar108;
    fVar92 = (fVar55 * local_1258.Y - fVar56 * local_1258.Z) +
             fVar108 * local_1258.W + UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
    local_1298._0_4_ = fVar92;
    _Var125 = _local_1298;
    uStack_1290._4_4_ = _Var119.m128_i32[3];
    local_1298 = _Var125.m128_u64[0];
    uStack_1290._0_4_ =
         (fVar56 * local_1258.X - fVar108 * local_1258.Y) +
         fVar55 * local_1258.W + UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
    local_1298._4_4_ =
         (fVar108 * local_1258.Z - fVar55 * local_1258.X) +
         fVar56 * local_1258.W + UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
    fVar56 = local_1248.X * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y -
             local_1248.Y * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
    fVar108 = local_1248.Z * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X -
              local_1248.X * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
    fVar108 = fVar108 + fVar108;
    fVar56 = fVar56 + fVar56;
    fVar92 = local_1248.Y * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z -
             local_1248.Z * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
    fVar92 = fVar92 + fVar92;
    local_1278._4_4_ =
         (local_1248.Z * fVar92 - local_1248.X * fVar56) +
         local_1248.W * fVar108 + UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
    local_1278._0_4_ =
         (local_1248.Y * fVar56 - local_1248.Z * fVar108) +
         local_1248.W * fVar92 + UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
    uStack_1270._4_4_ = _Var124.m128_i32[3];
    uStack_1270._0_4_ =
         (local_1248.X * fVar108 - local_1248.Y * fVar92) +
         local_1248.W * fVar56 + UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
    UE::Math::TRotator<float>::RotateVector
              (local_ef0,&local_f00,&UE::Math::TVector<float>::ForwardVector);
    bVar25 = TestFVector3Equal((TVector<float> *)local_1298,(TVector<float> *)local_1278,fVar122);
    LogTest<float>(L"V.ToOrientationQuat() rotate",bVar25);
    bVar25 = TestFVector3Equal((TVector<float> *)local_1298,&local_f00,fVar122);
    LogTest<float>(L"V.ToOrientationRotator() rotate",bVar25);
    pTVar46 = pTVar46 + 1;
  } while (pTVar46 != (TVector<float> *)local_190);
  if (((fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[0][0] &
                         __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[0][1] &
                        __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     ((((fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[0][2] &
                          __xmm_7fffffff7fffffff7fffffff7fffffff) ||
        ((fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[1][0] &
                           __xmm_7fffffff7fffffff7fffffff7fffffff) ||
         (fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[1][1] &
                           __xmm_7fffffff7fffffff7fffffff7fffffff))))) ||
       (fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[1][2] &
                         __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
      (((fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[2][0] &
                          __xmm_7fffffff7fffffff7fffffff7fffffff) ||
        (fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[2][1] &
                          __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
       (fVar106 < (float)((uint)UE::Math::TMatrix<float>::Identity.M[2][2] &
                         __xmm_7fffffff7fffffff7fffffff7fffffff))))))) {
    FMath::MatrixInverse(&local_348,&UE::Math::TMatrix<float>::Identity);
    local_488.M[0][0] = local_348.M[0][0];
    local_488.M[0][1] = local_348.M[0][1];
    local_488.M[0][2] = local_348.M[0][2];
    local_488.M[0][3] = local_348.M[0][3];
    local_488.M[1][0] = local_348.M[1][0];
    local_488.M[1][1] = local_348.M[1][1];
    local_488.M[1][2] = local_348.M[1][2];
    local_488.M[1][3] = local_348.M[1][3];
    local_488.M[3]._0_8_ = local_348.M[3]._0_8_;
    local_488.M[3]._8_8_ = local_348.M[3]._8_8_;
  }
  else {
    local_488.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
    local_488.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
    local_488.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
    local_488.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
    local_488.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
    local_488.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
    local_488.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
    local_488.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
    local_348.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
    local_348.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
    local_348.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
    local_348.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
    local_488.M[3]._0_8_ = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    local_488.M[3]._8_8_ = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  }
  local_1070.Pitch = 30.0;
  local_1070.Yaw = -45.0;
  local_1070.Roll = 90.0;
  local_488.M[2]._0_8_ = local_348.M[2]._0_8_;
  local_488.M[2]._8_8_ = local_348.M[2]._8_8_;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1070,local_aa8);
  local_1258 = *pTVar29;
  local_1020.Pitch = 45.0;
  local_1020.Yaw = 60.0;
  local_1020.Roll = 120.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1020,local_a88);
  local_1248.X = pTVar29->X;
  local_1248.Y = pTVar29->Y;
  local_1248.Z = pTVar29->Z;
  local_1248.W = pTVar29->W;
  local_1278._4_4_ =
       local_1258.X * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
       local_1258.W * local_1248.Y +
       local_1258.Y * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
       local_1258.Z * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  local_1278._0_4_ =
       local_1258.X * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
       local_1258.W * local_1248.X +
       local_1258.Y * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       local_1258.Z * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  uStack_1270._0_4_ =
       local_1258.X * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
       local_1258.W * local_1248.Z +
       local_1258.Y * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
       local_1258.Z * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  uStack_1270._4_4_ =
       local_1258.X * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
       local_1258.W * local_1248.W +
       local_1258.Y * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
       local_1258.Z * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  TestVectorQuaternionMultiply<float>(&local_11c8,&local_1258,&local_1248);
  fVar92 = __real_358637bd;
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,__real_358637bd);
  LogTest<float>(L"VectorQuaternionMultiply",bVar25);
  local_1298 = (undefined1  [8])CONCAT44(local_11c8.Y,local_11c8.X);
  uStack_1290 = CONCAT44(local_11c8.W,local_11c8.Z);
  local_e8._4_4_ =
       local_1258.X * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
       local_1258.W * local_1248.Y +
       local_1258.Y * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
       local_1258.Z * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  local_e8._0_4_ =
       local_1258.X * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
       local_1258.W * local_1248.X +
       local_1258.Y * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       local_1258.Z * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  uStack_e0._0_4_ =
       local_1258.X * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
       local_1258.W * local_1248.Z +
       local_1258.Y * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
       local_1258.Z * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  uStack_e0._4_4_ =
       local_1258.X * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
       local_1258.W * local_1248.W +
       local_1258.Y * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
       local_1258.Z * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar92);
  LogTest<float>(L"VectorQuaternionMultiply2",bVar25);
  pTVar40 = UE::Math::TQuat<float>::operator*
                      (&local_1258,&local_248,&UE::Math::TMatrix<float>::Identity);
  local_11a8.m128_u64[0] = *(undefined8 *)pTVar40->M[0];
  local_11a8.m128_u64[1] = *(undefined8 *)(pTVar40->M[0] + 2);
  local_1198 = *(double *)pTVar40->M[1];
  dStack_1190 = *(double *)(pTVar40->M[1] + 2);
  local_1188 = *(undefined8 *)pTVar40->M[2];
  uStack_1180 = *(undefined8 *)(pTVar40->M[2] + 2);
  local_1178 = *(undefined8 *)pTVar40->M[3];
  uStack_1170 = *(undefined8 *)(pTVar40->M[3] + 2);
  pTVar35 = UE::Math::TQuatRotationMatrix<float>::TQuatRotationMatrix<float>(&local_588,&local_1258)
  ;
  local_1208 = *(undefined1 (*) [8])pTVar35;
  uStack_1200 = *(undefined8 *)&pTVar35->field_0x8;
  local_11f8 = *(double *)&pTVar35->field_0x10;
  dStack_11f0 = *(double *)&pTVar35->field_0x18;
  local_11e8[0] = *(float *)&pTVar35->field_0x20;
  local_11e8[1] = *(float *)&pTVar35->field_0x24;
  afStack_11e0[0] = *(float *)&pTVar35->field_0x28;
  afStack_11e0[1] = *(float *)&pTVar35->field_0x2c;
  local_11d8[0] = *(float *)&pTVar35->field_0x30;
  local_11d8[1] = *(float *)&pTVar35->field_0x34;
  afStack_11d0[0] = *(float *)&pTVar35->field_0x38;
  afStack_11d0[1] = *(float *)&pTVar35->field_0x3c;
  bVar25 = TestMatricesEqual((TMatrix<float> *)&local_11a8,(TMatrix<float> *)local_1208,fVar92);
  LogTest<float>(L"QuaterionMatrixConversion Q0",bVar25);
  UE::Math::TQuat<float>::ToMatrix(&local_1248,&local_448);
  local_11a8.m128_i32[0] = (int)local_448.M[0][0];
  local_11a8.m128_i32[1] = (int)local_448.M[0][1];
  local_11a8.m128_i32[2] = (int)local_448.M[0][2];
  local_11a8.m128_i32[3] = (int)local_448.M[0][3];
  local_1198 = (double)local_448.M[1]._0_8_;
  dStack_1190 = (double)local_448.M[1]._8_8_;
  local_1188._0_4_ = local_448.M[2][0];
  local_1188._4_4_ = local_448.M[2][1];
  uStack_1180._0_4_ = local_448.M[2][2];
  uStack_1180._4_4_ = local_448.M[2][3];
  local_1178._0_4_ = local_448.M[3][0];
  local_1178._4_4_ = local_448.M[3][1];
  uStack_1170._0_4_ = local_448.M[3][2];
  uStack_1170._4_4_ = local_448.M[3][3];
  pTVar35 = UE::Math::TQuatRotationMatrix<float>::TQuatRotationMatrix<float>(&local_548,&local_1248)
  ;
  local_1208 = *(undefined1 (*) [8])pTVar35;
  uStack_1200 = *(undefined8 *)&pTVar35->field_0x8;
  local_11f8 = *(double *)&pTVar35->field_0x10;
  dStack_11f0 = *(double *)&pTVar35->field_0x18;
  local_11e8[0] = *(float *)&pTVar35->field_0x20;
  local_11e8[1] = *(float *)&pTVar35->field_0x24;
  afStack_11e0[0] = *(float *)&pTVar35->field_0x28;
  afStack_11e0[1] = *(float *)&pTVar35->field_0x2c;
  local_11d8[0] = *(float *)&pTVar35->field_0x30;
  local_11d8[1] = *(float *)&pTVar35->field_0x34;
  afStack_11d0[0] = *(float *)&pTVar35->field_0x38;
  afStack_11d0[1] = *(float *)&pTVar35->field_0x3c;
  bVar25 = TestMatricesEqual((TMatrix<float> *)&local_11a8,(TMatrix<float> *)local_1208,fVar92);
  LogTest<float>(L"QuaterionMatrixConversion Q1",bVar25);
  local_1058.Pitch = 0.0;
  local_1058.Yaw = 180.0;
  local_1058.Roll = 45.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_1058,local_a68);
  local_1258 = *pTVar29;
  local_104c.Pitch = -120.0;
  local_104c.Yaw = -90.0;
  local_104c.Roll = 0.0;
  pTVar29 = UE::Math::TRotator<float>::Quaternion(&local_104c,local_a48);
  local_1248.X = pTVar29->X;
  local_1248.Y = pTVar29->Y;
  local_1248.Z = pTVar29->Z;
  local_1248.W = pTVar29->W;
  local_1278._4_4_ =
       local_1258.X * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
       local_1258.W * local_1248.Y +
       local_1258.Y * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
       local_1258.Z * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  local_1278._0_4_ =
       local_1258.X * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
       local_1258.W * local_1248.X +
       local_1258.Y * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       local_1258.Z * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  uStack_1270._0_4_ =
       local_1258.X * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
       local_1258.W * local_1248.Z +
       local_1258.Y * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
       local_1258.Z * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  uStack_1270._4_4_ =
       local_1258.X * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
       local_1258.W * local_1248.W +
       local_1258.Y * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
       local_1258.Z * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  TestVectorQuaternionMultiply<float>(&local_11c8,&local_1258,&local_1248);
  bVar25 = TestQuatsEqual((TQuat<float> *)local_1278,&local_11c8,fVar92);
  LogTest<float>(L"VectorQuaternionMultiply",bVar25);
  local_1298._4_4_ = local_11c8.Y;
  local_1298._0_4_ = local_11c8.X;
  uStack_1290._4_4_ = local_11c8.W;
  uStack_1290._0_4_ = local_11c8.Z;
  local_e8._4_4_ =
       local_1258.X * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
       local_1258.W * local_1248.Y +
       local_1258.Y * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
       local_1258.Z * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
  local_e8._0_4_ =
       local_1258.X * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
       local_1258.W * local_1248.X +
       local_1258.Y * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
       local_1258.Z * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
  uStack_e0._0_4_ =
       local_1258.X * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
       local_1258.W * local_1248.Z +
       local_1258.Y * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
       local_1258.Z * local_1248.W * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
  uStack_e0._4_4_ =
       local_1258.X * local_1248.X * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
       local_1258.W * local_1248.W +
       local_1258.Y * local_1248.Y * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
       local_1258.Z * local_1248.Z * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
  bVar25 = TestVectorsEqual((__m128 *)local_e8,(__m128 *)local_1298,fVar92);
  LogTest<float>(L"VectorQuaternionMultiply2",bVar25);
  local_ed8.X = 0.0 - local_1258.X;
  local_ed8.Y = 0.0 - local_1258.Y;
  local_ed8.Z = 0.0 - local_1258.Z;
  local_ed8.W = 0.0 - local_1258.W;
  pTVar40 = UE::Math::TQuat<float>::operator*
                      (&local_ed8,&local_2c8,&UE::Math::TMatrix<float>::Identity);
  local_11a8.m128_u64[0] = *(undefined8 *)pTVar40->M[0];
  local_11a8.m128_u64[1] = *(undefined8 *)(pTVar40->M[0] + 2);
  local_1198 = *(double *)pTVar40->M[1];
  dStack_1190 = *(double *)(pTVar40->M[1] + 2);
  local_1188 = *(undefined8 *)pTVar40->M[2];
  uStack_1180 = *(undefined8 *)(pTVar40->M[2] + 2);
  local_1178 = *(undefined8 *)pTVar40->M[3];
  uStack_1170 = *(undefined8 *)(pTVar40->M[3] + 2);
  local_ec8.X = 0.0 - local_1258.X;
  local_ec8.Y = 0.0 - local_1258.Y;
  local_ec8.Z = 0.0 - local_1258.Z;
  local_ec8.W = 0.0 - local_1258.W;
  UE::Math::TQuat<float>::ToMatrix(&local_ec8,(TMatrix<float> *)local_408);
  local_11f8 = (double)local_408._16_8_;
  dStack_11f0 = dStack_3f0;
  local_11e8[0] = local_3e8[0];
  local_11e8[1] = local_3e8[1];
  afStack_11e0[0] = afStack_3e0[0];
  afStack_11e0[1] = afStack_3e0[1];
  local_11d8[0] = local_3d8[0];
  local_11d8[1] = local_3d8[1];
  afStack_11d0[0] = afStack_3d0[0];
  afStack_11d0[1] = afStack_3d0[1];
  bVar25 = TestMatricesEqual((TMatrix<float> *)&local_11a8,(TMatrix<float> *)local_1208,fVar92);
  LogTest<float>(L"QuaterionMatrixConversion Q0",bVar25);
  local_eb8.X = local_1248.X * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0] *
                GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  local_eb8.Y = local_1248.Y * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1] *
                GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  local_eb8.Z = local_1248.Z * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2] *
                GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  local_eb8.W = local_1248.W * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3] *
                GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  pTVar40 = UE::Math::TQuat<float>::operator*(&local_eb8,&local_288,&local_488);
  local_11a8.m128_u64[0] = *(undefined8 *)pTVar40->M[0];
  local_11a8.m128_u64[1] = *(undefined8 *)(pTVar40->M[0] + 2);
  local_1198 = *(double *)pTVar40->M[1];
  dStack_1190 = *(double *)(pTVar40->M[1] + 2);
  local_1188 = *(undefined8 *)pTVar40->M[2];
  uStack_1180 = *(undefined8 *)(pTVar40->M[2] + 2);
  local_1178 = *(undefined8 *)pTVar40->M[3];
  uStack_1170 = *(undefined8 *)(pTVar40->M[3] + 2);
  UE::Math::TQuat<float>::ToMatrix(&local_1248,(TMatrix<float> *)local_3c8);
  local_11f8 = (double)local_3c8._16_8_;
  dStack_11f0 = dStack_3b0;
  local_11e8[0] = local_3a8[0];
  local_11e8[1] = local_3a8[1];
  afStack_11e0[0] = afStack_3a0[0];
  afStack_11e0[1] = afStack_3a0[1];
  local_11d8[0] = local_398[0];
  local_11d8[1] = local_398[1];
  afStack_11d0[0] = afStack_390[0];
  afStack_11d0[1] = afStack_390[1];
  bVar25 = TestMatricesEqual((TMatrix<float> *)&local_11a8,(TMatrix<float> *)local_1208,fVar92);
  LogTest<float>(L"QuaterionMatrixConversion Q1",bVar25);
  auVar117 = minps(___xmm_3f8000007f7fffff7f7fffff7f7fffff,___xmm_00000000bf800000bf800000bf800000);
  auVar59 = maxps(___xmm_3f800000ff7fffffff7fffffff7fffff,___xmm_00000000bf800000bf800000bf800000);
  auVar118 = minps(___xmm_3f8000007f7fffff7f7fffff7f7fffff,___xmm_00000000bf40000000000000bf000000);
  auVar121 = minps(___xmm_3f8000007f7fffff7f7fffff7f7fffff,___xmm_00000000bf19999abfa00000bf400000);
  local_1128 = (TVector4<float>_u_0)minps(auVar117,___xmm_000000003f8000003f8000003f800000);
  _local_1118 = maxps(auVar59,___xmm_000000003f8000003f8000003f800000);
  local_1108 = (TVector4<float>_u_0)minps(auVar118,___xmm_000000003f8000003e8000003f400000);
  local_1158 = (TVector4<float>_u_0)minps(auVar121,___xmm_000000003f800000be8000003f000000);
  auVar118 = maxps(___xmm_3f800000ff7fffffff7fffffff7fffff,___xmm_00000000bf40000000000000bf000000);
  auVar59 = maxps(___xmm_3f800000ff7fffffff7fffffff7fffff,___xmm_00000000bf19999abfa00000bf400000);
  _local_10f8 = maxps(auVar118,___xmm_000000003f8000003e8000003f400000);
  _local_1148 = maxps(auVar59,___xmm_000000003f800000be8000003f000000);
  auVar112._4_4_ = -(uint)(local_10f8._4_4_ < local_1128._s_0.Y);
  auVar112._0_4_ = -(uint)(local_10f8._0_4_ < local_1128._s_0.X);
  auVar112._8_4_ = -(uint)(local_10f8._8_4_ < local_1128._s_0.Z);
  auVar112._12_4_ = -(uint)(local_10f8._12_4_ < local_1128._s_0.W);
  auVar114._4_4_ = -(uint)(local_1118._4_4_ < local_1108._s_0.Y);
  auVar114._0_4_ = -(uint)(local_1118._0_4_ < local_1108._s_0.X);
  auVar114._8_4_ = -(uint)(local_1118._8_4_ < local_1108._s_0.Z);
  auVar114._12_4_ = -(uint)(local_1118._12_4_ < local_1108._s_0.W);
  uVar48 = movmskps(extraout_EAX_22,auVar112 | auVar114);
  LogBoundsTest(true,L"BoundsIntersect(B0, B1)",(TBounds<float> *)&local_1128._s_0,
                (TBounds<float> *)&local_1108._s_0,(uVar48 & 7) == 0);
  auVar98._4_4_ = -(uint)((float)local_1148._4_4_ < local_1128._s_0.Y);
  auVar98._0_4_ = -(uint)((float)local_1148._0_4_ < local_1128._s_0.X);
  auVar98._8_4_ = -(uint)(fStack_1140 < local_1128._s_0.Z);
  auVar98._12_4_ = -(uint)(fStack_113c < local_1128._s_0.W);
  auVar90._4_4_ = -(uint)((float)local_1118._4_4_ < local_1158._s_0.Y);
  auVar90._0_4_ = -(uint)((float)local_1118._0_4_ < local_1158._s_0.X);
  auVar90._8_4_ = -(uint)(fStack_1110 < local_1158._s_0.Z);
  auVar90._12_4_ = -(uint)(fStack_110c < local_1158._s_0.W);
  uVar48 = movmskps(extraout_EAX_23,auVar98 | auVar90);
  LogBoundsTest(true,L"BoundsIntersect(B0, B2)",(TBounds<float> *)&local_1128._s_0,
                (TBounds<float> *)&local_1158._s_0,(uVar48 & 7) == 0);
  auVar99._4_4_ = -(uint)((float)local_1148._4_4_ < local_1108._s_0.Y);
  auVar99._0_4_ = -(uint)((float)local_1148._0_4_ < local_1108._s_0.X);
  auVar99._8_4_ = -(uint)(fStack_1140 < local_1108._s_0.Z);
  auVar99._12_4_ = -(uint)(fStack_113c < local_1108._s_0.W);
  auVar91._4_4_ = -(uint)((float)local_10f8._4_4_ < local_1158._s_0.Y);
  auVar91._0_4_ = -(uint)((float)local_10f8._0_4_ < local_1158._s_0.X);
  auVar91._8_4_ = -(uint)(fStack_10f0 < local_1158._s_0.Z);
  auVar91._12_4_ = -(uint)(fStack_10ec < local_1158._s_0.W);
  uVar48 = movmskps(extraout_EAX_24,auVar99 | auVar91);
  LogBoundsTest(false,L"BoundsIntersect(B1, B2)",(TBounds<float> *)&local_1108._s_0,
                (TBounds<float> *)&local_1158._s_0,(uVar48 & 7) == 0);
  auVar100._0_4_ =
       -(uint)(local_1128._s_0.X <= local_1108._s_0.X &&
              (float)local_10f8._0_4_ <= (float)local_1118._0_4_);
  auVar100._4_4_ =
       -(uint)(local_1128._s_0.Y <= local_1108._s_0.Y &&
              (float)local_10f8._4_4_ <= (float)local_1118._4_4_);
  auVar100._8_4_ = -(uint)(fStack_10f0 <= fStack_1110 && local_1128._s_0.Z <= local_1108._s_0.Z);
  auVar100._12_4_ = -(uint)(fStack_10ec <= fStack_110c && local_1128._s_0.W <= local_1108._s_0.W);
  uVar27 = movmskps(extraout_EAX_25,auVar100);
  LogBoundsTest(true,L"BoundsContains(B0, B1)",(TBounds<float> *)&local_1128._s_0,
                (TBounds<float> *)&local_1108._s_0,((byte)uVar27 & 7) == 7);
  auVar101._0_4_ =
       -(uint)(local_1128._s_0.X <= local_1158._s_0.X &&
              (float)local_1148._0_4_ <= (float)local_1118._0_4_);
  auVar101._4_4_ =
       -(uint)(local_1128._s_0.Y <= local_1158._s_0.Y &&
              (float)local_1148._4_4_ <= (float)local_1118._4_4_);
  auVar101._8_4_ = -(uint)(fStack_1140 <= fStack_1110 && local_1128._s_0.Z <= local_1158._s_0.Z);
  auVar101._12_4_ = -(uint)(fStack_113c <= fStack_110c && local_1128._s_0.W <= local_1158._s_0.W);
  uVar27 = movmskps(extraout_EAX_26,auVar101);
  LogBoundsTest(false,L"BoundsContains(B0, B2)",(TBounds<float> *)&local_1128._s_0,
                (TBounds<float> *)&local_1158._s_0,((byte)uVar27 & 7) == 7);
  auVar102._0_4_ =
       -(uint)(local_1108._s_0.X <= local_1128._s_0.X &&
              (float)local_1118._0_4_ <= (float)local_10f8._0_4_);
  auVar102._4_4_ =
       -(uint)(local_1108._s_0.Y <= local_1128._s_0.Y &&
              (float)local_1118._4_4_ <= (float)local_10f8._4_4_);
  auVar102._8_4_ = -(uint)(fStack_1110 <= fStack_10f0 && local_1108._s_0.Z <= local_1128._s_0.Z);
  auVar102._12_4_ = -(uint)(fStack_110c <= fStack_10ec && local_1108._s_0.W <= local_1128._s_0.W);
  uVar27 = movmskps(extraout_EAX_27,auVar102);
  LogBoundsTest(false,L"BoundsContains(B1, B0)",(TBounds<float> *)&local_1108._s_0,
                (TBounds<float> *)&local_1128._s_0,((byte)uVar27 & 7) == 7);
  auVar103._0_4_ =
       -(uint)(local_1108._s_0.X <= local_1158._s_0.X &&
              (float)local_1148._0_4_ <= (float)local_10f8._0_4_);
  auVar103._4_4_ =
       -(uint)(local_1108._s_0.Y <= local_1158._s_0.Y &&
              (float)local_1148._4_4_ <= (float)local_10f8._4_4_);
  auVar103._8_4_ = -(uint)(fStack_1140 <= fStack_10f0 && local_1108._s_0.Z <= local_1158._s_0.Z);
  auVar103._12_4_ = -(uint)(fStack_113c <= fStack_10ec && local_1108._s_0.W <= local_1158._s_0.W);
  uVar27 = movmskps(extraout_EAX_28,auVar103);
  LogBoundsTest(false,L"BoundsContains(B1, B2)",(TBounds<float> *)&local_1108._s_0,
                (TBounds<float> *)&local_1158._s_0,((byte)uVar27 & 7) == 7);
  auVar104._0_4_ =
       -(uint)(local_1158._s_0.X <= local_1128._s_0.X &&
              (float)local_1118._0_4_ <= (float)local_1148._0_4_);
  auVar104._4_4_ =
       -(uint)(local_1158._s_0.Y <= local_1128._s_0.Y &&
              (float)local_1118._4_4_ <= (float)local_1148._4_4_);
  auVar104._8_4_ = -(uint)(fStack_1110 <= fStack_1140 && local_1158._s_0.Z <= local_1128._s_0.Z);
  auVar104._12_4_ = -(uint)(fStack_110c <= fStack_113c && local_1158._s_0.W <= local_1128._s_0.W);
  uVar27 = movmskps(extraout_EAX_29,auVar104);
  LogBoundsTest(false,L"BoundsContains(B2, B0)",(TBounds<float> *)&local_1158._s_0,
                (TBounds<float> *)&local_1128._s_0,((byte)uVar27 & 7) == 7);
  auVar105._0_4_ =
       -(uint)(local_1158._s_0.X <= local_1108._s_0.X &&
              (float)local_10f8._0_4_ <= (float)local_1148._0_4_);
  auVar105._4_4_ =
       -(uint)(local_1158._s_0.Y <= local_1108._s_0.Y &&
              (float)local_10f8._4_4_ <= (float)local_1148._4_4_);
  auVar105._8_4_ = -(uint)(fStack_10f0 <= fStack_1140 && local_1158._s_0.Z <= local_1108._s_0.Z);
  auVar105._12_4_ = -(uint)(fStack_10ec <= fStack_113c && local_1158._s_0.W <= local_1108._s_0.W);
  uVar27 = movmskps(extraout_EAX_30,auVar105);
  LogBoundsTest(false,L"BoundsContains(B2, B1)",(TBounds<float> *)&local_1158._s_0,
                (TBounds<float> *)&local_1108._s_0,((byte)uVar27 & 7) == 7);
  if (GPassing == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
  }
  bVar25 = RunDoubleVectorTest();
  if (!bVar25) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUnrealMathTest);
  }
  return;
}

