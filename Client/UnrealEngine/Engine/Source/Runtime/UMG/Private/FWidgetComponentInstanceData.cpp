// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// StaticStruct @ 146a46360

UScriptStruct * __cdecl FWidgetComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetComponentInstanceData,(UObject *)pUVar1,
                         L"WidgetComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetComponentInstanceData.OuterSingleton;
}

// ContainsData @ 146a463e0

bool __thiscall FWidgetComponentInstanceData::ContainsData(FWidgetComponentInstanceData *this)

{
  return true;
}

// ApplyToComponent @ 146a463f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FWidgetComponentInstanceData::ApplyToComponent
          (FWidgetComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  FSceneComponentInstanceData::ApplyToComponent((FSceneComponentInstanceData *)this,param_1,param_2)
  ;
  if (param_1 == (UActorComponent *)0x0) {
    pFVar3 = GetTypeName<UWidgetComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UWidgetComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    UWidgetComponent::ApplyComponentInstanceData((UWidgetComponent *)param_1,this);
    return;
  }
  pFVar3 = GetTypeName<UWidgetComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UActorComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AddReferencedObjects @ 146a46500

void __thiscall
FWidgetComponentInstanceData::AddReferencedObjects
          (FWidgetComponentInstanceData *this,FReferenceCollector *param_1)

{
  FSceneComponentInstanceData::AddReferencedObjects((FSceneComponentInstanceData *)this,param_1);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->WidgetClass,0,0);
                    /* WARNING: Could not recover jumptable at 0x000146a4654b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->RenderTarget,0,0);
  return;
}

// ~FWidgetComponentInstanceData @ 146a58280

void __thiscall
FWidgetComponentInstanceData::~FWidgetComponentInstanceData(FWidgetComponentInstanceData *this)

{
  this->_padding_ = (longlong)&___7FSceneComponentInstanceData__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  FInstanceCacheDataBase::~FInstanceCacheDataBase((FInstanceCacheDataBase *)this);
  return;
}

