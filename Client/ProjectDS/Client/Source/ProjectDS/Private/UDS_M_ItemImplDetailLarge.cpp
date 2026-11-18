// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b51b6d0

UClass * __cdecl UDS_M_ItemImplDetailLarge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplDetailLarge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplDetailLarge",
               &Z_Registration_Info_UClass_UDS_M_ItemImplDetailLarge.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplDetailLarge,0x210,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_ItemImplDetailLarge>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplDetailLarge>,local_res8,
               UDS_M_ItemImplDetail::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplDetailLarge.InnerSingleton;
}

// UDS_M_ItemImplDetailLarge @ 14b520c90

UDS_M_ItemImplDetailLarge * __thiscall
UDS_M_ItemImplDetailLarge::UDS_M_ItemImplDetailLarge
          (UDS_M_ItemImplDetailLarge *this,FVTableHelper *param_1)

{
  UDS_M_ItemImplDetail::UDS_M_ItemImplDetail((UDS_M_ItemImplDetail *)this,param_1);
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// UDS_M_ItemImplDetailLarge @ 14b520cd0

UDS_M_ItemImplDetailLarge * __thiscall
UDS_M_ItemImplDetailLarge::UDS_M_ItemImplDetailLarge
          (UDS_M_ItemImplDetailLarge *this,FObjectInitializer *param_1)

{
  UDS_M_ItemImplDetail::UDS_M_ItemImplDetail((UDS_M_ItemImplDetail *)this,param_1);
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// GetPrivateStaticClass @ 14b5254a0

UClass * __cdecl UDS_M_ItemImplDetailLarge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplDetailLarge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplDetailLarge",
               &Z_Registration_Info_UClass_UDS_M_ItemImplDetailLarge.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplDetailLarge,0x210,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_ItemImplDetailLarge>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplDetailLarge>,local_res8,
               UDS_M_ItemImplDetail::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplDetailLarge.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplDetailLarge @ 14b5273f0

void __cdecl UDS_M_ItemImplDetailLarge::StaticRegisterNativesUDS_M_ItemImplDetailLarge(void)

{
  return;
}

// ~UDS_M_ItemImplDetailLarge @ 14bd43ca0

void __thiscall
UDS_M_ItemImplDetailLarge::~UDS_M_ItemImplDetailLarge(UDS_M_ItemImplDetailLarge *this)

{
  *(undefined ***)this = &UDS_M_ItemImplDetail::_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &UDS_M_ItemImplDetail::_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetStyleIDCharacterEquipType @ 14bd63090

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDCharacterEquipType(UDS_M_ItemImplDetailLarge *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x5d0))();
  return 0x13bc - (ulonglong)(cVar1 != '\0');
}

// GetStyleIDCharacterExclusive @ 14bd630f0

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDCharacterExclusive(UDS_M_ItemImplDetailLarge *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x5c8))();
  return 0x13bc - (ulonglong)(cVar1 != '\0');
}

// GetStyleIDCombatPowerStatusName @ 14bd63130

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDCombatPowerStatusName(UDS_M_ItemImplDetailLarge *this)

{
  return 0x1483;
}

// GetStyleIDDecreasedStatusCaomparisonValue @ 14bd63150

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDDecreasedStatusCaomparisonValue
          (UDS_M_ItemImplDetailLarge *this)

{
  return 0x1485;
}

// GetStyleIDDefaultStatusName @ 14bd63170

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDDefaultStatusName(UDS_M_ItemImplDetailLarge *this)

{
  return 0x1484;
}

// GetStyleIDDurability @ 14bd63190

long64 __thiscall UDS_M_ItemImplDetailLarge::GetStyleIDDurability(UDS_M_ItemImplDetailLarge *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x448))();
  iVar2 = (**(code **)(*(longlong *)this + 0x450))(this);
  return (ulonglong)(iVar2 / 10 <= iVar1) + 0x13bd;
}

// GetStyleIDIncreasedStatusCamparisonValue @ 14bd63200

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDIncreasedStatusCamparisonValue(UDS_M_ItemImplDetailLarge *this)

{
  return 0x1486;
}

// GetStyleIDPeriod @ 14bd63220

long64 __thiscall UDS_M_ItemImplDetailLarge::GetStyleIDPeriod(UDS_M_ItemImplDetailLarge *this)

{
  return 0x13bf;
}

// GetStyleIDPrefixStatusName @ 14bd63240

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDPrefixStatusName(UDS_M_ItemImplDetailLarge *this)

{
  return 0x1487;
}

// GetStyleIDSetItemEquipped @ 14bd63420

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDSetItemEquipped(UDS_M_ItemImplDetailLarge *this)

{
  return 0x154b;
}

// GetStyleIDSetItemUnEquipped @ 14bd63440

long64 __thiscall
UDS_M_ItemImplDetailLarge::GetStyleIDSetItemUnEquipped(UDS_M_ItemImplDetailLarge *this)

{
  return 0x154c;
}

// GetTextTagStyleItemGrade @ 14bd64070

FDS_Text * __thiscall
UDS_M_ItemImplDetailLarge::GetTextTagStyleItemGrade
          (UDS_M_ItemImplDetailLarge *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  FDS_CommonGradeTableRow *pFVar4;
  FDS_Text *pFVar5;
  undefined1 local_58 [48];
  void *local_28;
  FDS_TextFormatArg *local_18;
  int local_10;
  
  bVar2 = (**(code **)(*(longlong *)this + 0x3f0))();
  pFVar4 = FDS_CommonGradeTableRow::Get((ulonglong)bVar2,true);
  if (pFVar4 == (FDS_CommonGradeTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5141697863360708580>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplDetailLarge.cpp"
                       ,0x1c,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDS_Text *)(*pcVar1)();
      return pFVar5;
    }
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  else {
    pFVar5 = (FDS_Text *)(**(code **)(*(longlong *)this + 0x3f8))(this,local_58);
    DS_Util::GetTextTagStyle(__return_storage_ptr__,&pFVar4->ID_TagStyleM,pFVar5);
    DestructItems<FDS_TextFormatArg,int>(local_18,local_10);
    if (local_18 != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return __return_storage_ptr__;
}

// GetTextTagStyleItemName @ 14bd643c0

FDS_Text * __thiscall
UDS_M_ItemImplDetailLarge::GetTextTagStyleItemName
          (UDS_M_ItemImplDetailLarge *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  FDS_CommonGradeTableRow *pFVar4;
  FDS_Text *pFVar5;
  undefined1 local_58 [48];
  void *local_28;
  FDS_TextFormatArg *local_18;
  int local_10;
  
  bVar2 = (**(code **)(*(longlong *)this + 0x3f0))();
  pFVar4 = FDS_CommonGradeTableRow::Get((ulonglong)bVar2,true);
  if (pFVar4 == (FDS_CommonGradeTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5141697863360708588>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplDetailLarge.cpp"
                       ,0x14,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDS_Text *)(*pcVar1)();
      return pFVar5;
    }
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  else {
    pFVar5 = (FDS_Text *)(**(code **)(*(longlong *)this + 0x400))(this,local_58);
    DS_Util::GetTextTagStyle(__return_storage_ptr__,&pFVar4->ID_TagStyleL,pFVar5);
    DestructItems<FDS_TextFormatArg,int>(local_18,local_10);
    if (local_18 != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return __return_storage_ptr__;
}

// InitItemImplMap @ 14bd67460

void __thiscall UDS_M_ItemImplDetailLarge::InitItemImplMap(UDS_M_ItemImplDetailLarge *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplDetailLarge_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 10;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 10) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\n') {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_18 = local_res10;
  local_10 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&UDS_M_ItemImplBase::ItemImplMap,(uint)local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_0000000a,(bool *)&local_18);
  return;
}

