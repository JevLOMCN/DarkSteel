// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 11

// FStableShaderKeyAndValue @ 145d0af20

FStableShaderKeyAndValue * __thiscall
FStableShaderKeyAndValue::FStableShaderKeyAndValue
          (FStableShaderKeyAndValue *this,FStableShaderKeyAndValue *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FName> FVar3;
  undefined8 uVar4;
  ForElementType<FName> _Dst;
  ForElementType<FName> _Src;
  
  (this->ClassNameAndObjectPath).ObjectClassAndPath.AllocatorInstance.SecondaryData =
       (ForElementType<FName>)0x0;
  FVar3 = (param_1->ClassNameAndObjectPath).ObjectClassAndPath.AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ClassNameAndObjectPath).ObjectClassAndPath.ArrayNum;
  (this->ClassNameAndObjectPath).ObjectClassAndPath.ArrayNum = iVar2;
  _Src = (ForElementType<FName>)param_1;
  if (FVar3 != (ForElementType<FName>)0x0) {
    _Src = FVar3;
  }
  piVar1 = &(this->ClassNameAndObjectPath).ObjectClassAndPath.ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar2,0,(ForElementType<FName> *)this,iVar2,piVar1);
    FVar3 = (this->ClassNameAndObjectPath).ObjectClassAndPath.AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<FName>)this;
    if (FVar3 != (ForElementType<FName>)0x0) {
      _Dst = FVar3;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
  }
  this->ShaderType = param_1->ShaderType;
  this->ShaderClass = param_1->ShaderClass;
  this->MaterialDomain = param_1->MaterialDomain;
  this->FeatureLevel = param_1->FeatureLevel;
  this->QualityLevel = param_1->QualityLevel;
  this->TargetFrequency = param_1->TargetFrequency;
  this->TargetPlatform = param_1->TargetPlatform;
  this->VFType = param_1->VFType;
  this->PermutationId = param_1->PermutationId;
  uVar4 = *(undefined8 *)((param_1->PipelineHash).Hash + 8);
  *(undefined8 *)(this->PipelineHash).Hash = *(undefined8 *)(param_1->PipelineHash).Hash;
  *(undefined8 *)((this->PipelineHash).Hash + 8) = uVar4;
  *(undefined4 *)((this->PipelineHash).Hash + 0x10) =
       *(undefined4 *)((param_1->PipelineHash).Hash + 0x10);
  this->KeyHash = param_1->KeyHash;
  uVar4 = *(undefined8 *)((param_1->OutputHash).Hash + 8);
  *(undefined8 *)(this->OutputHash).Hash = *(undefined8 *)(param_1->OutputHash).Hash;
  *(undefined8 *)((this->OutputHash).Hash + 8) = uVar4;
  *(undefined4 *)((this->OutputHash).Hash + 0x10) =
       *(undefined4 *)((param_1->OutputHash).Hash + 0x10);
  return this;
}

// operator() @ 145e48ac0

void __thiscall
`FStableShaderKeyAndValue::ParseFromString'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  if (((ulonglong)FVar7 <= param_1) &&
     (param_1 < (TStringView<wchar_t> *)
                ((longlong)*(int *)((longlong)FVar2 + 0xcc) * 0x10 + (longlong)FVar7))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar2 + 200);
  if (iVar6 == *(int *)((longlong)FVar2 + 0xcc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0xcc));
  }
  *(int *)((longlong)FVar2 + 200) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->Size;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->DataPtr;
  puVar1[1] = uVar4;
  return;
}

// operator() @ 145e48ba0

void __thiscall
`FStableShaderKeyAndValue::ParseFromStringCached'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  if (((ulonglong)FVar7 <= param_1) &&
     (param_1 < (TStringView<wchar_t> *)
                ((longlong)*(int *)((longlong)FVar2 + 0xcc) * 0x10 + (longlong)FVar7))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar2 + 200);
  if (iVar6 == *(int *)((longlong)FVar2 + 0xcc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0xcc));
  }
  *(int *)((longlong)FVar2 + 200) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->Size;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0xc0) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->DataPtr;
  puVar1[1] = uVar4;
  return;
}

// AppendString @ 145e4c910

void __thiscall
FStableShaderKeyAndValue::AppendString
          (FStableShaderKeyAndValue *this,TStringBuilderBase<char> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<char,int> *pTVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  TArrayView<char,int> local_68;
  FSHAHash *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FSHAHash *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  TArrayView<unsigned_char_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  TArrayView<char,int> local_18;
  
  iVar6 = *(int *)&param_1->CurPos - *(int *)&param_1->Base;
  FCompactFullName::AppendString(&this->ClassNameAndObjectPath,param_1);
  local_68.DataPtr = param_1->Base;
  local_68.ArrayNum = *(int *)&param_1->CurPos - (int)local_68.DataPtr;
  if ((local_68.ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar3 = TArrayView<char,int>::Slice
                     (&local_68,&local_18,iVar6,
                      (*(int *)&param_1->CurPos - *(int *)&param_1->Base) - iVar6);
  pcVar4 = pTVar3->DataPtr;
  pcVar5 = pcVar4 + pTVar3->ArrayNum;
  for (; pcVar4 != pcVar5; pcVar4 = pcVar4 + 1) {
    if (*pcVar4 == ',') {
      *pcVar4 = ' ';
    }
  }
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendSanitizedFNameAsUTF8(param_1,&this->ShaderType,',');
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendSanitizedFNameAsUTF8(param_1,&this->ShaderClass,',');
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendFNameAsUTF8(param_1,&this->MaterialDomain);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendFNameAsUTF8(param_1,&this->FeatureLevel);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendFNameAsUTF8(param_1,&this->QualityLevel);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendFNameAsUTF8(param_1,&this->TargetFrequency);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendFNameAsUTF8(param_1,&this->TargetPlatform);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendFNameAsUTF8(param_1,&this->VFType);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  *param_1->CurPos = ',';
  param_1->CurPos = param_1->CurPos + 1;
  AppendFNameAsUTF8(param_1,&this->PermutationId);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  uStack_50 = 0x14;
  *param_1->CurPos = ',';
  local_58 = &this->OutputHash;
  param_1->CurPos = param_1->CurPos + 1;
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = 0x14;
  local_38.DataPtr = local_58->Hash;
  UE::String::BytesToHex(&local_38,param_1);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(param_1,1);
  }
  uStack_40 = 0x14;
  *param_1->CurPos = ',';
  local_48 = &this->PipelineHash;
  param_1->CurPos = param_1->CurPos + 1;
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = 0x14;
  local_28.DataPtr = local_48->Hash;
  UE::String::BytesToHex(&local_28,param_1);
  return;
}

// ComputeKeyHash @ 145e4f240

void __thiscall FStableShaderKeyAndValue::ComputeKeyHash(FStableShaderKeyAndValue *this)

{
  int iVar1;
  ForElementType<FName> FVar2;
  undefined8 uVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FName> FVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  FVar2 = (this->ClassNameAndObjectPath).ObjectClassAndPath.AllocatorInstance.SecondaryData;
  iVar1 = (this->ClassNameAndObjectPath).ObjectClassAndPath.ArrayNum;
  FVar7 = (ForElementType<FName>)this;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar7 = FVar2;
  }
  FVar2 = (ForElementType<FName>)((longlong)FVar7 + (longlong)iVar1 * 8);
  while( true ) {
    if ((this->ClassNameAndObjectPath).ObjectClassAndPath.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7 == FVar2) break;
    uVar3 = *(undefined8 *)FVar7;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
    uVar6 = uVar6 - uVar5 ^ uVar5 >> 0xd;
    uVar8 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
    uVar5 = (uVar5 - uVar8) - uVar6 ^ uVar8 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 << 0x10;
    uVar5 = (uVar5 - uVar8) - uVar6 ^ uVar8 >> 5;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 3;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 << 10;
    uVar6 = (uVar5 - uVar8) - uVar6 ^ uVar8 >> 0xf;
    FVar7 = (ForElementType<FName>)((longlong)FVar7 + 8);
  }
  this->KeyHash = uVar6;
  FVar4 = this->ShaderType;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  FVar4 = this->ShaderClass;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  FVar4 = this->MaterialDomain;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  FVar4 = this->FeatureLevel;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  FVar4 = this->QualityLevel;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  FVar4 = this->TargetFrequency;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  FVar4 = this->TargetPlatform;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  FVar4 = this->VFType;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar6 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = uVar6 + FVar4.Number;
  uVar8 = this->KeyHash - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar5 ^ uVar9 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar5 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
  FVar4 = this->PermutationId;
  this->KeyHash = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  uVar5 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  uVar6 = *(uint *)(this->PipelineHash).Hash;
  uVar5 = uVar5 + FVar4.Number;
  uVar9 = this->KeyHash - uVar5 ^ uVar5 >> 0xd;
  uVar8 = (-0x61c88647 - uVar9) - uVar5 ^ uVar9 << 8;
  uVar10 = (uVar5 - uVar8) - uVar9 ^ uVar8 >> 0xd;
  uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 >> 0xc;
  uVar5 = (uVar8 - uVar9) - uVar10 ^ uVar9 << 0x10;
  uVar10 = (uVar10 - uVar5) - uVar9 ^ uVar5 >> 5;
  uVar8 = (uVar9 - uVar10) - uVar5 ^ uVar10 >> 3;
  uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
  uVar5 = ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (-0x61c88647 - uVar6) - uVar5 ^ uVar5 << 8;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 >> 0xc;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 5;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 >> 3;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 << 10;
  this->KeyHash = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xf;
  return;
}

// HeaderLine @ 145e5e870

FString * __cdecl FStableShaderKeyAndValue::HeaderLine(FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::FString(&local_18,L",");
  ::FString::AppendChars(__return_storage_ptr__,L"ClassNameAndObjectPath",0x16);
  iVar1 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"ShaderType",10);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"ShaderClass",0xb);
  iVar3 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"MaterialDomain",0xe);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"FeatureLevel",0xc);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"QualityLevel",0xc);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"TargetFrequency",0xf);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"TargetPlatform",0xe);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"VFType",6);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"Permutation",0xb);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"OutputHash",10);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendChars(__return_storage_ptr__,L"PipelineHash",0xc);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ParseFromString @ 145e65e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStableShaderKeyAndValue::ParseFromString
          (FStableShaderKeyAndValue *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TStringView<wchar_t> *pTVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  longlong local_240;
  TStringView<wchar_t> *local_238 [2];
  FName local_228;
  int iStack_220;
  undefined4 uStack_21c;
  code *local_218;
  TStringView<wchar_t> **local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<wchar_t> local_1a8;
  wchar_t *local_198;
  undefined8 uStack_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  undefined8 uStack_170;
  wchar_t *local_168;
  undefined8 uStack_160;
  wchar_t *local_158;
  undefined8 uStack_150;
  wchar_t *local_148;
  undefined8 uStack_140;
  wchar_t *local_138;
  undefined8 uStack_130;
  wchar_t *local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined8 uStack_110;
  TStringView<wchar_t> local_108 [12];
  TStringView<wchar_t> *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  pwVar8 = param_1->DataPtr;
  local_238[0] = local_108;
  iVar9 = 0;
  local_210 = local_238;
  local_48 = (TStringView<wchar_t> *)0x0;
  local_40 = 0;
  local_218 = UE::Core::Private::Function::
              TFunctionRefCaller<`FStableShaderKeyAndValue::ParseFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_3c = 0xc;
  pwVar1 = pwVar8 + param_1->Size;
  while ((pwVar8 != pwVar1 && (iVar5 = iswspace(*pwVar8), iVar5 != 0))) {
    iVar9 = iVar9 + 1;
    pwVar8 = pwVar8 + 1;
  }
  FVar2 = (FName)(param_1->DataPtr + iVar9);
  iVar9 = param_1->Size - iVar9;
  if (iVar9 != 0) {
    lVar10 = (longlong)iVar9;
    do {
      iVar5 = iswspace(((wchar_t *)((longlong)FVar2 + -2))[lVar10]);
      if (iVar5 == 0) break;
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  local_1c8._12_4_ = uStack_21c;
  local_1c8.Size = iVar9;
  local_228 = FVar2;
  iStack_220 = iVar9;
  local_1c8.DataPtr = (wchar_t *)FVar2;
  UE::String::ParseTokens
            (&local_1c8,L',',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_218,None);
  if ((1 < local_40 - 0xbU) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fields.Num() == 11 || Fields.Num() == 12",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0x289,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_40 < 1) {
    local_240 = (longlong)local_40;
    local_248 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  FCompactFullName::ParseFromString(&this->ClassNameAndObjectPath,pTVar7);
  if (local_40 < 2) {
    local_248 = 1;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_198 = pTVar7[1].DataPtr;
  uStack_190 = *(undefined8 *)&pTVar7[1].Size;
  pFVar6 = ::FName::FName(&local_208,(int)*(undefined8 *)&pTVar7[1].Size,local_198,FNAME_Add);
  this->ShaderType = *pFVar6;
  if (local_40 < 3) {
    local_248 = 2;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_188 = pTVar7[2].DataPtr;
  uStack_180 = *(undefined8 *)&pTVar7[2].Size;
  pFVar6 = ::FName::FName(&local_200,(int)*(undefined8 *)&pTVar7[2].Size,local_188,FNAME_Add);
  this->ShaderClass = *pFVar6;
  if (local_40 < 4) {
    local_248 = 3;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_178 = pTVar7[3].DataPtr;
  uStack_170 = *(undefined8 *)&pTVar7[3].Size;
  pFVar6 = ::FName::FName(&local_1f8,(int)*(undefined8 *)&pTVar7[3].Size,local_178,FNAME_Add);
  this->MaterialDomain = *pFVar6;
  if (local_40 < 5) {
    local_248 = 4;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_168 = pTVar7[4].DataPtr;
  uStack_160 = *(undefined8 *)&pTVar7[4].Size;
  pFVar6 = ::FName::FName(&local_1f0,(int)*(undefined8 *)&pTVar7[4].Size,local_168,FNAME_Add);
  this->FeatureLevel = *pFVar6;
  if (local_40 < 6) {
    local_248 = 5;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_158 = pTVar7[5].DataPtr;
  uStack_150 = *(undefined8 *)&pTVar7[5].Size;
  pFVar6 = ::FName::FName(&local_1e8,(int)*(undefined8 *)&pTVar7[5].Size,local_158,FNAME_Add);
  this->QualityLevel = *pFVar6;
  if (local_40 < 7) {
    local_248 = 6;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_148 = pTVar7[6].DataPtr;
  uStack_140 = *(undefined8 *)&pTVar7[6].Size;
  pFVar6 = ::FName::FName(&local_1e0,(int)*(undefined8 *)&pTVar7[6].Size,local_148,FNAME_Add);
  this->TargetFrequency = *pFVar6;
  if (local_40 < 8) {
    local_248 = 7;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_138 = pTVar7[7].DataPtr;
  uStack_130 = *(undefined8 *)&pTVar7[7].Size;
  pFVar6 = ::FName::FName(&local_1d8,(int)*(undefined8 *)&pTVar7[7].Size,local_138,FNAME_Add);
  this->TargetPlatform = *pFVar6;
  if (local_40 < 9) {
    local_248 = 8;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_128 = pTVar7[8].DataPtr;
  uStack_120 = *(undefined8 *)&pTVar7[8].Size;
  pFVar6 = ::FName::FName(&local_1d0,(int)*(undefined8 *)&pTVar7[8].Size,local_128,FNAME_Add);
  this->VFType = *pFVar6;
  if (local_40 < 10) {
    local_248 = 9;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  local_118 = pTVar7[9].DataPtr;
  uStack_110 = *(undefined8 *)&pTVar7[9].Size;
  pFVar6 = ::FName::FName(&local_228,(int)*(undefined8 *)&pTVar7[9].Size,local_118,FNAME_Add);
  this->PermutationId = *pFVar6;
  if (local_40 < 0xb) {
    local_248 = 10;
    local_240 = (longlong)local_40;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = local_108;
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    pTVar7 = local_48;
  }
  if ((pTVar7[10].Size != 0x28) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_1b8.DataPtr = pTVar7[10].DataPtr;
  local_1b8.Size = pTVar7[10].Size;
  local_1b8._12_4_ = *(undefined4 *)&pTVar7[10].field_0xc;
  UE::String::HexToBytes(&local_1b8,(this->OutputHash).Hash);
  if (local_40 == 0xc) {
    pTVar7 = local_108;
    if (local_48 != (TStringView<wchar_t> *)0x0) {
      pTVar7 = local_48;
    }
    if ((pTVar7[0xb].Size != 0x28) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Src.Len() == GetStringLen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                           ,0x109,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_1a8.DataPtr = pTVar7[0xb].DataPtr;
    local_1a8.Size = pTVar7[0xb].Size;
    local_1a8._12_4_ = *(undefined4 *)&pTVar7[0xb].field_0xc;
    UE::String::HexToBytes(&local_1a8,(this->PipelineHash).Hash);
  }
  else {
    (this->PipelineHash).Hash[0] = '\0';
    (this->PipelineHash).Hash[1] = '\0';
    (this->PipelineHash).Hash[2] = '\0';
    (this->PipelineHash).Hash[3] = '\0';
    (this->PipelineHash).Hash[4] = '\0';
    (this->PipelineHash).Hash[5] = '\0';
    (this->PipelineHash).Hash[6] = '\0';
    (this->PipelineHash).Hash[7] = '\0';
    (this->PipelineHash).Hash[8] = '\0';
    (this->PipelineHash).Hash[9] = '\0';
    (this->PipelineHash).Hash[10] = '\0';
    (this->PipelineHash).Hash[0xb] = '\0';
    (this->PipelineHash).Hash[0xc] = '\0';
    (this->PipelineHash).Hash[0xd] = '\0';
    (this->PipelineHash).Hash[0xe] = '\0';
    (this->PipelineHash).Hash[0xf] = '\0';
    (this->PipelineHash).Hash[0x10] = '\0';
    (this->PipelineHash).Hash[0x11] = '\0';
    (this->PipelineHash).Hash[0x12] = '\0';
    (this->PipelineHash).Hash[0x13] = '\0';
  }
  ComputeKeyHash(this);
  if (local_48 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// ParseFromStringCached @ 145e665a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStableShaderKeyAndValue::ParseFromStringCached
          (FStableShaderKeyAndValue *this,TStringView<wchar_t> *param_1,
          TMap<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
          *param_2)

{
  wchar_t *pwVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  TStringView<wchar_t> *pTVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  uint uVar11;
  longlong lVar12;
  FName *pFVar13;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  longlong local_290;
  uint local_288;
  undefined1 local_284 [12];
  uint local_278;
  undefined1 local_274 [12];
  uint local_268;
  undefined1 local_264 [12];
  uint local_258;
  undefined1 local_254 [12];
  uint local_248;
  undefined1 local_244 [12];
  FName local_238;
  int iStack_230;
  undefined4 uStack_22c;
  uint *local_228;
  FName *local_220;
  undefined4 *local_218;
  FName *local_210;
  code *local_208;
  undefined1 *local_200;
  uint *local_1f8;
  FName *local_1f0;
  undefined4 *local_1e8;
  FName *local_1e0;
  uint *local_1d8;
  FName *local_1d0;
  undefined4 *local_1c8;
  FName *local_1c0;
  uint *local_1b8;
  FName *local_1b0;
  undefined4 *local_1a8;
  FName *local_1a0;
  uint *local_198;
  FName *local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118 [12];
  TStringView<wchar_t> *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pwVar10 = param_1->DataPtr;
  local_244._4_8_ = local_118;
  pFVar13 = (FName *)0x0;
  local_200 = local_244 + 4;
  local_58 = (TStringView<wchar_t> *)0x0;
  uVar11 = 0;
  local_50 = 0;
  local_208 = UE::Core::Private::Function::
              TFunctionRefCaller<`FStableShaderKeyAndValue::ParseFromStringCached'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_4c = 0xc;
  pwVar1 = pwVar10 + param_1->Size;
  pFVar7 = pFVar13;
  for (; pwVar10 != pwVar1; pwVar10 = pwVar10 + 1) {
    uVar11 = (uint)pFVar7;
    iVar5 = iswspace(*pwVar10);
    if (iVar5 == 0) break;
    uVar11 = uVar11 + 1;
    pFVar7 = (FName *)(ulonglong)uVar11;
  }
  FVar2 = (FName)(param_1->DataPtr + (int)uVar11);
  iVar5 = param_1->Size - uVar11;
  if (iVar5 != 0) {
    lVar12 = (longlong)iVar5;
    do {
      iVar6 = iswspace(((wchar_t *)((longlong)FVar2 + -2))[lVar12]);
      if (iVar6 == 0) break;
      iVar5 = iVar5 + -1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  local_148._12_4_ = uStack_22c;
  local_148.Size = iVar5;
  local_238 = FVar2;
  iStack_230 = iVar5;
  local_148.DataPtr = (wchar_t *)FVar2;
  UE::String::ParseTokens
            (&local_148,L',',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_208,None);
  if ((1 < local_50 - 0xbU) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fields.Num() == 11 || Fields.Num() == 12",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0x2b9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_50 < 1) {
    local_290 = (longlong)local_50;
    local_298 = 0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  FCompactFullName::ParseFromString(&this->ClassNameAndObjectPath,pTVar8);
  if (local_50 < 2) {
    local_298 = 1;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_288 = CityHash32((char *)pTVar8[1].DataPtr,pTVar8[1].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_288) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_288) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e66835;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_1f8 = &local_288;
  local_1f0 = ::FName::FName(&local_188,pTVar8[1].Size,pTVar8[1].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)local_284,(bool *)&local_1f8);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_284._0_4_ * 5 + 1) * 4);
LAB_145e66835:
  this->ShaderType = *pFVar7;
  if (local_50 < 3) {
    local_298 = 2;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_284._4_4_ = CityHash32((char *)pTVar8[2].DataPtr,pTVar8[2].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_284._4_4_) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_284._4_4_) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e66955;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_1e8 = (undefined4 *)(local_284 + 4);
  local_1e0 = ::FName::FName(&local_170,pTVar8[2].Size,pTVar8[2].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)(local_284 + 8),
             (bool *)&local_1e8);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_284._8_4_ * 5 + 1) * 4);
LAB_145e66955:
  this->ShaderClass = *pFVar7;
  if (local_50 < 4) {
    local_298 = 3;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_278 = CityHash32((char *)pTVar8[3].DataPtr,pTVar8[3].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_278) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_278) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e66a75;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_1d8 = &local_278;
  local_1d0 = ::FName::FName(&local_158,pTVar8[3].Size,pTVar8[3].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)local_274,(bool *)&local_1d8);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_274._0_4_ * 5 + 1) * 4);
LAB_145e66a75:
  this->MaterialDomain = *pFVar7;
  if (local_50 < 5) {
    local_298 = 4;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_274._4_4_ = CityHash32((char *)pTVar8[4].DataPtr,pTVar8[4].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_274._4_4_) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_274._4_4_) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e66b95;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_1c8 = (undefined4 *)(local_274 + 4);
  local_1c0 = ::FName::FName(&local_168,pTVar8[4].Size,pTVar8[4].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)(local_274 + 8),
             (bool *)&local_1c8);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_274._8_4_ * 5 + 1) * 4);
LAB_145e66b95:
  this->FeatureLevel = *pFVar7;
  if (local_50 < 6) {
    local_298 = 5;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_268 = CityHash32((char *)pTVar8[5].DataPtr,pTVar8[5].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_268) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_268) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e66cb5;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_1b8 = &local_268;
  local_1b0 = ::FName::FName(&local_160,pTVar8[5].Size,pTVar8[5].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)local_264,(bool *)&local_1b8);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_264._0_4_ * 5 + 1) * 4);
LAB_145e66cb5:
  this->QualityLevel = *pFVar7;
  if (local_50 < 7) {
    local_298 = 6;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_264._4_4_ = CityHash32((char *)pTVar8[6].DataPtr,pTVar8[6].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_264._4_4_) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_264._4_4_) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e66dd5;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_1a8 = (undefined4 *)(local_264 + 4);
  local_1a0 = ::FName::FName(&local_150,pTVar8[6].Size,pTVar8[6].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)(local_264 + 8),
             (bool *)&local_1a8);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_264._8_4_ * 5 + 1) * 4);
LAB_145e66dd5:
  this->TargetFrequency = *pFVar7;
  if (local_50 < 8) {
    local_298 = 7;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_258 = CityHash32((char *)pTVar8[7].DataPtr,pTVar8[7].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_258) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_258) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e66ef5;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_198 = &local_258;
  local_190 = ::FName::FName(&local_180,pTVar8[7].Size,pTVar8[7].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)local_254,(bool *)&local_198);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_254._0_4_ * 5 + 1) * 4);
LAB_145e66ef5:
  this->TargetPlatform = *pFVar7;
  if (local_50 < 9) {
    local_298 = 8;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_254._4_4_ = CityHash32((char *)pTVar8[8].DataPtr,pTVar8[8].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_254._4_4_) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_254._4_4_) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e6701b;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_218 = (undefined4 *)(local_254 + 4);
  local_210 = ::FName::FName(&local_178,pTVar8[8].Size,pTVar8[8].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)(local_254 + 8),
             (bool *)&local_218);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_254._8_4_ * 5 + 1) * 4);
LAB_145e6701b:
  this->VFType = *pFVar7;
  if (local_50 < 10) {
    local_298 = 9;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  local_248 = CityHash32((char *)pTVar8[9].DataPtr,pTVar8[9].Size * 2);
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    puVar9 = *(undefined1 **)&param_2->field_0x40;
    if (*(undefined1 **)&param_2->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &param_2->field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_248) * 4);
    if (iVar5 != -1) {
      do {
        lVar12 = *(longlong *)param_2 + (longlong)iVar5 * 0x14;
        if (*(uint *)(*(longlong *)param_2 + (longlong)iVar5 * 0x14) == local_248) {
          pFVar7 = (FName *)(lVar12 + 4);
          if (lVar12 == 0) {
            pFVar7 = pFVar13;
          }
          if (pFVar7 != (FName *)0x0) goto LAB_145e6714b;
          break;
        }
        iVar5 = *(int *)(lVar12 + 0xc);
      } while (iVar5 != -1);
    }
  }
  local_228 = &local_248;
  local_220 = ::FName::FName(&local_238,pTVar8[9].Size,pTVar8[9].DataPtr,FNAME_Add);
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FName_&&>_>
            ((TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<unsigned_int_&,FName_&&> *)local_244,(bool *)&local_228);
  pFVar7 = (FName *)(*(longlong *)param_2 + ((longlong)(int)local_244._0_4_ * 5 + 1) * 4);
LAB_145e6714b:
  this->PermutationId = *pFVar7;
  if (local_50 < 0xb) {
    local_298 = 10;
    local_290 = (longlong)local_50;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = local_118;
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    pTVar8 = local_58;
  }
  if ((pTVar8[10].Size != 0x28) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_138.DataPtr = pTVar8[10].DataPtr;
  local_138.Size = pTVar8[10].Size;
  local_138._12_4_ = *(undefined4 *)&pTVar8[10].field_0xc;
  UE::String::HexToBytes(&local_138,(this->OutputHash).Hash);
  if (local_50 == 0xc) {
    pTVar8 = local_118;
    if (local_58 != (TStringView<wchar_t> *)0x0) {
      pTVar8 = local_58;
    }
    if ((pTVar8[0xb].Size != 0x28) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Src.Len() == GetStringLen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                           ,0x109,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_128.DataPtr = pTVar8[0xb].DataPtr;
    local_128.Size = pTVar8[0xb].Size;
    local_128._12_4_ = *(undefined4 *)&pTVar8[0xb].field_0xc;
    UE::String::HexToBytes(&local_128,(this->PipelineHash).Hash);
  }
  else {
    (this->PipelineHash).Hash[0] = '\0';
    (this->PipelineHash).Hash[1] = '\0';
    (this->PipelineHash).Hash[2] = '\0';
    (this->PipelineHash).Hash[3] = '\0';
    (this->PipelineHash).Hash[4] = '\0';
    (this->PipelineHash).Hash[5] = '\0';
    (this->PipelineHash).Hash[6] = '\0';
    (this->PipelineHash).Hash[7] = '\0';
    (this->PipelineHash).Hash[8] = '\0';
    (this->PipelineHash).Hash[9] = '\0';
    (this->PipelineHash).Hash[10] = '\0';
    (this->PipelineHash).Hash[0xb] = '\0';
    (this->PipelineHash).Hash[0xc] = '\0';
    (this->PipelineHash).Hash[0xd] = '\0';
    (this->PipelineHash).Hash[0xe] = '\0';
    (this->PipelineHash).Hash[0xf] = '\0';
    (this->PipelineHash).Hash[0x10] = '\0';
    (this->PipelineHash).Hash[0x11] = '\0';
    (this->PipelineHash).Hash[0x12] = '\0';
    (this->PipelineHash).Hash[0x13] = '\0';
  }
  ComputeKeyHash(this);
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// SetPipelineHash @ 145e6e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FStableShaderKeyAndValue::SetPipelineHash(FStableShaderKeyAndValue *this,FShaderPipeline *param_1)

{
  FShaderCodeLibraryPipeline *pFVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  FShaderCodeLibraryPipeline local_118;
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (param_1 == (FShaderPipeline *)0x0) {
    (this->PipelineHash).Hash[0] = '\0';
    (this->PipelineHash).Hash[1] = '\0';
    (this->PipelineHash).Hash[2] = '\0';
    (this->PipelineHash).Hash[3] = '\0';
    (this->PipelineHash).Hash[4] = '\0';
    (this->PipelineHash).Hash[5] = '\0';
    (this->PipelineHash).Hash[6] = '\0';
    (this->PipelineHash).Hash[7] = '\0';
    (this->PipelineHash).Hash[8] = '\0';
    (this->PipelineHash).Hash[9] = '\0';
    (this->PipelineHash).Hash[10] = '\0';
    (this->PipelineHash).Hash[0xb] = '\0';
    (this->PipelineHash).Hash[0xc] = '\0';
    (this->PipelineHash).Hash[0xd] = '\0';
    (this->PipelineHash).Hash[0xe] = '\0';
    (this->PipelineHash).Hash[0xf] = '\0';
    (this->PipelineHash).Hash[0x10] = '\0';
    (this->PipelineHash).Hash[0x11] = '\0';
    (this->PipelineHash).Hash[0x12] = '\0';
    (this->PipelineHash).Hash[0x13] = '\0';
  }
  else {
    local_118.Shaders[1].Hash[0] = '\0';
    local_118.Shaders[1].Hash[1] = '\0';
    local_118.Shaders[1].Hash[2] = '\0';
    local_118.Shaders[1].Hash[3] = '\0';
    local_118.Shaders[1].Hash[4] = '\0';
    local_118.Shaders[1].Hash[5] = '\0';
    local_118.Shaders[1].Hash[6] = '\0';
    local_118.Shaders[1].Hash[7] = '\0';
    local_118.Shaders[1].Hash[8] = '\0';
    local_118.Shaders[1].Hash[9] = '\0';
    local_118.Shaders[1].Hash[10] = '\0';
    local_118.Shaders[1].Hash[0xb] = '\0';
    local_118.Shaders[1].Hash[0xc] = '\0';
    local_118.Shaders[1].Hash[0xd] = '\0';
    local_118.Shaders[1].Hash[0xe] = '\0';
    local_118.Shaders[1].Hash[0xf] = '\0';
    local_118.Shaders[0].Hash[0x10] = '\0';
    local_118.Shaders[0].Hash[0x11] = '\0';
    local_118.Shaders[0].Hash[0x12] = '\0';
    local_118.Shaders[0].Hash[0x13] = '\0';
    local_118.Shaders[3].Hash[0] = '\0';
    local_118.Shaders[3].Hash[1] = '\0';
    local_118.Shaders[3].Hash[2] = '\0';
    local_118.Shaders[3].Hash[3] = '\0';
    local_118.Shaders[3].Hash[4] = '\0';
    local_118.Shaders[3].Hash[5] = '\0';
    local_118.Shaders[3].Hash[6] = '\0';
    local_118.Shaders[3].Hash[7] = '\0';
    local_118.Shaders[3].Hash[8] = '\0';
    local_118.Shaders[3].Hash[9] = '\0';
    local_118.Shaders[3].Hash[10] = '\0';
    local_118.Shaders[3].Hash[0xb] = '\0';
    local_118.Shaders[3].Hash[0xc] = '\0';
    local_118.Shaders[3].Hash[0xd] = '\0';
    local_118.Shaders[3].Hash[0xe] = '\0';
    local_118.Shaders[3].Hash[0xf] = '\0';
    local_118.Shaders[1].Hash[0x10] = '\0';
    local_118.Shaders[1].Hash[0x11] = '\0';
    local_118.Shaders[1].Hash[0x12] = '\0';
    local_118.Shaders[1].Hash[0x13] = '\0';
    local_118.Shaders[0].Hash[0] = '\0';
    local_118.Shaders[0].Hash[1] = '\0';
    local_118.Shaders[0].Hash[2] = '\0';
    local_118.Shaders[0].Hash[3] = '\0';
    local_118.Shaders[0].Hash[4] = '\0';
    local_118.Shaders[0].Hash[5] = '\0';
    local_118.Shaders[0].Hash[6] = '\0';
    local_118.Shaders[0].Hash[7] = '\0';
    local_118.Shaders[0].Hash[8] = '\0';
    local_118.Shaders[0].Hash[9] = '\0';
    local_118.Shaders[0].Hash[10] = '\0';
    local_118.Shaders[0].Hash[0xb] = '\0';
    local_118.Shaders[0].Hash[0xc] = '\0';
    local_118.Shaders[0].Hash[0xd] = '\0';
    local_118.Shaders[0].Hash[0xe] = '\0';
    local_118.Shaders[0].Hash[0xf] = '\0';
    local_118.Shaders[2].Hash[0x10] = '\0';
    local_118.Shaders[2].Hash[0x11] = '\0';
    local_118.Shaders[2].Hash[0x12] = '\0';
    local_118.Shaders[2].Hash[0x13] = '\0';
    local_118.Shaders[2].Hash[0] = '\0';
    local_118.Shaders[2].Hash[1] = '\0';
    local_118.Shaders[2].Hash[2] = '\0';
    local_118.Shaders[2].Hash[3] = '\0';
    local_118.Shaders[2].Hash[4] = '\0';
    local_118.Shaders[2].Hash[5] = '\0';
    local_118.Shaders[2].Hash[6] = '\0';
    local_118.Shaders[2].Hash[7] = '\0';
    local_118.Shaders[2].Hash[8] = '\0';
    local_118.Shaders[2].Hash[9] = '\0';
    local_118.Shaders[2].Hash[10] = '\0';
    local_118.Shaders[2].Hash[0xb] = '\0';
    local_118.Shaders[2].Hash[0xc] = '\0';
    local_118.Shaders[2].Hash[0xd] = '\0';
    local_118.Shaders[2].Hash[0xe] = '\0';
    local_118.Shaders[2].Hash[0xf] = '\0';
    local_118.Shaders[3].Hash[0x10] = '\0';
    local_118.Shaders[3].Hash[0x11] = '\0';
    local_118.Shaders[3].Hash[0x12] = '\0';
    local_118.Shaders[3].Hash[0x13] = '\0';
    local_118.Shaders[4].Hash[0] = '\0';
    local_118.Shaders[4].Hash[1] = '\0';
    local_118.Shaders[4].Hash[2] = '\0';
    local_118.Shaders[4].Hash[3] = '\0';
    local_118.Shaders[4].Hash[4] = '\0';
    local_118.Shaders[4].Hash[5] = '\0';
    local_118.Shaders[4].Hash[6] = '\0';
    local_118.Shaders[4].Hash[7] = '\0';
    local_118.Shaders[4].Hash[8] = '\0';
    local_118.Shaders[4].Hash[9] = '\0';
    local_118.Shaders[4].Hash[10] = '\0';
    local_118.Shaders[4].Hash[0xb] = '\0';
    local_118.Shaders[4].Hash[0xc] = '\0';
    local_118.Shaders[4].Hash[0xd] = '\0';
    local_118.Shaders[4].Hash[0xe] = '\0';
    local_118.Shaders[4].Hash[0xf] = '\0';
    local_118.Shaders[4].Hash[0x10] = '\0';
    local_118.Shaders[4].Hash[0x11] = '\0';
    local_118.Shaders[4].Hash[0x12] = '\0';
    local_118.Shaders[4].Hash[0x13] = '\0';
    local_118.Hash = 0;
    FShaderCodeLibraryPipeline::Initialize(&local_118,param_1);
    FSHA1::FSHA1(&local_a8);
    pFVar1 = &local_118;
    lVar2 = 5;
    do {
      FSHA1::Update(&local_a8,(uchar *)pFVar1,0x14);
      pFVar1 = (FShaderCodeLibraryPipeline *)(pFVar1->Shaders + 1);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FSHA1::Final(&local_a8);
    FSHA1::GetHash(&local_a8,(this->PipelineHash).Hash);
    FSHA1::~FSHA1(&local_a8);
  }
  return;
}

// ToString @ 145e70570

FString * __thiscall
FStableShaderKeyAndValue::ToString(FStableShaderKeyAndValue *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ToString(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 145e705a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStableShaderKeyAndValue::ToString(FStableShaderKeyAndValue *this,FString *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<wchar_t,int> *pTVar4;
  wchar_t *pwVar5;
  undefined1 auStack_3c8 [32];
  TArrayView<wchar_t,int> local_3a8;
  FSHAHash *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  FSHAHash *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  TArrayView<unsigned_char_const_,int> local_378;
  TArrayView<unsigned_char_const_,int> local_368;
  TArrayView<wchar_t,int> local_358;
  TStringBuilderBase<wchar_t> local_348;
  wchar_t local_328 [384];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_3c8;
  local_348.Base = local_328;
  local_348.bIsDynamic = false;
  local_348.bIsExternal = false;
  local_348.CurPos = local_328;
  local_348.End = (wchar_t *)local_28;
  FCompactFullName::AppendString(&this->ClassNameAndObjectPath,&local_348);
  local_3a8.DataPtr = local_348.Base;
  local_3a8.ArrayNum = (int)((longlong)local_348.CurPos - (longlong)local_348.Base >> 1);
  if ((local_3a8.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar4 = TArrayView<wchar_t,int>::Slice
                     (&local_3a8,&local_358,0,
                      (int)((longlong)local_348.CurPos - (longlong)local_348.Base >> 1));
  pwVar5 = pTVar4->DataPtr;
  pwVar1 = pwVar5 + pTVar4->ArrayNum;
  for (; pwVar5 != pwVar1; pwVar5 = pwVar5 + 1) {
    if (*pwVar5 == L',') {
      *pwVar5 = L' ';
    }
  }
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  AppendSanitizedFName(&local_348,&this->ShaderType,L',');
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  AppendSanitizedFName(&local_348,&this->ShaderClass,L',');
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  ::FName::AppendString(&this->MaterialDomain,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  ::FName::AppendString(&this->FeatureLevel,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  ::FName::AppendString(&this->QualityLevel,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  ::FName::AppendString(&this->TargetFrequency,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  ::FName::AppendString(&this->TargetPlatform,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  ::FName::AppendString(&this->VFType,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_348.CurPos = local_348.CurPos + 1;
  ::FName::AppendString(&this->PermutationId,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_398 = &this->OutputHash;
  local_348.CurPos = local_348.CurPos + 1;
  uStack_390 = 0x14;
  local_378._12_4_ = uStack_38c;
  local_378.ArrayNum = 0x14;
  local_378.DataPtr = local_398->Hash;
  UE::String::BytesToHex(&local_378,&local_348);
  if (local_348.End < local_348.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_348,1);
  }
  *local_348.CurPos = L',';
  local_388 = &this->PipelineHash;
  local_348.CurPos = local_348.CurPos + 1;
  uStack_380 = 0x14;
  local_368._12_4_ = uStack_37c;
  local_368.ArrayNum = 0x14;
  local_368.DataPtr = local_388->Hash;
  UE::String::BytesToHex(&local_368,&local_348);
  ::FString::AssignRange
            (param_1,local_348.Base,
             (int)((longlong)local_348.CurPos - (longlong)local_348.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_348);
  return;
}

