// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 14

// FSlatePasswordRun @ 1428459b0

FSlatePasswordRun * __thiscall
FSlatePasswordRun::FSlatePasswordRun
          (FSlatePasswordRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FTextBlockStyle *param_3)

{
  FSlateTextRun::FSlateTextRun((FSlateTextRun *)this,param_1,param_2,param_3);
  *(undefined ***)this = &___7FSlatePasswordRun__6B_;
  return this;
}

// FSlatePasswordRun @ 1428459e0

FSlatePasswordRun * __thiscall
FSlatePasswordRun::FSlatePasswordRun
          (FSlatePasswordRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FTextBlockStyle *param_3,FTextRange *param_4)

{
  FSlateTextRun::FSlateTextRun((FSlateTextRun *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &___7FSlatePasswordRun__6B_;
  return this;
}

// FSlatePasswordRun @ 142845a20

FSlatePasswordRun * __thiscall
FSlatePasswordRun::FSlatePasswordRun(FSlatePasswordRun *this,FSlatePasswordRun *param_1)

{
  longlong lVar1;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FSlateTextRun__6B_;
  ::FString::FString((FString *)&this->field_0x18,(FString *)&param_1->field_0x18);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x54 = 0x80;
  *(undefined4 *)&this->field_0x58 = 0xffffffff;
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->field_0x28,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->field_0x28);
  *(undefined8 *)&this->field_0x78 = *(undefined8 *)&param_1->field_0x78;
  lVar1 = *(longlong *)&param_1->field_0x80;
  *(longlong *)&this->field_0x80 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FTextBlockStyle::FTextBlockStyle
            ((FTextBlockStyle *)&this->field_0x90,(FTextBlockStyle *)&param_1->field_0x90);
  *(undefined8 *)&this->field_0x370 = *(undefined8 *)&param_1->field_0x370;
  *(undefined ***)this = &___7FSlatePasswordRun__6B_;
  return this;
}

// ~FSlatePasswordRun @ 142849cf0

void __thiscall FSlatePasswordRun::~FSlatePasswordRun(FSlatePasswordRun *this)

{
  *(undefined ***)this = &___7FSlatePasswordRun__6B_;
  FSlateTextRun::~FSlateTextRun((FSlateTextRun *)this);
  return;
}

// BuildPasswordString @ 142856d70

FString * __cdecl
FSlatePasswordRun::BuildPasswordString(FString *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(uint)param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (0 < param_1) {
    ::FString::Reserve(__return_storage_ptr__,param_1);
    do {
      ::FString::AppendChar(__return_storage_ptr__,L'•');
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return __return_storage_ptr__;
}

// Clone @ 142857d60

TSharedRef<IRun,1> * __thiscall
FSlatePasswordRun::Clone(FSlatePasswordRun *this,TSharedRef<IRun,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FSlatePasswordRun,1> *pTVar2;
  TSharedRef<FSlatePasswordRun,1> local_18;
  
  pTVar2 = Create(&local_18,(FRunInfo *)&this->field_0x18,
                  (TSharedRef<FString_const_,1> *)&this->field_0x78,
                  (FTextBlockStyle *)&this->field_0x90,(FTextRange *)&this->field_0x370);
  __return_storage_ptr__->Object = (IRun *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 1428653c0

TSharedRef<FSlatePasswordRun,1> * __cdecl
FSlatePasswordRun::Create
          (TSharedRef<FSlatePasswordRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FTextBlockStyle *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextRun *this;
  TSharedRef<FSlatePasswordRun,1> *pTVar3;
  TRawPtrProxy<FSlatePasswordRun> local_res8;
  
  this = ::operator_new(0x380);
  if (this == (FSlateTextRun *)0x0) {
    this = (FSlateTextRun *)0x0;
  }
  else {
    FSlateTextRun::FSlateTextRun(this,param_1,param_2,param_3);
    *(undefined ***)this = &___7FSlatePasswordRun__6B_;
    if (((*(longlong *)&this->field_0x8 != 0) && (*(longlong *)&this->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&this->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlatePasswordRun,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  local_res8.Object = (FSlatePasswordRun *)this;
  TSharedRef<FSlatePasswordRun,1>::TSharedRef<FSlatePasswordRun,1><FSlatePasswordRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 142865480

TSharedRef<FSlatePasswordRun,1> * __cdecl
FSlatePasswordRun::Create
          (TSharedRef<FSlatePasswordRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FTextBlockStyle *param_3,FTextRange *param_4)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextRun *this;
  TSharedRef<FSlatePasswordRun,1> *pTVar3;
  TRawPtrProxy<FSlatePasswordRun> local_res8;
  
  this = ::operator_new(0x380);
  if (this == (FSlateTextRun *)0x0) {
    this = (FSlateTextRun *)0x0;
  }
  else {
    FSlateTextRun::FSlateTextRun(this,param_1,param_2,param_3,param_4);
    *(undefined ***)this = &___7FSlatePasswordRun__6B_;
    if (((*(longlong *)&this->field_0x8 != 0) && (*(longlong *)&this->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&this->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlatePasswordRun,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  local_res8.Object = (FSlatePasswordRun *)this;
  TSharedRef<FSlatePasswordRun,1>::TSharedRef<FSlatePasswordRun,1><FSlatePasswordRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetKerning @ 142877090

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

schar __thiscall
FSlatePasswordRun::GetKerning
          (FSlatePasswordRun *this,int param_1,float param_2,FRunTextContext *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  schar sVar5;
  int iVar6;
  FSlateApplication *pFVar7;
  TSharedRef<FSlateFontMeasure,1> local_28 [2];
  
  if (-1 < param_1 + -1) {
    iVar1 = *(int *)(*(longlong *)&this->field_0x78 + 8);
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (param_1 != iVar6) {
      pFVar7 = FSlateApplication::Get();
      lVar2 = *(longlong *)&pFVar7->field_0x60;
      if (*(longlong *)(lVar2 + 8) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          sVar5 = (*pcVar3)();
          return sVar5;
        }
      }
      FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),local_28);
      sVar5 = FSlateFontMeasure::GetKerning
                        (local_28[0].Object,(FSlateFontInfo *)&this->field_0x98,param_2,L'•',
                         L'•');
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28[0].SharedReferenceCount.ReferenceController);
      return sVar5;
    }
  }
  return '\0';
}

// GetLocationAt @ 142877840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FSlatePasswordRun::GetLocationAt
          (FSlatePasswordRun *this,TVector2<double> *__return_storage_ptr__,
          TSharedRef<ILayoutBlock,1> *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *pFVar6;
  TVector2<double> *pTVar7;
  FDeprecateSlateVector2D FVar8;
  uint uVar9;
  ulonglong uVar10;
  float in_XMM3_Da;
  int local_res8;
  int local_resc;
  FString local_a8;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TSharedRef<FSlateFontMeasure,1> local_88;
  double local_78;
  double local_70;
  TObjectPtr<UObject_const_>_u_0 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  TReferenceControllerBase<1> *local_48;
  char local_40;
  
  (**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,&local_78);
  (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,&local_res8);
  (**(code **)((longlong)*param_1->Object + 0x20))(param_1->Object,local_58);
  if (local_40 == '\0') {
    local_resc = local_res8 + param_2;
  }
  else {
    local_res8 = local_res8 + param_2;
  }
  uVar9 = local_resc - local_res8;
  uVar10 = (ulonglong)uVar9;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if (0 < (int)uVar9) {
    ::FString::Reserve(&local_a8,uVar9);
    do {
      ::FString::AppendChar(&local_a8,L'•');
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  pFVar6 = FSlateApplication::Get();
  lVar3 = *(longlong *)&pFVar6->field_0x60;
  if (*(longlong *)(lVar3 + 8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar3 + 8),&local_88);
  local_98 = local_a8.Data.AllocatorInstance.Data;
  iStack_90 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iStack_90 = 0;
  }
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_68.DebugPtr = (UObject *)local_a8.Data.AllocatorInstance.Data;
  FVar8 = FSlateFontMeasure::Measure
                    (local_88.Object,(TStringView<wchar_t> *)&stack0x00000010,
                     (FSlateFontInfo *)&local_68.ObjectPtr,in_XMM3_Da);
  fVar1 = *(float *)FVar8;
  fVar2 = *(float *)((longlong)FVar8 + 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1 + local_78;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2 + local_70;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  return __return_storage_ptr__;
}

// GetPasswordChar @ 142878d50

wchar_t __cdecl FSlatePasswordRun::GetPasswordChar(void)

{
  return L'•';
}

// GetTextIndexAt @ 14287c1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlatePasswordRun::GetTextIndexAt
          (FSlatePasswordRun *this,TSharedRef<ILayoutBlock,1> *param_1,TVector2<double> *param_2,
          float param_3,ETextHitPoint *param_4)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlateApplication *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ETextHitPoint EVar10;
  int local_res10;
  int local_res14;
  FString local_a8;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TSharedRef<FSlateFontMeasure,1> local_68;
  TStringView<wchar_t> local_58;
  undefined1 local_48 [16];
  TReferenceControllerBase<1> *local_38;
  char local_30;
  
  (**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,&local_98);
  (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,&local_88);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if ((((dVar1 < (double)(float)local_98) || ((double)(float)(local_88 + local_98) <= dVar1)) ||
      (dVar1 = (param_2->field0_0x0)._s_0.Y, dVar1 < (double)(float)local_90)) ||
     ((double)(float)(local_80 + local_90) <= dVar1)) {
    return -1;
  }
  (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,&local_res10);
  (**(code **)((longlong)*param_1->Object + 0x20))(param_1->Object,local_48);
  uVar8 = local_res14 - local_res10;
  uVar9 = (ulonglong)uVar8;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  if (0 < (int)uVar8) {
    ::FString::Reserve(&local_a8,uVar8);
    do {
      ::FString::AppendChar(&local_a8,L'•');
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  pFVar6 = FSlateApplication::Get();
  lVar2 = *(longlong *)&pFVar6->field_0x60;
  if ((*(longlong *)(lVar2 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),&local_68);
  local_78 = local_a8.Data.AllocatorInstance.Data;
  iStack_70 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iStack_70 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iStack_70;
  local_58.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  iVar5 = FSlateFontMeasure::FindCharacterIndexAtOffset
                    (local_68.Object,&local_58,(FSlateFontInfo *)&this->field_0x98,
                     (int)((param_2->field0_0x0)._s_0.X - local_98),param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_30 == '\x01') {
    iVar7 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    iVar5 = iVar7 - iVar5;
  }
  if (param_4 != (ETextHitPoint *)0x0) {
    EVar10 = WithinText;
    if (iVar5 + local_res10 == local_res14) {
      EVar10 = RightGutter;
    }
    *param_4 = EVar10;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return iVar5 + local_res10;
}

// Measure @ 142884420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
FSlatePasswordRun::Measure
          (FSlatePasswordRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          float param_3,FRunTextContext *param_4)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  short sVar5;
  FSlateApplication *pFVar6;
  TVector2<double> *pTVar7;
  FDeprecateSlateVector2D FVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float in_XMM3_Da;
  undefined1 local_88 [8];
  FString local_80;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TSharedRef<FSlateFontMeasure,1> local_58;
  TObjectPtr<UObject_const_>_u_0 local_48;
  undefined8 uStack_40;
  
  fVar11 = (float)((uint)(param_3 * *(float *)&this->field_0x110) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_2 == *(int *)&this->field_0x374) {
    fVar12 = (float)((uint)(param_3 * *(float *)&this->field_0x10c) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  else {
    fVar12 = 0.0;
  }
  uVar9 = param_2 - param_1;
  uVar10 = (ulonglong)uVar9;
  if (uVar9 == 0) {
    sVar5 = (**(code **)(*(longlong *)this + 0x20))();
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)sVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)param_3 * (double)fVar12;
  }
  else {
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    if (0 < (int)uVar9) {
      ::FString::Reserve(&local_80,uVar9);
      do {
        ::FString::AppendChar(&local_80,L'•');
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    pFVar6 = FSlateApplication::Get();
    lVar2 = *(longlong *)&pFVar6->field_0x60;
    if (*(longlong *)(lVar2 + 8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector2<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),&local_58);
    local_68 = local_80.Data.AllocatorInstance.Data;
    iStack_60 = local_80.Data.ArrayNum + -1;
    if (local_80.Data.ArrayNum == 0) {
      iStack_60 = 0;
    }
    uStack_40 = CONCAT44(uStack_5c,iStack_60);
    local_48.DebugPtr = (UObject *)local_80.Data.AllocatorInstance.Data;
    FVar8 = FSlateFontMeasure::Measure
                      (local_58.Object,(TStringView<wchar_t> *)local_88,
                       (FSlateFontInfo *)&local_48.ObjectPtr,in_XMM3_Da);
    fVar1 = *(float *)((longlong)FVar8 + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar12 + *(float *)FVar8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar11 + fVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// OnPaint @ 14288a270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlatePasswordRun::OnPaint
          (FSlatePasswordRun *this,FPaintArgs *param_1,FTextArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  char cVar4;
  ILayoutBlock *pIVar5;
  FTextBlockStyle *pFVar6;
  TVector2<float>_u_0_s_0 TVar7;
  double dVar8;
  bool bVar9;
  FTextArgs *pFVar10;
  double *pdVar11;
  FLinearColor *this_00;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_1e8 [32];
  undefined8 local_190;
  FString local_178;
  TTransform2<float> local_168;
  FLinearColor_u_0 local_150;
  int local_140;
  int local_13c;
  FSlateWindowElementList *local_138;
  FTextArgs *local_130;
  TTransform2<float> local_128;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  TVector2<float>_u_0 local_e0;
  float local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  float local_c4 [2];
  float afStack_bc [2];
  TVector2<float>_u_0 local_b4;
  byte local_ac;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_138 = param_5;
  if ((*(float *)&this->field_0x120 <= 0.0) ||
     (*(float *)&this->field_0x110 * *(float *)&this->field_0x110 +
      *(float *)&this->field_0x10c * *(float *)&this->field_0x10c <= 0.0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  pIVar5 = param_2->Block->Object;
  local_130 = param_2;
  (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,local_f0);
  pIVar5 = param_2->Block->Object;
  (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,&local_140);
  fVar19 = *(float *)&this->field_0x110;
  fVar16 = param_3->Scale;
  fVar21 = __real_3f800000 / fVar16;
  fVar18 = fVar19 * fVar16;
  if (fVar19 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar17 = *(float *)&this->field_0x10c;
  if (fVar17 <= 0.0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = fVar16 * fVar17;
  }
  if (0.0 <= fVar19) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = (float)((uint)(fVar19 * fVar16) ^ __xmm_80000000800000008000000080000000);
  }
  if (0.0 <= fVar17) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = (float)((uint)(fVar16 * fVar17) ^ __xmm_80000000800000008000000080000000);
  }
  iVar15 = 0;
  uVar12 = local_13c - local_140;
  uVar13 = (ulonglong)uVar12;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  if (0 < (int)uVar12) {
    ::FString::Reserve(&local_178,uVar12);
    do {
      ::FString::AppendChar(&local_178,L'•');
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    iVar15 = local_178.Data.ArrayNum;
  }
  if (bVar9) {
    local_150._s_0.R =
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R * *(float *)&this->field_0x114;
    local_150._s_0.G =
         *(float *)&this->field_0x118 * (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    pFVar6 = param_2->DefaultStyle;
    local_150._s_0.B =
         *(float *)&this->field_0x11c * (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    iVar14 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar14 = 0;
    }
    local_150._s_0.A =
         *(float *)&this->field_0x120 * (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    pIVar5 = param_2->Block->Object;
    pdVar11 = (double *)(**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,local_110);
    dVar8 = (double)fVar21;
    pIVar5 = param_2->Block->Object;
    local_190._0_4_ = (undefined4)(((double)fVar20 + *pdVar11) * dVar8);
    local_190._4_4_ = (undefined4)(((double)fVar18 + pdVar11[1]) * dVar8);
    pdVar11 = (double *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,local_100);
    dVar1 = *pdVar11;
    dVar2 = pdVar11[1];
    TVar7 = (param_3->AbsolutePosition).field0_0x0._s_0;
    local_168.M.M[0][1] = TVar7.X;
    local_168.M.M[1][0] = TVar7.Y;
    local_168.Trans.field0_0x0 = local_190;
    fVar18 = param_3->Scale;
    fVar17 = (float)(undefined4)local_190 * fVar18 + local_168.M.M[0][1];
    fVar20 = (float)local_190._4_4_ * fVar18 + local_168.M.M[1][0];
    local_168.M.M[0][0] = (float)__xmm_3f80000000000000000000003f800000;
    local_168.M.M[0][1] = __xmm_3f80000000000000000000003f800000._4_4_;
    local_168.M.M[1][0] = (float)UNK_15076b188;
    local_168.M.M[1][1] = UNK_15076b188._4_4_;
    Concatenate<TTransform2<float>_>(&local_128,&local_168,&param_3->AccumulatedRenderTransform);
    local_e0._s_0.Y = fVar20;
    local_e0._s_0.X = fVar17;
    local_cc = CONCAT44((float)(dVar8 * dVar2),(float)(dVar8 * dVar1));
    local_d4 = 0;
    local_c4[0] = local_128.M.M[0][0];
    local_c4[1] = local_128.M.M[0][1];
    afStack_bc[0] = local_128.M.M[1][0];
    afStack_bc[1] = local_128.M.M[1][1];
    local_b4 = local_128.Trans.field0_0x0;
    param_6 = param_6 + 1;
    local_ac = param_3->bHasRenderTransform * '\x02' | local_ac & 0xfc;
    local_d8 = fVar18;
    FSlateDrawElement::MakeText
              (local_138,param_6,(FPaintGeometry *)&local_e0._s_0,&local_178,0,iVar14,&pFVar6->Font,
               !param_8 << 5,(FLinearColor *)&local_150._s_0);
    iVar15 = local_178.Data.ArrayNum;
  }
  this_00 = (FLinearColor *)&this->field_0xf8;
  cVar4 = this->field_0x108;
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      this_00 = FSlateColor::GetColorFromTable((FSlateColor *)this_00);
      iVar15 = local_178.Data.ArrayNum;
    }
    else if ((cVar4 == '\x02') || (cVar4 != '\x03')) {
      this_00 = &param_7->ForegroundColor;
    }
    else {
      this_00 = &param_7->SubduedForeground;
    }
  }
  pFVar10 = local_130;
  iVar14 = iVar15 + -1;
  pFVar6 = local_130->DefaultStyle;
  local_150._s_0.R = (this_00->field0_0x0)._s_0.R * (param_7->ColorAndOpacityTint).field0_0x0._s_0.R
  ;
  local_150._s_0.G = (this_00->field0_0x0)._s_0.G * (param_7->ColorAndOpacityTint).field0_0x0._s_0.G
  ;
  local_150._s_0.B = (this_00->field0_0x0)._s_0.B * (param_7->ColorAndOpacityTint).field0_0x0._s_0.B
  ;
  local_150._s_0.A = (this_00->field0_0x0)._s_0.A * (param_7->ColorAndOpacityTint).field0_0x0._s_0.A
  ;
  if (iVar15 == 0) {
    iVar14 = 0;
  }
  pIVar5 = local_130->Block->Object;
  pdVar11 = (double *)(**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,local_100);
  dVar8 = (double)fVar21;
  pIVar5 = pFVar10->Block->Object;
  fVar16 = (float)(((double)fVar16 + *pdVar11) * dVar8);
  fVar18 = (float)(((double)fVar19 + pdVar11[1]) * dVar8);
  pdVar11 = (double *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,local_110);
  dVar1 = *pdVar11;
  dVar2 = pdVar11[1];
  TVar7 = (param_3->AbsolutePosition).field0_0x0._s_0;
  local_168.M.M[0][1] = TVar7.X;
  local_168.M.M[1][0] = TVar7.Y;
  local_128.Trans.field0_0x0._s_0.Y = fVar18;
  local_128.Trans.field0_0x0._s_0.X = fVar16;
  fVar19 = param_3->Scale;
  fVar16 = fVar16 * fVar19 + local_168.M.M[0][1];
  fVar18 = fVar18 * fVar19 + local_168.M.M[1][0];
  local_128.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_128.M.M[0][1] = _UNK_15076b184;
  local_128.M.M[1][0] = _UNK_15076b188;
  local_128.M.M[1][1] = _UNK_15076b18c;
  Concatenate<TTransform2<float>_>(&local_168,&local_128,&param_3->AccumulatedRenderTransform);
  local_e0._s_0.Y = fVar18;
  local_e0._s_0.X = fVar16;
  local_c4 = (float  [2])CONCAT44(local_168.M.M[0][1],local_168.M.M[0][0]);
  afStack_bc = (float  [2])CONCAT44(local_168.M.M[1][1],local_168.M.M[1][0]);
  local_cc = CONCAT44((float)(dVar8 * dVar2),(float)(dVar8 * dVar1));
  local_ac = param_3->bHasRenderTransform * '\x02' | local_ac & 0xfc;
  local_d4 = 0;
  local_b4 = local_168.Trans.field0_0x0;
  local_d8 = fVar19;
  FSlateDrawElement::MakeText
            (local_138,param_6 + 1U,(FPaintGeometry *)&local_e0._s_0,&local_178,0,iVar14,
             &pFVar6->Font,!param_8 << 5,(FLinearColor *)&local_150._s_0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return param_6 + 1U;
}

