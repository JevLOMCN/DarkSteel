// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// operator= @ 14a2e0960

FRigSpaceHierarchy * __thiscall
FRigSpaceHierarchy::operator=(FRigSpaceHierarchy *this,FRigSpaceHierarchy *param_1)

{
  int *piVar1;
  int iVar2;
  FRigSpace *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigSpace,int>
              ((FRigSpace *)(this->Spaces).AllocatorInstance.Data,(this->Spaces).ArrayNum);
    iVar2 = (param_1->Spaces).ArrayNum;
    piVar1 = &(this->Spaces).ArrayMax;
    pFVar3 = (FRigSpace *)(param_1->Spaces).AllocatorInstance.Data;
    (this->Spaces).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FRigSpace,FRigSpace,int>((this->Spaces).AllocatorInstance.Data,pFVar3,iVar2);
  }
  return this;
}

// StaticStruct @ 14a37ba90

UScriptStruct * __cdecl FRigSpaceHierarchy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigSpaceHierarchy.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSpaceHierarchy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSpaceHierarchy,(UObject *)pUVar1,
                         L"RigSpaceHierarchy");
  }
  return Z_Registration_Info_UScriptStruct_FRigSpaceHierarchy.OuterSingleton;
}

// FRigSpaceHierarchy @ 14a3b80a0

FRigSpaceHierarchy * __thiscall FRigSpaceHierarchy::FRigSpaceHierarchy(FRigSpaceHierarchy *this)

{
  (this->Spaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spaces).ArrayNum = 0;
  (this->Spaces).ArrayMax = 0;
  return this;
}

// Add @ 14a3c9bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigSpace * __thiscall
FRigSpaceHierarchy::Add
          (FRigSpaceHierarchy *this,FName *param_1,ERigSpaceType param_2,FName *param_3,
          TTransform<double> *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FRigSpace *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_178 [32];
  undefined ***local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined **local_128;
  FName local_120;
  undefined4 local_118;
  FScriptContainerElement local_110;
  FName local_10c;
  undefined4 local_104;
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
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_120 = *param_1;
  pFVar9 = (this->Spaces).AllocatorInstance.Data;
  local_f8 = (param_4->Rotation).XY.m128d_f64[0];
  dStack_f0 = (param_4->Rotation).XY.m128d_f64[1];
  local_e8 = (param_4->Rotation).ZW.m128d_f64[0];
  dStack_e0 = (param_4->Rotation).ZW.m128d_f64[1];
  local_10c = *param_3;
  local_d8 = (param_4->Translation).XY.m128d_f64[0];
  dStack_d0 = (param_4->Translation).XY.m128d_f64[1];
  local_c8 = (param_4->Translation).ZW.m128d_f64[0];
  dStack_c0 = (param_4->Translation).ZW.m128d_f64[1];
  local_b8 = (param_4->Scale3D).XY.m128d_f64[0];
  dStack_b0 = (param_4->Scale3D).XY.m128d_f64[1];
  local_a8 = (param_4->Scale3D).ZW.m128d_f64[0];
  dStack_a0 = (param_4->Scale3D).ZW.m128d_f64[1];
  local_98 = (param_4->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_4->Rotation).XY.m128d_f64[1];
  local_88 = (param_4->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_4->Rotation).ZW.m128d_f64[1];
  local_78 = (param_4->Translation).XY.m128d_f64[0];
  dStack_70 = (param_4->Translation).XY.m128d_f64[1];
  local_68 = (param_4->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_4->Translation).ZW.m128d_f64[1];
  local_58 = (param_4->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_4->Scale3D).XY.m128d_f64[1];
  local_48 = (param_4->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_4->Scale3D).ZW.m128d_f64[1];
  local_118 = 0xffffffff;
  local_128 = &___7FRigSpace__6B_;
  local_104 = 0xffffffff;
  local_110 = (FScriptContainerElement)param_2;
  if ((pFVar9 <= (FScriptContainerElement *)&local_128) &&
     (lVar8 = (longlong)(this->Spaces).ArrayMax,
     (FScriptContainerElement *)&local_128 < pFVar9 + lVar8 * 0xf0)) {
    local_140 = (longlong)(this->Spaces).ArrayNum;
    local_138 = 0xf0;
    local_158 = &local_128;
    local_150 = pFVar9;
    local_148 = lVar8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigSpace *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar5 = (this->Spaces).ArrayNum;
  piVar1 = &(this->Spaces).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10f0,(ForAnyElementType *)this,piVar1);
  }
  pFVar9 = (this->Spaces).AllocatorInstance.Data;
  local_158 = (undefined ***)(longlong)(int)uVar5;
  (this->Spaces).ArrayNum = uVar5 + 1;
  lVar8 = (longlong)local_158 * 0xf0;
  pFVar9 = pFVar9 + lVar8;
  *(undefined ***)pFVar9 = &___7FRigElement__6B_;
  *(FName *)(pFVar9 + 8) = local_120;
  *(undefined4 *)(pFVar9 + 0x10) = local_118;
  *(undefined ***)pFVar9 = &___7FRigSpace__6B_;
  pFVar9[0x18] = local_110;
  *(FName *)(pFVar9 + 0x1c) = local_10c;
  *(undefined4 *)(pFVar9 + 0x24) = local_104;
  *(double *)(pFVar9 + 0x30) = local_f8;
  *(double *)(pFVar9 + 0x38) = dStack_f0;
  *(double *)(pFVar9 + 0x40) = local_e8;
  *(double *)(pFVar9 + 0x48) = dStack_e0;
  *(double *)(pFVar9 + 0x50) = local_d8;
  *(double *)(pFVar9 + 0x58) = dStack_d0;
  *(double *)(pFVar9 + 0x60) = local_c8;
  *(double *)(pFVar9 + 0x68) = dStack_c0;
  *(double *)(pFVar9 + 0x70) = local_b8;
  *(double *)(pFVar9 + 0x78) = dStack_b0;
  *(double *)(pFVar9 + 0x80) = local_a8;
  *(double *)(pFVar9 + 0x88) = dStack_a0;
  *(double *)(pFVar9 + 0x90) = local_98;
  *(double *)(pFVar9 + 0x98) = dStack_90;
  *(double *)(pFVar9 + 0xa0) = local_88;
  *(double *)(pFVar9 + 0xa8) = dStack_80;
  *(double *)(pFVar9 + 0xb0) = local_78;
  *(double *)(pFVar9 + 0xb8) = dStack_70;
  *(double *)(pFVar9 + 0xc0) = local_68;
  *(double *)(pFVar9 + 200) = dStack_60;
  *(double *)(pFVar9 + 0xd0) = local_58;
  *(double *)(pFVar9 + 0xd8) = dStack_50;
  *(double *)(pFVar9 + 0xe0) = local_48;
  *(double *)(pFVar9 + 0xe8) = dStack_40;
  iVar2 = (this->Spaces).ArrayNum;
  local_150 = (FScriptContainerElement *)(longlong)iVar2;
  uVar6 = 0;
  if ((int)uVar5 < iVar2) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigSpace *)(*pcVar3)();
      return pFVar7;
    }
  }
  return (FRigSpace *)((this->Spaces).AllocatorInstance.Data + lVar8);
}

