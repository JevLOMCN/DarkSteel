// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// FNiagaraRendererComponents @ 149333910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraRendererComponents * __thiscall
FNiagaraRendererComponents::FNiagaraRendererComponents
          (FNiagaraRendererComponents *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  int *piVar1;
  uint uVar2;
  USceneComponent *pUVar3;
  UNiagaraComponentRendererProperties *pUVar4;
  FWeakObjectPtr local_res8;
  USceneComponent *local_28 [2];
  
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FNiagaraRendererComponents__6B_;
  piVar1 = &(this->ComponentPool).ArrayMax;
  (this->TemplateKey).ObjectKey = (FObjectKey)0x0;
  (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ComponentPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentPool).ArrayNum = 0;
  *piVar1 = 0;
  pUVar4 = CastChecked<UNiagaraComponentRendererProperties_const_,UNiagaraRendererProperties_const_>
                     (param_2);
  pUVar3 = (pUVar4->TemplateComponent).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (USceneComponent *)0x0)) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (pUVar3 == (USceneComponent *)0x0) goto LAB_1493339db;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_28[0] = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_28);
LAB_1493339db:
  (this->TemplateKey).ObjectKey = (FObjectKey)local_res8;
  uVar2 = pUVar4->ComponentCountLimit;
  if (-1 < (int)uVar2) {
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar2,&(this->ComponentPool).AllocatorInstance,
                 (this->ComponentPool).ArrayNum,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ~FNiagaraRendererComponents @ 149336600

void __thiscall
FNiagaraRendererComponents::~FNiagaraRendererComponents(FNiagaraRendererComponents *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar1 = (this->ComponentPool).ArrayNum;
  this->_padding_ = (longlong)&___7FNiagaraRendererComponents__6B_;
  if (iVar1 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentPool.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererComponents.cpp"
                       ,0x121,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
            ((FComponentPoolEntry *)(this->ComponentPool).AllocatorInstance.Data,
             (this->ComponentPool).ArrayNum);
  pFVar2 = (this->ComponentPool).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  puVar3 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->_padding_);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->_padding_);
  return;
}

// operator() @ 149337cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  UObject *pUVar2;
  AActor *this_00;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)((longlong)this + 8);
  this_01 = *(FWeakObjectPtr **)this;
  pFVar3 = this_01 + (longlong)iVar1 * 0xd;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar1) {
      `TCheckedPointerIterator<FNiagaraRendererComponents::FComponentPoolEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pFVar3) break;
    pUVar2 = FWeakObjectPtr::Get(this_01);
    if (pUVar2 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2);
    }
    this_01 = this_01 + 0xd;
  }
  this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x10));
  if (this_00 != (AActor *)0x0) {
    AActor::Destroy(this_00,false,true);
  }
  return;
}

// DestroyRenderState_Concurrent @ 149345260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraRendererComponents::DestroyRenderState_Concurrent(FNiagaraRendererComponents *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  AActor *pAVar7;
  UWorld *pUVar8;
  UObject *pUVar9;
  UActorComponent *this_00;
  FWeakObjectPtr *pFVar10;
  FWeakObjectPtr *pFVar11;
  undefined1 local_res8 [8];
  code *local_58 [5];
  undefined8 *local_30;
  
  bVar6 = IsInGameThread();
  if (bVar6) {
    pAVar7 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
    if ((pAVar7 == (AActor *)0x0) || (pUVar8 = AActor::GetWorld(pAVar7), pUVar8 == (UWorld *)0x0)) {
      iVar2 = (this->ComponentPool).ArrayNum;
      pFVar10 = (FWeakObjectPtr *)(this->ComponentPool).AllocatorInstance.Data;
      pFVar11 = pFVar10 + (longlong)iVar2 * 0xd;
      while( true ) {
        if ((this->ComponentPool).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNiagaraRendererComponents::FComponentPoolEntry,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar11) goto LAB_1493453a2;
        this_00 = (UActorComponent *)FWeakObjectPtr::Get(pFVar10);
        if ((this_00 != (UActorComponent *)0x0) &&
           ((pUVar8 = this_00->WorldPrivate, pUVar8 != (UWorld *)0x0 ||
            (pUVar8 = UActorComponent::GetWorld_Uncached(this_00), pUVar8 != (UWorld *)0x0))))
        break;
        pFVar10 = pFVar10 + 0xd;
      }
    }
    if (pUVar8->bPostTickComponentUpdate == 0) {
      pAVar7 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
      if (pAVar7 != (AActor *)0x0) {
        AActor::Destroy(pAVar7,false,true);
      }
      iVar2 = (this->ComponentPool).ArrayNum;
      pFVar10 = (FWeakObjectPtr *)(this->ComponentPool).AllocatorInstance.Data;
      pFVar11 = pFVar10 + (longlong)iVar2 * 0xd;
      while( true ) {
        if ((this->ComponentPool).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNiagaraRendererComponents::FComponentPoolEntry,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar10 == pFVar11) break;
        pUVar9 = FWeakObjectPtr::Get(pFVar10);
        if (pUVar9 != (UObject *)0x0) {
          (**(code **)(*(longlong *)pUVar9 + 0x4a0))(pUVar9,0);
        }
        pFVar10 = pFVar10 + 0xd;
      }
      goto LAB_149345420;
    }
  }
LAB_1493453a2:
  local_58[0] = (code *)0x0;
  pFVar4 = (this->ComponentPool).AllocatorInstance.Data;
  (this->ComponentPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->ComponentPool).ArrayNum;
  iVar3 = (this->ComponentPool).ArrayMax;
  (this->ComponentPool).ArrayNum = 0;
  (this->ComponentPool).ArrayMax = 0;
  FVar5 = (this->SpawnedOwner).WeakPtr;
  local_30 = FMemory::Malloc(0x20,8);
  local_30[1] = pFVar4;
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::`27'::<lambda_1>,1,1>
               ::_vftable_;
  *(int *)(local_30 + 2) = iVar2;
  *(int *)((longlong)local_30 + 0x14) = iVar3;
  *(FWeakObjectPtr *)(local_30 + 3) = FVar5;
  if (local_30 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraRendererComponents::DestroyRenderState_Concurrent'::__l27::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_58);
  DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>((FComponentPoolEntry *)0x0,0);
LAB_149345420:
  DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
            ((FComponentPoolEntry *)(this->ComponentPool).AllocatorInstance.Data,
             (this->ComponentPool).ArrayNum);
  piVar1 = &(this->ComponentPool).ArrayMax;
  (this->ComponentPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->ComponentPool).AllocatorInstance,0,piVar1);
  }
  (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// FindProperty @ 149346eb0

FComponentPropertyAddress * __cdecl
FNiagaraRendererComponents::FindProperty
          (FComponentPropertyAddress *__return_storage_ptr__,UObject *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  TStringView<wchar_t> local_28;
  code *local_18;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_10;
  
  local_res10 = &local_38;
  local_10 = &local_res10;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FNiagaraRendererComponents::FindProperty'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_28.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_28.Size = iVar2;
  UE::String::ParseTokens
            (&local_28,L'.',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_18,None);
  if (((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) ||
     (local_38.ArrayNum < 1)) {
    (__return_storage_ptr__->Property).Owner.WeakPtr = (FWeakObjectPtr)0x0;
    local_res10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res10);
    *(undefined8 *)&(__return_storage_ptr__->Property).Field = 0;
    *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Property).Field.field_0x18 = 0;
    __return_storage_ptr__->Address = (void *)0x0;
  }
  else {
    FindPropertyRecursive
              (__return_storage_ptr__,param_1,*(UStruct **)&param_1->field_0x10,&local_38,0);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindPropertyRecursive @ 149346fb0

FComponentPropertyAddress * __cdecl
FNiagaraRendererComponents::FindPropertyRecursive
          (FComponentPropertyAddress *__return_storage_ptr__,void *param_1,UStruct *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,uint param_4)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName this;
  bool bVar5;
  FComponentPropertyAddress *pFVar6;
  FName FVar7;
  FString *pFVar8;
  uint uVar9;
  FName this_00;
  TFieldIterator<FProperty> local_c8;
  undefined1 local_b0 [8];
  FFieldPath local_a8;
  void *local_88;
  undefined8 local_80;
  UObject *local_78;
  UObject *local_70;
  FString local_68;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  this_00.ComparisonIndex.Value = 0;
  this_00.Number = 0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  local_80 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b0,(FObjectPtr)&local_80);
  local_a8.ResolvedField = (FField *)0x0;
  local_a8.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_a8.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_a8.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar9 = 0;
  if ((int)param_4 < param_3->ArrayNum) {
    uVar9 = ~param_4 >> 0x1f;
  }
  local_a8.Path.ArrayNum = 0;
  local_a8.Path.ArrayMax = 0;
  local_88 = (void *)0x0;
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FComponentPropertyAddress *)(*pcVar4)();
    return pFVar6;
  }
  FVar2 = *(FName *)((param_3->AllocatorInstance).Data + (longlong)(int)param_4 * 8);
  if (FVar2 != (FName)0x0) {
    if (param_2 == (UStruct *)0x0) {
      local_c8.Field = (FField *)0x0;
    }
    else {
      local_c8.Field = param_2->ChildProperties;
    }
    local_c8.InterfaceIndex = -1;
    local_c8.bIncludeSuper = true;
    local_c8.bIncludeDeprecated = true;
    local_c8.bIncludeInterface = false;
    local_c8.Struct = param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_c8);
    this = (FName)local_c8.Field;
    while (local_c8.Field = (FField *)this, this != (FName)0x0) {
      bVar5 = IsThisNotNull((void *)this,"FField::GetFName");
      FVar7 = this_00;
      if (bVar5) {
        FVar7 = *(FName *)((longlong)this + 0x20);
      }
      if (FVar7 == FVar2) {
        this_00 = this;
        if ((this != (FName)0x0) &&
           ((*(uint *)(*(longlong *)((longlong)this + 8) + 0x18) >> 0x14 & 1) != 0)) {
          local_78 = FField::GetOwnerUObject((FField *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_78);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b0,(FObjectPtr)&local_78);
          local_a8.ResolvedField = (FField *)this;
          FFieldPath::Generate(&local_a8,(FField *)this);
          uVar9 = param_4 + 1;
          if ((-1 < (int)uVar9) && ((int)uVar9 < param_3->ArrayNum)) {
            local_88 = param_1;
            if ((*(int *)((longlong)this + 0x30) < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar6 = (FComponentPropertyAddress *)(*pcVar4)();
              return pFVar6;
            }
            if ((param_1 == (void *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pFVar6 = (FComponentPropertyAddress *)(*pcVar4)();
              return pFVar6;
            }
            FindPropertyRecursive
                      (__return_storage_ptr__,
                       (void *)((longlong)*(int *)((longlong)this + 0x44) + (longlong)param_1),
                       *(UStruct **)((longlong)this + 0x70),param_3,uVar9);
            goto LAB_149347156;
          }
          uVar9 = 0;
          if ((int)param_4 < param_3->ArrayNum) {
            uVar9 = ~param_4 >> 0x1f;
          }
          local_88 = param_1;
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FComponentPropertyAddress *)(*pcVar4)();
            return pFVar6;
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          bVar5 = IsThisNotNull((void *)this,"FField::GetName");
          if (bVar5) {
            ::FName::ToString((FName *)((longlong)this + 0x20),&local_68);
          }
          else {
            ::FString::FString(&local_68,L"None");
          }
          pFVar8 = ::FString::FString(&local_38,&local_68);
          local_58 = (pFVar8->Data).AllocatorInstance.Data;
          iVar1 = (pFVar8->Data).ArrayNum;
          uStack_50 = iVar1 - 1;
          if (iVar1 == 0) {
            uStack_50 = 0;
          }
          local_48._12_4_ = uStack_4c;
          local_48.Size = uStack_50;
          local_48.DataPtr = (wchar_t *)local_58;
          bVar5 = ::FName::Equals(*(FName *)(pFVar3 + (longlong)(int)param_4 * 8),&local_48);
          pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if ((!bVar5) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("StructProp->GetName() == InPropertyNames[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererComponents.cpp"
                                 ,0x34b,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar6 = (FComponentPropertyAddress *)(*pcVar4)();
            return pFVar6;
          }
          goto LAB_149347142;
        }
        break;
      }
      local_c8.Field = *(FField **)((longlong)this + 0x18);
      TFieldIterator<FProperty>::IterateToNext(&local_c8);
      this = (FName)local_c8.Field;
    }
  }
  if (this_00 != (FName)0x0) {
    local_70 = FField::GetOwnerUObject((FField *)this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_70);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)local_b0,(FObjectPtr)&local_70);
    local_a8.ResolvedField = (FField *)this_00;
    FFieldPath::Generate(&local_a8,(FField *)this_00);
    local_88 = param_1;
  }
LAB_149347142:
  TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
            (&__return_storage_ptr__->Property,(TWeakFieldPtr<FProperty> *)local_b0);
  __return_storage_ptr__->Address = local_88;
LAB_149347156:
  if (local_a8.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Path.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnSystemComplete_GameThread @ 149360b60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraRendererComponents::OnSystemComplete_GameThread
          (FNiagaraRendererComponents *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  int *piVar1;
  TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  AActor *this_01;
  FWeakObjectPtr *this_02;
  FWeakObjectPtr *pFVar6;
  undefined1 local_res8 [8];
  
  this_00 = &this->ComponentPool;
  iVar2 = (this->ComponentPool).ArrayNum;
  piVar1 = &(this->ComponentPool).ArrayNum;
  this_02 = (FWeakObjectPtr *)(this_00->AllocatorInstance).Data;
  pFVar6 = this_02 + (longlong)iVar2 * 0xd;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FNiagaraRendererComponents::FComponentPoolEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_02 == pFVar6) break;
    bVar3 = FWeakObjectPtr::IsValid(this_02);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(this_02);
      (**(code **)(*(longlong *)pUVar5 + 0x4a0))(pUVar5);
    }
    this_02 = this_02 + 0xd;
  }
  iVar2 = *piVar1;
  if (iVar2 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,-iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->ComponentPool).ArrayMax);
    DefaultConstructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x68,-iVar2);
  }
  else if (0 < iVar2) {
    TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl(this_00,0,iVar2);
  }
  this_01 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
  if (this_01 != (AActor *)0x0) {
    (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
    AActor::Destroy(this_01,false,true);
  }
  return;
}

// PostSystemTick_GameThread @ 149361560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraRendererComponents::PostSystemTick_GameThread
          (FNiagaraRendererComponents *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  int *piVar1;
  TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  double dVar4;
  FNiagaraSystemInstance *pFVar5;
  USceneComponent *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererUpdateBindings> FVar13;
  UNiagaraComponentRendererProperties *pUVar14;
  USceneComponent *pUVar15;
  UWorld *pUVar16;
  FNiagaraDataSet *this_00;
  FName FVar17;
  FNiagaraTypeDefinition *pFVar18;
  UPrimitiveComponent *this_01;
  FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererSpawning> FVar19;
  AActor *this_02;
  FActorSpawnParameters *pFVar20;
  UClass *pUVar21;
  byte bVar22;
  longlong *plVar23;
  FScriptContainerElement *pFVar24;
  FObjectPtr_u_0 FVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  FObjectKey FVar29;
  uint uVar30;
  FComponentPoolEntry *pFVar31;
  int iVar32;
  uint *puVar33;
  uint uVar34;
  FNameEntryId FVar35;
  FWeakObjectPtr *pFVar36;
  undefined1 auStackY_408 [32];
  uint local_3a4;
  ForAnyElementType local_3a0;
  undefined8 local_398;
  undefined1 local_390 [4];
  uint local_38c;
  uint local_388;
  uint local_384;
  FName local_380;
  byte local_378;
  FName local_370;
  byte local_368;
  int local_360;
  UNiagaraComponentRendererProperties *local_358;
  FName local_350;
  uint local_348;
  undefined8 local_340;
  undefined8 local_338;
  FColor_u_0 local_330;
  int local_32c;
  FColor_u_0 local_328 [2];
  FWeakObjectPtr local_320;
  FNiagaraDataSetReaderInt32<int> local_318;
  FNiagaraDataSetReaderInt32<FNiagaraBool> local_308;
  FNiagaraDataSetReaderInt32<int> local_2f8;
  FName local_2e8;
  uint local_2e0;
  uint uStack_2dc;
  USceneComponent *local_2d8;
  FName local_2d0;
  undefined8 local_2c8;
  FNiagaraEmitterInstanceImpl *local_2c0;
  FNiagaraSystemInstance *local_2b8;
  FName local_2b0;
  FName local_2a8;
  FNiagaraTypeDefinitionHandle local_2a0;
  FName local_29c;
  FNiagaraTypeDefinitionHandle local_294;
  AActor *local_290;
  UPrimitiveComponent *local_288;
  UPrimitiveComponent *local_280;
  FNiagaraEmitterInstance *local_278;
  FNiagaraDataSet *local_270;
  FName local_268;
  int local_260;
  int local_25c;
  undefined1 local_258 [16];
  USceneComponent *local_248;
  FString local_240;
  longlong *local_230;
  int iStack_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *local_220;
  undefined4 uStack_218;
  uint uStack_214;
  int local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  int *local_1c0;
  uint *local_1b8;
  FName local_1b0;
  FName local_1a8;
  FNiagaraLWCConverter local_1a0 [2];
  undefined4 local_16c;
  undefined1 local_168 [32];
  uint *local_148;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  undefined1 local_118 [40];
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_408;
  FVar13 = StatPtr_STAT_NiagaraComponentRendererUpdateBindings;
  local_278 = param_2;
  if (StatPtr_STAT_NiagaraComponentRendererUpdateBindings ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererUpdateBindings>)0x0) {
    pFVar12 = ::FName::FName(&local_1b0,"STAT_NiagaraComponentRendererUpdateBindings");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererUpdateBindings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraComponentRendererUpdateBindings,*pFVar12,
                        L"Component renderer update bindings","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_370.ComparisonIndex.Value = 0;
  local_370.Number = 0;
  local_368 = 0;
  FVar17 = *(FName *)FVar13;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_330.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_330._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      local_368 = local_368 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_2b0.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererComponents.cpp"
                   ,0x185);
        local_368 = local_368 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_370 = FVar17;
      local_350 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      local_368 = local_368 | 4;
    }
  }
  pFVar5 = param_2->ParentSystemInstance;
  local_2b8 = pFVar5;
  pUVar14 = CastChecked<UNiagaraComponentRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_1);
  local_358 = pUVar14;
  if (((((pFVar5 == (FNiagaraSystemInstance *)0x0) ||
        (pUVar14 == (UNiagaraComponentRendererProperties *)0x0)) ||
       ((pUVar14->TemplateComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0)) ||
      ((*(char *)((longlong)&this->_padding_ + 4) == '\x01' ||
       (pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(&(pFVar5->AttachComponent).WeakPtr),
       local_2d8 = pUVar15, pUVar15 == (USceneComponent *)0x0)))) ||
     (local_2c0 = (FNiagaraEmitterInstanceImpl *)(**(code **)(param_2->_padding_ + 0x68))(param_2),
     local_2c0 == (FNiagaraEmitterInstanceImpl *)0x0)) goto LAB_149362b7d;
  pUVar16 = (UWorld *)pUVar15->_padding_;
  if (pUVar16 == (UWorld *)0x0) {
    pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar15);
  }
  dVar4 = pUVar16->RealTimeSeconds;
  this_00 = FNiagaraEmitterInstance::GetParticleData(param_2);
  local_270 = this_00;
  FVar17 = (FName)FNiagaraDataSet::GetCurrentDataChecked(this_00);
  local_350 = FVar17;
  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar14->EnabledBinding).ParamMapVariable.TypeDefHandle);
  local_2a8 = (pUVar14->EnabledBinding).DataSetName;
  local_2a0.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_2a0,pFVar18);
  FNiagaraDataSetAccessorInt32<FNiagaraBool>::CreateReader(&local_308,this_00,local_2a8);
  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar14->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
  local_29c = (pUVar14->RendererVisibilityTagBinding).DataSetName;
  local_294.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_294,pFVar18);
  FNiagaraDataSetAccessorInt32<int>::CreateReader(&local_318,this_00,local_29c);
  FNiagaraDataSetAccessorInt32<int>::CreateReader
            (&local_2f8,this_00,NiagaraRendererComponentsImpl::NAME_UniqueID);
  bVar8 = FNiagaraRenderer::IsRendererEnabled
                    ((FNiagaraRenderer *)this,(UNiagaraRendererProperties *)pUVar14,param_2);
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_118._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = -1;
  local_e4 = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  local_3a0.Data = (FScriptContainerElement *)0x0;
  local_398 = 0;
  if ((pUVar14->bAssignComponentsOnParticleID != false) &&
     (iVar11 = (this->ComponentPool).ArrayNum, 0 < iVar11)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar11,&local_3a0,0,(int *)((longlong)&local_398 + 4));
    local_168._0_8_ = 0;
    local_168._8_8_ = 0;
    local_148 = (uint *)0x0;
    local_140 = 0;
    local_13c = 0x80;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_128 = (ForElementType<FSetElementId>)0x0;
    local_120 = 0;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               local_168,(this->ComponentPool).ArrayNum);
    local_38c = 0;
    if (0 < (this->ComponentPool).ArrayNum) {
      do {
        uVar26 = local_38c;
        uVar30 = 0;
        if ((int)local_38c < (this->ComponentPool).ArrayNum) {
          uVar30 = ~local_38c >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar24 = (this->ComponentPool).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x68 + 0x60
        ;
        if (*(int *)pFVar24 < 0) {
          if (((local_3a0.Data <= (FScriptContainerElement *)&local_38c) &&
              ((FScriptContainerElement *)&local_38c <
               local_3a0.Data + (longlong)local_398._4_4_ * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = (int)local_398;
          if ((int)local_398 == local_398._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_3a0,(int *)((longlong)&local_398 + 4));
          }
          local_398 = CONCAT44(local_398._4_4_,iVar11 + 1);
          *(uint *)(local_3a0.Data + (longlong)iVar11 * 4) = local_38c;
        }
        else {
          local_1d0 = pFVar24;
          local_1c8 = (FScriptContainerElement *)&local_38c;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_&,int_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_168,(TPairInitializer<int_&,int_&> *)(local_258 + 8),
                     (bool *)&local_1d0);
        }
        local_38c = local_38c + 1;
      } while ((int)local_38c < (this->ComponentPool).ArrayNum);
    }
    uVar26 = local_168._8_4_ - local_134;
    if ((uint)(local_118._8_4_ - local_e4) < uVar26) {
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar26);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_118,uVar26);
      if (uVar26 < 4) {
        iVar11 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
        lVar28 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_258._4_4_ = (undefined4)lVar28;
        iVar11 = 1 << ((byte)lVar28 & 0x1f);
      }
      if ((local_d0 == 0) || (local_d0 < iVar11)) {
        local_d0 = iVar11;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)local_118);
      }
    }
    uVar26 = 0;
    if (*(int *)((longlong)FVar17 + 0x124) != 0) {
      do {
        lVar28 = (longlong)(int)uVar26;
        if ((local_2f8.bIsValid == false) || (local_2f8.NumInstances <= (int)uVar26)) {
          local_32c = -1;
        }
        else {
          local_32c = *(int *)(local_2f8.ComponentData[0] + lVar28 * 4);
        }
        bVar9 = TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                RemoveAndCopyValue((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                    *)local_168,local_32c,(int *)&local_388);
        if (bVar9) {
          if ((bVar8) &&
             (((local_308.bIsValid == false || (local_308.NumInstances <= (int)uVar26)) ||
              (*(int *)(local_308.ComponentData[0] + lVar28 * 4) != 0)))) {
            if (local_318.bIsValid != false) {
              if ((int)uVar26 < local_318.NumInstances) {
                iVar11 = *(int *)(local_318.ComponentData[0] + lVar28 * 4);
              }
              else {
                iVar11 = 0;
              }
              if (iVar11 != pUVar14->RendererVisibility) goto LAB_149361bc9;
            }
            local_1c0 = &local_32c;
            local_1b8 = &local_388;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_&,int_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)local_118,(TPairInitializer<int_&,int_&> *)local_258,(bool *)&local_1c0);
          }
          else {
LAB_149361bc9:
            lVar28 = (longlong)(int)local_388;
            uVar30 = 0;
            if ((int)local_388 < (this->ComponentPool).ArrayNum) {
              uVar30 = ~local_388 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar15 = (USceneComponent *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((this->ComponentPool).AllocatorInstance.Data +
                                          lVar28 * 0x68));
            if ((pUVar15 != (USceneComponent *)0x0) && ((pUVar15->_padding_ & 0x100000) != 0)) {
              (**(code **)(pUVar15->_padding_ + 0x2c0))(pUVar15);
              USceneComponent::SetVisibility(pUVar15,false,Propagate);
            }
            if (((local_3a0.Data <= (FScriptContainerElement *)&local_388) &&
                ((FScriptContainerElement *)&local_388 <
                 local_3a0.Data + (longlong)local_398._4_4_ * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = (int)local_398;
            if ((int)local_398 == local_398._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_3a0,(int *)((longlong)&local_398 + 4));
            }
            local_398 = CONCAT44(local_398._4_4_,iVar11 + 1);
            *(uint *)(local_3a0.Data + (longlong)iVar11 * 4) = local_388;
            lVar28 = (longlong)(int)local_388;
            uVar30 = 0;
            if ((int)local_388 < (this->ComponentPool).ArrayNum) {
              uVar30 = ~local_388 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)((this->ComponentPool).AllocatorInstance.Data + lVar28 * 0x68 + 0x60) =
                 0xffffffff;
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(uint *)((longlong)FVar17 + 0x124));
    }
    uVar26 = local_140;
    iStack_228 = 0;
    local_210 = 0;
    uStack_224 = 1;
    uStack_214 = 0;
    if (local_140 != 0) {
      puVar33 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar33 = local_148;
      }
      uVar30 = *puVar33;
      while (uVar30 == 0) {
        iStack_228 = iStack_228 + 1;
        local_210 = local_210 + 0x20;
        uStack_214 = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_228)
        goto LAB_149361df3;
        uVar30 = puVar33[iStack_228];
      }
      uStack_224 = ~(uVar30 - 1) & uVar30;
      uVar3 = (ulonglong)uStack_224 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_25c = (int)lVar28;
      uStack_214 = local_25c + -1 + local_210;
      if ((int)local_140 < (int)uStack_214) {
        uStack_214 = local_140;
      }
    }
LAB_149361df3:
    local_230 = (longlong *)local_168;
    uStack_20c = local_16c;
    local_220 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
    uVar30 = local_140 & 0xffffffe0;
    iStack_208 = local_168._8_4_ - local_134;
    uStack_218 = 0xffffffff;
    TStack_1f8.CurrentBitIndex = uStack_214;
    TStack_1f8.UnvisitedBitMask = 0xffffffff;
    TStack_1f8._padding_ = CONCAT44(uStack_224,iStack_228);
    iVar11 = (int)local_140 >> 5;
    TStack_1f8._28_4_ = local_16c;
    TStack_1f8.BaseBitIndex = local_210;
    uStack_1d8 = CONCAT44(uStack_204,iStack_208);
    bVar22 = (byte)local_140;
    local_200 = local_230;
    TStack_1f8.Array = local_220;
    if (((int)local_140 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (uVar26 != local_140) {
      puVar33 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar33 = local_148;
      }
      uVar26 = -1 << (bVar22 & 0x1f) & puVar33[iVar11];
      while (uVar26 == 0) {
        iVar11 = iVar11 + 1;
        uVar30 = uVar30 + 0x20;
        uVar26 = local_140;
        if ((int)(((int)(local_140 - 1) >> 0x1f & 0x1fU) + (local_140 - 1)) >> 5 < iVar11)
        goto LAB_149361f40;
        uVar26 = puVar33[iVar11];
      }
      uVar3 = (ulonglong)(~(uVar26 - 1) & uVar26) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_260 = (int)lVar28;
      uVar26 = local_260 + -1 + uVar30;
      if ((int)local_140 < (int)uVar26) {
        uVar26 = local_140;
      }
    }
LAB_149361f40:
    while( true ) {
      plVar23 = local_200;
      if ((int)local_200[1] - *(int *)((longlong)local_200 + 0x34) != (int)uStack_1d8) {
        local_390[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_390);
      }
      if (((TStack_1f8.CurrentBitIndex == uVar26) &&
          (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10))) &&
         (plVar23 == (longlong *)local_168)) break;
      local_340 = *(undefined8 *)(*plVar23 + (longlong)TStack_1f8.CurrentBitIndex * 0x10);
      uVar27 = (uint)((ulonglong)local_340 >> 0x20);
      uVar30 = 0;
      if ((int)uVar27 < (this->ComponentPool).ArrayNum) {
        uVar30 = ~uVar27 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar15 = (USceneComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((this->ComponentPool).AllocatorInstance.Data +
                                    (longlong)(int)uVar27 * 0x68));
      if ((pUVar15 != (USceneComponent *)0x0) && ((pUVar15->_padding_ & 0x100000) != 0)) {
        (**(code **)(pUVar15->_padding_ + 0x2c0))(pUVar15);
        USceneComponent::SetVisibility(pUVar15,false,Propagate);
      }
      if (((local_3a0.Data <= (FScriptContainerElement *)((longlong)&local_340 + 4U)) &&
          ((FScriptContainerElement *)((longlong)&local_340 + 4U) <
           local_3a0.Data + (longlong)local_398._4_4_ * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (int)local_398;
      if ((int)local_398 == local_398._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_3a0,(int *)((longlong)&local_398 + 4));
      }
      local_398 = CONCAT44(local_398._4_4_,iVar11 + 1);
      *(uint *)(local_3a0.Data + (longlong)iVar11 * 4) = local_340._4_4_;
      lVar28 = (longlong)(int)local_340._4_4_;
      uVar30 = 0;
      if ((int)local_340._4_4_ < (this->ComponentPool).ArrayNum) {
        uVar30 = ~local_340._4_4_ >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)((this->ComponentPool).AllocatorInstance.Data + lVar28 * 0x68 + 0x60) =
           0xffffffff;
      TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    }
    local_120 = 0;
    if (local_128 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_168);
  }
  pUVar15 = (pUVar14->TemplateComponent).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar15 == (USceneComponent *)0x0)) {
    local_338 = 0;
    if (pUVar15 != (USceneComponent *)0x0) goto LAB_1493621c7;
    FVar29.ObjectIndex = 0;
    FVar29.ObjectSerialNumber = 0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
LAB_1493621c7:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    local_320.ObjectIndex = 0;
    local_320.ObjectSerialNumber = 0;
    local_248 = pUVar15;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    FWeakObjectPtr::operator=(&local_320,(FObjectPtr)&local_248);
    FVar29 = (FObjectKey)local_320;
  }
  uVar30 = 0;
  uVar26 = pUVar14->ComponentCountLimit;
  local_338 = CONCAT44(local_338._4_4_,uVar26);
  local_3a4 = 0;
  local_348 = 0;
  if (*(int *)((longlong)local_350 + 0x124) != 0) {
    do {
      uVar27 = local_348;
      lVar28 = (longlong)(int)local_348;
      if ((bVar8) &&
         (((local_308.bIsValid == false || (local_308.NumInstances <= (int)local_348)) ||
          (*(int *)(local_308.ComponentData[0] + lVar28 * 4) != 0)))) {
        if (local_318.bIsValid != false) {
          if ((int)local_348 < local_318.NumInstances) {
            iVar11 = *(int *)(local_318.ComponentData[0] + lVar28 * 4);
          }
          else {
            iVar11 = 0;
          }
          if (iVar11 != pUVar14->RendererVisibility) goto LAB_1493629b9;
        }
        uVar34 = 0xffffffff;
        local_384 = 0xffffffff;
        local_360 = -1;
        if (pUVar14->bAssignComponentsOnParticleID == false) {
LAB_14936231c:
          if ((int)uVar26 <= (int)((local_118._8_4_ - local_e4) + uVar30)) goto LAB_1493629b9;
        }
        else {
          if ((local_2f8.bIsValid == false) || (local_2f8.NumInstances <= (int)local_348)) {
            iVar11 = -1;
          }
          else {
            iVar11 = *(int *)(local_2f8.ComponentData[0] + lVar28 * 4);
          }
          local_360 = iVar11;
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
          RemoveAndCopyValue((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)local_118,iVar11,(int *)&local_384);
          uVar34 = local_384;
          uVar30 = local_3a4;
          if (local_384 == 0xffffffff) {
            if (((pUVar14->bCreateComponentFirstParticleFrame != false) &&
                (bVar9 = FNiagaraEmitterInstanceImpl::IsParticleComponentActive
                                   (local_2c0,FVar29,iVar11), !bVar9)) &&
               (uVar27 < (uint)(*(int *)((longlong)local_350 + 0x124) -
                               *(int *)((longlong)local_350 + 0x138)))) goto LAB_1493629b9;
            goto LAB_14936231c;
          }
        }
        bVar9 = false;
        if (uVar34 == 0xffffffff) {
          if (local_358->bAssignComponentsOnParticleID == false) {
            local_384 = 0xffffffff;
            if ((int)uVar30 < (this->ComponentPool).ArrayNum) {
              uVar34 = uVar30;
              local_384 = uVar30;
            }
          }
          else if ((int)local_398 != 0) {
            if (((int)local_398 < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = (int)local_398 + -1;
            uVar34 = *(uint *)(local_3a0.Data + (longlong)iVar11 * 4);
            iVar32 = ((int)local_398 - iVar11) + -1;
            if (iVar32 != 0) {
              memmove(local_3a0.Data + (longlong)iVar11 * 4,
                      local_3a0.Data + (longlong)iVar11 * 4 + 4,(longlong)iVar32 << 2);
            }
            local_398 = CONCAT44(local_398._4_4_,(int)local_398 + -1);
            local_384 = uVar34;
          }
          bVar9 = true;
        }
        if ((int)uVar34 < 0) {
LAB_14936245a:
          FVar19 = StatPtr_STAT_NiagaraComponentRendererSpawning;
          if (StatPtr_STAT_NiagaraComponentRendererSpawning ==
              (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererSpawning>)0x0) {
            pFVar12 = ::FName::FName(&local_1a8,"STAT_NiagaraComponentRendererSpawning");
            FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraComponentRendererSpawning>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_NiagaraComponentRendererSpawning,*pFVar12,
                                L"Component renderer spawning [GT]","STATGROUP_Niagara",
                                "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
                                MCR_Invalid);
          }
          local_380.ComparisonIndex.Value = 0;
          local_380.Number = 0;
          local_378 = 0;
          FVar17 = *(FName *)FVar19;
          FVar35 = FVar17.ComparisonIndex.Value;
          uVar26 = FVar17.Number;
          if ((FVar35.Value != 0) || (uVar26 != 0)) {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_328[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_328[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
              local_378 = local_378 | 1;
              if (-1 < CpuChannel->Enabled) {
                local_2e8.ComparisonIndex.Value = FVar35.Value;
                local_2e8.Number = uVar26;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_2e8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererComponents.cpp"
                           ,0x239);
                local_378 = local_378 | 2;
              }
            }
            if (FThreadStats::bPrimaryEnable != false) {
              local_380 = FVar17;
              local_2e0 = FVar35.Value;
              uStack_2dc = uVar26;
              FThreadStats::AddMessage(FVar17,CycleScopeStart);
              local_378 = local_378 | 4;
            }
          }
          this_02 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
          pUVar15 = local_2d8;
          if ((this_02 == (AActor *)0x0) &&
             (this_02 = (AActor *)local_2d8->_padding_, this_02 == (AActor *)0x0)) {
            pUVar16 = (UWorld *)local_2d8->_padding_;
            if (pUVar16 == (UWorld *)0x0) {
              pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)local_2d8);
            }
            pFVar20 = FActorSpawnParameters::FActorSpawnParameters
                                ((FActorSpawnParameters *)local_c8);
            pUVar21 = Z_Construct_UClass_AActor_NoRegister();
            this_02 = UWorld::SpawnActor(pUVar16,pUVar21,(TVector<double> *)0x0,
                                         (TRotator<double> *)0x0,pFVar20);
            if (local_c8._64_8_ != 0) {
              plVar23 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar23 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar23 + 0x10))();
            }
            UObjectBase::AtomicallySetFlags((UObjectBase *)this_02,RF_Transient);
            local_290 = this_02;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_02 != (AActor *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)this_02);
            }
            FWeakObjectPtr::operator=(&(this->SpawnedOwner).WeakPtr,(FObjectPtr)&local_290);
          }
          local_2d0.ComparisonIndex.Value = 0;
          local_2d0.Number = 0;
          pUVar6 = (local_358->TemplateComponent).field0_0x0.DebugPtr;
          pUVar21 = Z_Construct_UClass_USceneComponent_NoRegister();
          this_01 = (UPrimitiveComponent *)
                    DuplicateObject_Internal(pUVar21,(UObject *)pUVar6,(UObject *)this_02,local_2d0)
          ;
          UObjectBase::AtomicallyClearFlags((UObjectBase *)this_01,RF_ArchetypeObject);
          UObjectBase::AtomicallySetFlags((UObjectBase *)this_01,RF_Transient);
          local_2c8 = 0;
          USceneComponent::SetupAttachment((USceneComponent *)this_01,pUVar15,(FName)0x0);
          UActorComponent::RegisterComponent((UActorComponent *)this_01);
          (**(code **)(*(longlong *)this_01 + 0x4c0))(this_01,pUVar15);
          pTVar2 = &this->ComponentPool;
          if ((int)uVar34 < 0) {
            iVar11 = (this->ComponentPool).ArrayNum;
            piVar1 = &(this->ComponentPool).ArrayMax;
            uVar34 = (this->ComponentPool).ArrayNum;
            local_384 = uVar34;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->ComponentPool).ArrayNum = iVar11 + 1;
            pFVar36 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x68)
            ;
            DefaultConstructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>(pFVar36,1);
            local_280 = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FVar25.Handle = (UObject *)&local_280;
          }
          else {
            uVar26 = 0;
            if ((int)uVar34 < (this->ComponentPool).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar36 = (FWeakObjectPtr *)
                      ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar34 * 0x68);
            local_288 = this_01;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            FVar25.Handle = (UObject *)&local_288;
          }
          FWeakObjectPtr::operator=(pFVar36,(FObjectPtr)FVar25);
          if ((local_378 & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_378 & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_378 & 4) != 0) {
            FThreadStats::AddMessage(local_380,CycleScopeEnd);
          }
          local_378 = 0;
          uVar27 = local_348;
        }
        else {
          uVar26 = 0;
          if ((int)uVar34 < (this->ComponentPool).ArrayNum) {
            uVar26 = ~uVar34 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          this_01 = (UPrimitiveComponent *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((this->ComponentPool).AllocatorInstance.Data +
                                        (longlong)(int)uVar34 * 0x68));
          if ((this_01 == (UPrimitiveComponent *)0x0) ||
             ((*(uint *)&this_01->field_0x8 & 0x18000) != 0)) goto LAB_14936245a;
        }
        uVar26 = 0;
        if ((int)uVar34 < (this->ComponentPool).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar31 = (FComponentPoolEntry *)
                  ((this->ComponentPool).AllocatorInstance.Data + (longlong)(int)uVar34 * 0x68);
        FNiagaraSystemInstance::GetLWCConverter(local_2b8,local_1a0,local_278->bLocalSpace);
        pUVar14 = local_358;
        TickPropertyBindings
                  (local_358,(USceneComponent *)this_01,local_270,uVar27,pFVar31,local_1a0);
        if ((((pUVar14->bAssignComponentsOnParticleID == false) || (bVar9)) ||
            (pUVar14->bOnlyActivateNewlyAquiredComponents == false)) &&
           ((this_01->field_0x9a & 0x10) == 0)) {
          USceneComponent::SetVisibility((USceneComponent *)this_01,true,Propagate);
          (**(code **)(*(longlong *)this_01 + 0x2b8))(this_01,0);
          pUVar21 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar11 = (int)pUVar21->_padding_;
          if (((iVar11 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
               &pUVar21->_padding_)) && (this_01 != (UPrimitiveComponent *)0x0)) {
            UPrimitiveComponent::ResetSceneVelocity(this_01);
          }
        }
        pFVar31->LastAssignedToParticleID = local_360;
        pFVar31->LastActiveTime = dVar4;
        if (pUVar14->bCreateComponentFirstParticleFrame != false) {
          FNiagaraEmitterInstanceImpl::SetParticleComponentActive(local_2c0,FVar29,local_360);
        }
        uVar30 = local_3a4 + 1;
        if ((GNiagaraWarnComponentRenderCount < (int)uVar30) && (0 < MaxWarnings)) {
          if (2 < (byte)LogNiagara._0_1_) {
            local_268 = (FName)local_2b8->System->_padding_;
            ::FName::ToString(&local_268,&local_240);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
          }
          MaxWarnings = MaxWarnings + -1;
        }
        uVar26 = (uint)local_338;
        local_3a4 = uVar30;
        if ((int)(uint)local_338 <= (int)uVar30) break;
      }
LAB_1493629b9:
      local_348 = uVar27 + 1;
    } while (local_348 < *(uint *)((longlong)local_350 + 0x124));
  }
  iVar11 = (this->ComponentPool).ArrayNum;
  if (((int)uVar30 < iVar11) && (uVar26 = 0, 0 < iVar11)) {
    lVar28 = 0;
    do {
      uVar27 = 0;
      if ((int)uVar26 < (this->ComponentPool).ArrayNum) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar30 = local_3a4, bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar36 = (FWeakObjectPtr *)((this->ComponentPool).AllocatorInstance.Data + lVar28);
      if (pUVar14->bAssignComponentsOnParticleID == false) {
        if ((int)uVar30 <= (int)uVar26) goto LAB_149362a6c;
      }
      else if (pFVar36[0xc].ObjectIndex < 0) {
LAB_149362a6c:
        pUVar15 = (USceneComponent *)FWeakObjectPtr::Get(pFVar36);
        if (pUVar15 != (USceneComponent *)0x0) {
          if (dVar4 - (double)pFVar36[1] < (double)GNiagaraComponentRenderPoolInactiveTimeLimit) {
            if ((pUVar15->_padding_ & 0x100000) != 0) {
              (**(code **)(pUVar15->_padding_ + 0x2c0))(pUVar15);
              USceneComponent::SetVisibility(pUVar15,false,Propagate);
            }
            goto LAB_149362b2f;
          }
          (**(code **)(pUVar15->_padding_ + 0x4a0))(pUVar15,0);
        }
        uVar30 = 0;
        if ((int)uVar26 < (this->ComponentPool).ArrayNum) {
          uVar30 = ~uVar26 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->ComponentPool,uVar26);
        uVar26 = uVar26 - 1;
        lVar28 = lVar28 + -0x68;
      }
LAB_149362b2f:
      uVar26 = uVar26 + 1;
      lVar28 = lVar28 + 0x68;
      uVar30 = local_3a4;
    } while ((int)uVar26 < (this->ComponentPool).ArrayNum);
  }
  if (local_3a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data);
  }
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
LAB_149362b7d:
  if ((local_368 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_368 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_368 & 4) != 0) {
    FThreadStats::AddMessage(local_370,CycleScopeEnd);
  }
  return;
}

// ResetComponentPool @ 1493694e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraRendererComponents::ResetComponentPool(FNiagaraRendererComponents *this,bool param_1)

{
  int *piVar1;
  TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  AActor *this_01;
  FWeakObjectPtr *this_02;
  FWeakObjectPtr *pFVar6;
  undefined1 local_res10 [8];
  
  this_00 = &this->ComponentPool;
  iVar2 = (this->ComponentPool).ArrayNum;
  piVar1 = &(this->ComponentPool).ArrayNum;
  this_02 = (FWeakObjectPtr *)(this_00->AllocatorInstance).Data;
  pFVar6 = this_02 + (longlong)iVar2 * 0xd;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FNiagaraRendererComponents::FComponentPoolEntry,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (this_02 == pFVar6) break;
    bVar3 = FWeakObjectPtr::IsValid(this_02);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(this_02);
      (**(code **)(*(longlong *)pUVar5 + 0x4a0))(pUVar5);
    }
    this_02 = this_02 + 0xd;
  }
  iVar2 = *piVar1;
  if (iVar2 < 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,-iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->ComponentPool).ArrayMax);
    DefaultConstructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x68,-iVar2);
  }
  else if (0 < iVar2) {
    TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl(this_00,0,iVar2);
  }
  if (param_1) {
    this_01 = (AActor *)FWeakObjectPtr::Get(&(this->SpawnedOwner).WeakPtr);
    if (this_01 != (AActor *)0x0) {
      (this->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
      AActor::Destroy(this_01,false,true);
    }
  }
  return;
}

// TickPropertyBindings @ 1493723e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FNiagaraRendererComponents::TickPropertyBindings
          (UNiagaraComponentRendererProperties *param_1,USceneComponent *param_2,
          FNiagaraDataSet *param_3,int param_4,FComponentPoolEntry *param_5,
          FNiagaraLWCConverter *param_6)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  UFunction *pUVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  FNiagaraPropertySetter *pFVar7;
  FNiagaraTypeDefinition *pFVar8;
  longlong lVar9;
  UClass *pUVar10;
  UScriptStruct *pUVar11;
  FFieldClass *pFVar12;
  FString *pFVar13;
  FComponentPropertyAddress *pFVar14;
  UObject *pUVar15;
  FFieldClass *pFVar16;
  FField *pFVar17;
  FField *pFVar18;
  int iVar19;
  int iVar20;
  TObjectPtr<UObject>_u_0 TVar21;
  char *pcVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar25;
  undefined1 *puVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  ForAnyElementType _Src;
  undefined1 auStackY_2d8 [32];
  TObjectPtr<UObject>_u_0 local_2a8;
  ushort local_2a0;
  FScriptContainerElement local_29e;
  undefined8 local_29c;
  uint local_294;
  undefined1 local_290 [4];
  int local_28c;
  TObjectPtr<UObject>_u_0 local_288;
  ushort local_280;
  uchar local_27e;
  short local_27c;
  short local_27a;
  int local_278;
  uint local_274;
  FComponentPoolEntry *local_270;
  FNiagaraDataSet *local_268;
  FScriptContainerElement *local_260;
  undefined1 local_258 [8];
  FNiagaraTypeDefinitionHandle local_250 [2];
  ForAnyElementType local_248;
  undefined8 local_240;
  TObjectPtr<UObject>_u_0 local_238;
  ushort local_230;
  FScriptContainerElement local_22e;
  undefined8 local_22c;
  uint local_224;
  uint local_220;
  TArray<FName,TSizedDefaultAllocator<32>_> local_218;
  longlong local_208;
  FNiagaraTypeDefinitionHandle local_200 [2];
  TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  FFieldPath local_1e0;
  void *local_1c0;
  longlong local_1b8;
  FNiagaraTypeDefinitionHandle local_1b0;
  undefined8 local_1ac;
  UNiagaraComponentRendererProperties *local_1a0;
  undefined1 local_198 [24];
  void *local_180;
  undefined8 local_178;
  void *local_170;
  TPairInitializer<FName_const_&,FNiagaraRendererComponents::FComponentPropertyAddress_&&> local_168
  ;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_158;
  undefined8 local_150;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  code *local_138;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_130;
  FScriptContainerElement *local_128;
  undefined1 *local_120;
  TStringView<wchar_t> local_118;
  FString local_108;
  FNiagaraTypeDefinition local_f8;
  FNiagaraTypeDefinition local_e0;
  FNiagaraTypeDefinition local_c8;
  FNiagaraTypeDefinition local_b0;
  FNiagaraTypeDefinition local_98;
  TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pFVar31 = (param_1->PropertyBindings).AllocatorInstance.Data;
  local_220 = (param_1->PropertyBindings).ArrayNum;
  uVar23 = (ulonglong)(int)local_220;
  pFVar28 = pFVar31 + uVar23 * 0x98;
  local_270 = param_5;
  local_168.Value = (FComponentPropertyAddress *)param_6;
  local_28c = param_4;
  local_268 = param_3;
  local_260 = pFVar28;
  local_1a0 = param_1;
LAB_149372461:
  while( true ) {
    if ((local_1a0->PropertyBindings).ArrayNum != (int)uVar23) {
      local_290[0] = 0;
      `TCheckedPointerIterator<FNiagaraComponentPropertyBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_290);
    }
    if (pFVar31 == pFVar28) {
      return;
    }
    pFVar7 = TMapBase<FName,FNiagaraPropertySetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>_>
             ::Find((TMapBase<FName,FNiagaraPropertySetter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraPropertySetter,0>_>
                     *)&local_1a0->SetterFunctionMapping,*(FName *)(pFVar31 + 0x20));
    if (pFVar7 == (FNiagaraPropertySetter *)0x0) break;
    pFVar8 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar31 + 0x10))
    ;
    local_1b8 = *(longlong *)(pFVar31 + 0x14);
    local_250[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_1b0,pFVar8);
    local_258 = (undefined1  [8])local_1b8;
    local_248.Data = (FScriptContainerElement *)0x0;
    local_240._0_4_ = 0;
    local_240._4_4_ = 0;
    local_1ac = 0;
    local_1b0.RegisteredTypeIndex = local_250[0].RegisteredTypeIndex;
    if ((local_1b8 != 0) &&
       (pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_250),
       (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
      pFVar2 = (param_3->CompiledData).StructPtr;
      pFVar24 = (pFVar2->Variables).AllocatorInstance.Data;
      pFVar1 = pFVar24 + (longlong)(pFVar2->Variables).ArrayNum * 0xc;
      for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 0xc) {
        if (((undefined1  [8])*(longlong *)pFVar24 == local_258) &&
           (*(int *)(pFVar24 + 8) == local_250[0].RegisteredTypeIndex)) {
          SetVariableByType((FNiagaraVariable *)local_258,param_3,param_4);
          local_2a8 = (TObjectPtr<UObject>_u_0)
                      ((TObjectPtr<UObject>_u_0 *)(pFVar31 + 0x28))->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UScriptStruct *)local_2a8.DebugPtr != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable(local_2a8.DebugPtr);
          }
          local_2a0 = *(ushort *)(pFVar31 + 0x30);
          local_29e = pFVar31[0x32];
          local_29c = *(undefined8 *)(pFVar31 + 0x34);
          local_294 = *(uint *)(pFVar31 + 0x3c);
          if ((((UScriptStruct *)local_2a8.DebugPtr != (UScriptStruct *)0x0) ||
              (pFVar7->Function == (UFunction *)0x0)) ||
             (lVar29 = pFVar7->Function->_padding_, lVar29 == 0)) goto LAB_149372aff;
          goto LAB_1493725d1;
        }
      }
    }
    if ((TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
        local_248.Data ==
        (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)0x0)
    break;
    FMemory::Free(local_248.Data);
    pFVar31 = pFVar31 + 0x98;
    uVar23 = (ulonglong)local_220;
  }
  goto LAB_149373066;
LAB_1493725d1:
  do {
    if (((char)*(ulonglong *)(lVar29 + 0x38) < '\0') &&
       ((*(ulonglong *)(lVar29 + 0x38) >> 10 & 1) == 0)) {
      lVar9 = 0;
      if ((*(uint *)(*(longlong *)(lVar29 + 8) + 0x18) >> 0x14 & 1) != 0) {
        lVar9 = lVar29;
      }
      if (lVar9 != 0) {
        local_238 = (TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)(lVar9 + 0x70))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UScriptStruct *)local_238.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable(local_238.DebugPtr);
        }
        local_22e = (FScriptContainerElement)0x0;
        local_230 = 2;
        local_22c = 0xffffffffffffffff;
        local_224 = 0xffffffff;
        FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_238.ObjectPtr)
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UScriptStruct *)local_238.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable(local_238.DebugPtr);
        }
        local_2a0 = local_230;
        local_29e = local_22e;
        local_29c = local_22c;
        param_5 = local_270;
        local_2a8 = local_238;
        local_294 = local_224;
        break;
      }
      pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_250);
      local_288.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_288.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_288.DebugPtr);
      }
      local_280 = pFVar8->UnderlyingType;
      local_27e = pFVar8->Flags;
      local_27c = pFVar8->Size;
      local_27a = pFVar8->Alignment;
      local_278 = pFVar8->RegisteredTypeDefIndex;
      local_274 = pFVar8->UnderlyingTypePathNameHash;
      iVar30 = *(int *)(lVar29 + 0x30);
      iVar20 = *(int *)(lVar29 + 0x34);
      if (local_27c == -1) {
        if ((local_288.DebugPtr == (UObject *)0x0) ||
           (pUVar10 = FNiagaraTypeDefinition::GetClass
                                ((FNiagaraTypeDefinition *)&local_288.ObjectPtr),
           pUVar10 != (UClass *)0x0)) {
          uVar27 = 0;
        }
        else {
          TVar21 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
          if (local_280 != 3) {
            if (local_288.DebugPtr != (UObject *)0x0) {
              pUVar10 = Z_Construct_UClass_UStruct_NoRegister();
              bVar6 = FObjectPtr::IsA(&local_288.ObjectPtr,pUVar10);
              TVar21 = local_288;
              if (bVar6) goto LAB_1493726cc;
            }
            TVar21.DebugPtr = (UObject *)0x0;
          }
LAB_1493726cc:
          pUVar11 = CastChecked<UScriptStruct,UStruct>((UStruct *)TVar21.DebugPtr);
          iVar19 = (int)*(short *)((longlong)&pUVar11->_padding_ + 4);
          uVar27 = (int)pUVar11->_padding_ + -1 + iVar19 & ~(iVar19 - 1U);
          if ((0x7fff < (int)uVar27) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2309485622517038180>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                 ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_27c = (short)uVar27;
      }
      param_5 = local_270;
      if (iVar30 * iVar20 == (int)local_27c) break;
      pFVar16 = *(FFieldClass **)(lVar29 + 8);
      pFVar12 = FDoubleProperty::StaticClass();
      if (pFVar12->Id == CASTCLASS_None) {
        for (; pFVar16 != (FFieldClass *)0x0; pFVar16 = pFVar16->SuperClass) {
          if (pFVar16 == pFVar12) {
            bVar6 = true;
            goto LAB_149372760;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = (pFVar16->CastFlags & pFVar12->Id) != CASTCLASS_None;
      }
LAB_149372760:
      if (bVar6) {
        pFVar8 = UNiagaraComponentRendererProperties::GetDoubleDef(&local_98);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar15 = (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar15 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar15);
        }
        local_2a8.DebugPtr = (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr;
        local_2a0 = pFVar8->UnderlyingType;
        local_29e = (FScriptContainerElement)pFVar8->Flags;
        local_29c._0_2_ = pFVar8->Size;
        local_29c._2_2_ = pFVar8->Alignment;
        local_29c._4_4_ = pFVar8->RegisteredTypeDefIndex;
        local_294 = pFVar8->UnderlyingTypePathNameHash;
        param_5 = local_270;
        break;
      }
      iVar30 = *(int *)(lVar29 + 0x34) * *(int *)(lVar29 + 0x30);
      if (local_27c == -1) {
        if ((local_288.DebugPtr == (UObject *)0x0) ||
           (pUVar10 = FNiagaraTypeDefinition::GetClass
                                ((FNiagaraTypeDefinition *)&local_288.ObjectPtr),
           pUVar10 != (UClass *)0x0)) {
          uVar27 = 0;
        }
        else {
          TVar21 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
          if (local_280 != 3) {
            if (local_288.DebugPtr != (UObject *)0x0) {
              pUVar10 = Z_Construct_UClass_UStruct_NoRegister();
              bVar6 = FObjectPtr::IsA(&local_288.ObjectPtr,pUVar10);
              TVar21 = local_288;
              if (bVar6) goto LAB_1493727d9;
            }
            TVar21.DebugPtr = (UObject *)0x0;
          }
LAB_1493727d9:
          pUVar11 = CastChecked<UScriptStruct,UStruct>((UStruct *)TVar21.DebugPtr);
          iVar20 = (int)*(short *)((longlong)&pUVar11->_padding_ + 4);
          uVar27 = (int)pUVar11->_padding_ + -1 + iVar20 & ~(iVar20 - 1U);
          if ((0x7fff < (int)uVar27) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2309485622517038180>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                 ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_27c = (short)uVar27;
      }
      iVar20 = local_27c * 2;
      if (((((TObjectPtr<UObject>_u_0)local_288.DebugPtr ==
             FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
           (local_280 == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
          (local_27e == FNiagaraTypeDefinition::Vec2Def.Flags)) && (iVar30 == iVar20)) {
        pFVar8 = UNiagaraComponentRendererProperties::GetFVector2DDef(&local_f8);
      }
      else if ((((((TObjectPtr<UObject>_u_0)local_288.DebugPtr ==
                   FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
                 (local_280 == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
                (local_27e == FNiagaraTypeDefinition::Vec3Def.Flags)) ||
               ((((TObjectPtr<UObject>_u_0)local_288.DebugPtr ==
                  FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 &&
                 (local_280 == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
                (local_27e == FNiagaraTypeDefinition::PositionDef.Flags)))) && (iVar30 == iVar20)) {
        pFVar8 = UNiagaraComponentRendererProperties::GetFVectorDef(&local_e0);
      }
      else if (((((TObjectPtr<UObject>_u_0)local_288.DebugPtr ==
                  FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
                (local_280 == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
               (local_27e == FNiagaraTypeDefinition::Vec4Def.Flags)) && (iVar30 == iVar20)) {
        pFVar8 = UNiagaraComponentRendererProperties::GetFVector4Def(&local_c8);
      }
      else {
        if ((((TObjectPtr<UObject>_u_0)local_288.DebugPtr !=
              FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) ||
            (local_280 != FNiagaraTypeDefinition::QuatDef.UnderlyingType)) ||
           ((local_27e != FNiagaraTypeDefinition::QuatDef.Flags || (iVar30 != iVar20)))) {
          local_2a8.DebugPtr = (UObject *)0x0;
          local_2a0 = 0;
          local_29e = (FScriptContainerElement)0x0;
          local_29c = 0xffffffffffffffff;
          local_294 = 0xffffffff;
          local_208 = 0;
          local_250[0].RegisteredTypeIndex =
               FNiagaraTypeDefinitionHandle::Register(local_200,&FNiagaraTypeDefinition::Vec4Def);
          local_1f0._0_4_ = 0;
          local_1f0._4_4_ = 0;
          local_1f8 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0;
          local_1f0 = 0;
          local_258 = (undefined1  [8])local_208;
          pTVar25 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0;
          local_200[0].RegisteredTypeIndex = local_250[0].RegisteredTypeIndex;
          if ((TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
              local_248.Data !=
              (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)0x0
             ) {
            FMemory::Free(local_248.Data);
            pTVar25 = local_1f8;
          }
          local_1f8 = (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                       *)0x0;
          local_240._4_4_ = local_1f0._4_4_;
          local_240._0_4_ = (int)local_1f0;
          local_1f0 = 0;
          local_248.Data = (FScriptContainerElement *)pTVar25;
          goto LAB_1493729f5;
        }
        pFVar8 = UNiagaraComponentRendererProperties::GetFQuatDef(&local_b0);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar15 = (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar15 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      local_2a8.DebugPtr = (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr;
      local_2a0 = pFVar8->UnderlyingType;
      local_29e = (FScriptContainerElement)pFVar8->Flags;
      local_29c._0_2_ = pFVar8->Size;
      local_29c._2_2_ = pFVar8->Alignment;
      local_29c._4_4_ = pFVar8->RegisteredTypeDefIndex;
      local_294 = pFVar8->UnderlyingTypePathNameHash;
    }
LAB_1493729f5:
    lVar29 = *(longlong *)(lVar29 + 0x48);
    param_5 = local_270;
  } while (lVar29 != 0);
LAB_149372aff:
  TVar21 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
  if (local_2a0 != 3) {
    if ((UScriptStruct *)local_2a8.DebugPtr != (UScriptStruct *)0x0) {
      pUVar10 = Z_Construct_UClass_UStruct_NoRegister();
      bVar6 = FObjectPtr::IsA(&local_2a8.ObjectPtr,pUVar10);
      TVar21 = local_2a8;
      if (bVar6) goto LAB_149372b37;
    }
    TVar21.DebugPtr = (UObject *)0x0;
  }
LAB_149372b37:
  if ((UScriptStruct *)TVar21.DebugPtr == (UScriptStruct *)0x0) {
LAB_149372bdb:
    bVar6 = false;
  }
  else {
    pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar30 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&(TVar21.DebugPtr)->field_0x10 + 0x38) < iVar30) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar21.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar30 * 8)
        != &pUVar10->_padding_)) goto LAB_149372bdb;
    TVar21 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
    if (local_2a0 != 3) {
      if ((UScriptStruct *)local_2a8.DebugPtr != (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UClass_UStruct_NoRegister();
        bVar6 = FObjectPtr::IsA(&local_2a8.ObjectPtr,pUVar10);
        TVar21 = local_2a8;
        if (bVar6) goto LAB_149372b9f;
      }
      TVar21.DebugPtr = (UObject *)0x0;
    }
LAB_149372b9f:
    if ((UScriptStruct *)TVar21.DebugPtr == (UScriptStruct *)0x0) {
LAB_149372bc7:
      TVar21.DebugPtr = (UObject *)0x0;
    }
    else {
      pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar30 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&(TVar21.DebugPtr)->field_0x10 + 0x38) < iVar30) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(TVar21.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar30 * 8
           ) != &pUVar10->_padding_)) goto LAB_149372bc7;
    }
    bVar6 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                      ((UScriptStruct *)TVar21.DebugPtr,UserFacing);
    if (bVar6) goto LAB_149372bdb;
    bVar6 = true;
  }
  local_80.ArrayMax = 0x20;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_80.ArrayNum = 0;
  if ((((UScriptStruct *)local_2a8.DebugPtr == (UScriptStruct *)0x0) ||
      (((pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_250),
        (UScriptStruct *)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr ==
        (UScriptStruct *)local_2a8.DebugPtr && (pFVar8->UnderlyingType == local_2a0)) &&
       ((FScriptContainerElement)pFVar8->Flags == local_29e)))) ||
     ((pFVar7->bIgnoreConversion != false && (!bVar6)))) {
    pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_250);
    iVar30 = FNiagaraTypeDefinition::GetSize(pFVar8);
    _Src.Data = local_248.Data;
    if (iVar30 < 0) {
      iVar20 = 0xfe;
      pcVar22 = "ArrayNum >= 0";
      goto LAB_149372c9f;
    }
  }
  else {
    ConvertVariableToType
              ((FNiagaraVariable *)local_258,(FNiagaraTypeDefinition *)&local_2a8.ObjectPtr,
               &local_80,(FNiagaraLWCConverter *)local_168.Value);
    _Src.Data = (FScriptContainerElement *)&local_80;
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
      _Src.Data = (FScriptContainerElement *)local_80.AllocatorInstance.SecondaryData;
    }
    iVar30 = local_80.ArrayNum;
    if (local_80.ArrayNum < 0) {
      iVar20 = 0xeb;
      pcVar22 = "InCount >= 0";
LAB_149372c9f:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        (pcVar22,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,iVar20,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (0 < (int)local_240) {
    pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_250);
    iVar20 = FNiagaraTypeDefinition::GetSize(pFVar8);
    if ((int)local_240 == iVar20) {
      pUVar3 = pFVar7->Function;
      if ((pUVar3 == (UFunction *)0x0) || (pUVar3->NumParms == '\0')) {
        lVar29 = *(longlong *)(pFVar31 + 0x20);
        uVar27 = ::GetTypeHash((FNameEntryId)(uint)lVar29);
        if (*(int *)&(param_5->PropertyAddressMapping).field_0x8 !=
            *(int *)&(param_5->PropertyAddressMapping).field_0x34) {
          puVar4 = *(undefined1 **)&(param_5->PropertyAddressMapping).field_0x40;
          puVar26 = &(param_5->PropertyAddressMapping).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar26 = puVar4;
          }
          iVar20 = *(int *)(puVar26 +
                           (ulonglong)
                           (*(int *)&(param_5->PropertyAddressMapping).field_0x48 - 1U &
                           (int)((ulonglong)lVar29 >> 0x20) + uVar27) * 4);
          if (iVar20 != -1) {
            do {
              if (*(longlong *)
                   ((longlong)iVar20 * 0x40 + *(longlong *)&param_5->PropertyAddressMapping) ==
                  lVar29) {
                if (iVar20 != -1) goto LAB_149372ebd;
                break;
              }
              iVar20 = *(int *)((longlong)iVar20 * 0x40 + 0x38 +
                               *(longlong *)&param_5->PropertyAddressMapping);
            } while (iVar20 != -1);
          }
        }
        pFVar13 = ::FName::ToString((FName *)(pFVar31 + 0x20),&local_108);
        local_158 = &local_218;
        local_130 = &local_158;
        local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.ArrayNum = 0;
        local_218.ArrayMax = 0;
        local_138 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraRendererComponents::FindProperty'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
                    ::Call;
        local_148 = (pFVar13->Data).AllocatorInstance.Data;
        iVar20 = (pFVar13->Data).ArrayNum;
        iStack_140 = iVar20 + -1;
        if (iVar20 == 0) {
          iStack_140 = 0;
        }
        local_118._12_4_ = uStack_13c;
        local_118.Size = iStack_140;
        local_118.DataPtr = (wchar_t *)local_148;
        UE::String::ParseTokens
                  (&local_118,L'.',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_138,
                   None);
        if (((param_2 == (USceneComponent *)0x0) || (((uint)param_2->_padding_ >> 0x1e & 1) != 0))
           || (local_218.ArrayNum < 1)) {
          local_198._0_4_ = 0;
          local_198._4_4_ = 0;
          local_150 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)local_198,(FObjectPtr)&local_150);
          local_198._8_8_ = 0;
          local_198._16_8_ = 0;
          local_180 = (void *)0x0;
          local_178 = 0;
          local_170 = (void *)0x0;
        }
        else {
          FindPropertyRecursive
                    ((FComponentPropertyAddress *)local_198,param_2,(UStruct *)param_2->_padding_,
                     &local_218,0);
        }
        if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.AllocatorInstance.Data);
        }
        local_128 = pFVar31 + 0x20;
        local_120 = local_198;
        TSet<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>,TDefaultMapHashableKeyFuncs<FName,FNiagaraRendererComponents::FComponentPropertyAddress,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FName_const_&,FNiagaraRendererComponents::FComponentPropertyAddress_&&>_>
                  ((TSet<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>,TDefaultMapHashableKeyFuncs<FName,FNiagaraRendererComponents::FComponentPropertyAddress,0>,FDefaultSetAllocator>
                    *)&param_5->PropertyAddressMapping,&local_168,(bool *)&local_128);
        if (local_180 != (void *)0x0) {
          FMemory::Free(local_180);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
LAB_149372ebd:
        pFVar18 = (FField *)0x0;
        pFVar14 = TMapBase<FName,FNiagaraRendererComponents::FComponentPropertyAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraRendererComponents::FComponentPropertyAddress,0>_>
                  ::FindChecked((TMapBase<FName,FNiagaraRendererComponents::FComponentPropertyAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraRendererComponents::FComponentPropertyAddress,0>_>
                                 *)&param_5->PropertyAddressMapping,*(FName *)(pFVar31 + 0x20));
        TWeakFieldPtr<FProperty>::TWeakFieldPtr<FProperty>
                  ((TWeakFieldPtr<FProperty> *)local_1e8,&pFVar14->Property);
        local_1c0 = pFVar14->Address;
        pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_1e8);
        if (pUVar15 == (UObject *)0x0) {
          local_1e0.ResolvedField = (FField *)0x0;
        }
        else {
          pFVar16 = FProperty::StaticClass();
          pFVar17 = FFieldPath::GetTyped(&local_1e0,pFVar16,(UStruct *)0x0);
          if (((pFVar17 != (FField *)0x0) && (local_1c0 != (void *)0x0)) &&
             ((pFVar17->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
            pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_1e8);
            if (pUVar15 == (UObject *)0x0) {
              local_1e0.ResolvedField = (FField *)0x0;
            }
            else {
              pFVar16 = FProperty::StaticClass();
              if (((local_1e0.ResolvedField == (FField *)0x0) ||
                  (bVar6 = FWeakObjectPtr::IsValid(&local_1e0.ResolvedOwner.WeakPtr),
                  pFVar17 = local_1e0.ResolvedField, !bVar6)) &&
                 (pFVar17 = local_1e0.ResolvedField, local_1e0.Path.ArrayNum != 0)) {
                pFVar17 = FFieldPath::TryToResolvePath
                                    (&local_1e0,(UStruct *)0x0,UseStructIfOuterNotFound);
                if (pFVar17 != (FField *)0x0) {
                  if ((pFVar16 == (FFieldClass *)0x0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("FieldType",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                         ,0x2dd,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pFVar12 = pFVar17->ClassPrivate;
                  if (pFVar16->Id == CASTCLASS_None) {
                    for (; pFVar12 != (FFieldClass *)0x0; pFVar12 = pFVar12->SuperClass) {
                      if (pFVar12 == pFVar16) {
                        bVar6 = true;
                        goto LAB_149372fd0;
                      }
                    }
                    bVar6 = false;
                  }
                  else {
                    bVar6 = (pFVar12->CastFlags & pFVar16->Id) != CASTCLASS_None;
                  }
LAB_149372fd0:
                  param_5 = local_270;
                  if (bVar6) goto LAB_149372ff6;
                }
                param_5 = local_270;
                pFVar17 = local_1e0.ResolvedField;
                if (local_1e0.ResolvedField != (FField *)0x0) {
                  local_1e0.ResolvedOwner.WeakPtr.ObjectIndex = 0;
                  local_1e0.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
                  local_1e0.ResolvedField = (FField *)0x0;
                  pFVar17 = local_1e0.ResolvedField;
                }
              }
LAB_149372ff6:
              local_1e0.ResolvedField = pFVar17;
              if (((local_1e0.ResolvedField != (FField *)0x0) && (local_1c0 != (void *)0x0)) &&
                 (((local_1e0.ResolvedField)->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed))
                  == RF_NoFlags)) {
                pFVar18 = local_1e0.ResolvedField;
              }
            }
            memcpy((void *)((longlong)&param_2->_padding_ +
                           (longlong)*(int *)((longlong)&pFVar18[1].Owner.Container + 4)),_Src.Data,
                   (longlong)iVar30);
          }
        }
        if (local_1e0.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Path.AllocatorInstance.Data);
        }
      }
      else {
        InvokeSetterFunction
                  ((UObject *)param_2,pUVar3,(uchar *)_Src.Data,iVar30,
                   (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)(pFVar31 + 0x48));
      }
    }
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  param_3 = local_268;
  pFVar28 = local_260;
  param_4 = local_28c;
  if ((TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)
      local_248.Data !=
      (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_248.Data);
    param_3 = local_268;
    pFVar28 = local_260;
    param_4 = local_28c;
  }
LAB_149373066:
  pFVar31 = pFVar31 + 0x98;
  uVar23 = (ulonglong)local_220;
  goto LAB_149372461;
}

