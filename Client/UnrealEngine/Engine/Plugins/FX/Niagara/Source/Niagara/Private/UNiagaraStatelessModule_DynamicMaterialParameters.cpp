// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// StaticClass @ 149416930

UClass * __cdecl UNiagaraStatelessModule_DynamicMaterialParameters::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_DynamicMaterialParameters",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.
                InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_DynamicMaterialParameters,0x458,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_DynamicMaterialParameters>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DynamicMaterialParameters>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.InnerSingleton
  ;
}

// UNiagaraStatelessModule_DynamicMaterialParameters @ 149429240

UNiagaraStatelessModule_DynamicMaterialParameters * __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::UNiagaraStatelessModule_DynamicMaterialParameters
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FNiagaraStatelessDynamicParameterSet *pFVar2;
  undefined1 *puVar3;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DynamicMaterialParameters__6B_;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  puVar3 = &this->field_0x30;
  this->bParameter0Enabled = 1;
  this->bParameter3Enabled = 0;
  this->bParameter2Enabled = 0;
  this->bParameter1Enabled = 0;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).WChannelDistribution,0.0)
  ;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).WChannelDistribution,0.0)
  ;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).WChannelDistribution,0.0)
  ;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).WChannelDistribution,0.0)
  ;
  return this;
}

// UNiagaraStatelessModule_DynamicMaterialParameters @ 149429380

UNiagaraStatelessModule_DynamicMaterialParameters * __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::UNiagaraStatelessModule_DynamicMaterialParameters
          (UNiagaraStatelessModule_DynamicMaterialParameters *this)

{
  undefined1 *puVar1;
  FNiagaraStatelessDynamicParameterSet *pFVar2;
  undefined1 *puVar3;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DynamicMaterialParameters__6B_;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  puVar3 = &this->field_0x30;
  this->bParameter0Enabled = 1;
  this->bParameter3Enabled = 0;
  this->bParameter2Enabled = 0;
  this->bParameter1Enabled = 0;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter0).WChannelDistribution,0.0)
  ;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter1).WChannelDistribution,0.0)
  ;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter2).WChannelDistribution,0.0)
  ;
  pFVar2->bXChannelEnabled = 1;
  pFVar2->bWChannelEnabled = 1;
  pFVar2->bZChannelEnabled = 1;
  pFVar2->bYChannelEnabled = 1;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).XChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).YChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).ZChannelDistribution,0.0)
  ;
  FNiagaraDistributionFloat::FNiagaraDistributionFloat(&(this->Parameter3).WChannelDistribution,0.0)
  ;
  return this;
}

// ~UNiagaraStatelessModule_DynamicMaterialParameters @ 14942c840

void __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::
~UNiagaraStatelessModule_DynamicMaterialParameters
          (UNiagaraStatelessModule_DynamicMaterialParameters *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DynamicMaterialParameters__6B_;
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter3);
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter2);
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter1);
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter0);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 1494324d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::BuildEmitterData
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  ENiagaraDistributionMode EVar1;
  byte bVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  float fVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FNiagaraStatelessDynamicParameterSet *pFVar11;
  FInstancedStruct *pFVar12;
  TArrayView<float_const_,int> *pTVar13;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined4 uVar15;
  FNiagaraVariableBase *pFVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  byte *pbVar22;
  FScriptContainerElement *pFVar23;
  longlong *plVar24;
  TVector2<float> *pTVar25;
  ulonglong uVar26;
  byte *pbVar27;
  undefined4 *puVar28;
  uint local_res10;
  int local_res18;
  uint local_res20;
  TIntVector3<unsigned_int>_u_0 local_2b8;
  TIntVector3<unsigned_int>_u_0 local_2ac;
  TIntVector3<unsigned_int>_u_0 local_2a0;
  TIntVector3<unsigned_int>_u_0 local_290;
  ulonglong local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  undefined **local_268;
  ENiagaraDistributionMode local_260;
  byte local_25f;
  byte local_25e;
  FNiagaraVariableBase local_25c;
  FInstancedStruct local_250;
  FScriptContainerElement *local_240;
  undefined8 local_238;
  TVector2<float>_u_0 local_230;
  float local_228 [2];
  float local_220 [2];
  uint local_218;
  float local_210 [2];
  float local_208 [2];
  float local_200 [2];
  float local_1f8 [2];
  undefined8 local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  float *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  float *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  TArrayView<float_const_,int> local_148;
  TArrayView<float_const_,int> local_138;
  TArrayView<float_const_,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  code *local_a8 [2];
  undefined **local_98;
  code *local_90;
  undefined8 local_80;
  TArrayView<float_const_,int> local_78 [3];
  
  pTVar3 = param_1->BuiltData;
  uVar20 = pTVar3->ArrayNum + 3U & 0xfffffffc;
  iVar17 = (uVar20 - pTVar3->ArrayNum) + 0xd4;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar17,&pTVar3->AllocatorInstance,&pTVar3->ArrayNum,&pTVar3->ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + iVar8,0,(longlong)iVar17);
  uVar18 = 0;
  pFVar21 = (param_1->BuiltData->AllocatorInstance).Data + (int)uVar20;
  *(uint *)pFVar21 = 0;
  for (pFVar23 = pFVar21 + 4; pFVar23 != pFVar21 + 0xc4; pFVar23 = pFVar23 + 0xc) {
    *(ulonglong *)pFVar23 =
         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X);
    *(uint *)(pFVar23 + 8) = UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
  }
  local_1e0 = pFVar21;
  if (pFVar21 + 0xc4 <= pFVar21 + 0xd4) {
    memset(pFVar21 + 0xc4,-1,0x10);
  }
  bVar7 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  fVar5 = __real_38d1b717;
  if (bVar7) {
    local_res10 = 0;
    uVar26 = uVar18;
LAB_1494325f4:
    do {
      iVar8 = (int)uVar26;
      if (iVar8 == 0) {
        bVar7 = this->bParameter0Enabled == 0;
LAB_1494325ff:
        if (bVar7) {
          local_res10 = iVar8 + 1;
          uVar26 = (ulonglong)local_res10;
          uVar18 = uVar18 + 1;
          goto LAB_1494325f4;
        }
LAB_149432642:
        local_280 = uVar18;
        pFVar11 = GetParameterSet(this,iVar8);
        uVar20 = *(undefined4 *)pFVar11 & 0xf;
        local_218 = uVar20;
        if (((undefined4 *)pFVar11)->bXChannelEnabled != 0 ||
            (pFVar11->bYChannelEnabled != 0 ||
            (pFVar11->bZChannelEnabled != 0 || pFVar11->bWChannelEnabled != 0))) {
          if (iVar8 == 0) {
LAB_1494326a7:
            pFVar16 = &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters0Variable;
          }
          else if (iVar8 == 1) {
            pFVar16 = &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters1Variable;
          }
          else if (iVar8 == 2) {
            pFVar16 = &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters2Variable;
          }
          else {
            if (iVar8 != 3) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_DynamicMaterialParameters.cpp"
                                 ,0x7a,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              goto LAB_1494326a7;
            }
            pFVar16 = &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters3Variable;
          }
          iVar17 = FNiagaraStatelessEmitterDataBuildContext::FindParticleVariableIndex
                             (param_1,pFVar16);
          *(int *)(pFVar21 + (uVar18 + 0x31) * 4) = iVar17;
          if (iVar17 != -1) {
            local_res18 = 0;
            *(uint *)pFVar21 = *(uint *)pFVar21 | uVar20 << ((char)uVar26 * '\x04' & 0x1fU);
            pFVar23 = pFVar21 + (uVar18 * 0xc + 1) * 4;
            local_res20 = 1;
            do {
              local_1e8 = pFVar23;
              if ((uVar20 & local_res20) == 0) {
                local_25f = local_25f & 0xfc;
                local_268 = &___7FNiagaraDistributionBase__6B_;
                local_25c.Name.ComparisonIndex.Value = 0;
                local_25c.Name.Number = 0;
                local_260 = 3;
                local_25e = 0;
                local_25c.TypeDefHandle.RegisteredTypeIndex =
                     FNiagaraTypeDefinitionHandle::Register
                               (&local_25c.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
                FInstancedStruct::FInstancedStruct(&local_250);
                local_240 = (void *)0x0;
                local_268 = &___7FNiagaraDistributionFloat__6B_;
                local_238 = 0;
                local_230._s_0.X = 0.0;
                local_230._s_0.Y = 1.0;
                local_260 = UniformConstant;
                local_1f0 = 0;
                local_278.Data = (FScriptContainerElement *)0x0;
                local_270 = CONCAT44(local_270._4_4_,2);
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,2,0,&local_278,2,(int *)((longlong)&local_270 + 4));
                *(undefined8 *)local_278.Data = 0;
                if (local_240 != (void *)0x0) {
                  FMemory::Free(local_240);
                }
                bVar2 = local_25e;
                FVar6.Data = local_278.Data;
                uVar9 = (uint)local_270;
                local_240 = local_278.Data;
                local_278.Data = (FScriptContainerElement *)0x0;
                local_238 = local_270;
                local_270 = 0;
                if (local_260 == Array) {
                  local_1a8 = FVar6.Data;
                  if (((int)uVar9 < 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uStack_1a0 = uVar9;
                  local_f8._12_4_ = uStack_19c;
                  local_f8.ArrayNum = uVar9;
                  local_f8.DataPtr = (float *)local_1a8;
                  uVar10 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData
                                     (param_1,&local_f8);
                  local_290._s_0.Z =
                       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
                  local_210[0] = 0.0;
                  if ((uVar10 == 0xffffffff) || (uVar9 == 0)) {
                    uStack_190 = 1;
                    local_198 = local_210;
                    local_e8._12_4_ = uStack_18c;
                    local_e8.ArrayNum = 1;
                    local_290._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff93ffffff | 0x90000000;
                    local_e8.DataPtr = local_198;
                    uVar9 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData
                                      (param_1,&local_e8);
                    FNiagaraStatelessBuiltDistribution::SetLookupParameters
                              ((TIntVector3<unsigned_int> *)&local_290._s_0,uVar9,1);
                    uVar15 = local_290._s_0.X;
                  }
                  else {
                    local_290._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff93ffffff | 0x90000000;
                    if ((0x1ffff < uVar10) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("BufferOffset <= EFlags::BufferOffsetMask",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                           ,0x9c,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((0x1ff < uVar9) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("TableLength > 0 && TableLength <= EFlags::TableLengthMask"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                           ,0x9d,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    uVar15 = (local_290._s_0.X & 0xfffe0000 | uVar10) & 0xfc01ffff |
                             (uVar9 - 1) * 0x20000;
                  }
                  uVar9 = (local_25f & 2) << 0x1c ^
                          (((uint)(byte)~local_25f << 0x1e ^ uVar15) & 0x40000000 ^ uVar15) &
                          0xdfffffff;
                  uVar10 = uVar9 & 0xf3ffffff;
                  local_290._0_8_ =
                       CONCAT44(local_290._s_0.Y,uVar9) & 0xfffffffff3ffffff | 0x10000000;
                  if (local_25e == 0xff) {
                    local_290._s_0.X = uVar10 | 0x1c000000;
                  }
                  else {
                    uVar9 = (uint)local_25e;
                    if ((2 < local_25e) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ValueMode <= EFlags::LookupValueModeMask - 1",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                           ,0x8a,L"ValueMode (%d) is out of range (0 - %d)"), bVar7)
                       ) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_290._s_0.X = uVar10 | 0x10000000 | uVar9 << 0x1a;
                  }
                  local_2ac._s_0.Z = (uint)local_230._s_0.X;
                  if (local_230._s_0.X <= fVar5) {
                    local_2ac._s_0.Z = (uint)fVar5;
                  }
                  local_290._s_0.Y = (uint)local_230._s_0.Y;
                  local_2ac._s_0.Y = (uint)local_230._s_0.Y;
                  local_2ac._s_0.X = local_290._s_0.X;
                  local_290._s_0.Z = local_2ac._s_0.Z;
                }
                else if (local_260 == Binding) {
                  local_208[0] = 0.0;
                  uVar9 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                                    (param_1,&local_25c);
                  local_2ac._s_0.Z =
                       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
                  if (uVar9 == 0xffffffff) {
                    local_188 = local_208;
                    uStack_180 = 1;
                    local_d8._12_4_ = uStack_17c;
                    local_d8.ArrayNum = 1;
                    local_2ac._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff03ffffff | 0x90000000;
                    local_d8.DataPtr = local_188;
                    uVar9 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData
                                      (param_1,&local_d8);
                    FNiagaraStatelessBuiltDistribution::SetLookupParameters
                              ((TIntVector3<unsigned_int> *)&local_2ac._s_0,uVar9,1);
                  }
                  else {
LAB_149432fd0:
                    local_2ac._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff03ffffff | 0x10000000;
                    if ((0x1ffff < uVar9) &&
                       (local_2ac._s_0.Z =
                             UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z,
                       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("BufferOffset <= EFlags::BufferOffsetMask",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                          ,0x9c,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_2ac._s_0.Z = 0x38d1b717;
                    local_2ac._s_0.Y = 0;
                    local_2ac._s_0.X = uVar9 & 0xfc01ffff | 0x10000000;
                  }
                }
                else if (local_260 == Expression) {
                  local_200[0] = 0.0;
                  uVar9 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                                    (param_1,&local_250);
                  local_2ac._s_0.Z =
                       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
                  if (uVar9 != 0xffffffff) goto LAB_149432fd0;
                  local_178 = local_200;
                  uStack_170 = 1;
                  local_c8._12_4_ = uStack_16c;
                  local_c8.ArrayNum = 1;
                  local_2ac._0_8_ =
                       CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X) &
                       0xffffffff03ffffff | 0x90000000;
                  local_c8.DataPtr = local_178;
                  uVar9 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData(param_1,&local_c8)
                  ;
                  FNiagaraStatelessBuiltDistribution::SetLookupParameters
                            ((TIntVector3<unsigned_int> *)&local_2ac._s_0,uVar9,1);
                }
                else {
                  local_168 = FVar6.Data;
                  if (((int)uVar9 < 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uStack_160 = uVar9;
                  local_b8._12_4_ = uStack_15c;
                  local_b8.ArrayNum = uVar9;
                  local_b8.DataPtr = (float *)local_168;
                  FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<float>
                            (param_1,(TIntVector3<unsigned_int> *)&local_2ac._s_0,local_260,
                             &local_b8,(TVector2<float> *)&local_230._s_0,bVar2,0.0);
                }
                *(undefined8 *)pFVar23 = local_2ac._0_8_;
                *(uint *)(pFVar23 + 8) = local_2ac._s_0.Z;
                if (local_240 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240);
                }
                FInstancedStruct::Reset(&local_250);
              }
              else {
                pFVar11 = GetParameterSet(this,(int)uVar26);
                if (local_res18 == 0) {
LAB_14943275e:
                  plVar24 = &(pFVar11->XChannelDistribution)._padding_;
                  pTVar14 = &(pFVar11->XChannelDistribution).Values;
                  pFVar12 = (FInstancedStruct *)&(pFVar11->XChannelDistribution)._padding_;
                  pFVar16 = (FNiagaraVariableBase *)
                            ((longlong)&(pFVar11->XChannelDistribution)._padding_ + 4);
                  pTVar25 = &(pFVar11->XChannelDistribution).ValuesTimeRange;
                  puVar28 = (undefined4 *)
                            ((longlong)&(pFVar11->XChannelDistribution).ValuesTimeRange.field0_0x0 +
                            4);
                  pbVar27 = (byte *)((longlong)&(pFVar11->XChannelDistribution)._padding_ + 1);
                  pbVar22 = (byte *)((longlong)&(pFVar11->XChannelDistribution)._padding_ + 2);
                  piVar19 = &(pFVar11->XChannelDistribution).Values.ArrayNum;
                }
                else if (local_res18 == 1) {
                  plVar24 = &(pFVar11->YChannelDistribution)._padding_;
                  pTVar14 = &(pFVar11->YChannelDistribution).Values;
                  pFVar12 = (FInstancedStruct *)&(pFVar11->YChannelDistribution)._padding_;
                  pFVar16 = (FNiagaraVariableBase *)
                            ((longlong)&(pFVar11->YChannelDistribution)._padding_ + 4);
                  pTVar25 = &(pFVar11->YChannelDistribution).ValuesTimeRange;
                  puVar28 = (undefined4 *)
                            ((longlong)&(pFVar11->YChannelDistribution).ValuesTimeRange.field0_0x0 +
                            4);
                  pbVar27 = (byte *)((longlong)&(pFVar11->YChannelDistribution)._padding_ + 1);
                  pbVar22 = (byte *)((longlong)&(pFVar11->YChannelDistribution)._padding_ + 2);
                  piVar19 = &(pFVar11->YChannelDistribution).Values.ArrayNum;
                }
                else if (local_res18 == 2) {
                  plVar24 = &(pFVar11->ZChannelDistribution)._padding_;
                  pTVar14 = &(pFVar11->ZChannelDistribution).Values;
                  pFVar12 = (FInstancedStruct *)&(pFVar11->ZChannelDistribution)._padding_;
                  pFVar16 = (FNiagaraVariableBase *)
                            ((longlong)&(pFVar11->ZChannelDistribution)._padding_ + 4);
                  pTVar25 = &(pFVar11->ZChannelDistribution).ValuesTimeRange;
                  puVar28 = (undefined4 *)
                            ((longlong)&(pFVar11->ZChannelDistribution).ValuesTimeRange.field0_0x0 +
                            4);
                  pbVar27 = (byte *)((longlong)&(pFVar11->ZChannelDistribution)._padding_ + 1);
                  pbVar22 = (byte *)((longlong)&(pFVar11->ZChannelDistribution)._padding_ + 2);
                  piVar19 = &(pFVar11->ZChannelDistribution).Values.ArrayNum;
                }
                else {
                  if (local_res18 != 3) {
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!\"Enclosing block should never be called\"",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_DynamicMaterialParameters.cpp"
                                       ,0x71,L"");
                    if (bVar7) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    goto LAB_14943275e;
                  }
                  plVar24 = &(pFVar11->WChannelDistribution)._padding_;
                  pTVar14 = &(pFVar11->WChannelDistribution).Values;
                  pFVar12 = (FInstancedStruct *)&(pFVar11->WChannelDistribution)._padding_;
                  pFVar16 = (FNiagaraVariableBase *)
                            ((longlong)&(pFVar11->WChannelDistribution)._padding_ + 4);
                  pTVar25 = &(pFVar11->WChannelDistribution).ValuesTimeRange;
                  puVar28 = (undefined4 *)
                            ((longlong)&(pFVar11->WChannelDistribution).ValuesTimeRange.field0_0x0 +
                            4);
                  pbVar27 = (byte *)((longlong)&(pFVar11->WChannelDistribution)._padding_ + 1);
                  pbVar22 = (byte *)((longlong)&(pFVar11->WChannelDistribution)._padding_ + 2);
                  piVar19 = &(pFVar11->WChannelDistribution).Values.ArrayNum;
                }
                EVar1 = (ENiagaraDistributionMode)*plVar24;
                if (EVar1 == Array) {
                  uVar20 = *piVar19;
                  local_1f8[0] = 0.0;
                  pTVar13 = TArrayView<float_const_,int>::
                            TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                                      (local_78,pTVar14);
                  local_148.DataPtr = pTVar13->DataPtr;
                  local_148.ArrayNum = pTVar13->ArrayNum;
                  local_148._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
                  uVar9 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData
                                    (param_1,&local_148);
                  local_2a0._s_0.Z =
                       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
                  if ((uVar9 == 0xffffffff) || (uVar20 == 0)) {
                    uStack_1d0 = 1;
                    local_138._12_4_ = uStack_1cc;
                    local_138.ArrayNum = 1;
                    local_2a0._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff93ffffff | 0x90000000;
                    local_1d8 = local_1f8;
                    local_138.DataPtr = local_1f8;
                    uVar20 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData
                                       (param_1,&local_138);
                    FNiagaraStatelessBuiltDistribution::SetLookupParameters
                              ((TIntVector3<unsigned_int> *)&local_2a0._s_0,uVar20,1);
                    uVar15 = local_2a0._s_0.X;
                  }
                  else {
                    local_2a0._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff93ffffff | 0x90000000;
                    if ((0x1ffff < uVar9) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("BufferOffset <= EFlags::BufferOffsetMask",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                           ,0x9c,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    if ((0x1ff < uVar20) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("TableLength > 0 && TableLength <= EFlags::TableLengthMask"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                           ,0x9d,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    uVar15 = (local_2a0._s_0.X & 0xfffe0000 | uVar9) & 0xfc01ffff |
                             (uVar20 - 1) * 0x20000;
                  }
                  bVar2 = *pbVar22;
                  uVar20 = (*pbVar27 & 2) << 0x1c ^
                           (((uint)(byte)~*pbVar27 << 0x1e ^ uVar15) & 0x40000000 ^ uVar15) &
                           0xdfffffff;
                  uVar9 = uVar20 & 0xf3ffffff;
                  local_2a0._0_8_ =
                       CONCAT44(local_2a0._s_0.Y,uVar20) & 0xfffffffff3ffffff | 0x10000000;
                  if (bVar2 == 0xff) {
                    local_2a0._s_0.X = uVar9 | 0x1c000000;
                  }
                  else {
                    if ((2 < bVar2) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ValueMode <= EFlags::LookupValueModeMask - 1",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                           ,0x8a,L"ValueMode (%d) is out of range (0 - %d)"), bVar7)
                       ) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_2a0._s_0.X = uVar9 | 0x10000000 | (uint)bVar2 << 0x1a;
                  }
                  local_2b8._s_0.Z = (uint)(pTVar25->field0_0x0)._s_0.X;
                  if ((float)local_2b8._s_0.Z <= fVar5) {
                    local_2b8._8_4_ = fVar5;
                  }
                  local_2a0._s_0.Y = *puVar28;
                  local_2b8._s_0.Y = *puVar28;
                  local_2b8._s_0.X = local_2a0._s_0.X;
                  local_2a0._s_0.Z = local_2b8._s_0.Z;
                }
                else if (EVar1 == Binding) {
                  local_228[0] = 0.0;
                  uVar20 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                                     (param_1,pFVar16);
                  local_2b8._s_0.Z =
                       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
                  if (uVar20 == 0xffffffff) {
                    local_1c8 = local_228;
                    uStack_1c0 = 1;
                    local_128._12_4_ = uStack_1bc;
                    local_128.ArrayNum = 1;
                    local_2b8._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff03ffffff | 0x90000000;
                    local_128.DataPtr = local_1c8;
                    uVar20 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData
                                       (param_1,&local_128);
                    FNiagaraStatelessBuiltDistribution::SetLookupParameters
                              ((TIntVector3<unsigned_int> *)&local_2b8._s_0,uVar20,1);
                  }
                  else {
LAB_149432aad:
                    local_2b8._0_8_ =
                         CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                  UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X)
                         & 0xffffffff03ffffff | 0x10000000;
                    if ((0x1ffff < uVar20) &&
                       (local_2b8._s_0.Z =
                             UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z,
                       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("BufferOffset <= EFlags::BufferOffsetMask",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                                          ,0x9c,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    local_2b8._s_0.Z = 0x38d1b717;
                    local_2b8._s_0.Y = 0;
                    local_2b8._s_0.X = uVar20 & 0xfc01ffff | 0x10000000;
                  }
                }
                else if (EVar1 == Expression) {
                  local_220[0] = 0.0;
                  uVar20 = FNiagaraStatelessEmitterDataBuildContext::AddExpression(param_1,pFVar12);
                  local_2b8._s_0.Z =
                       UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Z;
                  if (uVar20 != 0xffffffff) goto LAB_149432aad;
                  local_1b8 = local_220;
                  uStack_1b0 = 1;
                  local_118._12_4_ = uStack_1ac;
                  local_118.ArrayNum = 1;
                  local_2b8._0_8_ =
                       CONCAT44(UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.Y,
                                UE::Math::TIntVector3<unsigned_int>::ZeroValue.field0_0x0._s_0.X) &
                       0xffffffff03ffffff | 0x90000000;
                  local_118.DataPtr = local_1b8;
                  uVar20 = FNiagaraStatelessEmitterDataBuildContext::AddStaticData
                                     (param_1,&local_118);
                  FNiagaraStatelessBuiltDistribution::SetLookupParameters
                            ((TIntVector3<unsigned_int> *)&local_2b8._s_0,uVar20,1);
                }
                else {
                  local_158 = (pTVar14->AllocatorInstance).Data;
                  iVar8 = pTVar14->ArrayNum;
                  bVar2 = *pbVar22;
                  if ((iVar8 < 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InCount >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0xeb,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_108._12_4_ = uStack_14c;
                  local_108.ArrayNum = iVar8;
                  local_108.DataPtr = (float *)local_158;
                  iStack_150 = iVar8;
                  FNiagaraStatelessEmitterDataBuildContext::InternalAddDistribution<float>
                            (param_1,(TIntVector3<unsigned_int> *)&local_2b8._s_0,
                             (ENiagaraDistributionMode)*plVar24,&local_108,pTVar25,bVar2,0.0);
                }
                uVar26 = (ulonglong)local_res10;
                *(undefined8 *)local_1e8 = local_2b8._0_8_;
                *(uint *)(local_1e8 + 8) = local_2b8._s_0.Z;
                pFVar23 = local_1e8;
                uVar20 = local_218;
              }
              iVar8 = (int)uVar26;
              pFVar23 = pFVar23 + 0xc;
              local_res18 = local_res18 + 1;
              local_res20 = local_res20 << 1 | (uint)((int)local_res20 < 0);
              uVar18 = local_280;
              pFVar21 = local_1e0;
              local_1e8 = pFVar23;
            } while (local_res18 < 4);
          }
        }
      }
      else {
        if (iVar8 == 1) {
          bVar7 = this->bParameter1Enabled == 0;
          goto LAB_1494325ff;
        }
        if (iVar8 == 2) {
          bVar7 = this->bParameter2Enabled == 0;
          goto LAB_1494325ff;
        }
        if ((iVar8 == 3) && (this->bParameter3Enabled != 0)) goto LAB_149432642;
      }
      local_res10 = iVar8 + 1;
      uVar18 = uVar18 + 1;
      uVar26 = (ulonglong)local_res10;
    } while ((int)local_res10 < 4);
    if (*(uint *)pFVar21 != 0) {
      local_80 = 0;
      local_98 = &
                 ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_90 = NSMDynamicMaterialParametersPrivate::ParticleSimulate;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),void,NiagaraStateless::FParticleSimulationContext_const_&>
                    ::Call;
      local_280 = uVar18;
      FNiagaraStatelessEmitterDataBuildContext::AddParticleSimulationExecSimulate
                (param_1,(TFunction<void___cdecl(NiagaraStateless::FParticleSimulationContext_const_&)>
                          *)local_a8);
    }
  }
  return;
}

// BuildShaderParameters @ 14943a790

void __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::BuildShaderParameters
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,
          FNiagaraStatelessShaderParametersBuilder *param_1)

{
  int iVar1;
  FShaderParametersMetadataBuilder *this_00;
  FShaderParametersMetadata *pFVar2;
  
  iVar1 = param_1->ParameterOffset;
  this_00 = param_1->MetadataBuilder;
  if (this_00 != (FShaderParametersMetadataBuilder *)0x0) {
    pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FDynamicMaterialParametersModule_ShaderParameters>
             ::GetStructMetadata();
    FShaderParametersMetadataBuilder::AddIncludedStruct(this_00,pFVar2,Float);
  }
  pFVar2 = TShaderParameterStructTypeInfo<NiagaraStateless::FDynamicMaterialParametersModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar2->Size + (iVar1 + 0xfU & 0xfffffff0);
  return;
}

// GetParameterChannelDistribution @ 14944ad20

FNiagaraDistributionFloat * __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::GetParameterChannelDistribution
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraStatelessDynamicParameterSet *pFVar3;
  FNiagaraDistributionFloat *pFVar4;
  
  pFVar3 = GetParameterSet(this,param_1);
  if (param_2 != 0) {
    if (param_2 == 1) {
      return &pFVar3->YChannelDistribution;
    }
    if (param_2 == 2) {
      return &pFVar3->ZChannelDistribution;
    }
    if (param_2 == 3) {
      return &pFVar3->WChannelDistribution;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_DynamicMaterialParameters.cpp"
                       ,0x71,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNiagaraDistributionFloat *)(*pcVar1)();
      return pFVar4;
    }
  }
  return &pFVar3->XChannelDistribution;
}

// GetParameterChannelMask @ 14944adc0

uint __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::GetParameterChannelMask
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,int param_1)

{
  FNiagaraStatelessDynamicParameterSet *pFVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = this->bParameter0Enabled == 0;
  }
  else if (param_1 == 1) {
    bVar2 = this->bParameter1Enabled == 0;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return 0;
      }
      if (this->bParameter3Enabled == 0) {
        return 0;
      }
      goto LAB_14944adf6;
    }
    bVar2 = this->bParameter2Enabled == 0;
  }
  if (bVar2) {
    return 0;
  }
LAB_14944adf6:
  pFVar1 = GetParameterSet(this,param_1);
  return *(uint *)pFVar1 & 0xf;
}

// GetParameterSet @ 14944b0e0

FNiagaraStatelessDynamicParameterSet * __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::GetParameterSet
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraStatelessDynamicParameterSet *pFVar3;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      return &this->Parameter1;
    }
    if (param_1 == 2) {
      return &this->Parameter2;
    }
    if (param_1 == 3) {
      return &this->Parameter3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_DynamicMaterialParameters.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraStatelessDynamicParameterSet *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->Parameter0;
}

// GetParameterVariable @ 14944b160

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraVariableBase * __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::GetParameterVariable
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraVariableBase *pFVar3;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      return &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters1Variable;
    }
    if (param_1 == 2) {
      return &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters2Variable;
    }
    if (param_1 == 3) {
      return &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters3Variable;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_DynamicMaterialParameters.cpp"
                       ,0x7a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraVariableBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &NiagaraStatelessCommon::GGlobals.DynamicMaterialParameters0Variable;
}

// GetPrivateStaticClass @ 14944b8f0

UClass * __cdecl UNiagaraStatelessModule_DynamicMaterialParameters::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_DynamicMaterialParameters",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.
                InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_DynamicMaterialParameters,0x458,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_DynamicMaterialParameters>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DynamicMaterialParameters>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.InnerSingleton
  ;
}

// GetRendererChannelMask @ 14944cb40

int __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::GetRendererChannelMask
          (UNiagaraStatelessModule_DynamicMaterialParameters *this)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  FNiagaraStatelessDynamicParameterSet *pFVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  bVar1 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar1) {
    uVar6 = 0;
    if (this->bParameter0Enabled != 0) {
      pFVar4 = GetParameterSet(this,0);
      uVar6 = *(uint *)pFVar4 & 0xf;
    }
    uVar2 = 0;
    if (this->bParameter1Enabled != 0) {
      pFVar4 = GetParameterSet(this,1);
      uVar2 = *(uint *)pFVar4 & 0xf;
    }
    uVar3 = 0;
    if (this->bParameter2Enabled != 0) {
      pFVar4 = GetParameterSet(this,2);
      uVar3 = *(uint *)pFVar4 & 0xf;
    }
    if (this->bParameter3Enabled != 0) {
      pFVar4 = GetParameterSet(this,3);
      uVar5 = *(uint *)pFVar4 & 0xf;
    }
    return uVar6 | uVar2 << 4 | uVar3 << 8 | uVar5 << 0xc;
  }
  return 0;
}

// SetShaderParameters @ 1494659c0

void __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::SetShaderParameters
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,
          FNiagaraStatelessSetShaderParameterContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FShaderParametersMetadata *pFVar4;
  uchar *puVar5;
  uint uVar6;
  uchar *puVar7;
  
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar6 + 0xd4;
  param_1->BuiltDataOffset = iVar1;
  if ((param_1->BuiltData).ArrayNum < iVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuiltDataOffset <= BuiltData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessSetShaderParameterContext.h"
                       ,0x22,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar7 = (param_1->BuiltData).DataPtr + (int)uVar6;
  uVar6 = param_1->ParameterOffset + 0xf & 0xfffffff0;
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FDynamicMaterialParametersModule_ShaderParameters>
           ::GetStructMetadata();
  FNiagaraStatelessSetShaderParameterContext::ValidateIncludeStructType(param_1,uVar6,pFVar4);
  pFVar4 = TShaderParameterStructTypeInfo<NiagaraStateless::FDynamicMaterialParametersModule_ShaderParameters>
           ::GetStructMetadata();
  param_1->ParameterOffset = pFVar4->Size + uVar6;
  puVar5 = param_1->ShaderParametersBase + uVar6;
  *(undefined4 *)puVar5 = *(undefined4 *)puVar7;
  *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar7 + 4);
  *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(puVar7 + 0xc);
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(puVar7 + 0x10);
  *(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)(puVar7 + 0x18);
  *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar7 + 0x1c);
  *(undefined4 *)(puVar5 + 0x38) = *(undefined4 *)(puVar7 + 0x24);
  *(undefined8 *)(puVar5 + 0x40) = *(undefined8 *)(puVar7 + 0x28);
  *(undefined4 *)(puVar5 + 0x48) = *(undefined4 *)(puVar7 + 0x30);
  *(undefined8 *)(puVar5 + 0x50) = *(undefined8 *)(puVar7 + 0x34);
  *(undefined4 *)(puVar5 + 0x58) = *(undefined4 *)(puVar7 + 0x3c);
  *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(puVar7 + 0x40);
  *(undefined4 *)(puVar5 + 0x68) = *(undefined4 *)(puVar7 + 0x48);
  *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(puVar7 + 0x4c);
  *(undefined4 *)(puVar5 + 0x78) = *(undefined4 *)(puVar7 + 0x54);
  *(undefined8 *)(puVar5 + 0x80) = *(undefined8 *)(puVar7 + 0x58);
  *(undefined4 *)(puVar5 + 0x88) = *(undefined4 *)(puVar7 + 0x60);
  *(undefined8 *)(puVar5 + 0x90) = *(undefined8 *)(puVar7 + 100);
  *(undefined4 *)(puVar5 + 0x98) = *(undefined4 *)(puVar7 + 0x6c);
  *(undefined8 *)(puVar5 + 0xa0) = *(undefined8 *)(puVar7 + 0x70);
  *(undefined4 *)(puVar5 + 0xa8) = *(undefined4 *)(puVar7 + 0x78);
  *(undefined8 *)(puVar5 + 0xb0) = *(undefined8 *)(puVar7 + 0x7c);
  *(undefined4 *)(puVar5 + 0xb8) = *(undefined4 *)(puVar7 + 0x84);
  *(undefined8 *)(puVar5 + 0xc0) = *(undefined8 *)(puVar7 + 0x88);
  *(undefined4 *)(puVar5 + 200) = *(undefined4 *)(puVar7 + 0x90);
  *(undefined8 *)(puVar5 + 0xd0) = *(undefined8 *)(puVar7 + 0x94);
  *(undefined4 *)(puVar5 + 0xd8) = *(undefined4 *)(puVar7 + 0x9c);
  *(undefined8 *)(puVar5 + 0xe0) = *(undefined8 *)(puVar7 + 0xa0);
  *(undefined4 *)(puVar5 + 0xe8) = *(undefined4 *)(puVar7 + 0xa8);
  *(undefined8 *)(puVar5 + 0xf0) = *(undefined8 *)(puVar7 + 0xac);
  *(undefined4 *)(puVar5 + 0xf8) = *(undefined4 *)(puVar7 + 0xb4);
  *(undefined8 *)(puVar5 + 0x100) = *(undefined8 *)(puVar7 + 0xb8);
  *(undefined4 *)(puVar5 + 0x108) = *(undefined4 *)(puVar7 + 0xc0);
  return;
}

// StaticRegisterNativesUNiagaraStatelessModule_DynamicMaterialParameters @ 149469c80

void __cdecl
UNiagaraStatelessModule_DynamicMaterialParameters::
StaticRegisterNativesUNiagaraStatelessModule_DynamicMaterialParameters(void)

{
  return;
}

// __VTableCtorCaller @ 1494720e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
UNiagaraStatelessModule_DynamicMaterialParameters::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DynamicMaterialParameters__6B_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 0xf;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffff1 | 1;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[1]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[2]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 4),0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[5]._padding_,0.0);
    *(uint *)&this[6]._padding_ = (uint)this[6]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[6].field_0x28,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[8]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[9]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[10].field_0x28,0.0);
    *(uint *)&this[0xc]._padding_ = (uint)this[0xc]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0xc]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0xd]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 0xf),0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x10]._padding_,0.0);
    *(uint *)&this[0x11]._padding_ = (uint)this[0x11]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x11].field_0x28,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x13]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x14]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x15].field_0x28,0.0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

