// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b449720

UClass * __cdecl UDS_ChatEmoteDecorator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChatEmoteDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChatEmoteDecorator",
               &Z_Registration_Info_UClass_UDS_ChatEmoteDecorator.InnerSingleton,
               StaticRegisterNativesUDS_ChatEmoteDecorator,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChatEmoteDecorator>,
               InternalVTableHelperCtorCaller<UDS_ChatEmoteDecorator>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChatEmoteDecorator.InnerSingleton;
}

// UDS_ChatEmoteDecorator @ 14b44d630

UDS_ChatEmoteDecorator * __thiscall
UDS_ChatEmoteDecorator::UDS_ChatEmoteDecorator(UDS_ChatEmoteDecorator *this,FVTableHelper *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ChatEmoteDecorator__6B_;
  *(undefined8 *)&this->EmoteBrushes = 0;
  *(undefined8 *)&(this->EmoteBrushes).field_0x8 = 0;
  *(undefined8 *)&(this->EmoteBrushes).field_0x20 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x28 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x2c = 0x80;
  *(undefined4 *)&(this->EmoteBrushes).field_0x34 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EmoteBrushes).field_0x40 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x48 = 0;
  *(undefined8 *)&this->BrushResourceObjects = 0;
  *(undefined8 *)&(this->BrushResourceObjects).field_0x8 = 0;
  *(undefined8 *)&(this->BrushResourceObjects).field_0x20 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x28 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x34 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BrushResourceObjects).field_0x40 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x48 = 0;
  return this;
}

// UDS_ChatEmoteDecorator @ 14b44d6c0

UDS_ChatEmoteDecorator * __thiscall
UDS_ChatEmoteDecorator::UDS_ChatEmoteDecorator
          (UDS_ChatEmoteDecorator *this,FObjectInitializer *param_1)

{
  URichTextBlockDecorator::URichTextBlockDecorator((URichTextBlockDecorator *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ChatEmoteDecorator__6B_;
  *(undefined8 *)&this->EmoteBrushes = 0;
  *(undefined8 *)&(this->EmoteBrushes).field_0x8 = 0;
  *(undefined8 *)&(this->EmoteBrushes).field_0x20 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x28 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x2c = 0x80;
  *(undefined4 *)&(this->EmoteBrushes).field_0x34 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EmoteBrushes).field_0x40 = 0;
  *(undefined4 *)&(this->EmoteBrushes).field_0x48 = 0;
  *(undefined8 *)&this->BrushResourceObjects = 0;
  *(undefined8 *)&(this->BrushResourceObjects).field_0x8 = 0;
  *(undefined8 *)&(this->BrushResourceObjects).field_0x20 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x28 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x34 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BrushResourceObjects).field_0x40 = 0;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x48 = 0;
  return this;
}

// ~UDS_ChatEmoteDecorator @ 14b450150

void __thiscall UDS_ChatEmoteDecorator::~UDS_ChatEmoteDecorator(UDS_ChatEmoteDecorator *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ChatEmoteDecorator__6B_;
  *(undefined4 *)&(this->BrushResourceObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BrushResourceObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BrushResourceObjects);
  *(undefined4 *)&(this->EmoteBrushes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EmoteBrushes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FSlateBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FSlateBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FSlateBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EmoteBrushes);
  URichTextBlockDecorator::~URichTextBlockDecorator((URichTextBlockDecorator *)this);
  return;
}

// CreateDecorator @ 14b452270

TSharedPtr<ITextDecorator,1> * __thiscall
UDS_ChatEmoteDecorator::CreateDecorator
          (UDS_ChatEmoteDecorator *this,TSharedPtr<ITextDecorator,1> *__return_storage_ptr__,
          URichTextBlock *param_1)

{
  code *pcVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<ITextDecorator,1> *pTVar5;
  FWeakObjectPtr local_res8;
  UDS_ChatEmoteDecorator *local_res10;
  
  pTVar4 = ::operator_new(0x28);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (ITextDecorator *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDS_ChatEmoteDecorator___00_SharedPointerInternals__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ChatEmoteDecorator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ChatEmoteDecorator *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    FVar2 = local_res8;
    FRichTextDecorator::FRichTextDecorator((FRichTextDecorator *)(pTVar4 + 1),param_1);
    pTVar4[2]._padding_ = (longlong)FVar2;
    pTVar4[1]._padding_ = (longlong)&___7FDS_ChatEmoteDecorator__6B_;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedPtr<ITextDecorator,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->Object = (ITextDecorator *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14b454230

UClass * __cdecl UDS_ChatEmoteDecorator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChatEmoteDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChatEmoteDecorator",
               &Z_Registration_Info_UClass_UDS_ChatEmoteDecorator.InnerSingleton,
               StaticRegisterNativesUDS_ChatEmoteDecorator,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChatEmoteDecorator>,
               InternalVTableHelperCtorCaller<UDS_ChatEmoteDecorator>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChatEmoteDecorator.InnerSingleton;
}

// StaticRegisterNativesUDS_ChatEmoteDecorator @ 14b455150

void __cdecl UDS_ChatEmoteDecorator::StaticRegisterNativesUDS_ChatEmoteDecorator(void)

{
  return;
}

// GetEmoteIconBrush @ 14bd5bcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall
UDS_ChatEmoteDecorator::GetEmoteIconBrush(UDS_ChatEmoteDecorator *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  FLinearColor FVar3;
  bool bVar4;
  int iVar5;
  FDS_ChattingEmoteTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  FDS_ResourceIconTableRow *pFVar8;
  FString *pFVar9;
  TObjectPtr<UObject>_u_0 *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FSlateBrush *pFVar12;
  TSharedPtr<FSlateBrush,1> *pTVar13;
  undefined1 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 auStackY_4b8 [32];
  int local_478 [2];
  FSlateBrush *local_470;
  TReferenceControllerBase<1> *pTStack_468;
  UObject *local_460;
  FSoftObjectPath local_458;
  undefined1 local_438 [8];
  FLinearColor_u_0 local_430;
  uint local_420;
  FScriptContainerElement *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  int *local_408;
  FSlateBrush **local_400;
  int *local_3f8;
  UObject **local_3f0;
  TStringView<wchar_t> local_3e8;
  FString local_3d8;
  FString local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_478[0] = param_1;
  if (*(int *)&(this->EmoteBrushes).field_0x8 != *(int *)&(this->EmoteBrushes).field_0x34) {
    puVar14 = *(undefined1 **)&(this->EmoteBrushes).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->EmoteBrushes).field_0x38;
    }
    iVar5 = *(int *)(puVar14 +
                    (ulonglong)(*(int *)&(this->EmoteBrushes).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(int *)((longlong)iVar5 * 0x20 + *(longlong *)&this->EmoteBrushes) == param_1) {
          pTVar13 = TMapBase<int,TSharedPtr<FSlateBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>_>
                    ::FindChecked((TMapBase<int,TSharedPtr<FSlateBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>_>
                                   *)&this->EmoteBrushes,param_1);
          return pTVar13->Object;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->EmoteBrushes);
      } while (iVar5 != -1);
    }
  }
  pFVar6 = FDS_ChattingEmoteTableRow::Get((longlong)param_1,true);
  if (pFVar6 == (FDS_ChattingEmoteTableRow *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return (FSlateBrush *)0x0;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_3b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3b8,"UDS_ChatEmoteDecorator::GetEmoteIconBrush",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_3b8.Ptr,0x55,
               L"chattingEmoteTableRow == nullptr (emoteID : %d)");
    local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_3b8._padding_;
  }
  else {
    uVar1 = pFVar6->ID_Icon;
    pFVar8 = FDS_ResourceIconTableRow::Get((longlong)(int)uVar1,true);
    if (pFVar8 == (FDS_ResourceIconTableRow *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return (FSlateBrush *)0x0;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_298._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_298,"UDS_ChatEmoteDecorator::GetEmoteIconBrush",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_298.Ptr,0x5d,
                 L"FDS_ResourceIconTableRow == nullptr (iconID : %d)");
      local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_298._padding_;
    }
    else {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (*(int *)&(this->BrushResourceObjects).field_0x8 !=
          *(int *)&(this->BrushResourceObjects).field_0x34) {
        puVar14 = *(undefined1 **)&(this->BrushResourceObjects).field_0x40;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(this->BrushResourceObjects).field_0x38;
        }
        iVar5 = *(int *)(puVar14 +
                        (ulonglong)(*(int *)&(this->BrushResourceObjects).field_0x48 - 1U & uVar1) *
                        4);
        if (iVar5 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this->BrushResourceObjects + (longlong)iVar5 * 0x18) ==
                uVar1) {
              pTVar10 = &TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                         ::FindChecked((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                                        *)&this->BrushResourceObjects,uVar1)->field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pTVar10->DebugPtr != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pTVar10->DebugPtr);
              }
              local_460 = pTVar10->DebugPtr;
              goto LAB_14bd5bf94;
            }
            iVar5 = *(int *)(*(longlong *)&this->BrushResourceObjects + 0x10 +
                            (longlong)iVar5 * 0x18);
          } while (iVar5 != -1);
        }
      }
      pFVar9 = FSoftObjectPath::ToString(&pFVar8->IconPath,&local_3d8);
      local_458.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_458.AssetPath.PackageName.Number = 0;
      local_458.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_458.AssetPath.AssetName.Number = 0;
      local_458.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_458.SubPathString.Data.ArrayNum = 0;
      local_458.SubPathString.Data.ArrayMax = 0;
      local_418 = (pFVar9->Data).AllocatorInstance.Data;
      iVar5 = (pFVar9->Data).ArrayNum;
      iStack_410 = iVar5 + -1;
      if (iVar5 == 0) {
        iStack_410 = 0;
      }
      local_3e8._12_4_ = uStack_40c;
      local_3e8.Size = iStack_410;
      local_3e8.DataPtr = (wchar_t *)local_418;
      FSoftObjectPath::SetPath(&local_458,&local_3e8);
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
      local_460 = FSoftObjectPath::TryLoad(&local_458,(FUObjectSerializeContext *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_460 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_460);
      }
      if (local_458.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.SubPathString.Data.AllocatorInstance.Data);
      }
LAB_14bd5bf94:
      if (local_460 != (UObject *)0x0) {
        pTVar11 = ::operator_new(0xc0);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          local_470 = ___xmm_00000000000000000000000000000010;
          pTStack_468 = _UNK_150651568;
        }
        else {
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          pTVar11->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_UFSlateBrush___00_SharedPointerInternals__6B_;
          FSlateBrush::FSlateBrush((FSlateBrush *)(pTVar11 + 1));
          local_470 = (FSlateBrush *)(pTVar11 + 1);
          if ((local_470 == (FSlateBrush *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FSlateBrush *)(*pcVar2)();
            return pFVar12;
          }
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          pTVar15 = pTVar11;
          pTStack_468 = pTVar11;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        if ((local_470 == (FSlateBrush *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FSlateBrush *)(*pcVar2)();
          return pFVar12;
        }
        FSlateBrush::SetResourceObject(local_470,local_460);
        if ((local_470 == (FSlateBrush *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FSlateBrush *)(*pcVar2)();
          return pFVar12;
        }
        local_420 = local_420 & 0xffffff00;
        (local_470->DrawAs).Value = '\x03';
        FVar3 = FLinearColor::White;
        local_430 = FLinearColor::White.field0_0x0;
        if ((local_470 == (FSlateBrush *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FSlateBrush *)(*pcVar2)();
          return pFVar12;
        }
        (local_470->TintColor).SpecifiedColor.field0_0x0._s_0 =
             (FLinearColor_u_0_s_0)FVar3.field0_0x0;
        (local_470->TintColor).ColorUseRule = (undefined1)local_420;
        (local_470->TintColor).ColorTableId = local_420._1_1_;
        *(undefined2 *)&(local_470->TintColor).field_0x12 = local_420._2_2_;
        local_408 = local_478;
        local_400 = &local_470;
        TSet<TTuple<int,TSharedPtr<FSlateBrush,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,TSharedPtr<FSlateBrush,1>_&>_>
                  ((TSet<TTuple<int,TSharedPtr<FSlateBrush,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>,FDefaultSetAllocator>
                    *)&this->EmoteBrushes,
                   (TPairInitializer<int_const_&,TSharedPtr<FSlateBrush,1>_&> *)local_438,
                   (bool *)&local_408);
        local_3f8 = local_478;
        local_3f0 = &local_460;
        TSet<TTuple<int,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UObject>_&>_>
                  ((TSet<TTuple<int,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)&this->BrushResourceObjects,
                   (TPairInitializer<int_const_&,TObjectPtr<UObject>_&> *)(local_438 + 4),
                   (bool *)&local_3f8);
        pTVar13 = TMapBase<int,TSharedPtr<FSlateBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>_>
                  ::FindChecked((TMapBase<int,TSharedPtr<FSlateBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>_>
                                 *)&this->EmoteBrushes,local_478[0]);
        pFVar12 = pTVar13->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_468);
        return pFVar12;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return (FSlateBrush *)0x0;
      }
      pUVar7 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(&pFVar8->IconPath,&local_3c8);
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_ChatEmoteDecorator::GetEmoteIconBrush",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_178.Ptr,0x6e,L"resourceObject == nullptr (path = %s)");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
  }
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  return (FSlateBrush *)0x0;
}

