// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// StaticClass @ 14dcf4cd0

UClass * __cdecl UMovieGraphMetadataAttributeCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMetadataAttributeCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMetadataAttributeCollection",
               &Z_Registration_Info_UClass_UMovieGraphMetadataAttributeCollection.InnerSingleton,
               StaticRegisterNativesUMovieGraphMetadataAttributeCollection,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMetadataAttributeCollection>,
               InternalVTableHelperCtorCaller<UMovieGraphMetadataAttributeCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMetadataAttributeCollection.InnerSingleton;
}

// UMovieGraphMetadataAttributeCollection @ 14dd0ac20

UMovieGraphMetadataAttributeCollection * __thiscall
UMovieGraphMetadataAttributeCollection::UMovieGraphMetadataAttributeCollection
          (UMovieGraphMetadataAttributeCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  (this->MetadataAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataAttributes).ArrayNum = 0;
  (this->MetadataAttributes).ArrayMax = 0;
  return this;
}

// UMovieGraphMetadataAttributeCollection @ 14dd0ac60

UMovieGraphMetadataAttributeCollection * __thiscall
UMovieGraphMetadataAttributeCollection::UMovieGraphMetadataAttributeCollection
          (UMovieGraphMetadataAttributeCollection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  (this->MetadataAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataAttributes).ArrayNum = 0;
  (this->MetadataAttributes).ArrayMax = 0;
  return this;
}

// ~UMovieGraphMetadataAttributeCollection @ 14dd0dbc0

void __thiscall
UMovieGraphMetadataAttributeCollection::~UMovieGraphMetadataAttributeCollection
          (UMovieGraphMetadataAttributeCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieGraphTraversableObject__;
  DestructItems<FMovieGraphMetadataAttribute,int>
            ((FMovieGraphMetadataAttribute *)(this->MetadataAttributes).AllocatorInstance.Data,
             (this->MetadataAttributes).ArrayNum);
  pFVar1 = (this->MetadataAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieGraphTraversableObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetMergedProperties @ 14dd28510

/* WARNING: Removing unreachable block (ram,0x00014dd28685) */
/* WARNING: Removing unreachable block (ram,0x00014dd28694) */

TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphMetadataAttributeCollection::GetMergedProperties
          (UMovieGraphMetadataAttributeCollection *this,
          TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  piVar8 = (int *)this->_padding_;
  iVar2 = (int)this->_padding_;
  piVar1 = piVar8 + (longlong)iVar2 * 10;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieGraphMetadataAttribute_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (piVar8 == piVar1) break;
    if ((*(char *)&(((FString *)(piVar8 + 8))->Data).AllocatorInstance.Data != '\0') &&
       (1 < piVar8[2])) {
      ::FString::FString(&local_48,(FString *)piVar8);
      ::FString::FString(&local_38,(FString *)(piVar8 + 4));
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
         (((FScriptContainerElement *)&local_48 <
           pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x20 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
      *(undefined8 *)pFVar7 = 0;
      *(FScriptContainerElement **)pFVar7 = local_48.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + 8) = local_48.Data.ArrayNum;
      *(int *)(pFVar7 + 0xc) = local_48.Data.ArrayMax;
      *(undefined8 *)(pFVar7 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar7 + 0x10) = local_38.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + 0x18) = local_38.Data.ArrayNum;
      *(int *)(pFVar7 + 0x1c) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    piVar8 = piVar8 + 10;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd2cb00

UClass * __cdecl UMovieGraphMetadataAttributeCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphMetadataAttributeCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphMetadataAttributeCollection",
               &Z_Registration_Info_UClass_UMovieGraphMetadataAttributeCollection.InnerSingleton,
               StaticRegisterNativesUMovieGraphMetadataAttributeCollection,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphMetadataAttributeCollection>,
               InternalVTableHelperCtorCaller<UMovieGraphMetadataAttributeCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphMetadataAttributeCollection.InnerSingleton;
}

// Merge @ 14dd363b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014dd36636) */
/* WARNING: Removing unreachable block (ram,0x00014dd36644) */

void __thiscall
UMovieGraphMetadataAttributeCollection::Merge
          (UMovieGraphMetadataAttributeCollection *this,IMovieGraphTraversableObject *param_1)

{
  int *piVar1;
  bool *pbVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  FString *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  UClass *pUVar13;
  longlong lVar14;
  bool *pbVar15;
  int *piVar16;
  undefined1 auStack_128 [32];
  FString *local_108;
  FString *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined1 local_d7 [7];
  FString local_d0;
  FString local_c0;
  undefined1 local_b0;
  FString local_a8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1 != (IMovieGraphTraversableObject *)0x0) &&
     (lVar12 = (**(code **)((longlong)*param_1 + 8))(param_1), lVar12 != 0)) {
    pUVar13 = StaticClass();
    iVar5 = (int)pUVar13->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar5 * 8)
        == &pUVar13->_padding_)) goto LAB_14dd36441;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("MovieGraphMetadataAttributeCollection",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphSetMetadataAttributesNode.cpp"
                     ,0xd,
                     L"UMovieGraphMetadataAttributeCollection cannot merge with null or an object of another type."
                    );
  lVar12 = 0;
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14dd36441:
  iVar5 = (int)this->_padding_;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  pbVar15 = (bool *)this->_padding_;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  pbVar2 = pbVar15 + (longlong)iVar5 * 0x28;
  while( true ) {
    if ((int)this->_padding_ != iVar5) {
      local_d8 = 0;
      `TCheckedPointerIterator<FMovieGraphMetadataAttribute,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_d8);
    }
    if (pbVar15 == pbVar2) break;
    if ((pbVar15[0x20] != false) && (1 < *(int *)(pbVar15 + 8))) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_98,&local_a8,pbVar15);
    }
    pbVar15 = pbVar15 + 0x28;
  }
  lVar6 = *(longlong *)(lVar12 + 0x30);
  iVar5 = *(int *)(lVar12 + 0x38);
  piVar16 = (int *)(lVar6 + 8);
  while( true ) {
    if (*(int *)(lVar12 + 0x38) != iVar5) {
      local_d7[0] = 0;
      `TCheckedPointerIterator<FMovieGraphMetadataAttribute_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d7);
    }
    pFVar7 = (FString *)(piVar16 + -2);
    if (pFVar7 == (FString *)(lVar6 + (longlong)iVar5 * 0x28)) break;
    if (((char)piVar16[6] != '\0') && (1 < *piVar16)) {
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>
                         (*piVar16 + -1,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
      iVar11 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&local_98,uVar10,pFVar7);
      if (iVar11 == -1) {
        uVar4 = (undefined1)piVar16[6];
        ::FString::FString(&local_d0,pFVar7);
        ::FString::FString(&local_c0,(FString *)(piVar16 + 2));
        pFVar7 = (FString *)this->_padding_;
        local_b0 = uVar4;
        if ((pFVar7 <= &local_d0) &&
           (lVar14 = (longlong)*(int *)((longlong)&this->_padding_ + 4),
           &local_d0 < (FString *)((longlong)pFVar7 + lVar14 * 0x28))) {
          local_f0 = (longlong)(int)this->_padding_;
          local_e8 = 0x28;
          local_108 = &local_d0;
          local_100 = pFVar7;
          local_f8 = lVar14;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar11 = (int)this->_padding_;
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)&this->_padding_,piVar1);
          *(int *)&this->_padding_ = iVar11 + 1;
        }
        else {
          *(int *)&this->_padding_ = iVar11 + 1;
        }
        puVar3 = (undefined8 *)(this->_padding_ + (longlong)iVar11 * 0x28);
        *puVar3 = 0;
        *puVar3 = local_d0.Data.AllocatorInstance.Data;
        *(int *)(puVar3 + 1) = local_d0.Data.ArrayNum;
        *(int *)((longlong)puVar3 + 0xc) = local_d0.Data.ArrayMax;
        puVar3[2] = 0;
        puVar3[2] = local_c0.Data.AllocatorInstance.Data;
        *(int *)(puVar3 + 3) = local_c0.Data.ArrayNum;
        *(int *)((longlong)puVar3 + 0x1c) = local_c0.Data.ArrayMax;
        *(undefined1 *)(puVar3 + 4) = local_b0;
        local_c0.Data.ArrayNum = 0;
        local_c0.Data.ArrayMax = 0;
        local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    piVar16 = piVar16 + 10;
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// StaticRegisterNativesUMovieGraphMetadataAttributeCollection @ 14dd45260

void __cdecl
UMovieGraphMetadataAttributeCollection::StaticRegisterNativesUMovieGraphMetadataAttributeCollection
          (void)

{
  return;
}

// _getUObject @ 14dd4deb0

UObject * __thiscall
UMovieGraphMetadataAttributeCollection::_getUObject(UMovieGraphMetadataAttributeCollection *this)

{
  return (UObject *)&this[-1]._padding_;
}

