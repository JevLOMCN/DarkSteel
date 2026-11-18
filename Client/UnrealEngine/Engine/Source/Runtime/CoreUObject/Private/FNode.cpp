// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// SetTag @ 142192a40

void __thiscall UE::FPropertyPathNameTree::FNode::SetTag(FNode *this,FPropertyTag *param_1)

{
  FNode FVar1;
  undefined8 uVar2;
  long64 lVar3;
  bool bVar4;
  FPropertyTag *local_res8;
  FPropertyTypeName local_res18 [4];
  
  FVar1 = *this;
  if (FVar1 != (FNode)0x0) {
    if (*(longlong *)((longlong)FVar1 + 0x1c) == 0) {
      uVar2 = *(undefined8 *)&param_1->TypeName;
      *(FProperty **)((longlong)FVar1 + 8) = param_1->Prop;
      *(undefined8 *)((longlong)FVar1 + 0x10) = uVar2;
      uVar2 = *(undefined8 *)&(param_1->Name).Number;
      *(undefined8 *)((longlong)FVar1 + 0x18) = *(undefined8 *)&(param_1->Type).Number;
      *(undefined8 *)((longlong)FVar1 + 0x20) = uVar2;
      uVar2 = *(undefined8 *)&(param_1->EnumName).Number;
      *(undefined8 *)((longlong)FVar1 + 0x28) = *(undefined8 *)&(param_1->StructName).Number;
      *(undefined8 *)((longlong)FVar1 + 0x30) = uVar2;
      uVar2 = *(undefined8 *)&(param_1->ValueType).Number;
      *(undefined8 *)((longlong)FVar1 + 0x38) = *(undefined8 *)&(param_1->InnerType).Number;
      *(undefined8 *)((longlong)FVar1 + 0x40) = uVar2;
      lVar3 = param_1->SizeOffset;
      *(undefined8 *)((longlong)FVar1 + 0x48) = *(undefined8 *)&param_1->ArrayIndex;
      *(long64 *)((longlong)FVar1 + 0x50) = lVar3;
      uVar2 = *(undefined8 *)&(param_1->StructGuid).C;
      *(undefined8 *)((longlong)FVar1 + 0x58) = *(undefined8 *)&param_1->StructGuid;
      *(undefined8 *)((longlong)FVar1 + 0x60) = uVar2;
      uVar2 = *(undefined8 *)&(param_1->PropertyGuid).C;
      *(undefined8 *)((longlong)FVar1 + 0x68) = *(undefined8 *)&param_1->PropertyGuid;
      *(undefined8 *)((longlong)FVar1 + 0x70) = uVar2;
      *(undefined8 *)((longlong)FVar1 + 0x78) = *(undefined8 *)&param_1->HasPropertyGuid;
      *(undefined4 *)((longlong)FVar1 + 0x44) = 0;
      *(undefined4 *)((longlong)FVar1 + 0x48) = 0xffffffff;
      *(undefined8 *)((longlong)FVar1 + 0x50) = 0xffffffffffffffff;
      *(undefined1 *)((longlong)FVar1 + 0x79) = 0;
      return;
    }
    local_res8 = (FPropertyTag *)CONCAT44(local_res8._4_4_,(param_1->TypeName).Index);
    local_res18[0].Index = *(int *)((longlong)FVar1 + 0x10);
    bVar4 = UE::operator==(local_res18,(FPropertyTypeName *)&local_res8);
    if ((!bVar4) ||
       (*(EPropertyTagSerializeType *)((longlong)FVar1 + 0x7a) != param_1->SerializeType)) {
      local_res8 = param_1;
      `UE::FPropertyPathNameTree::FNode::SetTag'::__l10::<lambda_1>::operator()(&local_res8);
    }
  }
  return;
}

// operator() @ 150486980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::FPropertyPathNameTree::FNode::SetTag'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  TStringBuilderBase<wchar_t> local_118;
  wchar_t local_f8 [32];
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar3 = false;
  bVar2 = false;
  local_128 = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6139886668548669539>);
  if (bVar4) {
    local_b8.Base = local_98;
    local_b8.bIsDynamic = false;
    local_b8.bIsExternal = false;
    local_b8.CurPos = local_98;
    local_b8.End = (wchar_t *)local_18;
    UE::AppendNode(&local_b8,
                   (FPropertyTypeNameNode *)
                   ((longlong)
                    UE::GPropertyTypeNameTable.Blocks
                    [(longlong)(int)*(uint *)(*(longlong *)this + 8) >> 0xd] +
                   (ulonglong)(*(uint *)(*(longlong *)this + 8) & 0x1fff) * 0xc));
    if (local_b8.End < local_b8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
    }
    *local_b8.CurPos = L'\0';
    local_118.Base = local_f8;
    local_118.CurPos = local_f8;
    local_118.End = (wchar_t *)&local_b8;
    local_118.bIsDynamic = false;
    local_118.bIsExternal = false;
    ::FName::AppendString((FName *)(*(longlong *)this + 0x14),&local_118);
    if (local_118.End < (TStringBuilderBase<wchar_t> *)(local_118.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_118,1);
    }
    *local_118.CurPos = L'\0';
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6139886668548669539>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150486ad0;
    }
  }
  bVar4 = false;
LAB_150486ad0:
  if (bVar2) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_118);
  }
  if (bVar3) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

