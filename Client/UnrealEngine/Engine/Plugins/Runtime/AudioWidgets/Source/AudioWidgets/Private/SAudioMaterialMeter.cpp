// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 9

// ~SAudioMaterialMeter @ 14d8bfb80

void __thiscall SAudioMaterialMeter::~SAudioMaterialMeter(SAudioMaterialMeter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterChannelInfoAttribute).Getter)
  ;
  pvVar1 = *(void **)&(this->MeterChannelInfoAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterChannelInfoAttribute).Getter);
  pFVar2 = (this->MeterChannelInfoAttribute).Value.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DynamicMaterials).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ApplyNewMaterial @ 14d8da6f0

TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
SAudioMaterialMeter::ApplyNewMaterial
          (SAudioMaterialMeter *this,
          TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FAudioMaterialMeterStyle *pFVar4;
  code *pcVar5;
  FWeakObjectPtr *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  UObject *pUVar12;
  TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  UObject *local_res8;
  TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *local_res10;
  FWeakObjectPtr local_48 [2];
  
  local_res10 = __return_storage_ptr__;
  pTVar11 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
                      (&this->MeterChannelInfoAttribute);
  pTVar13 = &this->DynamicMaterials;
  iVar10 = (this->DynamicMaterials).ArrayNum;
  piVar1 = &(this->DynamicMaterials).ArrayNum;
  uVar3 = pTVar11->ArrayNum;
  uVar15 = (ulonglong)uVar3;
  if (iVar10 < (int)uVar3) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar3 - iVar10,&pTVar13->AllocatorInstance,piVar1,
                       &(this->DynamicMaterials).ArrayMax);
    memset((pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 8,0,
           (longlong)(int)(uVar3 - iVar10) << 3);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar15);
    }
    if ((int)uVar3 < iVar10) {
      uVar14 = iVar10 - uVar3;
      if (((int)(uVar14 | uVar3) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar5)();
        return pTVar13;
      }
      if (uVar14 != 0) {
        pFVar7 = (pTVar13->AllocatorInstance).Data + (longlong)(int)uVar3 * 8;
        iVar10 = (*piVar1 - uVar14) - uVar3;
        if (iVar10 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar14 * 8,(longlong)iVar10 << 3);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar13->AllocatorInstance,*piVar1,&(this->DynamicMaterials).ArrayMax);
      }
    }
  }
  piVar2 = &(this->DynamicMaterials).ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar13->AllocatorInstance,0,piVar2);
  }
  if ((this->Style != (FAudioMaterialMeterStyle *)0x0) && (0 < (int)uVar3)) {
    do {
      pFVar4 = this->Style;
      pcVar5 = *(code **)(pFVar4->_padding_ + 0x18);
      pUVar12 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      pUVar12 = (UObject *)(*pcVar5)(pFVar4,pUVar12);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      local_48[0].ObjectIndex = 0;
      local_48[0].ObjectSerialNumber = 0;
      local_res8 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      FWeakObjectPtr::operator=(local_48,(FObjectPtr)&local_res8);
      pFVar6 = (FWeakObjectPtr *)(pTVar13->AllocatorInstance).Data;
      if (((pFVar6 <= local_48) && (local_48 < pFVar6 + *piVar2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar5)();
        return pTVar13;
      }
      iVar10 = *piVar1;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar13->AllocatorInstance,piVar2);
      }
      *piVar1 = iVar10 + 1;
      *(FWeakObjectPtr *)((pTVar13->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_48[0];
      uVar15 = uVar15 - 1;
      __return_storage_ptr__ = local_res10;
    } while (uVar15 != 0);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = *piVar1;
  pFVar7 = (pTVar13->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar10;
  if (iVar10 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar10,0,&__return_storage_ptr__->AllocatorInstance,iVar10,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar7,(longlong)iVar10 << 3);
  }
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 14d8e5bb0

TVector2<double> * __thiscall
SAudioMaterialMeter::ComputeDesiredSize
          (SAudioMaterialMeter *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *_Src;
  FAudioMaterialMeterStyle *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  float fVar7;
  ForAnyElementType local_38;
  int local_30;
  int local_2c [9];
  
  if (this->Style == (FAudioMaterialMeterStyle *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)DefaultMeterDesiredSize;
    return __return_storage_ptr__;
  }
  pTVar5 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
                     (&this->MeterChannelInfoAttribute);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = pTVar5->ArrayNum;
  lVar6 = (longlong)local_30;
  _Src = (pTVar5->AllocatorInstance).Data;
  if (local_30 == 0) {
    local_2c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_30,0,&local_38,local_30,local_2c);
    memcpy(local_38.Data,_Src,lVar6 * 0xc);
  }
  pFVar1 = this->Style;
  iVar4 = 1;
  if (1 < local_30) {
    iVar4 = local_30;
  }
  dVar3 = (double)*(float *)((longlong)&pFVar1->_padding_ + 4) +
          (pFVar1->MeterPadding).field0_0x0._s_0.Y + (pFVar1->MeterPadding).field0_0x0._s_0.Y;
  dVar2 = ((double)*(float *)&pFVar1->_padding_ + (pFVar1->MeterPadding).field0_0x0._s_0.X) *
          (double)iVar4 + (pFVar1->MeterPadding).field0_0x0._s_0.X;
  if (pFVar1->bShowScale != false) {
    fVar7 = GetScaleWidth(this);
    dVar2 = dVar2 + (double)fVar7;
  }
  if (this->Orientation == Orient_Horizontal) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// Construct @ 14d8ea6c0

void __thiscall SAudioMaterialMeter::Construct(SAudioMaterialMeter *this,FArguments *param_1)

{
  TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_18;
  
  (this->Owner).WeakPtr = (param_1->_Owner).WeakPtr;
  this->Orientation = param_1->_Orientation;
  this->Style = param_1->_AudioMaterialMeterStyle;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MeterChannelInfoAttribute).Value,&(param_1->_MeterChannelInfo).Value);
  (this->MeterChannelInfoAttribute).bIsSet = (param_1->_MeterChannelInfo).bIsSet;
  TDelegate<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
  ::operator=(&(this->MeterChannelInfoAttribute).Getter,&(param_1->_MeterChannelInfo).Getter);
  ApplyNewMaterial(this,&local_18);
  TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
  ~TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
            (&local_18);
  return;
}

// GetMeterChannelInfo @ 14d92fa90

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
SAudioMaterialMeter::GetMeterChannelInfo
          (SAudioMaterialMeter *this,
          TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
                     (&this->MeterChannelInfoAttribute);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
  return __return_storage_ptr__;
}

// GetScaleWidth @ 14d9348f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float __thiscall SAudioMaterialMeter::GetScaleWidth(SAudioMaterialMeter *this)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *pFVar6;
  FDeprecateSlateVector2D FVar7;
  float fVar8;
  float in_XMM3_Da;
  float fVar9;
  FString local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TSharedRef<FSlateFontMeasure,1> local_48;
  TObjectPtr<UObject_const_>_u_0 local_38;
  undefined8 uStack_30;
  
  pFVar6 = FSlateApplication::Get();
  lVar3 = *(longlong *)&pFVar6->field_0x60;
  if (*(longlong *)(lVar3 + 8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar3 + 8),&local_48);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_68,-0x3c);
  local_58 = local_68.Data.AllocatorInstance.Data;
  iStack_50 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iStack_50 = 0;
  }
  uStack_30 = CONCAT44(uStack_4c,iStack_50);
  local_38.DebugPtr = (UObject *)local_68.Data.AllocatorInstance.Data;
  FVar7 = FSlateFontMeasure::Measure
                    (local_48.Object,(TStringView<wchar_t> *)&stack0x00000008,
                     (FSlateFontInfo *)&local_38.ObjectPtr,in_XMM3_Da);
  fVar8 = *(float *)FVar7;
  fVar9 = *(float *)((longlong)FVar7 + 4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  fVar1 = this->Style->ScaleHashWidth;
  fVar2 = this->Style->ScaleHashOffset;
  if (this->Orientation != Orient_Horizontal) {
    fVar9 = fVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return fVar9 + fVar1 + fVar2;
}

// OnPaint @ 14d953190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SAudioMaterialMeter::OnPaint
          (SAudioMaterialMeter *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  FAudioMaterialMeterStyle *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FCompositeFont *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  FWeakObjectPtr FVar13;
  TVector2<float>_u_0 TVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  FName FVar19;
  float afVar20 [2];
  float fVar21;
  FSlateFontMeasure *this_00;
  bool bVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar26;
  UMaterialInstanceDynamic *pUVar27;
  FName *pFVar28;
  UObject *pUVar29;
  FGeometry *pFVar30;
  FSlateApplication *pFVar31;
  FDeprecateSlateVector2D FVar32;
  FString *pFVar33;
  int iVar34;
  ulonglong uVar35;
  byte bVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  ESlateDrawEffect EVar40;
  uint uVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  float fVar46;
  double in_XMM3_Qa;
  float fVar47;
  float fVar48;
  float fVar49;
  FName FVar50;
  float afVar51 [2];
  undefined1 auStackY_828 [32];
  float local_7e8;
  float fStack_7e4;
  FWeakObjectPtr local_7e0;
  undefined8 local_7d8;
  float local_7d0;
  undefined8 local_7c8;
  float local_7c0;
  undefined8 local_7b8;
  float local_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float local_7a0;
  float fStack_79c;
  TVector2<float>_u_0 local_798;
  float local_790;
  float fStack_78c;
  ForAnyElementType local_788;
  float local_780;
  int local_77c;
  FSlateWindowElementList *local_778;
  UObject *local_770;
  FString local_768;
  FString local_758;
  FString local_748;
  undefined8 local_738;
  undefined4 local_730;
  undefined4 uStack_72c;
  undefined8 local_728;
  undefined4 local_720;
  undefined4 uStack_71c;
  FName local_718;
  FName local_710;
  TSharedRef<FSlateFontMeasure,1> local_708;
  FSlateLayoutTransform local_6f8;
  undefined8 local_6e8;
  undefined8 local_6dc;
  undefined8 local_6d0;
  undefined8 local_6c4;
  FLinearColor_u_0 local_6b8;
  FScriptContainerElement *local_6a8;
  int iStack_6a0;
  undefined4 uStack_69c;
  wchar_t *local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  FScriptContainerElement *local_688;
  int iStack_680;
  undefined4 uStack_67c;
  FText local_678;
  FScriptContainerElement *local_668;
  int iStack_660;
  undefined4 uStack_65c;
  TTransform2<float> local_658;
  TTransform2<float> local_640;
  TTransform2<float> local_628;
  FName local_610;
  FName local_608;
  FName local_600;
  FName local_5f8;
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [24];
  FLinearColor_u_0 local_5c8;
  FLinearColor_u_0 local_5b8;
  FLinearColor_u_0 local_5a8;
  FLinearColor_u_0 local_598;
  TObjectPtr<UObject_const_>_u_0 local_588;
  undefined8 uStack_580;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [32];
  FName local_538;
  FName local_530;
  TTransform2<float> local_528;
  TTransform2<float> local_510;
  TTransform2<float> local_4f8;
  TTransform2<float> local_4e0;
  undefined8 local_4b8;
  undefined8 local_4a0;
  TTransform2<float> local_498;
  undefined8 local_470;
  undefined8 local_458;
  TTransform2<float> local_450;
  TTransform2<float> local_438;
  TTransform2<float> local_420;
  FSlateBrush local_408;
  FSlateBrush local_358;
  TVector2<float>_u_0 local_2a8;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  undefined1 auStack_290 [8];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  FGeometry local_270;
  FGeometry local_238;
  TVector2<float>_u_0 local_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  TVector2<float>_u_0 local_1c8;
  float local_1c0;
  undefined8 local_1bc;
  FWeakObjectPtr local_1b4;
  float local_1ac [2];
  float afStack_1a4 [2];
  TVector2<float>_u_0 local_19c;
  byte local_194;
  TVector2<float>_u_0 local_190;
  float local_188;
  undefined8 local_184;
  TVector2<float>_u_0 local_17c;
  float local_174 [2];
  float afStack_16c [2];
  TVector2<float>_u_0 local_164;
  byte local_15c;
  TVector2<float>_u_0 local_158;
  float local_150;
  undefined8 local_14c;
  TVector2<float>_u_0 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  byte local_124;
  FGeometry local_120;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_828;
  pFVar1 = this->Style;
  local_778 = param_4;
  if ((pFVar1 != (FAudioMaterialMeterStyle *)0x0) && ((this->DynamicMaterials).ArrayNum != 0)) {
    local_7e8 = SUB84(param_2->Size,0);
    fStack_7e4 = SUB84(param_2->Size,4);
    fVar48 = local_7e8;
    fVar49 = fStack_7e4;
    if (this->Orientation == Orient_Vertical) {
      fVar48 = fStack_7e4;
      fVar49 = local_7e8;
    }
    local_2a8._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
    uVar9 = *(undefined8 *)&(param_2->AbsolutePosition).field0_0x0._s_0.Y;
    auStack_290 = *(undefined1 (*) [8])((longlong)&(param_2->Position).field0_0x0 + 4);
    fStack_2a0 = (float)*(undefined8 *)&param_2->Scale;
    fStack_29c = (float)((ulonglong)*(undefined8 *)&param_2->Scale >> 0x20);
    local_288 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
    uStack_280 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
    fStack_298 = (float)uVar9;
    uStack_294 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_278 = *(undefined8 *)
                 ((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    local_7c0 = 0.0;
    local_7c8 = (TVector2<float>_u_0)param_2;
    if ((pFVar1->bShowScale != false) && (pFVar1->bScaleSide != false)) {
      local_7c0 = GetScaleWidth(this);
    }
    fVar46 = local_7c0;
    pTVar26 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
                        (&this->MeterChannelInfoAttribute);
    local_788.Data = (FScriptContainerElement *)0x0;
    local_7d0 = (float)pTVar26->ArrayNum;
    lVar38 = (longlong)(int)local_7d0;
    pFVar2 = (pTVar26->AllocatorInstance).Data;
    local_780 = local_7d0;
    if (local_7d0 == 0.0) {
      local_77c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(int)local_7d0,0,&local_788,(int)local_7d0,&local_77c);
      memcpy(local_788.Data,pFVar2,lVar38 * 0xc);
    }
    afVar51 = _UNK_15076b188;
    FVar50 = ___xmm_3f80000000000000000000003f800000;
    uVar9 = __xmm_80000000000000008000000000000000;
    uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar16 = __real_3e45798ee2308c3a;
    dVar15 = __real_3ff0000000000000;
    fVar43 = SUB84(in_XMM3_Qa,0);
    uVar35 = 0;
    lVar38 = (longlong)(int)local_780;
    local_6b8._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
    local_6b8._8_8_ = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
    local_7d0 = local_780;
    if (0 < (int)local_780) {
      local_7b8 = (FDeprecateSlateVector2D)0x0;
      uVar39 = uVar35;
      do {
        uVar37 = (uint)uVar35;
        uVar41 = ~uVar37 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar37 < (this->DynamicMaterials).ArrayNum) {
          uVar23 = uVar41;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar4 = (code *)swi(3);
          iVar24 = (*pcVar4)();
          return iVar24;
        }
        local_7e0 = *(FWeakObjectPtr *)
                     ((this->DynamicMaterials).AllocatorInstance.Data + uVar39 * 8);
        bVar22 = FWeakObjectPtr::IsValid(&local_7e0);
        if (bVar22) {
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          uVar3 = *(undefined8 *)&(this->Style->MeterFillMinColor).field0_0x0;
          uVar10 = *(undefined8 *)((longlong)&(this->Style->MeterFillMinColor).field0_0x0 + 8);
          pFVar28 = ::FName::FName(&local_710,"A (V3)");
          local_5c8._0_8_ = uVar3;
          local_5c8._8_8_ = uVar10;
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (pUVar27,*pFVar28,(FLinearColor *)&local_5c8._s_0);
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          uVar3 = *(undefined8 *)&(this->Style->MeterFillMidColor).field0_0x0;
          uVar10 = *(undefined8 *)((longlong)&(this->Style->MeterFillMidColor).field0_0x0 + 8);
          pFVar28 = ::FName::FName(&local_718,"B (V3)");
          local_5b8._0_8_ = uVar3;
          local_5b8._8_8_ = uVar10;
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (pUVar27,*pFVar28,(FLinearColor *)&local_5b8._s_0);
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          uVar3 = *(undefined8 *)&(this->Style->MeterFillMaxColor).field0_0x0;
          uVar10 = *(undefined8 *)((longlong)&(this->Style->MeterFillMaxColor).field0_0x0 + 8);
          pFVar28 = ::FName::FName(&local_5f8,"C (V3)");
          local_5a8._0_8_ = uVar3;
          local_5a8._8_8_ = uVar10;
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (pUVar27,*pFVar28,(FLinearColor *)&local_5a8._s_0);
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          pFVar11 = *(FCompositeFont **)&(this->Style->MeterFillBackgroundColor).field0_0x0;
          pTVar12 = *(TReferenceControllerBase<1> **)
                     ((longlong)&(this->Style->MeterFillBackgroundColor).field0_0x0 + 8);
          pFVar28 = ::FName::FName(&local_538,"OffColor");
          local_558._16_8_ = pFVar11;
          local_558._24_8_ = pTVar12;
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (pUVar27,*pFVar28,(FLinearColor *)(local_558 + 0x10));
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          uVar3 = *(undefined8 *)&(this->Style->MeterFillBackgroundColor).field0_0x0;
          uVar10 = *(undefined8 *)
                    ((longlong)&(this->Style->MeterFillBackgroundColor).field0_0x0 + 8);
          pFVar28 = ::FName::FName(&local_530,"DotsOffColor");
          local_598._0_8_ = uVar3;
          local_598._8_8_ = uVar10;
          UMaterialInstanceDynamic::SetVectorParameterValue
                    (pUVar27,*pFVar28,(FLinearColor *)&local_598._s_0);
          uVar23 = 0;
          if ((int)uVar37 < (int)local_780) {
            uVar23 = uVar41;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar4 = (code *)swi(3);
            iVar24 = (*pcVar4)();
            return iVar24;
          }
          dVar45 = (this->Style->ValueRangeDb).field0_0x0._s_0.Y;
          in_XMM3_Qa = (this->Style->ValueRangeDb).field0_0x0._s_0.X;
          dVar5 = dVar45 - in_XMM3_Qa;
          if (dVar16 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar18,
                                        SUB84(dVar5,0) & uVar17)) {
            dVar5 = ((double)*(float *)(local_788.Data + (longlong)local_7b8) - in_XMM3_Qa) / dVar5;
          }
          else {
            dVar5 = dVar15;
            if ((double)*(float *)(local_788.Data + (longlong)local_7b8) < dVar45) {
              dVar5 = 0.0;
            }
          }
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          pFVar28 = ::FName::FName(&local_610,"VALUE");
          if (dVar15 <= dVar5) {
            dVar5 = dVar15;
          }
          if (dVar5 <= 0.0) {
            dVar5 = 0.0;
          }
          UMaterialInstanceDynamic::SetScalarParameterValue(pUVar27,*pFVar28,(float)dVar5);
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          uVar3 = param_2->Size;
          pFVar28 = ::FName::FName(&local_608,"LocalWidth");
          local_7e8 = (float)uVar3;
          UMaterialInstanceDynamic::SetScalarParameterValue(pUVar27,*pFVar28,local_7e8);
          pUVar27 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_7e0);
          uVar3 = param_2->Size;
          pFVar28 = ::FName::FName(&local_600,"LocalHeigth");
          fStack_7e4 = (float)((ulonglong)uVar3 >> 0x20);
          UMaterialInstanceDynamic::SetScalarParameterValue(pUVar27,*pFVar28,fStack_7e4);
          if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          EVar40 = DisabledEffect;
          if (bVar22) {
            EVar40 = None;
          }
          FSlateBrush::FSlateBrush(&local_408);
          pUVar29 = FWeakObjectPtr::Get(&local_7e0);
          FSlateBrush::SetResourceObject(&local_408,pUVar29);
          if (this->Orientation == Orient_Horizontal) {
            dVar45 = (double)(float)((uint)fVar48 ^ __xmm_80000000800000008000000080000000);
            local_6f8._0_8_ = 0x3f800000;
            local_6f8.Translation.field0_0x0._s_0.Y = 0.0;
            local_658.M.M[0][0] = ___xmm_b33bbd2ebf8000003f800000b33bbd2e;
            local_658.M.M[0][1] = _UNK_152bee944;
            local_658.M.M[1][0] = _UNK_152bee948;
            local_658.M.M[1][1] = _UNK_152bee94c;
            local_658.Trans.field0_0x0._s_0.X =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) ^
                                         (uint)((ulonglong)uVar9 >> 0x20),
                                         SUB84(dVar45,0) ^ (uint)uVar9);
            local_658.Trans.field0_0x0._s_0.Y = (float)(dVar45 * ___real_be6777a5c0000000);
            local_7b0 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
            fStack_7ac = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
            local_7a8 = fVar49;
            fStack_7a4 = fVar48;
            pFVar30 = FGeometry::MakeChild
                                (param_2,&local_120,(FDeprecateVector2DParameter *)&local_7a8,
                                 &local_6f8,&local_658,(FDeprecateVector2DParameter *)&local_7b0);
            FGeometry::operator=((FGeometry *)&local_2a8._s_0,pFVar30);
          }
          fVar43 = fStack_2a0;
          afVar20 = _UNK_15076b188;
          FVar19 = ___xmm_3f80000000000000000000003f800000;
          pFVar1 = this->Style;
          dVar45 = (pFVar1->MeterPadding).field0_0x0._s_0.Y;
          bVar36 = local_278._4_1_ & 1;
          local_6e8 = CONCAT44(fStack_298,fStack_29c);
          ___xmm_3f80000000000000000000003f800000 = FVar50.ComparisonIndex.Value;
          _UNK_15076b184 = FVar50.Number;
          local_528.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
          local_528.M.M[0][1] = (float)_UNK_15076b184;
          _UNK_15076b188 = afVar51[0];
          _UNK_15076b18c = afVar51[1];
          local_528.M.M[1][0] = _UNK_15076b188;
          local_528.M.M[1][1] = _UNK_15076b18c;
          fStack_79c = (float)dVar45;
          local_7a0 = (float)(((double)*(float *)&pFVar1->_padding_ +
                              (pFVar1->MeterPadding).field0_0x0._s_0.X) * (double)(int)uVar37 +
                             (double)fVar46 + (pFVar1->MeterPadding).field0_0x0._s_0.X);
          local_798._s_0.Y = fStack_79c;
          local_798._s_0.X = local_7a0;
          local_7d8._4_4_ = (int)(float)((double)fVar48 - dVar45);
          local_7d8._0_4_ = (int)*(float *)&pFVar1->_padding_;
          local_790 = local_7a0 * fStack_2a0 + fStack_29c;
          fStack_78c = fStack_79c * fStack_2a0 + fStack_298;
          ___xmm_3f80000000000000000000003f800000 = FVar19;
          _UNK_15076b188 = afVar20;
          local_528.Trans.field0_0x0 = local_798;
          Concatenate<TTransform2<float>_>
                    (&local_510,&local_528,(TTransform2<float> *)(auStack_290 + 4));
          local_1c8._s_0.Y = fStack_78c;
          local_1c8._s_0.X = local_790;
          local_1b4 = (FWeakObjectPtr)local_7d8;
          local_1c0 = fVar43;
          local_194 = local_194 & 0xfc | bVar36 * '\x02';
          local_1bc = 0;
          local_1ac[0] = local_510.M.M[0][0];
          local_1ac[1] = local_510.M.M[0][1];
          afStack_1a4[0] = local_510.M.M[1][0];
          afStack_1a4[1] = local_510.M.M[1][1];
          local_19c = local_510.Trans.field0_0x0;
          FSlateDrawElement::MakeBox
                    (local_778,param_5,(FPaintGeometry *)&local_1c8._s_0,&local_408,EVar40,
                     (FLinearColor *)&local_6b8._s_0);
          local_408._padding_ = (longlong)&___7FSlateBrush__6B_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_408.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
        }
        else {
          pFVar1 = this->Style;
          param_2 = (FGeometry *)local_7c8;
          if (pFVar1 != (FAudioMaterialMeterStyle *)0x0) {
            pcVar4 = *(code **)(pFVar1->_padding_ + 0x18);
            pUVar29 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
            pUVar29 = (UObject *)(*pcVar4)(pFVar1,pUVar29);
            uVar23 = 0;
            if ((int)uVar37 < (this->DynamicMaterials).ArrayNum) {
              uVar23 = uVar41;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar4 = (code *)swi(3);
              iVar24 = (*pcVar4)();
              return iVar24;
            }
            pFVar2 = (this->DynamicMaterials).AllocatorInstance.Data;
            local_770 = pUVar29;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar29);
            }
            FWeakObjectPtr::operator=
                      ((FWeakObjectPtr *)(pFVar2 + (longlong)(int)uVar37 * 8),(FObjectPtr)&local_770
                      );
            param_2 = (FGeometry *)local_7c8;
          }
        }
        fVar43 = SUB84(in_XMM3_Qa,0);
        local_7b8 = (FDeprecateSlateVector2D)((longlong)local_7b8 + 0xc);
        uVar35 = (ulonglong)(uVar37 + 1);
        uVar39 = uVar39 + 1;
      } while ((longlong)uVar39 < lVar38);
    }
    fVar21 = local_7d0;
    fVar49 = __real_3f800000;
    pFVar1 = this->Style;
    if (pFVar1->bShowScale != false) {
      iVar42 = (int)(pFVar1->ValueRangeDb).field0_0x0._s_0.Y;
      iVar25 = (int)(pFVar1->ValueRangeDb).field0_0x0._s_0.X;
      TVar14 = *(TVector2<float>_u_0 *)&pFVar1->ScaleHashWidth;
      fVar47 = pFVar1->ScaleHashHeight * __real_3f000000;
      iVar24 = iVar42;
      if (iVar25 < iVar42) {
        iVar24 = iVar25;
      }
      iVar42 = iVar42 - iVar42 % pFVar1->DecibelsPerHash;
      iVar24 = iVar24 - iVar24 % pFVar1->DecibelsPerHash;
      pFVar31 = FSlateApplication::Get();
      lVar38 = *(longlong *)&pFVar31->field_0x60;
      if ((*(longlong *)(lVar38 + 8) == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar4 = (code *)swi(3);
        iVar24 = (*pcVar4)();
        return iVar24;
      }
      FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar38 + 8),&local_708);
      this_00 = local_708.Object;
      local_758.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_758.Data.ArrayNum = 0;
      local_758.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_758,iVar24);
      local_668 = local_758.Data.AllocatorInstance.Data;
      iStack_660 = local_758.Data.ArrayNum + -1;
      if (local_758.Data.ArrayNum == 0) {
        iStack_660 = 0;
      }
      uStack_580 = CONCAT44(uStack_65c,iStack_660);
      local_588.DebugPtr = (UObject *)local_758.Data.AllocatorInstance.Data;
      FVar32 = FSlateFontMeasure::Measure
                         (this_00,(TStringView<wchar_t> *)(local_5e0 + 8),
                          (FSlateFontInfo *)&local_588.ObjectPtr,fVar43);
      local_770 = (UObject *)(double)*(float *)((longlong)FVar32 + 4);
      if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_758.Data.AllocatorInstance.Data);
      }
      local_798 = (TVector2<float>_u_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      if (this->Orientation == Orient_Horizontal) {
        local_698 = L"-";
        uStack_690 = 1;
        local_578._12_4_ = uStack_68c;
        local_578._8_4_ = 1;
        local_578._0_8_ = L"-";
        FVar32 = FSlateFontMeasure::Measure
                           (local_708.Object,(TStringView<wchar_t> *)local_5f0,
                            (FSlateFontInfo *)local_578,fVar43);
        local_798 = (TVector2<float>_u_0)(double)*(float *)FVar32;
      }
      dVar16 = __real_4000000000000000;
      dVar15 = __real_3fe0000000000000;
      iVar25 = iVar24 - iVar42;
      if (iVar24 <= iVar42) {
        local_710 = (FName)(double)fVar47;
        local_7d0 = (float)iVar42;
        local_718 = (FName)(double)fVar48;
        fVar48 = fVar49;
        local_7c8 = TVar14;
        do {
          pFVar1 = this->Style;
          dVar45 = (pFVar1->MeterPadding).field0_0x0._s_0.Y;
          fVar43 = ((float)iVar42 - local_7d0) * (fVar49 / (float)iVar25);
          if (fVar48 <= fVar43) {
            fVar43 = fVar48;
          }
          if (fVar43 <= __real_00000000) {
            fVar43 = __real_00000000;
          }
          dVar5 = (double)(float)(((double)local_718 - (dVar45 + dVar45)) * (double)fVar43);
          dVar8 = (dVar5 + dVar45) - (double)local_710;
          if (pFVar1->bScaleSide == false) {
            dVar7 = (double)local_7c0;
            dVar6 = ((double)*(float *)&pFVar1->_padding_ + (pFVar1->MeterPadding).field0_0x0._s_0.X
                    ) * (double)(int)fVar21 + (double)pFVar1->ScaleHashOffset;
          }
          else {
            dVar7 = (double)fVar46;
            dVar6 = ((dVar7 + (pFVar1->MeterPadding).field0_0x0._s_0.X) -
                    (double)pFVar1->ScaleHashOffset) - (double)pFVar1->ScaleHashWidth;
          }
          FSlateBrush::FSlateBrush(&local_358);
          fVar48 = fStack_2a0;
          fVar46 = SUB84(dVar45,0);
          local_6dc = CONCAT44(fStack_298,fStack_29c);
          bVar36 = local_278._4_1_ & 1;
          local_7c8._4_4_ = (undefined4)dVar8;
          local_7c8._0_4_ = (float)dVar6;
          local_7d8 = local_7c8;
          local_4f8.Trans.field0_0x0 = local_7c8;
          local_790 = (float)dVar6 * fStack_2a0 + fStack_29c;
          fStack_78c = (float)local_7c8._4_4_ * fStack_2a0 + fStack_298;
          local_4f8.M.M[0] = (float  [2])FVar50;
          local_4f8.M.M[1] = afVar51;
          Concatenate<TTransform2<float>_>
                    (&local_4e0,&local_4f8,(TTransform2<float> *)(auStack_290 + 4));
          local_190._s_0.Y = fStack_78c;
          local_190._s_0.X = local_790;
          local_188 = fVar48;
          local_15c = local_15c & 0xfc | bVar36 * '\x02';
          local_184 = 0;
          local_174[0] = local_4e0.M.M[0][0];
          local_174[1] = local_4e0.M.M[0][1];
          afStack_16c[0] = local_4e0.M.M[1][0];
          afStack_16c[1] = local_4e0.M.M[1][1];
          local_164 = local_4e0.Trans.field0_0x0;
          local_17c = TVar14;
          FSlateDrawElement::MakeBox
                    (local_778,param_5,(FPaintGeometry *)&local_190._s_0,&local_358,None,
                     (FLinearColor *)&local_6b8._s_0);
          local_768.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_768.Data.ArrayNum = 0;
          local_768.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_768,iVar42);
          if ((this->Orientation == Orient_Horizontal) && (iVar42 < 0)) {
            local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_748.Data.ArrayNum = 0;
            local_748.Data.ArrayMax = 0;
            iVar34 = -iVar42;
            if (-iVar42 < 0) {
              iVar34 = iVar42;
            }
            ::FString::AppendInt(&local_748,iVar34);
            local_6a8 = local_748.Data.AllocatorInstance.Data;
            iStack_6a0 = local_748.Data.ArrayNum + -1;
            if (local_748.Data.ArrayNum == 0) {
              iStack_6a0 = 0;
            }
            local_568._12_4_ = uStack_69c;
            local_568._8_4_ = iStack_6a0;
            local_568._0_8_ = local_748.Data.AllocatorInstance.Data;
            FVar32 = FSlateFontMeasure::Measure
                               (local_708.Object,(TStringView<wchar_t> *)(local_5f0 + 8),
                                (FSlateFontInfo *)local_568,fVar46);
            fVar48 = *(float *)FVar32;
            fVar46 = *(float *)((longlong)FVar32 + 4);
            if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_748.Data.AllocatorInstance.Data);
            }
          }
          else {
            local_688 = local_768.Data.AllocatorInstance.Data;
            iStack_680 = local_768.Data.ArrayNum + -1;
            if (local_768.Data.ArrayNum == 0) {
              iStack_680 = 0;
            }
            local_558._8_8_ = CONCAT44(uStack_67c,iStack_680);
            local_558._0_8_ = local_768.Data.AllocatorInstance.Data;
            FVar32 = FSlateFontMeasure::Measure
                               (local_708.Object,(TStringView<wchar_t> *)local_5e0,
                                (FSlateFontInfo *)local_558,fVar46);
            fVar48 = *(float *)FVar32;
            fVar46 = *(float *)((longlong)FVar32 + 4);
          }
          FText::FromString(&local_678,&local_768);
          fVar43 = fStack_2a0;
          afVar51 = _UNK_15076b188;
          FVar50 = ___xmm_3f80000000000000000000003f800000;
          pFVar1 = this->Style;
          local_200 = local_2a8;
          fStack_1f8 = fStack_2a0;
          fStack_1f4 = fStack_29c;
          fStack_1f0 = fStack_298;
          uStack_1ec = uStack_294;
          uStack_1e8 = auStack_290._0_4_;
          uStack_1e4 = auStack_290._4_4_;
          local_1e0 = (undefined4)local_288;
          uStack_1dc = (undefined4)((ulonglong)local_288 >> 0x20);
          uStack_1d8 = (undefined4)uStack_280;
          uStack_1d4 = (undefined4)((ulonglong)uStack_280 >> 0x20);
          uStack_1d0 = (undefined4)local_278;
          uStack_1cc = (undefined4)((ulonglong)local_278 >> 0x20);
          dVar5 = dVar5 + (pFVar1->MeterPadding).field0_0x0._s_0.Y;
          if (this->Orientation == Orient_Horizontal) {
            dVar5 = dVar5 + (double)fVar48 * dVar15;
            if (iVar42 < 0) {
              dVar5 = dVar5 + (double)local_798;
            }
            if (pFVar1->bScaleSide == false) {
              dVar45 = ((double)*(float *)&pFVar1->_padding_ +
                       (pFVar1->MeterPadding).field0_0x0._s_0.X) * (double)(int)fVar21 +
                       (double)pFVar1->ScaleHashOffset + (double)pFVar1->ScaleHashWidth + dVar16;
            }
            else {
              dVar45 = (((double)local_770 - (double)fVar46) +
                       (pFVar1->MeterPadding).field0_0x0._s_0.X) - dVar16;
            }
            fVar47 = (float)dVar45;
            local_738 = 0;
            local_4b8 = 0;
            local_6d0 = CONCAT44(fStack_298,fStack_29c);
            fVar44 = (float)dVar5;
            local_270.Scale = 1.0;
            local_270.AbsolutePosition.field0_0x0._s_0.X = 0.0;
            local_270.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
            FVar13.ObjectSerialNumber = (int)fVar44;
            FVar13.ObjectIndex = (int)fVar47;
            uStack_72c = 0;
            local_270.Size._4_4_ = fVar46;
            local_270.Size._0_4_ = fVar48;
            local_730 = 0;
            local_270.Position.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_4a0 = 0;
            local_640.M.M[0][0] = ___xmm_b33bbd2e3f800000bf800000b33bbd2e;
            local_640.M.M[0][1] = _UNK_150971c64;
            local_640.M.M[1][0] = _UNK_150971c68;
            local_640.M.M[1][1] = _UNK_150971c6c;
            local_640.Trans.field0_0x0._s_0.X = 0.0;
            local_640.Trans.field0_0x0._s_0.Y = 0.0;
            local_498.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
            local_498.M.M[0][1] = (float)_UNK_15076b184;
            local_498.M.M[1][0] = _UNK_15076b188;
            local_498.M.M[1][1] = _UNK_15076b18c;
            local_7a8 = fVar47;
            fStack_7a4 = fVar44;
            local_7a0 = fVar48;
            fStack_79c = fVar46;
            local_498.Trans.field0_0x0 = (TVector2<float>_u_0)FVar13;
            Concatenate<TTransform2<float>_>(&local_438,&local_640,&local_498);
            Concatenate<TTransform2<float>_>
                      (&local_270.AccumulatedRenderTransform,&local_438,
                       (TTransform2<float> *)(auStack_290 + 4));
            local_270._52_1_ = local_270._52_1_ | 1;
            pFVar30 = &local_270;
            local_7b0 = fVar47 * fVar43 + (float)local_6d0;
            local_270.Scale = fVar43;
            fStack_7ac = fVar44 * fVar43 + local_6d0._4_4_;
            local_7d8 = (TVector2<float>_u_0)FVar13;
            local_270.AbsolutePosition.field0_0x0._s_0.X = local_7b0;
            local_270.AbsolutePosition.field0_0x0._s_0.Y = fStack_7ac;
            local_270.Position.field0_0x0 = (TVector2<float>_u_0)FVar13;
          }
          else {
            if (pFVar1->bScaleSide == false) {
              dVar45 = ((double)*(float *)&pFVar1->_padding_ +
                       (pFVar1->MeterPadding).field0_0x0._s_0.X) * (double)(int)fVar21 +
                       (double)pFVar1->ScaleHashOffset + (double)pFVar1->ScaleHashWidth + dVar16;
            }
            else {
              dVar45 = ((((dVar7 + (pFVar1->MeterPadding).field0_0x0._s_0.X) - dVar16) -
                        (double)fVar48) - (double)pFVar1->ScaleHashOffset) -
                       (double)pFVar1->ScaleHashWidth;
            }
            local_728 = 0;
            local_470 = 0;
            local_6c4 = CONCAT44(fStack_298,fStack_29c);
            fVar47 = (float)(dVar5 - (double)fVar46 * dVar15);
            local_238.Scale = 1.0;
            local_238.AbsolutePosition.field0_0x0._s_0.X = 0.0;
            local_238.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
            local_7e0.ObjectSerialNumber = (int)fVar47;
            local_7e0.ObjectIndex = (int)(float)dVar45;
            FVar13 = local_7e0;
            local_450.Trans.field0_0x0 = (TVector2<float>_u_0)local_7e0;
            uStack_71c = 0;
            local_7b8._4_4_ = fVar46;
            local_7b8._0_4_ = fVar48;
            local_720 = 0;
            local_238.Size = local_7b8;
            local_238.Position.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_458 = 0;
            local_628.M.M[0][0] = ___xmm_3f80000080000000000000003f800000;
            local_628.M.M[0][1] = _UNK_152c28a64;
            local_628.M.M[1][0] = _UNK_152c28a68;
            local_628.M.M[1][1] = _UNK_152c28a6c;
            local_628.Trans.field0_0x0._s_0.X = 0.0;
            local_628.Trans.field0_0x0._s_0.Y = 0.0;
            local_450.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
            local_450.M.M[0][1] = (float)_UNK_15076b184;
            local_450.M.M[1][0] = _UNK_15076b188;
            local_450.M.M[1][1] = _UNK_15076b18c;
            Concatenate<TTransform2<float>_>(&local_420,&local_628,&local_450);
            Concatenate<TTransform2<float>_>
                      (&local_238.AccumulatedRenderTransform,&local_420,
                       (TTransform2<float> *)(auStack_290 + 4));
            local_238._52_1_ = local_238._52_1_ | 1;
            pFVar30 = &local_238;
            local_7d8 = (TVector2<float>_u_0)FVar13;
            local_238.Position.field0_0x0 = (TVector2<float>_u_0)FVar13;
            local_238.AbsolutePosition.field0_0x0._s_0.X = (float)dVar45 * fVar43 + (float)local_6c4
            ;
            local_238.Scale = fVar43;
            local_238.AbsolutePosition.field0_0x0._s_0.Y = fVar47 * fVar43 + local_6c4._4_4_;
          }
          FGeometry::operator=((FGeometry *)&local_200._s_0,pFVar30);
          local_158._s_0.Y = fStack_1f0;
          local_158._s_0.X = fStack_1f4;
          pFVar1 = this->Style;
          local_12c = CONCAT44(uStack_1d0,uStack_1d4);
          local_144 = local_200;
          local_150 = fStack_1f8;
          local_13c = CONCAT44(local_1e0,uStack_1e4);
          uStack_134 = CONCAT44(uStack_1d8,uStack_1dc);
          local_124 = ((byte)uStack_1cc & 1) * '\x02' | local_124 & 0xfc;
          local_14c = 0;
          pFVar33 = FText::ToString(&local_678);
          FSlateDrawElement::MakeText
                    (local_778,param_5,(FPaintGeometry *)&local_158._s_0,pFVar33,&pFVar1->Font,None,
                     (FLinearColor *)&local_6b8._s_0);
          iVar42 = iVar42 - this->Style->DecibelsPerHash;
          if (local_678.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_678.TextData.Reference + 0x10))();
          }
          if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_768.Data.AllocatorInstance.Data);
          }
          local_358._padding_ = (longlong)&___7FSlateBrush__6B_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_358.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
          fVar48 = __real_3f800000;
          fVar46 = local_7c0;
        } while (iVar24 <= iVar42);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_708.SharedReferenceCount.ReferenceController);
    }
    if (local_788.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_788.Data);
    }
  }
  return param_5;
}

// SetMeterChannelInfo @ 14d969fe0

void __thiscall
SAudioMaterialMeter::SetMeterChannelInfo
          (SAudioMaterialMeter *this,
          TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  bool bVar1;
  bool bVar2;
  TArray<TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  local_18;
  
  bVar1 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IdenticalTo
                    (&this->MeterChannelInfoAttribute,param_1);
  if (!bVar1) {
    bVar1 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound
                      (&this->MeterChannelInfoAttribute);
    bVar2 = TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound(param_1);
    TAttribute<TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::operator=
              (&this->MeterChannelInfoAttribute,param_1);
    SWidget::Invalidate((SWidget *)this,(bVar2 != bVar1) * '\x04' + Paint);
  }
  ApplyNewMaterial(this,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetOrientation @ 14d96acd0

void __thiscall SAudioMaterialMeter::SetOrientation(SAudioMaterialMeter *this,EOrientation param_1)

{
  if (this->Orientation != param_1) {
    this->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

