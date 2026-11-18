// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2c7990

UScriptStruct * __cdecl FRigBoneHierarchy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBoneHierarchy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBoneHierarchy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBoneHierarchy,(UObject *)pUVar1,
                         L"RigBoneHierarchy");
  }
  return Z_Registration_Info_UScriptStruct_FRigBoneHierarchy.OuterSingleton;
}

// FRigBoneHierarchy @ 14a2d9300

FRigBoneHierarchy * __thiscall FRigBoneHierarchy::FRigBoneHierarchy(FRigBoneHierarchy *this)

{
  (this->Bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bones).ArrayNum = 0;
  (this->Bones).ArrayMax = 0;
  return this;
}

// operator= @ 14a2dfc90

FRigBoneHierarchy * __thiscall
FRigBoneHierarchy::operator=(FRigBoneHierarchy *this,FRigBoneHierarchy *param_1)

{
  int *piVar1;
  int iVar2;
  FRigBone *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigBone,int>
              ((FRigBone *)(this->Bones).AllocatorInstance.Data,(this->Bones).ArrayNum);
    iVar2 = (param_1->Bones).ArrayNum;
    piVar1 = &(this->Bones).ArrayMax;
    pFVar3 = (FRigBone *)(param_1->Bones).AllocatorInstance.Data;
    (this->Bones).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,0x10,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FRigBone,FRigBone,int>((this->Bones).AllocatorInstance.Data,pFVar3,iVar2);
  }
  return this;
}

// Add @ 14a2ea4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigBone * __thiscall
FRigBoneHierarchy::Add
          (FRigBoneHierarchy *this,FName *param_1,FName *param_2,ERigBoneType param_3,
          TTransform<double> *param_4,TTransform<double> *param_5,TTransform<double> *param_6)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FRigBone *pFVar8;
  longlong lVar9;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  FScriptContainerElement *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [24];
  FName local_1b0;
  int local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
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
  ForAnyElementType local_78;
  ERigBoneType local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_218;
  FRigBone::FRigBone((FRigBone *)local_1c8);
  local_198 = (param_4->Rotation).XY.m128d_f64[0];
  dStack_190 = (param_4->Rotation).XY.m128d_f64[1];
  local_188 = (param_4->Rotation).ZW.m128d_f64[0];
  dStack_180 = (param_4->Rotation).ZW.m128d_f64[1];
  local_1c8._8_8_ = *param_1;
  pFVar3 = (this->Bones).AllocatorInstance.Data;
  local_178 = (param_4->Translation).XY.m128d_f64[0];
  dStack_170 = (param_4->Translation).XY.m128d_f64[1];
  local_168 = (param_4->Translation).ZW.m128d_f64[0];
  dStack_160 = (param_4->Translation).ZW.m128d_f64[1];
  local_158 = (param_4->Scale3D).XY.m128d_f64[0];
  dStack_150 = (param_4->Scale3D).XY.m128d_f64[1];
  local_148 = (param_4->Scale3D).ZW.m128d_f64[0];
  dStack_140 = (param_4->Scale3D).ZW.m128d_f64[1];
  local_d8 = (param_5->Rotation).XY.m128d_f64[0];
  dStack_d0 = (param_5->Rotation).XY.m128d_f64[1];
  local_c8 = (param_5->Rotation).ZW.m128d_f64[0];
  dStack_c0 = (param_5->Rotation).ZW.m128d_f64[1];
  local_b8 = (param_5->Translation).XY.m128d_f64[0];
  dStack_b0 = (param_5->Translation).XY.m128d_f64[1];
  local_a8 = (param_5->Translation).ZW.m128d_f64[0];
  dStack_a0 = (param_5->Translation).ZW.m128d_f64[1];
  local_98 = (param_5->Scale3D).XY.m128d_f64[0];
  dStack_90 = (param_5->Scale3D).XY.m128d_f64[1];
  local_88 = (param_5->Scale3D).ZW.m128d_f64[0];
  dStack_80 = (param_5->Scale3D).ZW.m128d_f64[1];
  local_138 = (param_6->Rotation).XY.m128d_f64[0];
  dStack_130 = (param_6->Rotation).XY.m128d_f64[1];
  local_128 = (param_6->Rotation).ZW.m128d_f64[0];
  dStack_120 = (param_6->Rotation).ZW.m128d_f64[1];
  local_1b0 = *param_2;
  local_118 = (param_6->Translation).XY.m128d_f64[0];
  dStack_110 = (param_6->Translation).XY.m128d_f64[1];
  local_108 = (param_6->Translation).ZW.m128d_f64[0];
  dStack_100 = (param_6->Translation).ZW.m128d_f64[1];
  local_f8 = (param_6->Scale3D).XY.m128d_f64[0];
  dStack_f0 = (param_6->Scale3D).XY.m128d_f64[1];
  local_e8 = (param_6->Scale3D).ZW.m128d_f64[0];
  dStack_e0 = (param_6->Scale3D).ZW.m128d_f64[1];
  local_1a8 = -1;
  local_68 = param_3;
  if ((pFVar3 <= (FScriptContainerElement *)local_1c8) &&
     (lVar9 = (longlong)(this->Bones).ArrayMax,
     (FScriptContainerElement *)local_1c8 < pFVar3 + lVar9 * 0x170)) {
    local_1e0 = (longlong)(this->Bones).ArrayNum;
    local_1d8 = 0x170;
    local_1f8 = local_1c8;
    local_1f0 = pFVar3;
    local_1e8 = lVar9;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRigBone *)(*pcVar4)();
      return pFVar8;
    }
  }
  uVar6 = (this->Bones).ArrayNum;
  piVar1 = &(this->Bones).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x170,0x10,(ForAnyElementType *)this,piVar1);
  }
  (this->Bones).ArrayNum = uVar6 + 1;
  lVar9 = (longlong)(int)uVar6 * 0x170;
  FRigBone::FRigBone((FRigBone *)((this->Bones).AllocatorInstance.Data + lVar9),
                     (FRigBone *)local_1c8);
  iVar2 = (this->Bones).ArrayNum;
  uVar7 = 0;
  if ((int)uVar6 < iVar2) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_1f8 = (undefined1 *)(longlong)(int)uVar6;
    local_1f0 = (FScriptContainerElement *)(longlong)iVar2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRigBone *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar3 = (this->Bones).AllocatorInstance.Data;
  local_1c8._0_8_ = &___7FRigBone__6B_;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return (FRigBone *)(pFVar3 + lVar9);
}

