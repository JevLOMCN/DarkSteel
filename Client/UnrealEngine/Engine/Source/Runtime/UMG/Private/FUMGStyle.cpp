// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// Create @ 146a62e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FSlateStyleSet,1> * __cdecl
FUMGStyle::Create(TSharedRef<FSlateStyleSet,1> *__return_storage_ptr__)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  FSlateStyleSet *pFVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  FSlateBorderBrush *this;
  FString *pFVar6;
  FSlateBorderBrush *pFVar7;
  FName *pFVar8;
  FSlateImageBrush *pFVar9;
  FSlateImageBrush *pFVar10;
  FSlateImageBrush *pFVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  FName local_res8;
  FName local_res10;
  FMargin local_78;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58 [2];
  
  local_res8.ComparisonIndex.Value = 0;
  pFVar4 = ::operator_new(0x400);
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  if (pFVar4 != (FSlateStyleSet *)0x0) {
    ::FName::FName(&local_res8,"UMGStyle");
    local_res10 = (FName)FSlateStyleSet::FSlateStyleSet(pFVar4,&local_res8);
  }
  TSharedRef<FSlateStyleSet,1>::TSharedRef<FSlateStyleSet,1><FSlateStyleSet>
            (__return_storage_ptr__,(TRawPtrProxy<FSlateStyleSet> *)&local_res10);
  pFVar4 = __return_storage_ptr__->Object;
  pcVar1 = *(code **)(pFVar4->_padding_ + 0xc0);
  pTVar5 = &FPaths::EngineContentDir((FString *)&local_68._s_0)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_78,pTVar5,
             0x12 - (uint)(pTVar5->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_78,L"Editor/Slate/UMG",0x10);
  (*pcVar1)(pFVar4,&local_78);
  if ((void *)local_78._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if ((void *)local_68._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  this = ::operator_new(0xb0);
  if (this == (FSlateBorderBrush *)0x0) {
    pFVar7 = (FSlateBorderBrush *)0x0;
  }
  else {
    local_68._0_8_ = ___xmm_3f0000003f8000003f8000003f800000;
    local_68._8_8_ = _UNK_150925228;
    local_78._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
    local_78.Right = _UNK_15076b0c8;
    local_78.Bottom = _UNK_15076b0cc;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,local_58,L"NonMarchingAnts",L".png");
    pFVar7 = FSlateBorderBrush::FSlateBorderBrush
                       (this,pFVar6,&local_78,(FLinearColor *)&local_68._s_0,FullColor);
  }
  bVar14 = this != (FSlateBorderBrush *)0x0;
  uVar12 = (uint)bVar14;
  pFVar8 = ::FName::FName(&local_res8,"MarchingAnts");
  FSlateStyleSet::Set<FSlateBorderBrush>(pFVar4,*pFVar8,pFVar7);
  if ((bVar14) && (uVar12 = 0, (void *)local_58[0]._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58[0]._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  uVar3 = _UNK_15076b1f8;
  pvVar2 = ___xmm_3f8000003f8000003f8000003f800000;
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 2;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_58[0]._8_8_ = _UNK_15076b1f8;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Widget",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Widget");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if (((uVar12 & 2) != 0) && (uVar12 = uVar12 & 0xfffffffd, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    uVar12 = uVar12 | 4;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Checkbox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.CheckBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 4) != 0) && (uVar12 = uVar12 & 0xfffffffb, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 8;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Button",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Button");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 8) != 0) && (uVar12 = uVar12 & 0xfffffff7, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x10;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TextBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.EditableTextBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x10) != 0) &&
     (uVar12 = uVar12 & 0xffffffef, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x20;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"EditableTextBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.EditableText");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x20) != 0) &&
     (uVar12 = uVar12 & 0xffffffdf, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x40;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"HorizontalBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.HorizontalBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x40) != 0) &&
     (uVar12 = uVar12 & 0xffffffbf, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x80;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"VerticalBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.VerticalBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((char)uVar12 < '\0') && (uVar12 = uVar12 & 0xffffff7f, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x100;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Image",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Image");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 8 != 0) && (uVar12 = uVar12 & 0xfffffeff, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x200;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"CanvasPanel",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.CanvasPanel");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 9 != 0) && (uVar12 = uVar12 & 0xfffffdff, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x400;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Text",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.TextBlock");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 10 != 0) && (uVar12 = uVar12 & 0xfffffbff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x800;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Border",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Border");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xb != 0) && (uVar12 = uVar12 & 0xfffff7ff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x1000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Slider",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Slider");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xc != 0) && (uVar12 = uVar12 & 0xffffefff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x2000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Spacer",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Spacer");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xd != 0) && (uVar12 = uVar12 & 0xffffdfff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x4000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ExpandableArea",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ExpandableArea");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xe != 0) && (uVar12 = uVar12 & 0xffffbfff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x8000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Scrollbox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Scrollbox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xf != 0) && (uVar12 = uVar12 & 0xffff7fff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x10000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ProgressBar",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ProgressBar");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x10 != 0) && (uVar12 = uVar12 & 0xfffeffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x20000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"RichText",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.RichTextBlock");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x11 != 0) && (uVar12 = uVar12 & 0xfffdffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x40000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"SafeZone",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.SafeZone");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x12 != 0) && (uVar12 = uVar12 & 0xfffbffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    uVar12 = uVar12 | 0x80000;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"MenuAnchor",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.MenuAnchor");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x13 != 0) && (uVar12 = uVar12 & 0xfff7ffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x100000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"MenuAnchor",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.InvalidationBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x14 != 0) && (uVar12 = uVar12 & 0xffefffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x200000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"MenuAnchor",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.RetainerBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x15 != 0) && (uVar12 = uVar12 & 0xffdfffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x400000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ScrollBar",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ScrollBar");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x16 != 0) && (uVar12 = uVar12 & 0xffbfffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x800000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"UniformGridPanel",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.UniformGridPanel");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x17 != 0) && (uVar12 = uVar12 & 0xff7fffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x1000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"WidgetSwitcher",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.WidgetSwitcher");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x18 != 0) && (uVar12 = uVar12 & 0xfeffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x2000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"EditableTextBoxMultiline",L".svg"
                       );
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.MultiLineEditableText");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x19 != 0) && (uVar12 = uVar12 & 0xfdffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x4000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TextBoxMultiline",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.MultilineEditableTextBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1a != 0) && (uVar12 = uVar12 & 0xfbffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x8000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Viewport",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Viewport");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1b != 0) && (uVar12 = uVar12 & 0xf7ffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    uVar12 = uVar12 | 0x10000000;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ComboBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ComboBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1c != 0) && (uVar12 = uVar12 & 0xefffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x20000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ComboBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ComboBoxKey");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1d != 0) && (uVar12 = uVar12 & 0xdfffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x40000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ComboBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ComboBoxString");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1e != 0) && (uVar12 = uVar12 & 0xbfffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 == (FSlateImageBrush *)0x0) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    uVar12 = uVar12 | 0x80000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ListView",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ListView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((int)uVar12 < 0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  bVar14 = pFVar9 == (FSlateImageBrush *)0x0;
  if (bVar14) {
    pFVar9 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TileView",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar11 = (FSlateImageBrush *)0x0;
  bVar14 = !bVar14;
  uVar12 = (uint)bVar14;
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.TileView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((bVar14) && (uVar12 = 0, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 2;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TreeView",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.TreeView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 2) != 0) && (uVar12 = uVar12 & 0xfffffffd, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 4;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Overlay",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Overlay");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 4) != 0) && (uVar12 = uVar12 & 0xfffffffb, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 8;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Throbber",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Throbber");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 8) != 0) && (uVar12 = uVar12 & 0xfffffff7, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x10;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"CircularThrobber",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.CircularThrobber");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x10) != 0) &&
     (uVar12 = uVar12 & 0xffffffef, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x20;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"NativeWidgetHost",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.NativeWidgetHost");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x20) != 0) &&
     (uVar12 = uVar12 & 0xffffffdf, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x40;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ScaleBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.ScaleBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x40) != 0) &&
     (uVar12 = uVar12 & 0xffffffbf, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x80;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Sizebox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.Sizebox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((char)uVar12 < '\0') && (uVar12 = uVar12 & 0xffffff7f, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x100;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"StackBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.StackBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 8 != 0) && (uVar12 = uVar12 & 0xfffffeff, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x200;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"SpinBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.SpinBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 9 != 0) && (uVar12 = uVar12 & 0xfffffdff, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x400;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"GridPanel",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.GridPanel");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 10 != 0) && (uVar12 = uVar12 & 0xfffffbff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x800;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"WrapBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.WrapBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xb != 0) && (uVar12 = uVar12 & 0xfffff7ff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x1000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"NamedSlot",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.NamedSlot");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xc != 0) && (uVar12 = uVar12 & 0xffffefff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x2000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"UserWidget",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.UserWidget");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0xd != 0) && (uVar12 = uVar12 & 0xffffdfff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x4000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"DetailsView",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.DetailsView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xe != 0) && (uVar12 = uVar12 & 0xffffbfff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x8000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"SinglePropertyView",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassIcon.SinglePropertyView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xf != 0) && (uVar12 = uVar12 & 0xffff7fff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x10000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Animations_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Animations.TabIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x10 != 0) && (uVar12 = uVar12 & 0xfffeffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x20000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Designer_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Designer.TabIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x11 != 0) && (uVar12 = uVar12 & 0xfffdffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x40000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Palette_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Palette.TabIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x12 != 0) && (uVar12 = uVar12 & 0xfffbffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x80000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon16x16.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon16x16.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Timeline_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Sequencer.TabIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x13 != 0) && (uVar12 = uVar12 & 0xfff7ffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x100000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon40x40.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon40x40.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Animations_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Animations.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x14 != 0) && (uVar12 = uVar12 & 0xffefffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x200000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon20x20.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon20x20.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Animations_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Animations.Icon.Small");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x15 != 0) && (uVar12 = uVar12 & 0xffdfffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x400000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon40x40.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon40x40.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Designer_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Designer.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x16 != 0) && (uVar12 = uVar12 & 0xffbfffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x800000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon20x20.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon20x20.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Designer_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Designer.Icon.Small");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x17 != 0) && (uVar12 = uVar12 & 0xff7fffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x1000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon40x40.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon40x40.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Palette_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Palette.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x18 != 0) && (uVar12 = uVar12 & 0xfeffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x2000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon20x20.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon20x20.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Palette_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Palette.Icon.Small");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x19 != 0) && (uVar12 = uVar12 & 0xfdffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x4000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon40x40.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon40x40.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Timeline_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Timeline.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x1a != 0) && (uVar12 = uVar12 & 0xfbffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x8000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon20x20.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon20x20.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Timeline_40x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
                        (FLinearColor *)&local_58[0]._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"Timeline.Icon.Small");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar4,*pFVar8,pFVar9);
  if ((uVar12 >> 0x1b != 0) && (uVar12 = uVar12 & 0xf7ffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x10000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Border_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Border");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1c != 0) && (uVar12 = uVar12 & 0xefffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x20000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Button_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Button");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1d != 0) && (uVar12 = uVar12 & 0xdfffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x40000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"CanvasPanel_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.CanvasPanel");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1e != 0) && (uVar12 = uVar12 & 0xbfffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x80000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Checkmark_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.CheckBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((int)uVar12 < 0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  bVar14 = pFVar10 != (FSlateImageBrush *)0x0;
  pFVar9 = pFVar11;
  if (bVar14) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"CircularThrobber_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  uVar12 = (uint)bVar14;
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.CircularThrobber");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((bVar14) && (uVar12 = 0, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 2;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Viewport_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Viewport");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 2) != 0) && (uVar12 = uVar12 & 0xfffffffd, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 4;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ComboBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.ComboBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 4) != 0) && (uVar12 = uVar12 & 0xfffffffb, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 8;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ComboBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.ComboBoxKey");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 8) != 0) && (uVar12 = uVar12 & 0xfffffff7, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x10;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ComboBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.ComboBoxString");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x10) != 0) &&
     (uVar12 = uVar12 & 0xffffffef, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x20;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"EditableTextBoxMultiline_64",
                        L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.MultilineEditableText");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x20) != 0) &&
     (uVar12 = uVar12 & 0xffffffdf, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x40;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"EditableTextBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.EditableText");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((uVar12 & 0x40) != 0) &&
     (uVar12 = uVar12 & 0xffffffbf, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x80;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ExpandableArea_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.ExpandableArea");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((char)uVar12 < '\0') && (uVar12 = uVar12 & 0xffffff7f, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x100;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Spacer_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Spacer");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 8 != 0) && (uVar12 = uVar12 & 0xfffffeff, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x200;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"GridPanel_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.GridPanel");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 9 != 0) && (uVar12 = uVar12 & 0xfffffdff, (void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x400;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"HorizontalBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.HorizontalBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 10 != 0) && (uVar12 = uVar12 & 0xfffffbff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x800;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Image_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Image");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xb != 0) && (uVar12 = uVar12 & 0xfffff7ff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x1000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"List_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.List");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xc != 0) && (uVar12 = uVar12 & 0xffffefff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x2000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"List_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.ListView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xd != 0) && (uVar12 = uVar12 & 0xffffdfff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x4000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"MenuAnchor_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.InvalidationBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xe != 0) && (uVar12 = uVar12 & 0xffffbfff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x8000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"MenuAnchor_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.RetainerBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0xf != 0) && (uVar12 = uVar12 & 0xffff7fff, (void *)local_68._0_8_ != (void *)0x0))
  {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x10000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"MenuAnchor_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.MenuAnchor");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x10 != 0) && (uVar12 = uVar12 & 0xfffeffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x20000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"NamedSlot_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.NamedSlot");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x11 != 0) && (uVar12 = uVar12 & 0xfffdffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x40000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Overlay_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Overlay");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x12 != 0) && (uVar12 = uVar12 & 0xfffbffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x80000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ProgressBar_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.ProgressBar");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x13 != 0) && (uVar12 = uVar12 & 0xfff7ffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x100000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"RichText_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.RichTextBlock");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x14 != 0) && (uVar12 = uVar12 & 0xffefffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x200000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"SafeZone_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.SafeZone");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x15 != 0) && (uVar12 = uVar12 & 0xffdfffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x400000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"NativeHostWidget_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.NativeWidgetHost");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x16 != 0) && (uVar12 = uVar12 & 0xffbfffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x800000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Scalebox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Scalebox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x17 != 0) && (uVar12 = uVar12 & 0xff7fffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x1000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Scrollbox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Scrollbox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x18 != 0) && (uVar12 = uVar12 & 0xfeffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x2000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Sizebox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Sizebox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x19 != 0) && (uVar12 = uVar12 & 0xfdffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x4000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Slider_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Slider");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1a != 0) && (uVar12 = uVar12 & 0xfbffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x8000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"SpinBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.SpinBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1b != 0) && (uVar12 = uVar12 & 0xf7ffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x10000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"StackBox",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.StackBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1c != 0) && (uVar12 = uVar12 & 0xefffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x20000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TextBoxMultiline_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.MultilineEditableTextBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1d != 0) && (uVar12 = uVar12 & 0xdfffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x40000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TextBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.EditableTextBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((uVar12 >> 0x1e != 0) && (uVar12 = uVar12 & 0xbfffffff, (void *)local_68._0_8_ != (void *)0x0)
     ) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    uVar12 = uVar12 | 0x80000000;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Text_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.TextBlock");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if (((int)uVar12 < 0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"Throbber_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.Throbber");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TileView_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.TileView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"TreeView_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.TreeView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"ScrollBar_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.ScrollBar");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"UniformGridPanel_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.UniformGridPanel");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"VerticalBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.VerticalBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"WidgetSwitcher_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.WidgetSwitcher");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  cVar13 = '\0';
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    cVar13 = -0x80;
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"WrapBox_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.WrapBox");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((cVar13 < '\0') && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar10 = ::operator_new(0xb0);
  pFVar9 = pFVar11;
  if (pFVar10 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"DetailsView_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar10,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar10 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar10;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.DetailsView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar9);
  if ((pFVar10 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar4 = __return_storage_ptr__->Object;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = (uint)(float)Icon64x64.field0_0x0._s_0.X;
    local_res8.Number = (uint)(float)Icon64x64.field0_0x0._s_0.Y;
    local_58[0]._0_8_ = pvVar2;
    local_58[0]._8_8_ = uVar3;
    pFVar6 = (FString *)
             (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe8))
                       (__return_storage_ptr__->Object,&local_68,L"SinglePropertyView_64",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar9,pFVar6,(FDeprecateVector2DParameter *)&local_res8,
               (FLinearColor *)&local_58[0]._s_0,NoTile,Vector);
    *(undefined ***)pFVar9 = &___7FSlateVectorImageBrush__6B_;
    pFVar11 = pFVar9;
  }
  pFVar8 = ::FName::FName(&local_res10,"ClassThumbnail.SinglePropertyView");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar4,*pFVar8,(FSlateVectorImageBrush *)pFVar11);
  if ((pFVar9 != (FSlateImageBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// Get @ 146a72780

ISlateStyle * __cdecl FUMGStyle::Get(void)

{
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  
  if ((UMGStyleInstance.Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISlateStyle *)(*pcVar1)();
    return pIVar3;
  }
  return (ISlateStyle *)UMGStyleInstance.Object;
}

// GetStyleSetName @ 146a79540

FName __cdecl FUMGStyle::GetStyleSetName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"UMGStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = StyleSetName;
  return in_RCX;
}

// Initialize @ 146a7a200

void __cdecl FUMGStyle::Initialize(void)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FSlateStyleSet,1> *pTVar3;
  FSharedReferencer<1> local_20;
  TSharedRef<FSlateStyleSet,1> local_18;
  
  if (UMGStyleInstance.Object != (FSlateStyleSet *)0x0) {
    return;
  }
  pTVar3 = Create(&local_18);
  local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  UMGStyleInstance.Object = pTVar3->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&UMGStyleInstance.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (UMGStyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)UMGStyleInstance.Object);
  return;
}

// ReloadTextures @ 146a8ed10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FUMGStyle::ReloadTextures(void)

{
  FSlateApplication *pFVar1;
  
  pFVar1 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000146a8ed24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&pFVar1->field_0x60 + 0xe0))();
  return;
}

// Shutdown @ 146a95d80

void __cdecl FUMGStyle::Shutdown(void)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_10 [2];
  
  if (UMGStyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)UMGStyleInstance.Object);
  if ((UMGStyleInstance.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0) ||
     ((UMGStyleInstance.SharedReferenceCount.ReferenceController)->SharedReferenceCount !=
      (atomic<int>)0x1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6057265735590215658>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UMGStyle.cpp"
                       ,0x16,"UMGStyleInstance.IsUnique()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UMGStyleInstance.Object = (FSlateStyleSet *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&UMGStyleInstance.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

