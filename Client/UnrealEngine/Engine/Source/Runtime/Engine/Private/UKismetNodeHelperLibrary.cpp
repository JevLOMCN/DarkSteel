// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticClass @ 147d56e50

UClass * __cdecl UKismetNodeHelperLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetNodeHelperLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetNodeHelperLibrary",
               &Z_Registration_Info_UClass_UKismetNodeHelperLibrary.InnerSingleton,
               StaticRegisterNativesUKismetNodeHelperLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetNodeHelperLibrary>,
               InternalVTableHelperCtorCaller<UKismetNodeHelperLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetNodeHelperLibrary.InnerSingleton;
}

// UKismetNodeHelperLibrary @ 147d7a400

UKismetNodeHelperLibrary * __thiscall
UKismetNodeHelperLibrary::UKismetNodeHelperLibrary
          (UKismetNodeHelperLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetNodeHelperLibrary__6B_;
  return this;
}

// UKismetNodeHelperLibrary @ 147d7a430

UKismetNodeHelperLibrary * __thiscall
UKismetNodeHelperLibrary::UKismetNodeHelperLibrary
          (UKismetNodeHelperLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetNodeHelperLibrary__6B_;
  return this;
}

// ~UKismetNodeHelperLibrary @ 147d7baf0

void __thiscall UKismetNodeHelperLibrary::~UKismetNodeHelperLibrary(UKismetNodeHelperLibrary *this)

{
  *(undefined ***)this = &___7UKismetNodeHelperLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BitIsMarked @ 147d86230

bool __cdecl UKismetNodeHelperLibrary::BitIsMarked(int param_1,int param_2)

{
  if (param_2 < 0x20) {
    return 0 < (param_1 & 1 << ((byte)param_2 & 0x1f));
  }
  return false;
}

// ClearAllBits @ 147d8e510

void __cdecl UKismetNodeHelperLibrary::ClearAllBits(int *param_1)

{
  *param_1 = 0;
  return;
}

// ClearBit @ 147d8e560

void __cdecl UKismetNodeHelperLibrary::ClearBit(int *param_1,int param_2)

{
  if (param_2 < 0x20) {
    *param_1 = *param_1 & ~(1 << (param_2 & 0x1fU));
  }
  return;
}

// GetEnumeratorName @ 147da5a10

FName __cdecl UKismetNodeHelperLibrary::GetEnumeratorName(UEnum *param_1,uchar param_2)

{
  FName FVar1;
  undefined7 in_register_00000011;
  undefined1 local_res8 [32];
  
  if ((UEnum *)CONCAT71(in_register_00000011,param_2) != (UEnum *)0x0) {
    FVar1 = UEnum::GetNameByValue
                      ((UEnum *)CONCAT71(in_register_00000011,param_2),(long64)local_res8);
    param_1->_padding_ = *(longlong *)FVar1;
    return (FName)param_1;
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// GetEnumeratorUserFriendlyName @ 147da5a70

FString * __cdecl
UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName
          (FString *__return_storage_ptr__,UEnum *param_1,uchar param_2)

{
  FText *this;
  FString *pFVar1;
  FName local_res10 [3];
  FText local_18;
  
  if (param_1 == (UEnum *)0x0) {
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    ::FName::ToString(local_res10,__return_storage_ptr__);
  }
  else {
    this = UEnum::GetValueOrBitfieldAsDisplayNameText(param_1,&local_18,(ulonglong)param_2);
    pFVar1 = FText::ToString(this);
    ::FString::FString(__return_storage_ptr__,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetEnumeratorValueFromIndex @ 147da5af0

uchar __cdecl UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(UEnum *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  TTuple<FName,__int64> *pTVar4;
  TTuple<FName,__int64> local_18;
  
  if (param_1 == (UEnum *)0x0) {
    return 0xff;
  }
  if ((param_1->Names).NumValues <= (int)(uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Names.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xb2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  pTVar4 = UEnum::FNameData::operator[](&param_1->Names,&local_18,(uint)param_2);
  return pTVar4->field_0x8;
}

// GetFirstUnmarkedBit @ 147da5b80

int __cdecl UKismetNodeHelperLibrary::GetFirstUnmarkedBit(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3 < 0x20) && (uVar2 = 0, uVar1 = uVar2, 0 < param_3)) {
    do {
      if ((0x1f < (int)uVar1) || ((param_1 & 1 << ((byte)uVar1 & 0x1f)) < 1)) {
        if ((-1 < param_2) && (param_2 < param_3)) {
          uVar2 = param_2;
        }
        for (; ((uint)param_1 >> (uVar2 & 0x1f) & 1) != 0; uVar2 = (int)(uVar2 + 1) % param_3) {
        }
        return uVar2;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_3);
  }
  return -1;
}

// GetPrivateStaticClass @ 147da8170

UClass * __cdecl UKismetNodeHelperLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetNodeHelperLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetNodeHelperLibrary",
               &Z_Registration_Info_UClass_UKismetNodeHelperLibrary.InnerSingleton,
               StaticRegisterNativesUKismetNodeHelperLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetNodeHelperLibrary>,
               InternalVTableHelperCtorCaller<UKismetNodeHelperLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetNodeHelperLibrary.InnerSingleton;
}

// GetRandomUnmarkedBit @ 147da8840

int __cdecl UKismetNodeHelperLibrary::GetRandomUnmarkedBit(int param_1,int param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_3 < 0x20) && (iVar3 = 0, 0 < param_3)) {
    do {
      if ((0x1f < iVar3) || ((param_1 & 1 << ((byte)iVar3 & 0x1f)) < 1)) {
        if ((param_2 < 0) || (param_3 <= param_2)) {
          param_2 = FMath::RandRange(0,param_3 + -1);
        }
        fVar1 = __real_38000100;
        while (((uint)param_1 >> (param_2 & 0x1fU) & 1) != 0) {
          uVar2 = rand();
          uVar2 = (uint)((float)(uVar2 & 0x7fff) * (float)param_3 * fVar1);
          param_2 = param_3 - 1U;
          if ((int)uVar2 < (int)(param_3 - 1U)) {
            param_2 = uVar2;
          }
        }
        return param_2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return -1;
}

// GetUnmarkedBit @ 147daa200

int __cdecl
UKismetNodeHelperLibrary::GetUnmarkedBit(int param_1,int param_2,int param_3,bool param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (!param_4) {
    iVar3 = GetFirstUnmarkedBit(param_1,param_2,param_3);
    return iVar3;
  }
  if ((param_3 < 0x20) && (iVar3 = 0, 0 < param_3)) {
    do {
      if ((0x1f < iVar3) || ((param_1 & 1 << ((byte)iVar3 & 0x1f)) < 1)) {
        if ((param_2 < 0) || (param_3 <= param_2)) {
          param_2 = FMath::RandRange(0,param_3 + -1);
        }
        fVar1 = __real_38000100;
        while (((uint)param_1 >> (param_2 & 0x1fU) & 1) != 0) {
          uVar2 = rand();
          uVar2 = (uint)((float)(uVar2 & 0x7fff) * (float)param_3 * fVar1);
          param_2 = param_3 - 1U;
          if ((int)uVar2 < (int)(param_3 - 1U)) {
            param_2 = uVar2;
          }
        }
        return param_2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return -1;
}

// GetValidValue @ 147daa280

uchar __cdecl UKismetNodeHelperLibrary::GetValidValue(UEnum *param_1,uchar param_2)

{
  bool bVar1;
  long64 lVar2;
  
  if (param_1 == (UEnum *)0x0) {
    bVar1 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("Enum != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetNodeHelperLibrary.cpp"
                       ,0xa4);
    if (!bVar1) {
      return 0xff;
    }
  }
  bVar1 = UEnum::IsValidEnumValueOrBitfield(param_1,(ulonglong)param_2);
  if (bVar1) {
    return param_2;
  }
  lVar2 = UEnum::GetMaxEnumValue(param_1);
  return (uchar)lVar2;
}

// HasMarkedBit @ 147daafc0

bool __cdecl UKismetNodeHelperLibrary::HasMarkedBit(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 < 0x20) && (uVar1 = 0, 0 < param_2)) {
    do {
      if (uVar1 < 0x20) {
        if (0 < (param_1 & 1 << ((byte)uVar1 & 0x1f))) {
          return true;
        }
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_2);
  }
  return false;
}

// HasUnmarkedBit @ 147dab210

bool __cdecl UKismetNodeHelperLibrary::HasUnmarkedBit(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0x20) && (iVar1 = 0, 0 < param_2)) {
    do {
      if ((0x1f < iVar1) || ((param_1 & 1 << ((byte)iVar1 & 0x1f)) < 1)) {
        return true;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return false;
}

// MarkBit @ 147db63d0

void __cdecl UKismetNodeHelperLibrary::MarkBit(int *param_1,int param_2)

{
  if (param_2 < 0x20) {
    *param_1 = *param_1 | 1 << (param_2 & 0x1fU);
  }
  return;
}

// StaticRegisterNativesUKismetNodeHelperLibrary @ 147dc4210

void __cdecl UKismetNodeHelperLibrary::StaticRegisterNativesUKismetNodeHelperLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBitIsMarked @ 147dcfeb0

void __cdecl
UKismetNodeHelperLibrary::execBitIsMarked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  uint local_res18 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] < 0x20) {
    *(bool *)param_3 = 0 < (int)(local_res18[0] & 1 << ((byte)local_res10[0] & 0x1f));
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execClearAllBits @ 147ddeee0

void __cdecl
UKismetNodeHelperLibrary::execClearAllBits(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [24];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  return;
}

// execClearBit @ 147ddefc0

void __cdecl UKismetNodeHelperLibrary::execClearBit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_res20[0] < 0x20) {
    *puVar2 = *puVar2 & ~(1 << (local_res20[0] & 0x1f));
  }
  return;
}

// execGetEnumeratorName @ 147dfa220

void __cdecl
UKismetNodeHelperLibrary::execGetEnumeratorName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  undefined1 local_res10 [8];
  UEnum *local_res18;
  undefined1 local_res20 [8];
  
  local_res18 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 != (UEnum *)0x0) {
    FVar2 = UEnum::GetNameByValue(local_res18,(long64)local_res20);
    *(undefined8 *)param_3 = *(undefined8 *)FVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetEnumeratorUserFriendlyName @ 147dfa320

void __cdecl
UKismetNodeHelperLibrary::execGetEnumeratorUserFriendlyName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  FText *this;
  FString *pFVar3;
  byte local_res10 [8];
  UEnum *local_res18;
  FName local_res20;
  FString local_48;
  FText local_38;
  
  local_res18 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UEnum *)0x0) {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    ::FName::ToString(&local_res20,&local_48);
  }
  else {
    this = UEnum::GetValueOrBitfieldAsDisplayNameText
                     (local_res18,&local_38,(ulonglong)local_res10[0]);
    pFVar3 = FText::ToString(this);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar3->Data).ArrayNum;
    _Src = (pFVar3->Data).AllocatorInstance.Data;
    local_48.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEnumeratorValueFromIndex @ 147dfa4c0

void __cdecl
UKismetNodeHelperLibrary::execGetEnumeratorValueFromIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  TTuple<FName,__int64> *pTVar6;
  byte local_res10 [8];
  longlong local_res18;
  TTuple<FName,__int64> local_18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res18;
  bVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 != 0) {
    if (*(int *)(local_res18 + 0x50) <= (int)(uint)local_res10[0]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Names.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xb2d,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar6 = UEnum::FNameData::operator[]((FNameData *)(lVar4 + 0x40),&local_18,(uint)bVar3);
    *(undefined1 *)param_3 = pTVar6->field_0x8;
    return;
  }
  *(undefined1 *)param_3 = 0xff;
  return;
}

// execGetFirstUnmarkedBit @ 147dfa730

void __cdecl
UKismetNodeHelperLibrary::execGetFirstUnmarkedBit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  uVar5 = 0;
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] < 0x20) && (uVar4 = uVar5, 0 < local_res10[0])) {
    do {
      if ((0x1f < (int)uVar4) || ((int)(local_res18[0] & 1 << ((byte)uVar4 & 0x1f)) < 1)) {
        if ((-1 < (int)local_res20[0]) && ((int)local_res20[0] < local_res10[0])) {
          uVar5 = (ulonglong)local_res20[0];
        }
        uVar3 = (uint)uVar5;
        while ((local_res18[0] >> (uVar3 & 0x1f) & 1) != 0) {
          uVar4 = (longlong)((int)uVar5 + 1) % (longlong)local_res10[0];
          uVar5 = uVar4 & 0xffffffff;
          uVar3 = (uint)uVar4;
        }
        *(uint *)param_3 = uVar3;
        return;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < local_res10[0]);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetRandomUnmarkedBit @ 147dfd740

void __cdecl
UKismetNodeHelperLibrary::execGetRandomUnmarkedBit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  iVar9 = 0;
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar5 = local_res18[0];
  iVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] < 0x20) && (0 < local_res10[0])) {
    do {
      if ((0x1f < iVar9) || ((int)(local_res18[0] & 1 << ((byte)iVar9 & 0x1f)) < 1)) {
        if (((int)local_res20[0] < 0) ||
           (uVar7 = local_res20[0], fVar3 = __real_38000100, fVar6 = __real_38000100,
           local_res10[0] <= (int)local_res20[0])) {
          uVar7 = FMath::RandRange(0,local_res10[0] + -1);
          fVar3 = __real_38000100;
          fVar6 = __real_38000100;
        }
        while (__real_38000100 = fVar6, fVar6 = __real_38000100, __real_38000100 = fVar3,
              (uVar5 >> (uVar7 & 0x1f) & 1) != 0) {
          uVar7 = iVar4 - 1;
          uVar8 = rand();
          uVar8 = (uint)((float)(uVar8 & 0x7fff) * (float)iVar4 * fVar6);
          fVar3 = __real_38000100;
          if ((int)uVar8 < (int)uVar7) {
            uVar7 = uVar8;
          }
        }
        *(uint *)param_3 = uVar7;
        return;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_res10[0]);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetUnmarkedBit @ 147e00380

void __cdecl
UKismetNodeHelperLibrary::execGetUnmarkedBit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  int local_48 [8];
  
  uVar9 = 0;
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_48[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  iVar4 = local_res20[0];
  uVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48[0] == 0) {
    if ((local_res20[0] < 0x20) && (uVar7 = uVar9, 0 < local_res20[0])) {
      do {
        if ((0x1f < (int)uVar7) || ((int)(local_res10[0] & 1 << ((byte)uVar7 & 0x1f)) < 1)) {
          if ((-1 < (int)local_res18[0]) && ((int)local_res18[0] < local_res20[0])) {
            uVar9 = (ulonglong)local_res18[0];
          }
          uVar8 = (uint)uVar9;
          if ((local_res10[0] >> (uVar8 & 0x1f) & 1) != 0) {
            do {
              uVar9 = (longlong)((int)uVar9 + 1) % (longlong)local_res20[0];
              uVar6 = (uint)uVar9;
              uVar9 = uVar9 & 0xffffffff;
            } while ((local_res10[0] >> (uVar6 & 0x1f) & 1) != 0);
            *(uint *)param_3 = uVar6;
            return;
          }
          goto LAB_147e004dd;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < local_res20[0]);
    }
  }
  else if ((local_res20[0] < 0x20) && (0 < local_res20[0])) {
    do {
      if ((0x1f < (int)uVar9) || ((int)(local_res10[0] & 1 << ((byte)uVar9 & 0x1f)) < 1)) {
        if (((int)local_res18[0] < 0) ||
           (uVar8 = local_res18[0], local_res20[0] <= (int)local_res18[0])) {
          uVar8 = FMath::RandRange(0,local_res20[0] + -1);
        }
        fVar3 = __real_38000100;
        if ((uVar6 >> (uVar8 & 0x1f) & 1) != 0) {
          do {
            uVar8 = iVar4 - 1;
            uVar5 = rand();
            uVar5 = (uint)((float)(uVar5 & 0x7fff) * (float)iVar4 * fVar3);
            if ((int)uVar5 < (int)uVar8) {
              uVar8 = uVar5;
            }
          } while ((uVar6 >> (uVar8 & 0x1f) & 1) != 0);
          *(uint *)param_3 = uVar8;
          return;
        }
        goto LAB_147e004dd;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < local_res20[0]);
  }
  uVar8 = 0xffffffff;
LAB_147e004dd:
  *(uint *)param_3 = uVar8;
  return;
}

// execGetValidValue @ 147e00740

void __cdecl
UKismetNodeHelperLibrary::execGetValidValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  UEnum *this;
  bool bVar3;
  long64 lVar4;
  ulonglong uVar5;
  byte local_res10 [8];
  UEnum *local_res18;
  
  local_res18 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res18;
  bVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = (ulonglong)local_res10[0];
  if (local_res18 == (UEnum *)0x0) {
    bVar3 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("Enum != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetNodeHelperLibrary.cpp"
                       ,0xa4);
    if (!bVar3) {
      *(undefined1 *)param_3 = 0xff;
      return;
    }
  }
  bVar3 = UEnum::IsValidEnumValueOrBitfield(this,uVar5);
  if (bVar3) {
    *(byte *)param_3 = bVar2;
    return;
  }
  lVar4 = UEnum::GetMaxEnumValue(this);
  *(char *)param_3 = (char)lVar4;
  return;
}

// execHasMarkedBit @ 147e020e0

void __cdecl
UKismetNodeHelperLibrary::execHasMarkedBit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res10 [2];
  uint local_res18 [2];
  
  iVar2 = 0;
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] < 0x20) && (0 < local_res10[0])) {
    do {
      if ((iVar2 < 0x20) && (0 < (int)(local_res18[0] & 1 << ((byte)iVar2 & 0x1f)))) {
        *(undefined1 *)param_3 = 1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res10[0]);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasUnmarkedBit @ 147e022e0

void __cdecl
UKismetNodeHelperLibrary::execHasUnmarkedBit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res10 [2];
  uint local_res18 [2];
  
  iVar2 = 0;
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] < 0x20) && (0 < local_res10[0])) {
    do {
      if ((0x1f < iVar2) || ((int)(local_res18[0] & 1 << ((byte)iVar2 & 0x1f)) < 1)) {
        *(undefined1 *)param_3 = 1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res10[0]);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execMarkBit @ 147e15c50

void __cdecl UKismetNodeHelperLibrary::execMarkBit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_res20[0] < 0x20) {
    *puVar2 = *puVar2 | 1 << (local_res20[0] & 0x1f);
  }
  return;
}

