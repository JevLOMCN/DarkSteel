// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 158

// StaticClass @ 147d48640

UClass * __cdecl UKismetStringLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetStringLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetStringLibrary",
               &Z_Registration_Info_UClass_UKismetStringLibrary.InnerSingleton,
               StaticRegisterNativesUKismetStringLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetStringLibrary>,
               InternalVTableHelperCtorCaller<UKismetStringLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetStringLibrary.InnerSingleton;
}

// UKismetStringLibrary @ 147d7a4c0

UKismetStringLibrary * __thiscall
UKismetStringLibrary::UKismetStringLibrary(UKismetStringLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetStringLibrary__6B_;
  return this;
}

// UKismetStringLibrary @ 147d7a4f0

UKismetStringLibrary * __thiscall
UKismetStringLibrary::UKismetStringLibrary(UKismetStringLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetStringLibrary__6B_;
  return this;
}

// ~UKismetStringLibrary @ 147d7bb30

void __thiscall UKismetStringLibrary::~UKismetStringLibrary(UKismetStringLibrary *this)

{
  *(undefined ***)this = &___7UKismetStringLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BuildString_Bool @ 147d8b480

FString * __cdecl
UKismetStringLibrary::BuildString_Bool
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,bool param_3,
          FString *param_4)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString local_18;
  
  pwVar3 = L"false";
  if (param_3) {
    pwVar3 = L"true";
  }
  ::FString::FString(&local_18,pwVar3);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar5 = (param_2->Data).ArrayNum;
  iVar4 = (param_4->Data).ArrayNum;
  iVar6 = (param_1->Data).ArrayNum;
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar1 = iVar5 + -1 + iVar2 + iVar4;
  if (iVar5 == 0) {
    iVar1 = iVar2 + iVar4;
  }
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar6);
  iVar5 = (param_1->Data).ArrayNum;
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
  iVar5 = (param_2->Data).ArrayNum;
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4);
  iVar5 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar5);
  iVar5 = (param_4->Data).ArrayNum;
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Color @ 147d8b5b0

FString * __cdecl
UKismetStringLibrary::BuildString_Color
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FLinearColor *param_3,
          FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_18;
  
  FLinearColor::ToString(param_3,&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Double @ 147d8b6d0

FString * __cdecl
UKismetStringLibrary::BuildString_Double
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,double param_3,
          FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_28;
  
  ::FString::SanitizeFloat(&local_28,param_3,1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Int @ 147d8b7f0

FString * __cdecl
UKismetStringLibrary::BuildString_Int
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,int param_3,
          FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_IntVector2 @ 147d8b920

FString * __cdecl
UKismetStringLibrary::BuildString_IntVector2
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          TIntVector2<int> param_3,FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TIntVector2<int>_u_0 local_res20;
  FString local_28;
  
  local_res20 = param_3.field0_0x0;
  UE::Math::TIntVector2<int>::ToString((TIntVector2<int> *)&local_res20._s_0,&local_28);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_IntVector @ 147d8ba40

FString * __cdecl
UKismetStringLibrary::BuildString_IntVector
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          TIntVector3<int> *param_3,FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_18;
  
  UE::Math::TIntVector3<int>::ToString(param_3,&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Name @ 147d8bb60

FString * __cdecl
UKismetStringLibrary::BuildString_Name
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FName param_3,
          FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FName local_res20;
  FString local_28;
  
  local_res20 = param_3;
  ::FName::ToString(&local_res20,&local_28);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Object @ 147d8bc80

FString * __cdecl
UKismetStringLibrary::BuildString_Object
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,UObject *param_3,
          FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  if (param_3 == (UObject *)0x0) {
    pFVar4 = ::FString::FString(&local_38,L"None");
    FVar5.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
    local_res8.Number = *(uint *)&param_3->field_0x1c;
    ::FName::ToString(&local_res8,&local_48);
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (param_2->Data).ArrayNum;
  iVar7 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  iVar6 = (param_4->Data).ArrayNum;
  iVar8 = (param_1->Data).ArrayNum;
  iVar2 = 0;
  iVar3 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar3 = iVar2;
  }
  iVar6 = iVar1 + -1 + iVar3 + iVar7;
  if (iVar1 == 0) {
    iVar6 = iVar3 + iVar7;
  }
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar6 + iVar8);
  iVar1 = (param_1->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar6);
  iVar1 = (param_2->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar5.Data,iVar7);
  iVar1 = (param_4->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar7);
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Rotator @ 147d8bde0

FString * __cdecl
UKismetStringLibrary::BuildString_Rotator
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          TRotator<double> *param_3,FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"P=%f Y=%f R=%f");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Vector2d @ 147d8bf30

FString * __cdecl
UKismetStringLibrary::BuildString_Vector2d
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          TVector2<double> *param_3,FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildString_Vector @ 147d8c070

FString * __cdecl
UKismetStringLibrary::BuildString_Vector
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          TVector<double> *param_3,FString *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = (param_4->Data).ArrayNum;
  iVar5 = (param_1->Data).ArrayNum;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar4 + -1 + iVar2 + iVar3;
  if (iVar4 == 0) {
    iVar1 = iVar2 + iVar3;
  }
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar1 + iVar5);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (param_4->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_4->Data).AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Concat_StrStr @ 147d8fd80

FString * __cdecl
UKismetStringLibrary::Concat_StrStr
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = (param_2->Data).ArrayNum;
  iVar1 = 0;
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = iVar1;
  }
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(__return_storage_ptr__,iVar2 + iVar4);
  iVar4 = (param_1->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  iVar4 = (param_2->Data).ArrayNum;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  return __return_storage_ptr__;
}

// Contains @ 147d90420

bool __cdecl
UKismetStringLibrary::Contains(FString *param_1,FString *param_2,bool param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar2 = ::FString::Find(param_1,pwVar3,iVar2,param_3 ^ IgnoreCase,(uint)param_4,-1);
  return iVar2 != -1;
}

// Conv_BoolToString @ 147d90490

FString * __cdecl
UKismetStringLibrary::Conv_BoolToString(FString *__return_storage_ptr__,bool param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_1) {
    pwVar1 = L"true";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// Conv_BoxCenterAndExtentsToString @ 147d90580

FString * __cdecl
UKismetStringLibrary::Conv_BoxCenterAndExtentsToString
          (FString *__return_storage_ptr__,TBox<double> *param_1)

{
  FString local_58;
  FString local_48 [4];
  
  ::FString::PrintfImpl(local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Center: %s Extents: %s ");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_BoxToString @ 147d906c0

FString * __cdecl
UKismetStringLibrary::Conv_BoxToString(FString *__return_storage_ptr__,TBox<double> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"IsValid=%s, Min=(%s), Max=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_ByteToString @ 147d907d0

FString * __cdecl
UKismetStringLibrary::Conv_ByteToString(FString *__return_storage_ptr__,uchar param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// Conv_ColorToString @ 147d90930

FString * __cdecl
UKismetStringLibrary::Conv_ColorToString(FString *__return_storage_ptr__,FLinearColor *param_1)

{
  FLinearColor::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Conv_DoubleToString @ 147d90c40

FString * __cdecl
UKismetStringLibrary::Conv_DoubleToString(FString *__return_storage_ptr__,double param_1)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,param_1,1);
  return __return_storage_ptr__;
}

// Conv_InputDeviceIdToString @ 147d90d70

FString * __cdecl
UKismetStringLibrary::Conv_InputDeviceIdToString
          (FString *__return_storage_ptr__,FInputDeviceId param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// Conv_Int64ToString @ 147d90da0

FString * __cdecl
UKismetStringLibrary::Conv_Int64ToString(FString *__return_storage_ptr__,long64 param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// Conv_IntPointToString @ 147d90e70

FString * __cdecl
UKismetStringLibrary::Conv_IntPointToString(FString *__return_storage_ptr__,TIntPoint<int> param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%d Y=%d");
  return __return_storage_ptr__;
}

// Conv_IntToString @ 147d90ea0

FString * __cdecl
UKismetStringLibrary::Conv_IntToString(FString *__return_storage_ptr__,int param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// Conv_IntVector2ToString @ 147d90f60

FString * __cdecl
UKismetStringLibrary::Conv_IntVector2ToString
          (FString *__return_storage_ptr__,TIntVector2<int> param_1)

{
  TIntVector2<int>_u_0 local_res10 [3];
  
  local_res10[0] = param_1.field0_0x0;
  UE::Math::TIntVector2<int>::ToString
            ((TIntVector2<int> *)&local_res10[0]._s_0,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Conv_IntVectorToString @ 147d90f90

FString * __cdecl
UKismetStringLibrary::Conv_IntVectorToString
          (FString *__return_storage_ptr__,TIntVector3<int> *param_1)

{
  UE::Math::TIntVector3<int>::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Conv_MatrixToString @ 147d90fd0

FString * __cdecl
UKismetStringLibrary::Conv_MatrixToString(FString *__return_storage_ptr__,TMatrix<double> *param_1)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar1 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_NameToString @ 147d91170

FString * __cdecl
UKismetStringLibrary::Conv_NameToString(FString *__return_storage_ptr__,FName param_1)

{
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Conv_ObjectToString @ 147d91350

FString * __cdecl
UKismetStringLibrary::Conv_ObjectToString(FString *__return_storage_ptr__,UObject *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar2 = param_1 == (UObject *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_18,L"None");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_28);
    pFVar1 = &local_28;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_PlatformUserIdToString @ 147d914a0

FString * __cdecl
UKismetStringLibrary::Conv_PlatformUserIdToString
          (FString *__return_storage_ptr__,FPlatformUserId param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// Conv_RotatorToString @ 147d91610

FString * __cdecl
UKismetStringLibrary::Conv_RotatorToString
          (FString *__return_storage_ptr__,TRotator<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

// Conv_StringToColor @ 147d91a20

void __cdecl
UKismetStringLibrary::Conv_StringToColor(FString *param_1,FLinearColor *param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = FLinearColor::InitFromString(param_2,param_1);
  *param_3 = bVar1;
  return;
}

// Conv_StringToDouble @ 147d91a50

double __cdecl UKismetStringLibrary::Conv_StringToDouble(FString *param_1)

{
  double dVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147d91a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    dVar1 = wcstod((wchar_t *)(param_1->Data).AllocatorInstance.Data,(wchar_t **)0x0);
    return dVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147d91a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = wcstod(L"",(wchar_t **)0x0);
  return dVar1;
}

// Conv_StringToInt64 @ 147d91a80

long64 __cdecl UKismetStringLibrary::Conv_StringToInt64(FString *param_1)

{
  longlong lVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147d91a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = _wtoi64((wchar_t *)(param_1->Data).AllocatorInstance.Data);
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147d91a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = _wtoi64(L"");
  return lVar1;
}

// Conv_StringToInt @ 147d91ab0

int __cdecl UKismetStringLibrary::Conv_StringToInt(FString *param_1)

{
  int iVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147d91ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = _wtoi((wchar_t *)(param_1->Data).AllocatorInstance.Data);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147d91ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wtoi(L"");
  return iVar1;
}

// Conv_StringToName @ 147d91ae0

FName __cdecl UKismetStringLibrary::Conv_StringToName(FString *param_1)

{
  undefined8 *in_RDX;
  
  if (*(int *)(in_RDX + 1) != 0) {
    ::FName::FName((FName *)param_1,(wchar_t *)*in_RDX);
    return (FName)param_1;
  }
  ::FName::FName((FName *)param_1,L"");
  return (FName)param_1;
}

// Conv_StringToRotator @ 147d91b20

void __cdecl
UKismetStringLibrary::Conv_StringToRotator(FString *param_1,TRotator<double> *param_2,bool *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  param_2->Roll = 0.0;
  param_2->Yaw = 0.0;
  pwVar3 = L"";
  param_2->Pitch = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FParse::Value(pwVar2,L"P=",&param_2->Pitch);
  if (bVar1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(pwVar2,L"Y=",&param_2->Yaw);
    if (bVar1) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar1 = FParse::Value(pwVar3,L"R=",&param_2->Roll);
      if (bVar1) {
        *param_3 = true;
        return;
      }
    }
  }
  *param_3 = false;
  return;
}

// Conv_StringToVector2D @ 147d91c40

void __cdecl
UKismetStringLibrary::Conv_StringToVector2D
          (FString *param_1,TVector2<double> *param_2,bool *param_3)

{
  double *pdVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pdVar1 = &(param_2->field0_0x0)._s_0.Y;
  *pdVar1 = 0.0;
  pwVar4 = L"";
  (param_2->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FParse::Value(pwVar3,L"X=",(double *)param_2);
  if (bVar2) {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar2 = FParse::Value(pwVar4,L"Y=",pdVar1);
    if (bVar2) {
      *param_3 = true;
      return;
    }
  }
  *param_3 = false;
  return;
}

// Conv_StringToVector3f @ 147d91ce0

void __cdecl
UKismetStringLibrary::Conv_StringToVector3f(FString *param_1,TVector<float> *param_2,bool *param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pfVar1 = &(param_2->field0_0x0)._s_0.Z;
  pfVar2 = &(param_2->field0_0x0)._s_0.Y;
  *pfVar1 = 0.0;
  *pfVar2 = 0.0;
  pwVar5 = L"";
  (param_2->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(float *)param_2);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",pfVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",pfVar1);
      if (bVar3) {
        *param_3 = true;
        return;
      }
    }
  }
  *param_3 = false;
  return;
}

// Conv_StringToVector @ 147d91db0

void __cdecl
UKismetStringLibrary::Conv_StringToVector(FString *param_1,TVector<double> *param_2,bool *param_3)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pdVar1 = &(param_2->field0_0x0)._s_0.Z;
  pdVar2 = &(param_2->field0_0x0)._s_0.Y;
  *pdVar1 = 0.0;
  *pdVar2 = 0.0;
  pwVar5 = L"";
  (param_2->field0_0x0)._s_0.X = 0.0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FParse::Value(pwVar4,L"X=",(double *)param_2);
  if (bVar3) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar3 = FParse::Value(pwVar4,L"Y=",pdVar2);
    if (bVar3) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",pdVar1);
      if (bVar3) {
        *param_3 = true;
        return;
      }
    }
  }
  *param_3 = false;
  return;
}

// Conv_TransformToString @ 147d91ee0

FString * __cdecl
UKismetStringLibrary::Conv_TransformToString
          (FString *__return_storage_ptr__,TTransform<double> *param_1)

{
  FString local_78;
  FString local_68;
  FString local_58;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_48.Roll = (param_1->Scale3D).ZW.m128d_f64[0];
  ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
  local_28.X = (param_1->Rotation).XY.m128d_f64[0];
  local_28.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_28.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_28.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
  ::FString::PrintfImpl(&local_68,L"P=%f Y=%f R=%f");
  ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Translation: %s Rotation: %s Scale: %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Conv_Vector2dToString @ 147d923a0

FString * __cdecl
UKismetStringLibrary::Conv_Vector2dToString
          (FString *__return_storage_ptr__,TVector2<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// Conv_Vector3fToString @ 147d92540

FString * __cdecl
UKismetStringLibrary::Conv_Vector3fToString(FString *__return_storage_ptr__,TVector<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// Conv_VectorToString @ 147d92590

FString * __cdecl
UKismetStringLibrary::Conv_VectorToString(FString *__return_storage_ptr__,TVector<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// CullArray @ 147d94b40

int __cdecl
UKismetStringLibrary::CullArray
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  iVar1 = ::FString::CullArray(param_2);
  return iVar1;
}

// EndsWith @ 147d99c00

bool __cdecl UKismetStringLibrary::EndsWith(FString *param_1,FString *param_2,Type param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar1 != 0) {
    bVar2 = ::FString::EndsWith(param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar1 + -1
                                ,param_3);
    return bVar2;
  }
  bVar2 = ::FString::EndsWith(param_1,L"",0,param_3);
  return bVar2;
}

// EqualEqual_StrStr @ 147d99f10

bool __cdecl UKismetStringLibrary::EqualEqual_StrStr(FString *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *_Str1;
  wchar_t *_Str2;
  
  _Str1 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(_Str1,_Str2);
  return iVar1 == 0;
}

// EqualEqual_StriStri @ 147d99f50

bool __cdecl UKismetStringLibrary::EqualEqual_StriStri(FString *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar3);
  return iVar1 == 0;
}

// FindSubstring @ 147d9d3d0

int __cdecl
UKismetStringLibrary::FindSubstring
          (FString *param_1,FString *param_2,bool param_3,bool param_4,int param_5)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar2 = ::FString::Find(param_1,pwVar3,iVar2,param_3 ^ IgnoreCase,(uint)param_4,param_5);
  return iVar2;
}

// GetCharacterArrayFromString @ 147da4590

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UKismetStringLibrary::GetCharacterArrayFromString
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  wchar_t local_res8 [4];
  FString local_28;
  
  iVar8 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (1 < (param_1->Data).ArrayNum) {
    for (; (-1 < iVar8 && (iVar8 < (param_1->Data).ArrayNum)); iVar8 = iVar8 + 1) {
      if ((iVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      local_res8[0] = *(wchar_t *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar8 * 2);
      pFVar6 = (FScriptContainerElement *)::FString::ConstructFromPtrSize(&local_28,local_res8,1);
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar7 <= pFVar6) && (pFVar6 < pFVar7 + (longlong)*piVar1 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(FScriptContainerElement **)pFVar7 =
           (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
           Data;
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data
           = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + 8) = *(int *)&pFVar6[8].field_0x0;
      *(int *)(pFVar7 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
      *(undefined8 *)&pFVar6[8].field_0x0 = 0;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum + -1;
    if ((iVar8 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(__return_storage_ptr__,iVar8,1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&__return_storage_ptr__->AllocatorInstance,__return_storage_ptr__->ArrayNum,
               piVar1);
  }
  return __return_storage_ptr__;
}

// GetCharacterAsNumber @ 147da47b0

int __cdecl UKismetStringLibrary::GetCharacterAsNumber(FString *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < param_2) {
    iVar3 = (param_1->Data).ArrayNum;
    uVar4 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    if (param_2 < (int)uVar4) {
      uVar4 = 0;
      if (param_2 < iVar3) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      return (int)*(ushort *)((param_1->Data).AllocatorInstance.Data + (longlong)param_2 * 2);
    }
  }
  return 0;
}

// GetPrivateStaticClass @ 147da82f0

UClass * __cdecl UKismetStringLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetStringLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetStringLibrary",
               &Z_Registration_Info_UClass_UKismetStringLibrary.InnerSingleton,
               StaticRegisterNativesUKismetStringLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetStringLibrary>,
               InternalVTableHelperCtorCaller<UKismetStringLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetStringLibrary.InnerSingleton;
}

// GetSubstring @ 147da96b0

FString * __cdecl
UKismetStringLibrary::GetSubstring
          (FString *__return_storage_ptr__,FString *param_1,int param_2,int param_3)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_3 < 0;
  if (bVar2) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    pFVar1 = ::FString::Mid(param_1,&local_18,param_2,param_3);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsEmpty @ 147dad4a0

bool __cdecl UKismetStringLibrary::IsEmpty(FString *param_1)

{
  return (param_1->Data).ArrayNum < 2;
}

// IsNumeric @ 147dad600

bool __cdecl UKismetStringLibrary::IsNumeric(FString *param_1)

{
  bool bVar1;
  wint_t wVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  if ((param_1->Data).ArrayNum < 2) {
    return false;
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  wVar2 = *(wint_t *)pFVar4;
  if ((wVar2 == 0x2d) || (wVar2 == 0x2b)) {
    wVar2 = *(wint_t *)(pFVar4 + 2);
    pFVar4 = pFVar4 + 2;
  }
  bVar1 = false;
  if (wVar2 != 0) {
    wVar2 = *(wint_t *)pFVar4;
    do {
      if (wVar2 == 0x2e) {
        if (bVar1) {
          return false;
        }
        bVar1 = true;
      }
      else {
        iVar3 = iswdigit(wVar2);
        if (iVar3 == 0) {
          return false;
        }
      }
      wVar2 = *(wint_t *)(pFVar4 + 2);
      pFVar4 = pFVar4 + 2;
    } while (wVar2 != 0);
  }
  return true;
}

// JoinStringArray @ 147daf410

FString * __cdecl
UKismetStringLibrary::JoinStringArray
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  int iVar1;
  bool bVar2;
  size_t sVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  if ((param_2->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar2 = true;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      sVar3 = wcslen(_Str);
      ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar3);
    }
    iVar6 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)pFVar4,iVar6);
    pFVar4 = pFVar4 + 0x10;
  }
  return __return_storage_ptr__;
}

// Left @ 147db1de0

FString * __cdecl
UKismetStringLibrary::Left(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  if (iVar1 == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,pwVar4,iVar3);
  return __return_storage_ptr__;
}

// LeftChop @ 147db1e30

FString * __cdecl
UKismetStringLibrary::LeftChop(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 - param_2 < iVar4) {
    iVar4 = iVar4 - param_2;
  }
  iVar2 = 0;
  if (0 < iVar4) {
    iVar2 = iVar4;
  }
  if (iVar1 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,pwVar3,iVar2);
  return __return_storage_ptr__;
}

// LeftPad @ 147db1e90

FString * __cdecl
UKismetStringLibrary::LeftPad(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  ::FString::LeftPad(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Len @ 147db1ec0

int __cdecl UKismetStringLibrary::Len(FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

// MatchesWildcard @ 147db6710

bool __cdecl UKismetStringLibrary::MatchesWildcard(FString *param_1,FString *param_2,Type param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar1 != 0) {
    bVar2 = ::FString::MatchesWildcard
                      (param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar1 + -1,param_3)
    ;
    return bVar2;
  }
  bVar2 = ::FString::MatchesWildcard(param_1,L"",0,param_3);
  return bVar2;
}

// Mid @ 147db6cb0

FString * __cdecl
UKismetStringLibrary::Mid(FString *__return_storage_ptr__,FString *param_1,int param_2,int param_3)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_3 < 0;
  if (bVar2) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    pFVar1 = ::FString::Mid(param_1,&local_18,param_2,param_3);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NotEqual_StrStr @ 147db83d0

bool __cdecl UKismetStringLibrary::NotEqual_StrStr(FString *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *_Str1;
  wchar_t *_Str2;
  
  _Str1 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    _Str1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = wcscmp(_Str1,_Str2);
  return iVar1 != 0;
}

// NotEqual_StriStri @ 147db8410

bool __cdecl UKismetStringLibrary::NotEqual_StriStri(FString *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar3);
  return iVar1 != 0;
}

// ParseIntoArray @ 147db8ae0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UKismetStringLibrary::ParseIntoArray
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          FString *param_2,bool param_3)

{
  wchar_t *pwVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FString::ParseIntoArray(param_1,__return_storage_ptr__,pwVar1,param_3);
  return __return_storage_ptr__;
}

// Replace @ 147dbdd30

FString * __cdecl
UKismetStringLibrary::Replace
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3,
          Type param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = L"";
  if ((param_3->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar1 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FString::Replace(param_1,__return_storage_ptr__,pwVar1,pwVar2,param_4);
  return __return_storage_ptr__;
}

// ReplaceInline @ 147dbdfb0

int __cdecl
UKismetStringLibrary::ReplaceInline(FString *param_1,FString *param_2,FString *param_3,Type param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = L"";
  if ((param_3->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar1 = ::FString::ReplaceInline(param_1,pwVar2,pwVar3,param_4);
  return iVar1;
}

// Reverse @ 147dbe700

FString * __cdecl UKismetStringLibrary::Reverse(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  ::FString::ReverseString(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Right @ 147dbe730

FString * __cdecl
UKismetStringLibrary::Right(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = iVar3;
  if (param_2 < iVar3) {
    iVar1 = param_2;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  ::FString::FString(__return_storage_ptr__,
                     (wchar_t *)((longlong)pwVar2 + ((longlong)iVar3 - (longlong)iVar4) * 2));
  return __return_storage_ptr__;
}

// RightChop @ 147dbe790

FString * __cdecl
UKismetStringLibrary::RightChop(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  ::FString::RightChop(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// RightPad @ 147dbe7c0

FString * __cdecl
UKismetStringLibrary::RightPad(FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  ::FString::RightPad(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Split @ 147dc3ed0

bool __cdecl
UKismetStringLibrary::Split
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4,Type param_5,
          Type param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  wchar_t *pwVar13;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  
  pwVar13 = L"";
  if (((param_3 == param_4) && (param_3 != (FString *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LeftStr != RightStr || LeftStr == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\String.cpp.inl"
                         ,0x1ed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = (param_2->Data).ArrayNum;
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  if (iVar5 == 0) {
    pwVar10 = L"";
    iVar5 = iVar7;
  }
  else {
    pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  iVar5 = ::FString::Find(param_1,pwVar10,iVar5,param_5,param_6,-1);
  if (-1 < iVar5) {
    iVar9 = 0;
    if (param_3 == (FString *)0x0) {
      if (param_4 == (FString *)0x0) {
        return true;
      }
      iVar8 = (param_2->Data).ArrayNum;
      if (iVar8 != 0) {
        iVar5 = iVar5 + -1 + iVar8;
      }
      iVar8 = (param_1->Data).ArrayNum;
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      if (iVar5 < iVar6) {
        iVar7 = iVar5;
      }
      if (0 < iVar7) {
        iVar9 = iVar7;
      }
      if (iVar8 != 0) {
        pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize
                (&FStack_38,(wchar_t *)((longlong)pwVar13 + (longlong)iVar9 * 2),iVar6 - iVar9);
      if (param_4 != &FStack_38) {
        pFVar11 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        (param_4->Data).AllocatorInstance.Data = FStack_38.Data.AllocatorInstance.Data;
        (param_4->Data).ArrayNum = FStack_38.Data.ArrayNum;
        (param_4->Data).ArrayMax = FStack_38.Data.ArrayMax;
        FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    else if (param_3 == param_1) {
      if (param_4 != (FString *)0x0) {
        iVar7 = (param_2->Data).ArrayNum;
        iVar8 = (param_1->Data).ArrayNum;
        iVar6 = iVar7 + -1 + iVar5;
        if (iVar7 == 0) {
          iVar6 = iVar5;
        }
        iVar7 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar7 = iVar9;
        }
        iVar12 = iVar7;
        if (iVar6 < iVar7) {
          iVar12 = iVar6;
        }
        iVar6 = iVar9;
        if (0 < iVar12) {
          iVar6 = iVar12;
        }
        if (iVar8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize
                  (&FStack_58,(wchar_t *)((longlong)pwVar10 + (longlong)iVar6 * 2),iVar7 - iVar6);
        if (param_4 != &FStack_58) {
          pFVar1 = (param_4->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_4->Data).AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
          (param_4->Data).ArrayNum = FStack_58.Data.ArrayNum;
          (param_4->Data).ArrayMax = FStack_58.Data.ArrayMax;
          FStack_58.Data.AllocatorInstance.Data = pFVar11;
        }
        if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = (param_1->Data).ArrayNum;
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = iVar9;
      }
      if (iVar5 < iVar8) {
        iVar8 = iVar5;
      }
      if (0 < iVar8) {
        iVar9 = iVar8;
      }
      if (iVar7 != 0) {
        pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_48,pwVar13,iVar9);
      FStack_38.Data.AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
      if (param_3 != &FStack_48) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = FStack_48.Data.ArrayNum;
        (param_3->Data).ArrayMax = FStack_48.Data.ArrayMax;
        FStack_38.Data.AllocatorInstance.Data = pFVar11;
      }
    }
    else {
      iVar8 = (param_1->Data).ArrayNum;
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = iVar7;
      }
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      iVar12 = iVar7;
      if (0 < iVar6) {
        iVar12 = iVar6;
      }
      if (iVar8 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_78,pwVar10,iVar12);
      if (param_3 != &FStack_78) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = FStack_78.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = FStack_78.Data.ArrayNum;
        (param_3->Data).ArrayMax = FStack_78.Data.ArrayMax;
        FStack_78.Data.AllocatorInstance.Data = pFVar11;
      }
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
      if (param_4 == (FString *)0x0) {
        return true;
      }
      iVar8 = (param_2->Data).ArrayNum;
      iVar6 = (param_1->Data).ArrayNum;
      iVar12 = iVar8 + -1 + iVar5;
      if (iVar8 == 0) {
        iVar12 = iVar5;
      }
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      if (iVar12 < iVar5) {
        iVar7 = iVar12;
      }
      if (0 < iVar7) {
        iVar9 = iVar7;
      }
      if (iVar6 != 0) {
        pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize
                (&FStack_68,(wchar_t *)((longlong)pwVar13 + (longlong)iVar9 * 2),iVar5 - iVar9);
      FStack_38.Data.AllocatorInstance.Data = FStack_68.Data.AllocatorInstance.Data;
      if (param_4 != &FStack_68) {
        pFVar1 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_4->Data).AllocatorInstance.Data = FStack_68.Data.AllocatorInstance.Data;
        (param_4->Data).ArrayNum = FStack_68.Data.ArrayNum;
        (param_4->Data).ArrayMax = FStack_68.Data.ArrayMax;
        FStack_38.Data.AllocatorInstance.Data = pFVar11;
      }
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// StartsWith @ 147dc3f40

bool __cdecl UKismetStringLibrary::StartsWith(FString *param_1,FString *param_2,Type param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar1 != 0) {
    bVar2 = ::FString::StartsWith
                      (param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar1 + -1,param_3)
    ;
    return bVar2;
  }
  bVar2 = ::FString::StartsWith(param_1,L"",0,param_3);
  return bVar2;
}

// StaticRegisterNativesUKismetStringLibrary @ 147dc4290

void __cdecl UKismetStringLibrary::StaticRegisterNativesUKismetStringLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x4c;
  local_18.DataPtr = Z_Construct_UClass_UKismetStringLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TimeSecondsToString @ 147dc5160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
UKismetStringLibrary::TimeSecondsToString(FString *__return_storage_ptr__,float param_1)

{
  uint in_XMM1_Db;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  
  fVar3 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  auVar1._4_4_ = in_XMM1_Db & _UNK_15061cc74;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = in_XMM1_Dc & _UNK_15061cc78;
  auVar1._12_4_ = in_XMM1_Dd & _UNK_15061cc7c;
  auVar2._4_12_ = auVar1._4_12_;
  auVar2._0_4_ = fVar3 * __real_3d088889 - __real_3f000000;
  roundps(auVar2,ZEXT416((uint)fVar3),1);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%02d:%02d.%02d");
  return __return_storage_ptr__;
}

// ToLower @ 147dc5220

FString * __cdecl UKismetStringLibrary::ToLower(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ToLower(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToUpper @ 147dc5420

FString * __cdecl UKismetStringLibrary::ToUpper(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ToUpper(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Trim @ 147dc58b0

FString * __cdecl UKismetStringLibrary::Trim(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::TrimStart(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TrimTrailing @ 147dc58e0

FString * __cdecl
UKismetStringLibrary::TrimTrailing(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::TrimEnd(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// execBuildString_Bool @ 147dd7bb0

void __cdecl
UKismetStringLibrary::execBuildString_Bool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  bool bVar6;
  int local_res10 [2];
  FString local_68;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar6 = local_res10[0] != 0;
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pwVar4 = L"false";
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bVar6) {
    pwVar4 = L"true";
  }
  ::FString::FString(&local_28,pwVar4);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  iVar3 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_40 + -1 + iVar5 + iVar3;
  if ((int)local_40 == 0) {
    iVar2 = iVar5 + iVar3;
  }
  iVar5 = (int)local_30;
  if ((int)local_30 == 0) {
    iVar5 = 1;
  }
  ::FString::Empty(&local_68,iVar2 + iVar5);
  iVar3 = 0;
  iVar5 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar5 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_38,iVar5);
  iVar5 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar5 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_48,iVar5);
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = iVar3;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
  iVar5 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar5 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_58,iVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execBuildString_Color @ 147dd7e50

void __cdecl
UKismetStringLibrary::execBuildString_Color(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_78;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLinearColor::ToString((FLinearColor *)&local_18._s_0,&local_38);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_50 + -1 + iVar4 + iVar3;
  if ((int)local_50 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_40;
  if ((int)local_40 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_78,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_48,iVar4);
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_58,iVar4);
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_68,iVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_78) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_78.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_78.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execBuildString_Double @ 147dd80f0

void __cdecl
UKismetStringLibrary::execBuildString_Double(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double local_res10;
  FString local_58;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::SanitizeFloat(&local_18,local_res10,1);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_30 + -1 + iVar4 + iVar3;
  if ((int)local_30 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_20;
  if ((int)local_20 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_58,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_20 + -1;
  if ((int)local_20 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_28,iVar4);
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_38,iVar4);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_48,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execBuildString_Int @ 147dd8380

void __cdecl
UKismetStringLibrary::execBuildString_Int(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_res10 [2];
  FString local_58;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_18,L"%d");
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_30 + -1 + iVar4 + iVar3;
  if ((int)local_30 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_20;
  if ((int)local_20 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_58,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_20 + -1;
  if ((int)local_20 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_28,iVar4);
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_38,iVar4);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_48,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execBuildString_IntVector2 @ 147dd8610

void __cdecl
UKismetStringLibrary::execBuildString_IntVector2(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TIntVector2<int>_u_0 local_res10;
  TIntVector2<int>_u_0 local_res18 [2];
  FString local_68;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10;
  UE::Math::TIntVector2<int>::ToString((TIntVector2<int> *)&local_res18[0]._s_0,&local_28);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_40 + -1 + iVar4 + iVar3;
  if ((int)local_40 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_30;
  if ((int)local_30 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_68,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_38,iVar4);
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_48,iVar4);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_58,iVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execBuildString_IntVector @ 147dd8890

void __cdecl
UKismetStringLibrary::execBuildString_IntVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  int local_70;
  TIntVector3<int>_u_0 local_68;
  FString local_58;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_68._0_8_ = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68._s_0.Z = local_70;
  UE::Math::TIntVector3<int>::ToString((TIntVector3<int> *)&local_68._s_0,&local_18);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_30 + -1 + iVar4 + iVar3;
  if ((int)local_30 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_20;
  if ((int)local_20 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_58,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_20 + -1;
  if ((int)local_20 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_28,iVar4);
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_38,iVar4);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_58,local_48,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execBuildString_Name @ 147dd8b30

void __cdecl
UKismetStringLibrary::execBuildString_Name(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FName local_res10;
  FName local_res18 [2];
  FString local_68;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10;
  ::FName::ToString(local_res18,&local_28);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_40 + -1 + iVar4 + iVar3;
  if ((int)local_40 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_30;
  if ((int)local_30 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_68,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_38,iVar4);
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_48,iVar4);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_58,iVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execBuildString_Object @ 147dd8dc0

void __cdecl
UKismetStringLibrary::execBuildString_Object(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  longlong local_res10;
  FName local_res18 [2];
  FString local_88;
  wchar_t *local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_78 = (wchar_t *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    pFVar4 = ::FString::FString(&local_38,L"None");
    FVar6.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_res18[0] = *(FName *)(local_res10 + 0x18);
    ::FName::ToString(local_res18,&local_48);
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  iVar7 = 0;
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = iVar7;
  }
  iVar8 = (int)local_70 + -1;
  if ((int)local_70 == 0) {
    iVar8 = iVar7;
  }
  iVar3 = (int)local_60 + -1 + iVar8 + iVar5;
  if ((int)local_60 == 0) {
    iVar3 = iVar8 + iVar5;
  }
  iVar8 = (int)local_50;
  if ((int)local_50 == 0) {
    iVar8 = 1;
  }
  ::FString::Empty(&local_88,iVar3 + iVar8);
  iVar8 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(&local_88,local_58,iVar8);
  iVar7 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar7 = 0;
  }
  ::FString::AppendChars(&local_88,local_68,iVar7);
  ::FString::AppendChars(&local_88,(wchar_t *)FVar6.Data,iVar5);
  iVar5 = (int)local_70 + -1;
  if ((int)local_70 == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_88,local_78,iVar5);
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execBuildString_Rotator @ 147dd9070

void __cdecl
UKismetStringLibrary::execBuildString_Rotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_78;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  FString local_38;
  undefined1 local_28 [32];
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_38,L"P=%f Y=%f R=%f");
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_50 + -1 + iVar4 + iVar3;
  if ((int)local_50 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_40;
  if ((int)local_40 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_78,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_48,iVar4);
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_58,iVar4);
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_68,iVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_78) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_78.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_78.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execBuildString_Vector2d @ 147dd9320

void __cdecl
UKismetStringLibrary::execBuildString_Vector2d(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_68;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  undefined1 local_18 [16];
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_40 + -1 + iVar4 + iVar3;
  if ((int)local_40 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_30;
  if ((int)local_30 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_68,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_38,iVar4);
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_48,iVar4);
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_68,local_58,iVar4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execBuildString_Vector @ 147dd95d0

void __cdecl
UKismetStringLibrary::execBuildString_Vector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_78;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  FString local_38;
  undefined1 local_28 [32];
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  iVar3 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)local_50 + -1 + iVar4 + iVar3;
  if ((int)local_50 == 0) {
    iVar2 = iVar4 + iVar3;
  }
  iVar4 = (int)local_40;
  if ((int)local_40 == 0) {
    iVar4 = 1;
  }
  ::FString::Empty(&local_78,iVar2 + iVar4);
  iVar3 = 0;
  iVar4 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_48,iVar4);
  iVar4 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_58,iVar4);
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar4);
  iVar4 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar4 = iVar3;
  }
  ::FString::AppendChars(&local_78,local_68,iVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_78) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_78.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_78.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execConcat_StrStr @ 147de0360

void __cdecl UKismetStringLibrary::execConcat_StrStr(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_38;
  wchar_t *local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = 0;
  iVar3 = (int)local_20 + -1;
  if ((int)local_20 == 0) {
    iVar3 = iVar4;
  }
  iVar2 = (int)local_10;
  if ((int)local_10 == 0) {
    iVar2 = 1;
  }
  ::FString::Empty(&local_38,iVar3 + iVar2);
  iVar3 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar3 = iVar4;
  }
  ::FString::AppendChars(&local_38,local_18,iVar3);
  iVar3 = (int)local_20 + -1;
  if ((int)local_20 == 0) {
    iVar3 = iVar4;
  }
  ::FString::AppendChars(&local_38,local_28,iVar3);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execContains @ 147de04f0

void __cdecl UKismetStringLibrary::execContains(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  int iVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [4];
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar3 = (int)local_30 + -1;
  pwVar2 = local_38;
  if ((int)local_30 == 0) {
    iVar3 = 0;
    pwVar2 = L"";
  }
  iVar3 = ::FString::Find(&local_28,pwVar2,iVar3,bVar4 ^ IgnoreCase,(uint)(local_res18[0] != 0),-1);
  *(bool *)param_3 = iVar3 != -1;
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_BoolToString @ 147de08e0

void __cdecl
UKismetStringLibrary::execConv_BoolToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  int local_res10 [2];
  FString local_18;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pwVar2 = L"false";
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    pwVar2 = L"true";
  }
  ::FString::FString(&local_18,pwVar2);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_BoxCenterAndExtentsToString @ 147de0ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetStringLibrary::execConv_BoxCenterAndExtentsToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  uchar *puVar3;
  undefined1 auStack_e8 [32];
  double local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  uchar local_88 [48];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_c8 = __real_3fe0000000000000;
  puVar3 = local_88;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = (*(double *)(puVar3 + 0x28) - *(double *)(puVar3 + 0x10)) * local_c8;
  dVar2 = local_c8 + *(double *)(puVar3 + 0x10);
  ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
  local_c8 = dVar2;
  ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_b8,L"Center: %s Extents: %s ");
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_b8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_b8.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_b8.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_b8.Data.ArrayMax;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_BoxToString @ 147de0cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetStringLibrary::execConv_BoxToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  uchar *puVar3;
  undefined1 auStack_b8 [32];
  FScriptContainerElement *local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  uchar local_58 [48];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar3 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98 = *(FScriptContainerElement **)(puVar3 + 0x28);
  ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
  local_98 = *(FScriptContainerElement **)(puVar3 + 0x10);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
  local_98 = FVar2.Data;
  ::FString::PrintfImpl(&local_88,L"IsValid=%s, Min=(%s), Max=(%s)");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_ByteToString @ 147de1060

void __cdecl
UKismetStringLibrary::execConv_ByteToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  FString local_18;
  
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
  ::FString::PrintfImpl(&local_18,L"%d");
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_ColorToString @ 147de1440

void __cdecl
UKismetStringLibrary::execConv_ColorToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FLinearColor::ToString((FLinearColor *)&local_18._s_0,&local_38);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_DoubleToString @ 147de1960

void __cdecl
UKismetStringLibrary::execConv_DoubleToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_res10;
  FString local_18;
  
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::SanitizeFloat(&local_18,local_res10,1);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_InputDeviceIdToString @ 147de1fd0

void __cdecl
UKismetStringLibrary::execConv_InputDeviceIdToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  FString local_18;
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_18,L"%d");
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_Int64ToString @ 147de2270

void __cdecl
UKismetStringLibrary::execConv_Int64ToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  FString local_18;
  
  local_res10 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_18,L"%lld");
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_IntPointToString @ 147de2550

void __cdecl
UKismetStringLibrary::execConv_IntPointToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  FString local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_18,L"X=%d Y=%d");
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_IntToString @ 147de2a50

void __cdecl
UKismetStringLibrary::execConv_IntToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  FString local_18;
  
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
  ::FString::PrintfImpl(&local_18,L"%d");
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_IntVector2ToString @ 147de2dc0

void __cdecl
UKismetStringLibrary::execConv_IntVector2ToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TIntVector2<int>_u_0 local_res10;
  TIntVector2<int>_u_0 local_res18;
  FString local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  UE::Math::TIntVector2<int>::ToString((TIntVector2<int> *)&local_res18._s_0,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_IntVectorToString @ 147de2f40

void __cdecl
UKismetStringLibrary::execConv_IntVectorToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_38;
  int local_30;
  TIntVector3<int>_u_0 local_28;
  FString local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._0_8_ = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.Z = local_30;
  UE::Math::TIntVector3<int>::ToString((TIntVector3<int> *)&local_28._s_0,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_MatrixToString @ 147de34a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetStringLibrary::execConv_MatrixToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  FString local_c8;
  FString local_b8;
  uchar local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  puVar2 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = *(undefined8 *)(puVar2 + 0x10);
  uStack_d0 = *(undefined8 *)(puVar2 + 0x18);
  ::FString::PrintfImpl(&local_c8,L"[%g %g %g %g] ");
  iVar3 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_b8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar3);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_d8 = *(undefined8 *)(puVar2 + 0x30);
  uStack_d0 = *(undefined8 *)(puVar2 + 0x38);
  ::FString::PrintfImpl(&local_c8,L"[%g %g %g %g] ");
  iVar3 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_b8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar3);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_d8 = *(undefined8 *)(puVar2 + 0x50);
  uStack_d0 = *(undefined8 *)(puVar2 + 0x58);
  ::FString::PrintfImpl(&local_c8,L"[%g %g %g %g] ");
  iVar3 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_b8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar3);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_d8 = *(undefined8 *)(puVar2 + 0x70);
  uStack_d0 = *(undefined8 *)(puVar2 + 0x78);
  ::FString::PrintfImpl(&local_c8,L"[%g %g %g %g] ");
  iVar3 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_b8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar3);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_b8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_b8.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_b8.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_b8.Data.ArrayMax;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_NameToString @ 147de3800

void __cdecl
UKismetStringLibrary::execConv_NameToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  FName local_res18;
  FString local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_res10;
  ::FName::ToString(&local_res18,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_ObjectToString @ 147de3e50

void __cdecl
UKismetStringLibrary::execConv_ObjectToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  FString *pFVar5;
  bool bVar6;
  longlong local_res10;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  undefined1 local_38 [16];
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar6 = local_res10 == 0;
  if (bVar6) {
    pFVar5 = ::FString::FString(&local_48,L"None");
  }
  else {
    local_res18[0] = *(FName *)(local_res10 + 0x18);
    ::FName::ToString(local_res18,&local_58);
    pFVar5 = &local_58;
  }
  pFVar4 = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar2 = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar6) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar6) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (param_3 == local_38) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = pFVar4;
    *(int *)((longlong)param_3 + 8) = iVar1;
    *(int *)((longlong)param_3 + 0xc) = iVar2;
  }
  return;
}

// execConv_PlatformUserIdToString @ 147de40b0

void __cdecl
UKismetStringLibrary::execConv_PlatformUserIdToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  FString local_18;
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_18,L"%d");
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_RotatorToString @ 147de4510

void __cdecl
UKismetStringLibrary::execConv_RotatorToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_38;
  undefined1 local_28 [32];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_38,L"P=%f Y=%f R=%f");
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_StringToColor @ 147de5220

void __cdecl
UKismetStringLibrary::execConv_StringToColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FLinearColor *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FLinearColor *this;
  uchar local_res10 [8];
  FString local_28;
  FLinearColor local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar1 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_18;
  if (pFVar1 != (FLinearColor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FLinearColor::InitFromString(this,&local_28);
  *puVar4 = bVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_StringToDouble @ 147de5370

void __cdecl
UKismetStringLibrary::execConv_StringToDouble(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *_Str;
  double dVar2;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Str = L"";
  if ((int)local_10 != 0) {
    _Str = local_18;
  }
  dVar2 = wcstod(_Str,(wchar_t **)0x0);
  *(double *)param_3 = dVar2;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execConv_StringToInt64 @ 147de5420

void __cdecl
UKismetStringLibrary::execConv_StringToInt64(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  wchar_t *_Str;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Str = L"";
  if ((int)local_10 != 0) {
    _Str = local_18;
  }
  lVar2 = _wtoi64(_Str);
  *(longlong *)param_3 = lVar2;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execConv_StringToInt @ 147de54d0

void __cdecl
UKismetStringLibrary::execConv_StringToInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *_Str;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Str = L"";
  if ((int)local_10 != 0) {
    _Str = local_18;
  }
  iVar2 = _wtoi(_Str);
  *(int *)param_3 = iVar2;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execConv_StringToName @ 147de5580

void __cdecl
UKismetStringLibrary::execConv_StringToName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  FName local_res10;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar2 = L"";
  if ((int)local_10 != 0) {
    pwVar2 = local_18;
  }
  ::FName::FName(&local_res10,pwVar2);
  *(FName *)param_3 = local_res10;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execConv_StringToRotator @ 147de5640

void __cdecl
UKismetStringLibrary::execConv_StringToRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar uVar4;
  wchar_t *pwVar5;
  uchar *puVar6;
  double *pdVar7;
  uchar local_res10 [8];
  wchar_t *local_48;
  undefined8 local_40;
  double local_38 [4];
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar7 = local_38;
  if (pdVar1 != (double *)0x0) {
    pdVar7 = pdVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar7[2] = 0.0;
  pdVar7[1] = 0.0;
  *pdVar7 = 0.0;
  pwVar5 = L"";
  if ((int)local_40 != 0) {
    pwVar5 = local_48;
  }
  bVar3 = FParse::Value(pwVar5,L"P=",pdVar7);
  if (bVar3) {
    pwVar5 = L"";
    if ((int)local_40 != 0) {
      pwVar5 = local_48;
    }
    bVar3 = FParse::Value(pwVar5,L"Y=",pdVar7 + 1);
    if (bVar3) {
      pwVar5 = L"";
      if ((int)local_40 != 0) {
        pwVar5 = local_48;
      }
      bVar3 = FParse::Value(pwVar5,L"R=",pdVar7 + 2);
      if (bVar3) {
        uVar4 = '\x01';
        goto LAB_147de57ce;
      }
    }
  }
  uVar4 = '\0';
LAB_147de57ce:
  *puVar6 = uVar4;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execConv_StringToVector2D @ 147de58f0

void __cdecl
UKismetStringLibrary::execConv_StringToVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar uVar4;
  wchar_t *pwVar5;
  uchar *puVar6;
  double *pdVar7;
  uchar local_res10 [8];
  wchar_t *local_38;
  undefined8 local_30;
  double local_28 [2];
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar7 = local_28;
  if (pdVar1 != (double *)0x0) {
    pdVar7 = pdVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar7[1] = 0.0;
  *pdVar7 = 0.0;
  pwVar5 = L"";
  if ((int)local_30 != 0) {
    pwVar5 = local_38;
  }
  bVar3 = FParse::Value(pwVar5,L"X=",pdVar7);
  if (bVar3) {
    pwVar5 = L"";
    if ((int)local_30 != 0) {
      pwVar5 = local_38;
    }
    bVar3 = FParse::Value(pwVar5,L"Y=",pdVar7 + 1);
    if (bVar3) {
      uVar4 = '\x01';
      goto LAB_147de5a53;
    }
  }
  uVar4 = '\0';
LAB_147de5a53:
  *puVar6 = uVar4;
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execConv_StringToVector3f @ 147de5a80

void __cdecl
UKismetStringLibrary::execConv_StringToVector3f(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar uVar4;
  wchar_t *pwVar5;
  uchar *puVar6;
  float *pfVar7;
  uchar local_res10 [8];
  float local_38 [4];
  wchar_t *local_28;
  undefined8 local_20;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar7 = local_38;
  if (pfVar1 != (float *)0x0) {
    pfVar7 = pfVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar7[1] = 0.0;
  pfVar7[2] = 0.0;
  *pfVar7 = 0.0;
  pwVar5 = L"";
  if ((int)local_20 != 0) {
    pwVar5 = local_28;
  }
  bVar3 = FParse::Value(pwVar5,L"X=",pfVar7);
  if (bVar3) {
    pwVar5 = L"";
    if ((int)local_20 != 0) {
      pwVar5 = local_28;
    }
    bVar3 = FParse::Value(pwVar5,L"Y=",pfVar7 + 1);
    if (bVar3) {
      pwVar5 = L"";
      if ((int)local_20 != 0) {
        pwVar5 = local_28;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",pfVar7 + 2);
      if (bVar3) {
        uVar4 = '\x01';
        goto LAB_147de5c09;
      }
    }
  }
  uVar4 = '\0';
LAB_147de5c09:
  *puVar6 = uVar4;
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execConv_StringToVector @ 147de5c40

void __cdecl
UKismetStringLibrary::execConv_StringToVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar uVar4;
  wchar_t *pwVar5;
  uchar *puVar6;
  double *pdVar7;
  uchar local_res10 [8];
  wchar_t *local_48;
  undefined8 local_40;
  double local_38 [4];
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar7 = local_38;
  if (pdVar1 != (double *)0x0) {
    pdVar7 = pdVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar7[2] = 0.0;
  pdVar7[1] = 0.0;
  *pdVar7 = 0.0;
  pwVar5 = L"";
  if ((int)local_40 != 0) {
    pwVar5 = local_48;
  }
  bVar3 = FParse::Value(pwVar5,L"X=",pdVar7);
  if (bVar3) {
    pwVar5 = L"";
    if ((int)local_40 != 0) {
      pwVar5 = local_48;
    }
    bVar3 = FParse::Value(pwVar5,L"Y=",pdVar7 + 1);
    if (bVar3) {
      pwVar5 = L"";
      if ((int)local_40 != 0) {
        pwVar5 = local_48;
      }
      bVar3 = FParse::Value(pwVar5,L"Z=",pdVar7 + 2);
      if (bVar3) {
        uVar4 = '\x01';
        goto LAB_147de5dce;
      }
    }
  }
  uVar4 = '\0';
LAB_147de5dce:
  *puVar6 = uVar4;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execConv_TransformToString @ 147de60d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetStringLibrary::execConv_TransformToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ForAnyElementType FVar14;
  double *pdVar15;
  undefined1 auStack_148 [32];
  FScriptContainerElement *local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  double local_d8;
  TRotator<double> local_d0;
  TQuat<double> local_b8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98._8_4_ = SUB84((double)fVar5,0);
  local_98._0_8_ = (double)fVar2;
  local_98._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_88._8_4_ = SUB84((double)fVar11,0);
  local_88._0_8_ = (double)fVar8;
  local_88._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_78._8_4_ = SUB84((double)fVar6,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar12,0);
  local_68._0_8_ = (double)fVar9;
  local_68._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_58._8_4_ = SUB84((double)fVar7,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_48._8_4_ = SUB84((double)fVar13,0);
  local_48._0_8_ = (double)fVar10;
  local_48._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pdVar15 = (double *)local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_128 = (FScriptContainerElement *)pdVar15[10];
  local_d8 = (double)local_128;
  ::FString::PrintfImpl(&local_e8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  local_b8.X = *pdVar15;
  local_b8.Y = pdVar15[1];
  local_b8.Z = pdVar15[2];
  local_b8.W = pdVar15[3];
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar14.Data = local_e8.Data.AllocatorInstance.Data;
  }
  UE::Math::TQuat<double>::Rotator(&local_b8,&local_d0);
  local_128 = (FScriptContainerElement *)local_d0.Roll;
  ::FString::PrintfImpl(&local_f8,L"P=%f Y=%f R=%f");
  local_128 = (FScriptContainerElement *)pdVar15[6];
  ::FString::PrintfImpl(&local_108,L"X=%3.3f Y=%3.3f Z=%3.3f");
  local_128 = FVar14.Data;
  ::FString::PrintfImpl(&local_118,L"Translation: %s Rotation: %s Scale: %s");
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_118) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_118.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_118.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_118.Data.ArrayMax;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_Vector2dToString @ 147de6690

void __cdecl
UKismetStringLibrary::execConv_Vector2dToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  undefined1 local_18 [16];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_Vector3fToString @ 147de6950

void __cdecl
UKismetStringLibrary::execConv_Vector3fToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_28 [16];
  FString local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_VectorToString @ 147de6e90

void __cdecl
UKismetStringLibrary::execConv_VectorToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_38;
  undefined1 local_28 [32];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execCullArray @ 147de94c0

void __cdecl UKismetStringLibrary::execCullArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = ::FString::CullArray(pTVar3);
  *(int *)param_3 = iVar2;
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execEndsWith @ 147df01d0

void __cdecl UKismetStringLibrary::execEndsWith(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  byte local_res10 [8];
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
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
  iVar4 = (int)local_20 + -1;
  pwVar2 = local_28;
  if ((int)local_20 == 0) {
    iVar4 = 0;
    pwVar2 = L"";
  }
  bVar3 = ::FString::EndsWith(&local_18,pwVar2,iVar4,(uint)local_res10[0]);
  *(bool *)param_3 = bVar3;
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEqualEqual_StrStr @ 147df2170

void __cdecl
UKismetStringLibrary::execEqualEqual_StrStr(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *_Str1;
  wchar_t *_Str2;
  wchar_t *pwVar4;
  wchar_t *local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pwVar2 = local_18;
  pwVar4 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Str2 = L"";
  if ((int)local_10 != 0) {
    _Str2 = local_18;
  }
  _Str1 = L"";
  if ((int)local_20 != 0) {
    _Str1 = local_28;
  }
  iVar3 = wcscmp(_Str1,_Str2);
  *(bool *)param_3 = iVar3 == 0;
  if (pwVar2 != (wchar_t *)0x0) {
    FMemory::Free(pwVar2);
    pwVar4 = local_28;
  }
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  return;
}

// execEqualEqual_StriStri @ 147df2290

void __cdecl
UKismetStringLibrary::execEqualEqual_StriStri(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar4 = L"";
  if ((int)local_20 != 0) {
    pwVar4 = local_28;
  }
  pwVar3 = L"";
  if ((int)local_10 != 0) {
    pwVar3 = local_18;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
  *(bool *)param_3 = iVar2 == 0;
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execFindSubstring @ 147df5800

void __cdecl UKismetStringLibrary::execFindSubstring(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  wchar_t *local_48;
  undefined8 local_40;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res20[0] = 0;
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
  pwVar3 = L"";
  if ((int)local_40 != 0) {
    pwVar3 = local_48;
  }
  iVar2 = (int)local_40 + -1;
  if ((int)local_40 == 0) {
    iVar2 = 0;
  }
  iVar2 = ::FString::Find(&local_38,pwVar3,iVar2,bVar4 ^ IgnoreCase,(uint)bVar5,local_res20[0]);
  *(int *)param_3 = iVar2;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCharacterArrayFromString @ 147df7b40

void __cdecl
UKismetStringLibrary::execGetCharacterArrayFromString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  wchar_t local_res10 [4];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  FString local_28;
  
  uVar7 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_3c = 0;
  local_40 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (1 < (int)local_30) {
    for (; (-1 < (int)uVar7 && ((int)uVar7 < (int)local_30)); uVar7 = uVar7 + 1) {
      uVar4 = 0;
      if ((int)uVar7 < (int)local_30) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res10[0] = *(wchar_t *)((longlong)local_38 + (longlong)(int)uVar7 * 2);
      pFVar5 = (FScriptContainerElement *)::FString::ConstructFromPtrSize(&local_28,local_res10,1);
      if (((local_48.Data <= pFVar5) && (pFVar5 < local_48.Data + (longlong)local_3c * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_48,&local_3c);
      }
      iVar8 = local_40 + 1;
      pFVar6 = local_48.Data + (longlong)local_40 * 0x10;
      *(undefined8 *)pFVar6 = 0;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar5;
      *(undefined8 *)pFVar5 = 0;
      *(int *)(pFVar6 + 8) = *(int *)(pFVar5 + 8);
      *(int *)(pFVar6 + 0xc) = *(int *)(pFVar5 + 0xc);
      *(undefined8 *)(pFVar5 + 8) = 0;
      local_40 = iVar8;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    iVar8 = local_40 + -1;
    if ((iVar8 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = local_48.Data + (longlong)iVar8 * 0x10;
    DestructItems<FString,int>((FString *)pFVar5,1);
    iVar8 = (local_40 - iVar8) + -1;
    if (iVar8 != 0) {
      memmove(pFVar5,pFVar5 + 0x10,(longlong)iVar8 << 4);
    }
    local_40 = local_40 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_48,local_40,&local_3c);
  }
  if (param_3 != &local_48) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(int *)((longlong)param_3 + 8) = local_40;
    *(int *)((longlong)param_3 + 0xc) = local_3c;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_3c = 0;
  }
  DestructItems<FString,int>((FString *)local_48.Data,local_40);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetCharacterAsNumber @ 147df7e70

void __cdecl
UKismetStringLibrary::execGetCharacterAsNumber(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res10 [2];
  void *local_18;
  undefined8 local_10;
  
  uVar6 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  lVar5 = (longlong)(int)local_res10[0];
  if (-1 < (int)local_res10[0]) {
    iVar4 = (int)local_10 + -1;
    if ((int)local_10 == 0) {
      iVar4 = 0;
    }
    if ((int)local_res10[0] < iVar4) {
      uVar6 = 0;
      if ((int)local_res10[0] < (int)local_10) {
        uVar6 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (uint)*(ushort *)((longlong)local_18 + lVar5 * 2);
    }
  }
  *(uint *)param_3 = uVar6;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetSubstring @ 147dff000

void __cdecl UKismetStringLibrary::execGetSubstring(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res18 [4];
  FString local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [16];
  
  pFVar5 = (FScriptContainerElement *)0x0;
  local_res10[0] = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar6 = local_res10[0] < 0;
  if (bVar6) {
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pFVar4 = &local_58;
  }
  else {
    pFVar4 = ::FString::Mid(&local_68,&local_48,local_res18[0],local_res10[0]);
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  }
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar2 = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (bVar6) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (param_3 == local_38) {
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  else {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = pFVar5;
    *(int *)((longlong)param_3 + 8) = iVar1;
    *(int *)((longlong)param_3 + 0xc) = iVar2;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsEmpty @ 147e049b0

void __cdecl UKismetStringLibrary::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = (int)local_10 < 2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execIsNumeric @ 147e04ee0

void __cdecl UKismetStringLibrary::execIsNumeric(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ::FString::IsNumeric(&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execJoinStringArray @ 147e069d0

void __cdecl
UKismetStringLibrary::execJoinStringArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FString *pFVar6;
  size_t sVar7;
  FString *pFVar8;
  int iVar9;
  wchar_t *_Str;
  FString *pFVar10;
  FString **ppFVar11;
  undefined1 local_res10 [8];
  FString *local_res18;
  FString local_68;
  FString *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  
  local_58 = (FString *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  ppFVar11 = &local_58;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar11 = (FString **)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar5 = true;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Str = L"";
  if ((int)local_40 != 0) {
    _Str = local_48;
  }
  iVar1 = *(int *)(ppFVar11 + 1);
  pFVar8 = *ppFVar11;
  pFVar10 = pFVar8 + iVar1;
  while( true ) {
    if (*(int *)(ppFVar11 + 1) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    pFVar6 = local_res18;
    if (pFVar8 == pFVar10) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      sVar7 = wcslen(_Str);
      ::FString::AppendChars(&local_68,_Str,(int)sVar7);
    }
    iVar2 = (pFVar8->Data).ArrayNum;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar9);
    pFVar8 = pFVar8 + 1;
  }
  if (local_res18 != &local_68) {
    pFVar4 = (local_res18->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (pFVar6->Data).ArrayNum = local_68.Data.ArrayNum;
    (pFVar6->Data).ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execLeft @ 147e0a770

void __cdecl UKismetStringLibrary::execLeft(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int local_res10 [2];
  FString local_28;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  iVar2 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar2 = 0;
  }
  if (local_res10[0] < iVar2) {
    iVar2 = local_res10[0];
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  pwVar3 = L"";
  if ((int)local_10 != 0) {
    pwVar3 = local_18;
  }
  ::FString::ConstructFromPtrSize(&local_28,pwVar3,iVar4);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execLeftChop @ 147e0a8d0

void __cdecl UKismetStringLibrary::execLeftChop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  int local_res10 [2];
  FString local_28;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  iVar2 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar2 = 0;
  }
  if (iVar2 - local_res10[0] < iVar2) {
    iVar2 = iVar2 - local_res10[0];
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar4 = iVar2;
  }
  pwVar3 = L"";
  if ((int)local_10 != 0) {
    pwVar3 = local_18;
  }
  ::FString::ConstructFromPtrSize(&local_28,pwVar3,iVar4);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execLeftPad @ 147e0aa30

void __cdecl UKismetStringLibrary::execLeftPad(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  ::FString::LeftPad(&local_18,&local_28,local_res10[0]);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execLen @ 147e0ab70

void __cdecl UKismetStringLibrary::execLen(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = (int)local_10 + -1;
  if ((int)local_10 == 0) {
    iVar2 = 0;
  }
  *(int *)param_3 = iVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execMatchesWildcard @ 147e15d30

void __cdecl
UKismetStringLibrary::execMatchesWildcard(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  byte local_res10 [8];
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
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
  iVar4 = (int)local_20 + -1;
  pwVar2 = local_28;
  if ((int)local_20 == 0) {
    iVar4 = 0;
    pwVar2 = L"";
  }
  bVar3 = ::FString::MatchesWildcard(&local_18,pwVar2,iVar4,(uint)local_res10[0]);
  *(bool *)param_3 = bVar3;
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMid @ 147e1a060

void __cdecl UKismetStringLibrary::execMid(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res18 [4];
  FString local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [16];
  
  pFVar5 = (FScriptContainerElement *)0x0;
  local_res10[0] = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar6 = local_res10[0] < 0;
  if (bVar6) {
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pFVar4 = &local_58;
  }
  else {
    pFVar4 = ::FString::Mid(&local_68,&local_48,local_res18[0],local_res10[0]);
    pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
  }
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar2 = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (bVar6) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (param_3 == local_38) {
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  else {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = pFVar5;
    *(int *)((longlong)param_3 + 8) = iVar1;
    *(int *)((longlong)param_3 + 0xc) = iVar2;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execNotEqual_StrStr @ 147e1f7b0

void __cdecl
UKismetStringLibrary::execNotEqual_StrStr(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *_Str1;
  wchar_t *_Str2;
  wchar_t *pwVar4;
  wchar_t *local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pwVar2 = local_18;
  pwVar4 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Str2 = L"";
  if ((int)local_10 != 0) {
    _Str2 = local_18;
  }
  _Str1 = L"";
  if ((int)local_20 != 0) {
    _Str1 = local_28;
  }
  iVar3 = wcscmp(_Str1,_Str2);
  *(bool *)param_3 = iVar3 != 0;
  if (pwVar2 != (wchar_t *)0x0) {
    FMemory::Free(pwVar2);
    pwVar4 = local_28;
  }
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  return;
}

// execNotEqual_StriStri @ 147e1f8d0

void __cdecl
UKismetStringLibrary::execNotEqual_StriStri(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar4 = L"";
  if ((int)local_20 != 0) {
    pwVar4 = local_28;
  }
  pwVar3 = L"";
  if ((int)local_10 != 0) {
    pwVar3 = local_18;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,pwVar4);
  *(bool *)param_3 = iVar2 != 0;
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execParseIntoArray @ 147e206c0

void __cdecl
UKismetStringLibrary::execParseIntoArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_20 != 0) {
    pwVar3 = local_28;
  }
  ::FString::ParseIntoArray(&local_18,&local_38,pwVar3,local_res10[0] != 0);
  if (param_3 == &local_38) {
    iVar2 = local_38.ArrayNum;
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.ArrayMax;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    iVar2 = 0;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,iVar2);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execReplace @ 147e2ada0

void __cdecl UKismetStringLibrary::execReplace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  byte local_res10 [8];
  FString local_48;
  wchar_t *local_38;
  undefined8 local_30;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  pwVar3 = L"";
  if ((int)local_30 != 0) {
    pwVar3 = local_38;
  }
  pwVar2 = L"";
  if ((int)local_20 != 0) {
    pwVar2 = local_28;
  }
  ::FString::Replace(&local_18,&local_48,pwVar2,pwVar3,(uint)local_res10[0]);
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
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execReplaceInline @ 147e2af90

void __cdecl UKismetStringLibrary::execReplaceInline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t *pwVar3;
  FString *this;
  wchar_t *pwVar4;
  byte local_res10 [8];
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  this = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
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
  pwVar4 = L"";
  if ((int)local_40 != 0) {
    pwVar4 = local_48;
  }
  pwVar3 = L"";
  if ((int)local_30 != 0) {
    pwVar3 = local_38;
  }
  iVar2 = ::FString::ReplaceInline(this,pwVar3,pwVar4,(uint)local_res10[0]);
  *(int *)param_3 = iVar2;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execReverse @ 147e2b860

void __cdecl UKismetStringLibrary::execReverse(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  FString local_28;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_10;
  local_28.Data.ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    local_28.Data._8_8_ = local_10 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,(ForAnyElementType *)&local_28,(int)local_10,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::FString::ReverseString(&local_28);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execRight @ 147e2b9b0

void __cdecl UKismetStringLibrary::execRight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_res10 [2];
  FString local_28;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  iVar5 = (int)local_10 + -1;
  pwVar2 = local_18;
  if ((int)local_10 == 0) {
    iVar5 = 0;
    pwVar2 = L"";
  }
  iVar4 = iVar5;
  if (local_res10[0] < iVar5) {
    iVar4 = local_res10[0];
  }
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  ::FString::FString(&local_28,pwVar2 + ((longlong)iVar5 - (longlong)iVar3));
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execRightChop @ 147e2bb20

void __cdecl UKismetStringLibrary::execRightChop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  ::FString::RightChop(&local_18,&local_28,local_res10[0]);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRightPad @ 147e2bc60

void __cdecl UKismetStringLibrary::execRightPad(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
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
  ::FString::RightPad(&local_18,&local_28,local_res10[0]);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSplit @ 147e37220

void __cdecl UKismetStringLibrary::execSplit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  byte local_res10 [8];
  byte local_res18 [16];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar4 = &local_58;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18[0] = 0;
  pFVar3 = &local_68;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  bVar2 = ::FString::Split(&local_38,&local_48,pFVar4,pFVar3,(uint)local_res18[0],
                           (uint)local_res10[0]);
  *(bool *)param_3 = bVar2;
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

// execStartsWith @ 147e37630

void __cdecl UKismetStringLibrary::execStartsWith(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  byte local_res10 [8];
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
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
  iVar4 = (int)local_20 + -1;
  pwVar2 = local_28;
  if ((int)local_20 == 0) {
    iVar4 = 0;
    pwVar2 = L"";
  }
  bVar3 = ::FString::StartsWith(&local_18,pwVar2,iVar4,(uint)local_res10[0]);
  *(bool *)param_3 = bVar3;
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execTimeSecondsToString @ 147e398a0

void __cdecl
UKismetStringLibrary::execTimeSecondsToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 in_XMM2 [16];
  uint uVar2;
  float local_res10 [2];
  FString local_28 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = (uint)local_res10[0] & __xmm_7fffffff7fffffff7fffffff7fffffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  roundps(in_XMM2,ZEXT416(uVar2),1);
  ::FString::PrintfImpl(local_28,L"%s%02d:%02d.%02d");
  if (param_3 != local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28[0].Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28[0].Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28[0].Data.ArrayMax;
    local_28[0].Data.ArrayNum = 0;
    local_28[0].Data.ArrayMax = 0;
    local_28[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// execToLower @ 147e39fa0

void __cdecl UKismetStringLibrary::execToLower(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ToLower(&local_18,&local_28);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execToUpper @ 147e3a3a0

void __cdecl UKismetStringLibrary::execToUpper(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::ToUpper(&local_18,&local_28);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execTrim @ 147e3afb0

void __cdecl UKismetStringLibrary::execTrim(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::TrimStart(&local_18,&local_28);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execTrimTrailing @ 147e3b0a0

void __cdecl UKismetStringLibrary::execTrimTrailing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::TrimEnd(&local_18,&local_28);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

