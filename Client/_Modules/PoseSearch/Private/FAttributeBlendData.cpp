// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// ForEachAttributeSet<FPoseHistoryAnimationAttribute> @ 14a912760

void __thiscall
UE::Anim::FAttributeBlendData::ForEachAttributeSet<FPoseHistoryAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FAttributeSet *pFVar2;
  FAttributeSet *pFVar3;
  undefined1 local_res8 [8];
  FAttributeBlendData *local_38;
  FAttributeSet *local_30;
  undefined4 local_28;
  
  iVar1 = (this->AttributeSets).ArrayNum;
  pFVar2 = (this->AttributeSets).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->AttributeSets).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Anim::FAttributeBlendData::FAttributeSet_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    local_28 = 0xffffffff;
    local_38 = this;
    local_30 = pFVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_38);
    pFVar2 = pFVar2 + 1;
  }
  return;
}

// ForEachUniqueAttribute<FPoseHistoryAnimationAttribute> @ 14a9127f0

void __thiscall
UE::Anim::FAttributeBlendData::ForEachUniqueAttribute<FPoseHistoryAnimationAttribute>
          (FAttributeBlendData *this,
          TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&)>
          *param_1)

{
  int iVar1;
  FUniqueAttribute *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  FAttributeBlendData *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_10;
  
  pFVar2 = (this->UniqueAttributes).AllocatorInstance.Data;
  iVar1 = (this->UniqueAttributes).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = SUB84(pFVar2,0);
  uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_10 = 0xffffffff;
  local_20 = local_38;
  uStack_1c = uStack_34;
  local_28 = this;
  iStack_18 = iVar1;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_28);
  return;
}

