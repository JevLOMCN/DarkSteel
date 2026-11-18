// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// ~FAIDataProviderValue @ 146ecc660

void __thiscall FAIDataProviderValue::~FAIDataProviderValue(FAIDataProviderValue *this)

{
  this->_padding_ = (longlong)&___7FAIDataProviderValue__6B_;
  return;
}

// StaticStruct @ 146f11f50

UScriptStruct * __cdecl FAIDataProviderValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderValue.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderValue,(UObject *)pUVar1,
                         L"AIDataProviderValue");
  }
  return Z_Registration_Info_UScriptStruct_FAIDataProviderValue.OuterSingleton;
}

// ValueToString @ 146f120d0

FString * __thiscall
FAIDataProviderValue::ValueToString(FAIDataProviderValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"??");
  return __return_storage_ptr__;
}

// BindData @ 146f35200

void __thiscall
FAIDataProviderValue::BindData(FAIDataProviderValue *this,UObject *param_1,int param_2)

{
  UAIDataProvider *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FProperty *pFVar5;
  undefined4 in_register_00000084;
  undefined1 local_res8 [8];
  
  pUVar1 = (this->DataBinding).field0_0x0.DebugPtr;
  if (pUVar1 != (UAIDataProvider *)0x0) {
    if (param_1 == (UObject *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1120252505884721189>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                         ,0x25,"Owner");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this->CachedProperty = (FProperty *)0x0;
      (**(code **)(*(longlong *)pUVar1 + 0x2b0))
                (pUVar1,param_1,CONCAT44(in_register_00000084,param_2));
      if ((this->DataField != (FName)0x0) &&
         (((pFVar5 = UStruct::FindPropertyByName
                               (*(UStruct **)&((this->DataBinding).field0_0x0.DebugPtr)->field_0x10,
                                this->DataField), pFVar5 != (FProperty *)0x0 &&
           (cVar4 = (**(code **)(this->_padding_ + 8))(this,pFVar5), cVar4 != '\0')) ||
          (bVar3 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res8), bVar3
          )))) {
        this->CachedProperty = pFVar5;
      }
    }
  }
  return;
}

// GetMatchingProperties @ 146f56e50

void __thiscall
FAIDataProviderValue::GetMatchingProperties
          (FAIDataProviderValue *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  UAIDataProvider *pUVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 local_18 [2];
  
  pUVar1 = (this->DataBinding).field0_0x0.DebugPtr;
  if (pUVar1 != (UAIDataProvider *)0x0) {
    for (pvVar2 = *(void **)(*(longlong *)&pUVar1->field_0x10 + 0x70); pvVar2 != (void *)0x0;
        pvVar2 = *(void **)((longlong)pvVar2 + 0x48)) {
      if (((*(byte *)((longlong)pvVar2 + 0x38) & 1) == 0) &&
         (cVar5 = (**(code **)(this->_padding_ + 8))(this,pvVar2), cVar5 != '\0')) {
        bVar6 = IsThisNotNull(pvVar2,"FField::GetFName");
        if (bVar6) {
          local_18[0] = *(undefined8 *)((longlong)pvVar2 + 0x20);
        }
        else {
          local_18[0] = 0;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
      }
    }
  }
  return;
}

// IsMatchingType @ 146f5b9a0

bool __thiscall FAIDataProviderValue::IsMatchingType(FAIDataProviderValue *this,FProperty *param_1)

{
  return true;
}

// ToString @ 146f7a500

FString * __thiscall
FAIDataProviderValue::ToString(FAIDataProviderValue *this,FString *__return_storage_ptr__)

{
  UAIDataProvider *pUVar1;
  undefined8 *puVar2;
  bool bVar3;
  void *local_28 [2];
  void *local_18 [2];
  
  pUVar1 = (this->DataBinding).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UAIDataProvider *)0x0;
  if (bVar3) {
    puVar2 = (undefined8 *)(**(code **)this->_padding_)(this,local_28);
  }
  else {
    puVar2 = (undefined8 *)
             (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,local_18,this->DataField);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar2;
  *puVar2 = 0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)(puVar2 + 1);
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (bVar3) {
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// operator() @ 1504ff500

bool __thiscall `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1120252505884721197>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1120252505884721197>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

