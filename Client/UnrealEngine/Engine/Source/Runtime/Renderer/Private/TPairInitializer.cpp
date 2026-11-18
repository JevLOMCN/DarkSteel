// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// operator<FString,TVariant<bool,float,int,unsigned_int,FString>_>_TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_> @ 1446fb770

TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_> * __thiscall
TPairInitializer<FString_&&,TVariant<bool,float,int,unsigned_int,FString>_&&>::
operator<FString,TVariant<bool,float,int,unsigned_int,FString>_>_TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>
          (TPairInitializer<FString_&&,TVariant<bool,float,int,unsigned_int,FString>_&&> *this,
          TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_> *__return_storage_ptr__)

{
  byte bVar1;
  FString *pFVar2;
  TVariant<bool,float,int,unsigned_int,FString> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_> *pTVar6;
  
  pFVar2 = this->Key;
  pTVar3 = this->Value;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar2->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  bVar1 = pTVar3->TypeIndex;
  __return_storage_ptr__->field_0x20 = bVar1;
  if (4 < bVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,float,int,unsigned_int,FString>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(&__return_storage_ptr__->field_0x10,pTVar3);
  return __return_storage_ptr__;
}

// operator<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_> @ 145512b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_> * __thiscall
TPairInitializer<ULightComponent_const_*_&,FScreenSpaceDenoiserHistory_*_&>::
operator<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>_TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>
          (TPairInitializer<ULightComponent_const_*_&,FScreenSpaceDenoiserHistory_*_&> *this,
          TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>
          *__return_storage_ptr__)

{
  FScreenSpaceDenoiserHistory **ppFVar1;
  FScreenSpaceDenoiserHistory *pFVar2;
  undefined8 *puVar3;
  
  ppFVar1 = this->Value;
  *(ULightComponent **)__return_storage_ptr__ = *this->Key;
  pFVar2 = *ppFVar1;
  *(FScreenSpaceDenoiserHistory **)&__return_storage_ptr__->field_0x8 = pFVar2;
  puVar3 = ::operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &
              ___7__TReferenceControllerWithDeleter_UFScreenSpaceDenoiserHistory__U__DefaultDeleter_UFScreenSpaceDenoiserHistory___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = pFVar2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// operator<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo> @ 145738430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo> * __thiscall
TPairInitializer<FPrimitiveComponentId_const_&,FViewDebugInfo::FPrimitiveInfo_const_&>::
operator<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>_TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>
          (TPairInitializer<FPrimitiveComponentId_const_&,FViewDebugInfo::FPrimitiveInfo_const_&>
           *this,TTuple<FPrimitiveComponentId,FViewDebugInfo::FPrimitiveInfo>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FPrimitiveInfo *pFVar3;
  FWeakObjectPtr FVar4;
  FPrimitiveLODStats *pFVar5;
  FScriptContainerElement *_Src;
  
  pFVar3 = this->Value;
  *(uint *)__return_storage_ptr__ = this->Key->PrimIDValue;
  FVar4 = (pFVar3->Owner).WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x8 = FVar4.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0xc = FVar4.ObjectSerialNumber;
  *(uint *)&__return_storage_ptr__->field_0x10 = (pFVar3->ComponentId).PrimIDValue;
  *(IPrimitiveComponent **)&__return_storage_ptr__->field_0x18 = pFVar3->ComponentInterface;
  FVar4 = (pFVar3->ComponentUObject).WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x20 = FVar4.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x24 = FVar4.ObjectSerialNumber;
  *(FPrimitiveSceneInfo **)&__return_storage_ptr__->field_0x28 = pFVar3->PrimitiveSceneInfo;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x30,&pFVar3->Name);
  puVar1 = &__return_storage_ptr__->field_0x40;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Stats).LODStats.ArrayNum;
  pFVar5 = (FPrimitiveLODStats *)(pFVar3->Stats).LODStats.AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x48 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x4c);
    ConstructItems<FPrimitiveLODStats,FPrimitiveLODStats,int>(*(void **)puVar1,pFVar5,iVar2);
  }
  puVar1 = &__return_storage_ptr__->field_0x50;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Materials).ArrayNum;
  _Src = (pFVar3->Materials).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x58 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x5c);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  FVar4 = (pFVar3->OverlayMaterial).WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x60 = FVar4.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x64 = FVar4.ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x68 = pFVar3->LODAtLastCapture;
  return __return_storage_ptr__;
}

