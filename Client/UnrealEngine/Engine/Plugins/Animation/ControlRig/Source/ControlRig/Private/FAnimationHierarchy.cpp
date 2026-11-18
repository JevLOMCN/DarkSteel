// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 15

// StaticStruct @ 14a2b9860

UScriptStruct * __cdecl FAnimationHierarchy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationHierarchy.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FAnimationHierarchy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationHierarchy,(UObject *)pUVar1,
                         L"AnimationHierarchy");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationHierarchy.OuterSingleton;
}

// GetUserDataImpl @ 14a2badd0

void * __thiscall FAnimationHierarchy::GetUserDataImpl(FAnimationHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = 0;
  if (param_1 < (this->UserData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (this->UserData).AllocatorInstance.Data + (longlong)param_1 * 0x140;
}

// GetUserDataImpl @ 14a2bae50

void * __thiscall FAnimationHierarchy::GetUserDataImpl(FAnimationHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = 0;
  if (param_1 < (this->UserData).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (this->UserData).AllocatorInstance.Data + (longlong)param_1 * 0x140;
}

// AddUserDataImpl @ 14a2baed0

int __thiscall FAnimationHierarchy::AddUserDataImpl(FAnimationHierarchy *this,void *param_1)

{
  TArray<FConstraintNodeData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->UserData;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->UserData).ArrayMax * 0x140)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = (this->UserData).ArrayNum;
  piVar2 = &(this->UserData).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x140,0x10,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->UserData).ArrayNum = iVar6 + 1;
  FConstraintNodeData::FConstraintNodeData
            ((FConstraintNodeData *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x140),
             param_1);
  return iVar6;
}

// GetNumUserData @ 14a2bafb0

int __thiscall FAnimationHierarchy::GetNumUserData(FAnimationHierarchy *this)

{
  return (this->UserData).ArrayNum;
}

// EmptyUserData @ 14a2bafc0

void __thiscall FAnimationHierarchy::EmptyUserData(FAnimationHierarchy *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    DestructItems<FConstraintNodeData,int>
              ((FConstraintNodeData *)(this->UserData).AllocatorInstance.Data,
               (this->UserData).ArrayNum);
    piVar1 = &(this->UserData).ArrayMax;
    (this->UserData).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x140,0x10,param_1,&(this->UserData).AllocatorInstance,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveUserData @ 14a2bb030

void __thiscall FAnimationHierarchy::RemoveUserData(FAnimationHierarchy *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  uVar4 = 0;
  if (param_1 < (this->UserData).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  _Dst = (this->UserData).AllocatorInstance.Data + (longlong)param_1 * 0x140;
  if (*(void **)(_Dst + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x128));
  }
  iVar5 = (this->UserData).ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x140,(longlong)iVar5 * 0x140);
  }
  piVar1 = &(this->UserData).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x140,0x10,&(this->UserData).AllocatorInstance,(this->UserData).ArrayNum,
             &(this->UserData).ArrayMax);
  return;
}

// HasUserData @ 14a2bb110

bool __thiscall FAnimationHierarchy::HasUserData(FAnimationHierarchy *this)

{
  return true;
}

// GetLocalTransform @ 14a2bb120

TTransform<double> * __thiscall
FAnimationHierarchy::GetLocalTransform(FAnimationHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\AnimationHierarchy.h"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTransform<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a2bb170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TTransform<double> *)(**(code **)(this->_padding_ + 0x48))(this,param_1);
  return pTVar3;
}

// GetLocalTransform @ 14a2bb180

TTransform<double> * __thiscall
FAnimationHierarchy::GetLocalTransform(FAnimationHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\AnimationHierarchy.h"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTransform<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a2bb1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar3 = (TTransform<double> *)(**(code **)(this->_padding_ + 0x40))(this,param_1);
  return pTVar3;
}

// GetGlobalTransform @ 14a2bb1e0

TTransform<double> * __thiscall
FAnimationHierarchy::GetGlobalTransform(FAnimationHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\AnimationHierarchy.h"
                       ,0x45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)((longlong)param_1 * 0x60 + this->_padding_);
}

// GetGlobalTransform @ 14a2bb2d0

TTransform<double> * __thiscall
FAnimationHierarchy::GetGlobalTransform(FAnimationHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TTransform<double> *pTVar3;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\AnimationHierarchy.h"
                       ,0x4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTransform<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar3 = FNodeHierarchyData::GetTransform((FNodeHierarchyData *)&this->_padding_,param_1);
  return pTVar3;
}

// SetLocalTransform @ 14a2bb330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimationHierarchy::SetLocalTransform
          (FAnimationHierarchy *this,int param_1,TTransform<double> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  double *pdVar3;
  double (*padVar4) [2];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_128 [32];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  if ((-1 < param_1) &&
     (local_48 = __security_cookie.value ^ (ulonglong)auStack_128, param_1 < (int)this->_padding_))
  {
    FNodeHierarchyData::GetTransform((FNodeHierarchyData *)&this->_padding_,param_1);
    pdVar3 = (double *)(**(code **)(this->_padding_ + 0x40))(this,param_1);
    dVar13 = (param_2->Rotation).XY.m128d_f64[1];
    *pdVar3 = (param_2->Rotation).XY.m128d_f64[0];
    pdVar3[1] = dVar13;
    dVar13 = (param_2->Rotation).ZW.m128d_f64[1];
    pdVar3[2] = (param_2->Rotation).ZW.m128d_f64[0];
    pdVar3[3] = dVar13;
    dVar13 = (param_2->Translation).XY.m128d_f64[1];
    pdVar3[4] = (param_2->Translation).XY.m128d_f64[0];
    pdVar3[5] = dVar13;
    dVar13 = (param_2->Translation).ZW.m128d_f64[1];
    pdVar3[6] = (param_2->Translation).ZW.m128d_f64[0];
    pdVar3[7] = dVar13;
    dVar13 = (param_2->Scale3D).XY.m128d_f64[1];
    pdVar3[8] = (param_2->Scale3D).XY.m128d_f64[0];
    pdVar3[9] = dVar13;
    dVar13 = (param_2->Scale3D).ZW.m128d_f64[1];
    pdVar3[10] = (param_2->Scale3D).ZW.m128d_f64[0];
    pdVar3[0xb] = dVar13;
    iVar2 = FNodeHierarchyWithUserData::GetParentIndex((FNodeHierarchyWithUserData *)this,param_1);
    if ((iVar2 < 0) || ((int)this->_padding_ <= iVar2)) {
      local_108.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
      local_108.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
      local_108.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
      local_108.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
      uVar19 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
      uVar20 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
      uVar21 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
      uVar22 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
      uVar23 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
      uVar24 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
      uVar25 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
      uVar26 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
      local_108.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
      local_108.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
      local_108.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
      local_108.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
    }
    else {
      padVar4 = (double (*) [2])(**(code **)(this->_padding_ + 0x18))(this,iVar2);
      local_108.Rotation.XY.m128d_f64 = *padVar4;
      local_108.Rotation.ZW.m128d_f64 = padVar4[1];
      local_108.Translation.XY.m128d_f64[0] = padVar4[2][0];
      local_108.Translation.XY.m128d_f64[1] = padVar4[2][1];
      local_108.Translation.ZW.m128d_f64[0] = padVar4[3][0];
      local_108.Translation.ZW.m128d_f64[1] = padVar4[3][1];
      local_108.Scale3D.XY.m128d_f64[0] = padVar4[4][0];
      local_108.Scale3D.XY.m128d_f64[1] = padVar4[4][1];
      local_108.Scale3D.ZW.m128d_f64[0] = padVar4[5][0];
      local_108.Scale3D.ZW.m128d_f64[1] = padVar4[5][1];
      local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      in_XMM2._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
      in_XMM2._0_8_ = in_XMM2._8_8_;
      local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_a8,param_2,&local_108);
      local_108.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
      local_108.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
      local_108.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
      local_108.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
      uVar19 = local_a8.Rotation.XY.m128d_f64[0]._0_4_;
      uVar20 = local_a8.Rotation.XY.m128d_f64[0]._4_4_;
      uVar21 = local_a8.Rotation.XY.m128d_f64[1]._0_4_;
      uVar22 = local_a8.Rotation.XY.m128d_f64[1]._4_4_;
      uVar23 = local_a8.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar24 = local_a8.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar25 = local_a8.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar26 = local_a8.Rotation.ZW.m128d_f64[1]._4_4_;
      local_108.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
      local_108.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
      local_108.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
      local_108.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
    }
    auVar9._0_8_ = (double)CONCAT44(uVar20,uVar19);
    auVar9._8_4_ = uVar21;
    auVar9._12_4_ = uVar22;
    auVar14._0_8_ = (double)CONCAT44(uVar24,uVar23);
    auVar14._8_4_ = uVar25;
    auVar14._12_4_ = uVar26;
    dVar13 = auVar14._0_8_ * (double)CONCAT44(uVar24,uVar23) +
             auVar9._0_8_ * (double)CONCAT44(uVar20,uVar19);
    dVar17 = auVar14._8_8_ * (double)CONCAT44(uVar26,uVar25) +
             auVar9._8_8_ * (double)CONCAT44(uVar22,uVar21);
    auVar10._8_4_ = SUB84(dVar17,0);
    auVar10._0_8_ = dVar13;
    auVar10._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar11._0_8_ = auVar10._8_8_ + dVar13;
    auVar11._8_8_ = dVar13 + dVar17;
    auVar18 = sqrtpd(in_XMM2,auVar11);
    uVar5 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar11._0_8_);
    uVar7 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar11._8_8_);
    uVar6 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar11._0_8_);
    uVar8 = -(ulonglong)
             (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar11._8_8_);
    auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
    auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
    auVar16._0_8_ = uVar5 & (ulonglong)(auVar15._0_8_ * (double)CONCAT44(uVar20,uVar19));
    uVar1 = uVar7 & (ulonglong)(auVar15._8_8_ * (double)CONCAT44(uVar22,uVar21));
    auVar16._8_4_ = (undefined4)uVar1;
    auVar16._12_4_ = (undefined4)(uVar1 >> 0x20);
    auVar12._0_8_ = uVar6 & (ulonglong)(auVar18._0_8_ * (double)CONCAT44(uVar24,uVar23));
    uVar1 = uVar8 & (ulonglong)(auVar18._8_8_ * (double)CONCAT44(uVar26,uVar25));
    auVar12._8_4_ = (undefined4)uVar1;
    auVar12._12_4_ = (undefined4)(uVar1 >> 0x20);
    auVar18._4_4_ = ~(uint)(uVar5 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
    ;
    auVar18._0_4_ = ~(uint)uVar5 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar18._8_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar18._12_4_ =
         ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    local_108.Rotation.XY.m128d_f64 = (double  [2])(auVar16 | auVar18);
    auVar15._4_4_ = ~(uint)(uVar6 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_
    ;
    auVar15._0_4_ = ~(uint)uVar6 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar15._8_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar15._12_4_ =
         ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_108.Rotation.ZW.m128d_f64 = (double  [2])(auVar12 | auVar15);
    FNodeHierarchyData::SetTransform((FNodeHierarchyData *)&this->_padding_,param_1,&local_108);
  }
  return;
}

// SetGlobalTransform @ 14a2bb570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimationHierarchy::SetGlobalTransform
          (FAnimationHierarchy *this,int param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  int iVar5;
  double *pdVar6;
  TTransform<double> *pTVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_168 [32];
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  if (-1 < param_1) {
    local_88 = __security_cookie.value ^ (ulonglong)auStack_168;
    if (param_1 < (int)this->_padding_) {
      FNodeHierarchyData::SetTransform((FNodeHierarchyData *)&this->_padding_,param_1,param_2);
      iVar5 = FNodeHierarchyWithUserData::GetParentIndex((FNodeHierarchyWithUserData *)this,param_1)
      ;
      if ((iVar5 < 0) || ((int)this->_padding_ <= iVar5)) {
        uVar16 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
        uVar17 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
        uVar20 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
        uVar21 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
        uVar22 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
        uVar23 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
        uVar27 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
        uVar28 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
        uVar29 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
        uVar30 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
        uVar31 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
        uVar32 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
        uVar33 = *(undefined4 *)((param_2->Translation).ZW.m128d_f64 + 1);
        uVar34 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 0xc);
        uVar35 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
        uVar36 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
        uVar37 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
        uVar38 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
        uVar39 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
        uVar40 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
        uVar41 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
        uVar42 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        pdVar6 = (double *)(**(code **)(this->_padding_ + 0x18))(this,iVar5);
        local_148.Rotation.XY.m128d_f64[0] = *pdVar6;
        local_148.Rotation.XY.m128d_f64[1] = pdVar6[1];
        local_148.Rotation.ZW.m128d_f64[0] = pdVar6[2];
        local_148.Rotation.ZW.m128d_f64[1] = pdVar6[3];
        local_148.Translation.XY.m128d_f64[0] = pdVar6[4];
        local_148.Translation.XY.m128d_f64[1] = pdVar6[5];
        local_148.Translation.ZW.m128d_f64[0] = pdVar6[6];
        local_148.Translation.ZW.m128d_f64[1] = pdVar6[7];
        local_148.Scale3D.XY.m128d_f64[0] = pdVar6[8];
        local_148.Scale3D.XY.m128d_f64[1] = pdVar6[9];
        local_148.Scale3D.ZW.m128d_f64[0] = pdVar6[10];
        local_148.Scale3D.ZW.m128d_f64[1] = pdVar6[0xb];
        pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_e8,&local_148);
        uVar16 = *(undefined4 *)(pTVar7->Rotation).XY.m128d_f64;
        uVar17 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 4);
        uVar18 = *(undefined4 *)((pTVar7->Rotation).XY.m128d_f64 + 1);
        uVar19 = *(undefined4 *)((longlong)(pTVar7->Rotation).XY.m128d_f64 + 0xc);
        uVar20 = *(undefined4 *)(pTVar7->Rotation).ZW.m128d_f64;
        uVar21 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 4);
        uVar22 = *(undefined4 *)((pTVar7->Rotation).ZW.m128d_f64 + 1);
        uVar23 = *(undefined4 *)((longlong)(pTVar7->Rotation).ZW.m128d_f64 + 0xc);
        uVar27 = *(undefined4 *)(pTVar7->Translation).XY.m128d_f64;
        uVar28 = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 4);
        uVar29 = *(undefined4 *)((pTVar7->Translation).XY.m128d_f64 + 1);
        uVar30 = *(undefined4 *)((longlong)(pTVar7->Translation).XY.m128d_f64 + 0xc);
        uVar31 = *(undefined4 *)(pTVar7->Translation).ZW.m128d_f64;
        uVar32 = *(undefined4 *)((longlong)(pTVar7->Translation).ZW.m128d_f64 + 4);
        uVar33 = *(undefined4 *)((pTVar7->Translation).ZW.m128d_f64 + 1);
        uVar34 = *(undefined4 *)((longlong)(pTVar7->Translation).ZW.m128d_f64 + 0xc);
        uVar35 = *(undefined4 *)(pTVar7->Scale3D).XY.m128d_f64;
        uVar36 = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 4);
        uVar37 = *(undefined4 *)((pTVar7->Scale3D).XY.m128d_f64 + 1);
        uVar38 = *(undefined4 *)((longlong)(pTVar7->Scale3D).XY.m128d_f64 + 0xc);
        uVar39 = *(undefined4 *)(pTVar7->Scale3D).ZW.m128d_f64;
        uVar40 = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 4);
        uVar41 = *(undefined4 *)((pTVar7->Scale3D).ZW.m128d_f64 + 1);
        uVar42 = *(undefined4 *)((longlong)(pTVar7->Scale3D).ZW.m128d_f64 + 0xc);
      }
      auVar13._0_8_ = (double)CONCAT44(uVar21,uVar20);
      auVar13._8_4_ = uVar22;
      auVar13._12_4_ = uVar23;
      auVar14._0_8_ =
           auVar13._0_8_ * (double)CONCAT44(uVar21,uVar20) +
           (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16);
      auVar14._8_8_ =
           auVar13._8_8_ * (double)CONCAT44(uVar23,uVar22) +
           (double)CONCAT44(uVar19,uVar18) * (double)CONCAT44(uVar19,uVar18);
      dVar1 = auVar14._8_8_ + auVar14._0_8_;
      dVar2 = auVar14._0_8_ + auVar14._8_8_;
      auVar15._8_4_ = SUB84(dVar2,0);
      auVar15._0_8_ = dVar1;
      auVar15._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar15 = sqrtpd(auVar14,auVar15);
      uVar9 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar1);
      uVar11 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar2);
      auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
      auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
      uVar10 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar1);
      uVar12 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar2);
      auVar26._0_8_ = uVar9 & (ulonglong)(auVar25._0_8_ * (double)CONCAT44(uVar17,uVar16));
      uVar4 = uVar11 & (ulonglong)(auVar25._8_8_ * (double)CONCAT44(uVar19,uVar18));
      auVar26._8_4_ = (undefined4)uVar4;
      auVar26._12_4_ = (undefined4)(uVar4 >> 0x20);
      auVar24._0_8_ = uVar10 & (ulonglong)(auVar15._0_8_ * (double)CONCAT44(uVar21,uVar20));
      uVar4 = uVar12 & (ulonglong)(auVar15._8_8_ * (double)CONCAT44(uVar23,uVar22));
      auVar24._8_4_ = (undefined4)uVar4;
      auVar24._12_4_ = (undefined4)(uVar4 >> 0x20);
      auVar25._4_4_ =
           ~(uint)(uVar9 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar25._0_4_ = ~(uint)uVar9 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar25._8_4_ = ~(uint)uVar11 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar25._12_4_ =
           ~(uint)(uVar11 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar3._4_4_ = ~(uint)(uVar10 >> 0x20) &
                     GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar3._0_4_ = ~(uint)uVar10 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar3._8_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar3._12_4_ =
           ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      pauVar8 = (undefined1 (*) [16])(**(code **)(this->_padding_ + 0x40))(this,param_1);
      *pauVar8 = auVar26 | auVar25;
      pauVar8[1] = auVar24 | auVar3;
      *(undefined4 *)pauVar8[2] = uVar27;
      *(undefined4 *)(pauVar8[2] + 4) = uVar28;
      *(undefined4 *)(pauVar8[2] + 8) = uVar29;
      *(undefined4 *)(pauVar8[2] + 0xc) = uVar30;
      *(undefined4 *)pauVar8[3] = uVar31;
      *(undefined4 *)(pauVar8[3] + 4) = uVar32;
      *(undefined4 *)(pauVar8[3] + 8) = uVar33;
      *(undefined4 *)(pauVar8[3] + 0xc) = uVar34;
      *(undefined4 *)pauVar8[4] = uVar35;
      *(undefined4 *)(pauVar8[4] + 4) = uVar36;
      *(undefined4 *)(pauVar8[4] + 8) = uVar37;
      *(undefined4 *)(pauVar8[4] + 0xc) = uVar38;
      *(undefined4 *)pauVar8[5] = uVar39;
      *(undefined4 *)(pauVar8[5] + 4) = uVar40;
      *(undefined4 *)(pauVar8[5] + 8) = uVar41;
      *(undefined4 *)(pauVar8[5] + 0xc) = uVar42;
    }
  }
  return;
}

// ~FAnimationHierarchy @ 14a2de640

void __thiscall FAnimationHierarchy::~FAnimationHierarchy(FAnimationHierarchy *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAnimationHierarchy__6B_;
  DestructItems<FConstraintNodeData,int>
            ((FConstraintNodeData *)(this->UserData).AllocatorInstance.Data,
             (this->UserData).ArrayNum);
  pFVar1 = (this->UserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNodeHierarchyWithUserData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

