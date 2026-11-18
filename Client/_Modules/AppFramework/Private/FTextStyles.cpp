// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 7

// operator() @ 1430645e0

bool __thiscall
`FTextStyles::FindFontFamily'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  FFontFamily *pFVar1;
  longlong lVar2;
  FName *pFVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong local_60;
  longlong local_58 [2];
  undefined8 local_48;
  longlong local_40;
  longlong *local_30;
  
  pFVar1 = TSharedPtr<FTextStyles::FFontFamily,1>::operator->(param_1);
  local_48 = *(undefined8 *)this;
  local_60 = 0;
  pFVar3 = &pFVar1->FamilyName;
  plVar5 = &local_60;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)plVar5 = (char)(pFVar3->ComparisonIndex).Value;
    pFVar3 = (FName *)((longlong)&(pFVar3->ComparisonIndex).Value + 1);
    plVar5 = (longlong *)((longlong)plVar5 + 1);
  }
  local_30 = &local_60;
  local_40 = local_60;
  local_58[0] = 0;
  puVar4 = &local_48;
  plVar5 = local_58;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)plVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined8 *)((longlong)puVar4 + 1);
    plVar5 = (longlong *)((longlong)plVar5 + 1);
  }
  return local_40 == local_58[0];
}

// CreateRunInfo @ 1430b4410

FRunInfo * __cdecl
FTextStyles::CreateRunInfo
          (FRunInfo *__return_storage_ptr__,TSharedPtr<FTextStyles::FFontFamily,1> *param_1,
          ushort param_2,uchar param_3,FLinearColor *param_4)

{
  FString *pFVar1;
  FFontFamily *pFVar2;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FRunInfo *local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20 [2];
  
  pFVar1 = ::FString::FString(local_20,L"TextStyle");
  local_68 = FRunInfo::FRunInfo(__return_storage_ptr__,pFVar1);
  pFVar2 = TSharedPtr<FTextStyles::FFontFamily,1>::operator->(param_1);
  pFVar1 = ::FName::ToString(&pFVar2->FamilyName,&local_60);
  ::FString::FString(&local_a8,L"FontFamily");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&__return_storage_ptr__->MetaData,&local_a8,pFVar1);
  ::FString::~FString(&local_a8);
  ::FString::~FString(&local_60);
  pFVar1 = ::FString::FromInt(&local_50,(uint)param_2);
  ::FString::FString(&local_98,L"FontSize");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&__return_storage_ptr__->MetaData,&local_98,pFVar1);
  ::FString::~FString(&local_98);
  ::FString::~FString(&local_50);
  pFVar1 = GetFontStyleString(&local_40,param_3);
  ::FString::FString(&local_88,L"FontStyle");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&__return_storage_ptr__->MetaData,&local_88,pFVar1);
  ::FString::~FString(&local_88);
  ::FString::~FString(&local_40);
  pFVar1 = FLinearColor::ToString(param_4,&local_30);
  ::FString::FString(&local_78,L"FontColor");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&__return_storage_ptr__->MetaData,&local_78,pFVar1);
  ::FString::~FString(&local_78);
  ::FString::~FString(&local_30);
  return __return_storage_ptr__;
}

// CreateTextBlockStyle @ 1430b4620

FTextBlockStyle * __thiscall
FTextStyles::CreateTextBlockStyle
          (FTextStyles *this,FTextBlockStyle *__return_storage_ptr__,FRunInfo *param_1)

{
  uchar local_38 [4];
  ushort local_34 [2];
  undefined4 local_30;
  TSharedPtr<FTextStyles::FFontFamily,1> local_28;
  FLinearColor local_18;
  
  local_30 = 0;
  TSharedPtr<FTextStyles::FFontFamily,1>::TSharedPtr<FTextStyles::FFontFamily,1>
            (&local_28,(FNullTag *)0x0);
  ExplodeRunInfo(this,param_1,&local_28,local_34,local_38,&local_18);
  CreateTextBlockStyle(__return_storage_ptr__,&local_28,local_34[0],local_38[0],&local_18);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_28.SharedReferenceCount);
  return __return_storage_ptr__;
}

// CreateTextBlockStyle @ 1430b46c0

FTextBlockStyle * __cdecl
FTextStyles::CreateTextBlockStyle
          (FTextBlockStyle *__return_storage_ptr__,TSharedPtr<FTextStyles::FFontFamily,1> *param_1,
          ushort param_2,uchar param_3,FLinearColor *param_4)

{
  FFontFamily *pFVar1;
  undefined1 local_e8 [4];
  int local_e4;
  FString *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FName local_b0;
  TSharedPtr<FCompositeFont_const_,1> local_a8;
  FTextBlockStyle *local_98;
  FString local_90;
  FSlateColor local_80;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::FSlateFontInfo(&local_68);
  pFVar1 = TSharedPtr<FTextStyles::FFontFamily,1>::operator->(param_1);
  TSharedPtr<FCompositeFont_const_,1>::TSharedPtr<FCompositeFont_const_,1><FCompositeFont_const_>
            (&local_a8,&pFVar1->CompositeFont);
  TSharedPtr<FCompositeFont_const_,1>::operator=(&local_68.CompositeFont,&local_a8);
  TSharedPtr<FCompositeFont_const_,1>::~TSharedPtr<FCompositeFont_const_,1>(&local_a8);
  local_e0 = GetFontStyleString(&local_90,param_3);
  local_e4 = (local_e0->Data).ArrayNum;
  if (local_e4 == 0) {
    local_d8 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(local_e8);
  }
  else {
    local_d8 = (local_e0->Data).AllocatorInstance.Data;
    local_d0 = local_d8;
    local_c8 = local_d8;
    local_c0 = local_d8;
  }
  local_b8 = local_d8;
  ::FName::FName(&local_b0,(wchar_t *)local_d8);
  local_68.TypefaceFontName = local_b0;
  ::FString::~FString(&local_90);
  local_68.Size = (float)param_2;
  local_98 = FTextBlockStyle::FTextBlockStyle(__return_storage_ptr__);
  FTextBlockStyle::SetFont(__return_storage_ptr__,&local_68);
  FSlateColor::FSlateColor(&local_80,param_4);
  FTextBlockStyle::SetColorAndOpacity(__return_storage_ptr__,&local_80);
  FSlateFontInfo::~FSlateFontInfo(&local_68);
  return __return_storage_ptr__;
}

// ExplodeRunInfo @ 1430bf240

/* WARNING: Removing unreachable block (ram,0x0001430bf431) */

void __thiscall
FTextStyles::ExplodeRunInfo
          (FTextStyles *this,FRunInfo *param_1,TSharedPtr<FTextStyles::FFontFamily,1> *param_2,
          ushort *param_3,uchar *param_4,FLinearColor *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTVar5;
  longlong lVar6;
  FLinearColor *pFVar7;
  FLinearColor *pFVar8;
  undefined1 local_210;
  undefined1 local_20f;
  undefined1 local_20e;
  undefined1 local_20d;
  undefined1 local_20c [4];
  FString *local_208;
  undefined4 local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  FString *local_1d0;
  FTextStyles *local_1c8;
  FString *local_1c0;
  FString *local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  undefined4 local_188;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_180;
  FString *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_148;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_140;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_138;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_130;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_128;
  FString *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_f8;
  FString *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  FString *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FName local_38;
  TSharedPtr<FTextStyles::FFontFamily,1> local_30 [2];
  
  local_188 = 0;
  local_1d4 = (this->AvailableFontFamilies).ArrayNum;
  if ((local_1d4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AvailableFontFamilies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0xbb0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_180 = &param_1->MetaData;
  ::FString::FString(&local_78,L"FontFamily");
  local_1d0 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_180,&local_78);
  local_178 = local_1d0;
  ::FString::~FString(&local_78);
  if (local_1d0 != (FString *)0x0) {
    local_1ec = (local_1d0->Data).ArrayNum;
    if (local_1ec == 0) {
      local_1b0 = (FScriptContainerElement *)
                  `FString::operator*'::__l2::<lambda_1>::operator()(&local_210);
    }
    else {
      local_1b0 = (local_1d0->Data).AllocatorInstance.Data;
      local_170 = local_1b0;
      local_168 = local_1b0;
      local_160 = local_1b0;
    }
    local_158 = local_1b0;
    pFVar4 = ::FName::FName(&local_38,(wchar_t *)local_1b0);
    pTVar5 = FindFontFamily(this,local_30,*pFVar4);
    TSharedPtr<FTextStyles::FFontFamily,1>::operator=(param_2,pTVar5);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_30[0].SharedReferenceCount);
  }
  if (param_2->Object == (FFontFamily *)0x0) {
    local_200 = 1;
    local_1f0 = (uint)(0 < (this->AvailableFontFamilies).ArrayNum);
    local_1c8 = this;
    if (local_1f0 == 0) {
      local_150 = 0;
      local_14c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_148 = (TSharedPtr<FTextStyles::FFontFamily,1> *)
                (local_1c8->AvailableFontFamilies).AllocatorInstance.Data;
    local_140 = local_148;
    local_138 = local_148;
    local_130 = local_148;
    TSharedPtr<FTextStyles::FFontFamily,1>::operator=(param_2,local_148);
  }
  *param_3 = 0xb;
  local_128 = &param_1->MetaData;
  ::FString::FString(&local_68,L"FontSize");
  local_1c0 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_128,&local_68);
  local_120 = local_1c0;
  ::FString::~FString(&local_68);
  if (local_1c0 != (FString *)0x0) {
    local_1e8 = (local_1c0->Data).ArrayNum;
    if (local_1e8 == 0) {
      local_1a8 = (FScriptContainerElement *)
                  `FString::operator*'::__l2::<lambda_1>::operator()(&local_20f);
    }
    else {
      local_1a8 = (local_1c0->Data).AllocatorInstance.Data;
      local_118 = local_1a8;
      local_110 = local_1a8;
      local_108 = local_1a8;
    }
    local_100 = local_1a8;
    local_1e4 = _wtoi((wchar_t *)local_1a8);
    *param_3 = (ushort)local_1e4;
  }
  *param_4 = '\0';
  local_f8 = &param_1->MetaData;
  ::FString::FString(&local_58,L"FontStyle");
  local_208 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_f8,&local_58);
  local_f0 = local_208;
  ::FString::~FString(&local_58);
  if (local_208 != (FString *)0x0) {
    local_1e0 = (local_208->Data).ArrayNum;
    if (local_1e0 == 0) {
      local_1a0 = (FScriptContainerElement *)
                  `FString::operator*'::__l2::<lambda_1>::operator()(&local_20e);
    }
    else {
      local_1a0 = (local_208->Data).AllocatorInstance.Data;
      local_e8 = local_1a0;
      local_e0 = local_1a0;
      local_d8 = local_1a0;
    }
    local_d0 = local_1a0;
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_1a0,L"Bold");
    local_1fc = (uint)(iVar3 == 0);
    if (iVar3 == 0) {
      *param_4 = '\x01';
    }
    else {
      local_1dc = (local_208->Data).ArrayNum;
      if (local_1dc == 0) {
        local_198 = (FScriptContainerElement *)
                    `FString::operator*'::__l2::<lambda_1>::operator()(&local_20d);
      }
      else {
        local_198 = (local_208->Data).AllocatorInstance.Data;
        local_c8 = local_198;
        local_c0 = local_198;
        local_b8 = local_198;
      }
      local_b0 = local_198;
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_198,L"Italic");
      local_1f8 = (uint)(iVar3 == 0);
      if (iVar3 == 0) {
        *param_4 = '\x02';
      }
      else {
        local_1d8 = (local_208->Data).ArrayNum;
        if (local_1d8 == 0) {
          local_190 = (FScriptContainerElement *)
                      `FString::operator*'::__l2::<lambda_1>::operator()(local_20c);
        }
        else {
          local_190 = (local_208->Data).AllocatorInstance.Data;
          local_a8 = local_190;
          local_a0 = local_190;
          local_98 = local_190;
        }
        local_90 = local_190;
        iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_190,L"BoldItalic");
        local_1f4 = (uint)(iVar3 == 0);
        if (iVar3 == 0) {
          *param_4 = '\x03';
        }
      }
    }
  }
  pFVar7 = &FLinearColor::Black;
  pFVar8 = param_5;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar8->field0_0x0 = *(undefined1 *)&pFVar7->field0_0x0;
    pFVar7 = (FLinearColor *)((longlong)&pFVar7->field0_0x0 + 1);
    pFVar8 = (FLinearColor *)((longlong)&pFVar8->field0_0x0 + 1);
  }
  local_88 = &param_1->MetaData;
  ::FString::FString(&local_48,L"FontColor");
  local_1b8 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_88,&local_48);
  local_80 = local_1b8;
  ::FString::~FString(&local_48);
  if ((local_1b8 != (FString *)0x0) &&
     (bVar2 = FLinearColor::InitFromString(param_5,local_1b8), !bVar2)) {
    pFVar7 = &FLinearColor::Black;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined1 *)&param_5->field0_0x0 = *(undefined1 *)&pFVar7->field0_0x0;
      pFVar7 = (FLinearColor *)((longlong)&pFVar7->field0_0x0 + 1);
      param_5 = (FLinearColor *)((longlong)&param_5->field0_0x0 + 1);
    }
  }
  return;
}

// FindFontFamily @ 1430c4410

/* WARNING: Restarted to delay deadcode elimination for space: stack */

TSharedPtr<FTextStyles::FFontFamily,1> * __thiscall
FTextStyles::FindFontFamily
          (FTextStyles *this,TSharedPtr<FTextStyles::FFontFamily,1> *__return_storage_ptr__,
          FName param_1)

{
  bool bVar1;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_68;
  FName local_60;
  FName *local_58;
  FName local_50;
  FTextStyles *local_48;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_40;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_38;
  TSharedPtr<FTextStyles::FFontFamily,1> local_30;
  TSharedPtr<FTextStyles::FFontFamily,1> local_20 [2];
  
  local_58 = &local_60;
  local_60 = param_1;
  local_50 = param_1;
  local_48 = this;
  local_40 = TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FTextStyles::FindFontFamily_::__l2::<lambda_1>_>
                       (&this->AvailableFontFamilies,(<lambda_1>)param_1);
  bVar1 = local_40 == (TSharedPtr<FTextStyles::FFontFamily,1> *)0x0;
  if (bVar1) {
    local_68 = TSharedPtr<FTextStyles::FFontFamily,1>::TSharedPtr<FTextStyles::FFontFamily,1>
                         (&local_30,(FNullTag *)0x0);
  }
  else {
    local_68 = TSharedPtr<FTextStyles::FFontFamily,1>::TSharedPtr<FTextStyles::FFontFamily,1>
                         (local_20,local_40);
  }
  local_38 = local_68;
  TSharedPtr<FTextStyles::FFontFamily,1>::TSharedPtr<FTextStyles::FFontFamily,1>
            (__return_storage_ptr__,local_68);
  if (bVar1) {
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_30.SharedReferenceCount);
  }
  else {
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_20[0].SharedReferenceCount);
  }
  return __return_storage_ptr__;
}

// GetFontStyleString @ 1430c8e50

FString * __cdecl FTextStyles::GetFontStyleString(FString *__return_storage_ptr__,uchar param_1)

{
  ::FString::FString(__return_storage_ptr__);
  if (param_1 == '\0') {
    ::FString::operator=(__return_storage_ptr__,L"Regular");
  }
  else {
    if ((param_1 & 1) != 0) {
      ::FString::Append<wchar_t_const_>(__return_storage_ptr__,L"Bold");
    }
    if ((param_1 & 2) != 0) {
      ::FString::Append<wchar_t_const_>(__return_storage_ptr__,L"Italic");
    }
  }
  return __return_storage_ptr__;
}

