// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Initialize @ 1487ade40

void __thiscall
FStatRenderGlobals::Initialize
          (FStatRenderGlobals *this,int param_1,int param_2,int param_3,bool param_4)

{
  TIntPoint<int>_u_0 TVar1;
  int iVar2;
  UFont *pUVar3;
  UClass *pUVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  UObject *pUVar8;
  float fVar9;
  int local_res10 [2];
  undefined3 in_stack_00000029;
  TStringView<wchar_t> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar6 = (this->SizeXY).field0_0x0._s_0.X;
  if ((param_1 != iVar6) || (param_2 != (this->SizeXY).field0_0x0._s_0.Y)) {
    TVar1._s_0.Y = param_2;
    TVar1._s_0.X = param_1;
    (this->SizeXY).field0_0x0 = TVar1;
    this->bNeedRefresh = true;
    iVar6 = param_1;
  }
  iVar7 = 0;
  if (iVar6 < 0x500) {
    if (this->StatFontType != Tiny) {
      this->StatFontType = Tiny;
      pUVar3 = UEngine::GetTinyFont();
      this->bNeedRefresh = true;
LAB_1487adec2:
      this->StatFont = pUVar3;
    }
  }
  else if (this->StatFontType != Small) {
    this->StatFontType = Small;
    pUVar3 = UEngine::GetSmallFont();
    this->bNeedRefresh = true;
    goto LAB_1487adec2;
  }
  this->SafeSizeX = param_3;
  this->bIsStereo = param_4;
  if ((param_4 != false) && (this->StatFontType != Tiny)) {
    this->StatFontType = Tiny;
    pUVar3 = UEngine::GetTinyFont();
    this->StatFont = pUVar3;
    this->bNeedRefresh = true;
  }
  iVar6 = this->StatFont->LegacyFontSize;
  if (iVar6 != this->CachedLegacyFontSize) {
    this->CachedLegacyFontSize = iVar6;
    pUVar4 = (UClass *)this->StatFont->_padding_;
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    pUVar8 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar8 == (UObject *)0x0) {
LAB_1487adf50:
      pUVar8 = (UObject *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UFont_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) goto LAB_1487adf50;
    }
    if (iVar6 == *(int *)&pUVar8[7].field_0x24) {
      iVar6 = GStatFonts[(int)this->StatFontType].FontHeight;
    }
    else {
      fVar9 = UFont::GetMaxCharHeight(this->StatFont);
      iVar6 = (int)fVar9;
    }
    this->StatFontHeight = iVar6;
    this->bNeedRefresh = true;
  }
  if (this->bNeedRefresh == false) {
    return;
  }
  iVar6 = GStatFonts[(int)this->StatFontType].MaxDisplayedChars;
  if (this->bIsStereo != false) {
    iVar6 = GStatFonts[(int)this->StatFontType].MaxDisplayedChars / 2;
  }
  ::FString::ChrN(&local_38,iVar6,L'S');
  iVar6 = GStatFonts[(int)this->StatFontType].MaxDisplayedChars;
  if (this->bIsStereo != false) {
    iVar6 = GStatFonts[(int)this->StatFontType].MaxDisplayedChars / 2;
  }
  ::FString::ChrN(&local_48,iVar6 / 2,L'S');
  ::FString::ChrN(&local_58,(this->StatFontType == Small) + 7,L'W');
  ::FString::ChrN(&local_68,(this->StatFontType == Small) + 4,L'W');
  _param_4 = 0;
  local_res10[0] = 0;
  if (local_38.Data.ArrayNum == 0) {
    local_78.DataPtr = L"";
LAB_1487ae05f:
    sVar5 = wcslen(local_78.DataPtr);
    local_78.Size = (int)sVar5;
  }
  else {
    local_78.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    local_78.Size = iVar7;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1487ae05f;
  }
  StringSize(this->StatFont,&this->AfterNameColumnOffset,(int *)&param_4,&local_78);
  iVar6 = 0;
  if (local_48.Data.ArrayNum == 0) {
    local_78.DataPtr = L"";
LAB_1487ae0a1:
    sVar5 = wcslen(local_78.DataPtr);
    iVar2 = (int)sVar5;
  }
  else {
    local_78.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    iVar2 = iVar6;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1487ae0a1;
  }
  local_78.Size = iVar2;
  StringSize(this->StatFont,&this->AfterNameColumnOffsetNarrow,(int *)&param_4,&local_78);
  if (local_58.Data.ArrayNum == 0) {
    local_78.DataPtr = L"";
LAB_1487ae0e4:
    sVar5 = wcslen(local_78.DataPtr);
    iVar6 = (int)sVar5;
  }
  else {
    local_78.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1487ae0e4;
  }
  local_78.Size = iVar6;
  StringSize(this->StatFont,&this->InterColumnOffset,local_res10,&local_78);
  if (local_68.Data.ArrayNum == 0) {
    local_78.DataPtr = L"";
  }
  else {
    local_78.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1487ae12c;
  }
  sVar5 = wcslen(local_78.DataPtr);
  iVar7 = (int)sVar5;
LAB_1487ae12c:
  local_78.Size = iVar7;
  StringSize(this->StatFont,&this->InterColumnOffsetNarrow,local_res10,&local_78);
  this->bNeedRefresh = false;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

