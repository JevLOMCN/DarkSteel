// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 30

// Construct<FRuntimeProxyValue> @ 14cf24a30

void __cdecl UE::CoreUObject::Private::Construct<FRuntimeProxyValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRuntimeProxyValue> @ 14cf24a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRuntimeProxyValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRuntimeProxyValue> @ 14cf24ac0

void __cdecl UE::CoreUObject::Private::Destruct<FRuntimeProxyValue>(void *param_1)

{
  DestructItems<FProxyStructOutput,int>
            (*(FProxyStructOutput **)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// Copy<FRuntimeProxyValue> @ 14cf24b40

bool __cdecl
UE::CoreUObject::Private::Copy<FRuntimeProxyValue>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((FInstancedStruct *)(puVar2 + 1) != (FInstancedStruct *)(puVar1 + 1)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar2 + 1),
                   (((FInstancedStruct *)(puVar1 + 1))->ScriptStruct).field0_0x0.DebugPtr,
                   (uchar *)puVar1[2]);
      }
      TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_> *)(puVar2 + 3),
                 (TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_> *)(puVar1 + 3));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FProxyEntry> @ 14cf24ce0

void __cdecl UE::CoreUObject::Private::Construct<FProxyEntry>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FProxyEntry> @ 14cf24d30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProxyEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FProxyEntry> @ 14cf24d70

void __cdecl UE::CoreUObject::Private::Destruct<FProxyEntry>(void *param_1)

{
  DestructItems<FProxyStructOutput,int>
            (*(FProxyStructOutput **)((longlong)param_1 + 0x20),*(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FProxyEntry> @ 14cf24db0

bool __cdecl UE::CoreUObject::Private::Copy<FProxyEntry>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      if ((FInstancedStruct *)(puVar2 + 2) != (FInstancedStruct *)(puVar1 + 2)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar2 + 2),
                   (((FInstancedStruct *)(puVar1 + 2))->ScriptStruct).field0_0x0.DebugPtr,
                   (uchar *)puVar1[3]);
      }
      TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_> *)(puVar2 + 4),
                 (TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_> *)(puVar1 + 4));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FProxyStructOutput> @ 14cf24fb0

void __cdecl UE::CoreUObject::Private::Construct<FProxyStructOutput>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FChooserStructPropertyBinding__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x30));
  return;
}

// ConstructForTests<FProxyStructOutput> @ 14cf250d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProxyStructOutput>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FChooserStructPropertyBinding__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x30));
  return;
}

// Destruct<FProxyStructOutput> @ 14cf25110

void __cdecl UE::CoreUObject::Private::Destruct<FProxyStructOutput>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x30));
  *(undefined ***)param_1 = &___7FChooserPropertyBinding__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FProxyStructOutput> @ 14cf25350

bool __cdecl
UE::CoreUObject::Private::Copy<FProxyStructOutput>(void *param_1,void *param_2,int param_3)

{
  FChooserPropertyBinding *pFVar1;
  FChooserPropertyBinding *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FChooserPropertyBinding *)(((longlong)param_2 - (longlong)param_1) + (longlong)this)
      ;
      FChooserPropertyBinding::operator=(this,pFVar1);
      if (this + 1 != pFVar1 + 1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(this + 1),
                   (((TObjectPtr<UScriptStruct_const_> *)&pFVar1[1]._padding_)->field0_0x0).DebugPtr
                   ,(uchar *)pFVar1[1].PropertyBindingChain.AllocatorInstance.Data);
      }
      param_3 = param_3 + -1;
      this = (FChooserPropertyBinding *)&this[1].PropertyBindingChain.ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLookupProxyWithOverrideTable> @ 14cf256a0

void __cdecl UE::CoreUObject::Private::Construct<FLookupProxyWithOverrideTable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLookupProxyWithOverrideTable__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FLookupProxyWithOverrideTable> @ 14cf256c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLookupProxyWithOverrideTable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FLookupProxyWithOverrideTable__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FLookupProxyWithOverrideTable> @ 14cf256e0

void __cdecl UE::CoreUObject::Private::Destruct<FLookupProxyWithOverrideTable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FObjectChooserBase__6B_;
  return;
}

// Copy<FLookupProxyWithOverrideTable> @ 14cf25700

bool __cdecl
UE::CoreUObject::Private::Copy<FLookupProxyWithOverrideTable>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FLookupProxy> @ 14cf257b0

void __cdecl UE::CoreUObject::Private::Construct<FLookupProxy>(void *param_1)

{
  UPackage *pUVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FLookupProxy__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  if (Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProxyTableContextProperty,(UObject *)pUVar1,
                         L"ProxyTableContextProperty");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)((longlong)param_1 + 0x10),
             Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton,
             (uchar *)0x0);
  return;
}

// ConstructForTests<FLookupProxy> @ 14cf257c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLookupProxy>(void *param_1)

{
  UPackage *pUVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FLookupProxy__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x10));
  if (Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProxyTableContextProperty,(UObject *)pUVar1,
                         L"ProxyTableContextProperty");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)((longlong)param_1 + 0x10),
             Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.OuterSingleton,
             (uchar *)0x0);
  return;
}

// Destruct<FLookupProxy> @ 14cf257d0

void __cdecl UE::CoreUObject::Private::Destruct<FLookupProxy>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x10));
  *(undefined ***)param_1 = &___7FObjectChooserBase__6B_;
  return;
}

// Copy<FLookupProxy> @ 14cf25800

bool __cdecl UE::CoreUObject::Private::Copy<FLookupProxy>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  UObject *pUVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    pFVar1 = (FInstancedStruct *)((longlong)pvVar3 + (longlong)param_2 + (0x10 - (longlong)param_1))
    ;
    *(undefined8 *)((longlong)pvVar3 + 8) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar3 + 0x10) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar3 + 0x10),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    }
    pvVar3 = (void *)((longlong)pvVar3 + 0x20);
  }
  return true;
}

// Construct<FProxyTableContextProperty> @ 14cf258a0

void __cdecl UE::CoreUObject::Private::Construct<FProxyTableContextProperty>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FProxyTableContextProperty__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FChooserPropertyBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FProxyTableContextProperty> @ 14cf258e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProxyTableContextProperty>(void *param_1)

{
  *(undefined ***)param_1 = &___7FProxyTableContextProperty__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FChooserPropertyBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FProxyTableContextProperty> @ 14cf25920

void __cdecl UE::CoreUObject::Private::Destruct<FProxyTableContextProperty>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FChooserPropertyBinding__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FChooserParameterBase__6B_;
  return;
}

// Copy<FProxyTableContextProperty> @ 14cf25970

bool __cdecl
UE::CoreUObject::Private::Copy<FProxyTableContextProperty>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FChooserPropertyBinding *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (8 - (longlong)param_1);
      this = (FChooserPropertyBinding *)((longlong)pvVar2 + 8);
      pvVar2 = (void *)((longlong)pvVar2 + 0x38);
      FChooserPropertyBinding::operator=
                (this,(FChooserPropertyBinding *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FChooserParameterProxyTableBase> @ 14cf259d0

void __cdecl UE::CoreUObject::Private::Construct<FChooserParameterProxyTableBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FChooserParameterProxyTableBase__6B_;
  return;
}

// ConstructForTests<FChooserParameterProxyTableBase> @ 14cf259f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FChooserParameterProxyTableBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FChooserParameterProxyTableBase__6B_;
  return;
}

// Destruct<FChooserParameterProxyTableBase> @ 14cf25a10

void __cdecl UE::CoreUObject::Private::Destruct<FChooserParameterProxyTableBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FChooserParameterBase__6B_;
  return;
}

// Copy<FChooserParameterProxyTableBase> @ 14cf25a30

bool __cdecl
UE::CoreUObject::Private::Copy<FChooserParameterProxyTableBase>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// GetStructPtr<FChooserParameterProxyTableBase> @ 14cf25f10

/* WARNING: Removing unreachable block (ram,0x00014cf25fc6) */

FChooserParameterProxyTableBase * __cdecl
UE::StructUtils::GetStructPtr<FChooserParameterProxyTableBase>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FChooserParameterProxyTableBase *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ProxyTable();
    Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterProxyTableBase,(UObject *)pUVar2
                         ,L"ChooserParameterProxyTableBase");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_ProxyTable();
      Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterProxyTableBase,
                           (UObject *)pUVar2,L"ChooserParameterProxyTableBase");
      if (Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FChooserParameterProxyTableBase *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton)
                 ->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.OuterSingleton)->
         _padding_)) {
      return param_2;
    }
    return (FChooserParameterProxyTableBase *)0x0;
  }
  return param_2;
}

// GetStructRef<FObjectChooserBase_const_> @ 14cf26000

FObjectChooserBase * __cdecl
UE::StructUtils::GetStructRef<FObjectChooserBase_const_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FObjectChooserBase *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FObjectChooserBase *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FObjectChooserBase *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FObjectChooserBase::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FObjectChooserBase::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FObjectChooserBase::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FObjectChooserBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

