// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149078c40

UScriptStruct * __cdecl FNiagaraDataChannelReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataChannelReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDataChannelReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelReference,(UObject *)pUVar1,
                         L"NiagaraDataChannelReference");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataChannelReference.OuterSingleton;
}

// GetAccessContext @ 1491024a0

FNDCAccessContextInst * __thiscall
FNiagaraDataChannelReference::GetAccessContext(FNiagaraDataChannelReference *this)

{
  InitAccessContext(this,true);
  return &this->AccessContext;
}

// GetUsableAccessContext @ 14910be60

FNDCAccessContextInst * __thiscall
FNiagaraDataChannelReference::GetUsableAccessContext(FNiagaraDataChannelReference *this)

{
  UNiagaraDataChannelAsset *pUVar1;
  UNiagaraDataChannel *this_00;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  FInstancedStruct *this_01;
  
  pUVar1 = (this->DataChannel).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNiagaraDataChannelAsset *)0x0) &&
     (this_00 = (pUVar1->DataChannel).field0_0x0.DebugPtr, this_00 != (UNiagaraDataChannel *)0x0)) {
    InitAccessContext(this,true);
    this_01 = &UNiagaraDataChannel::GetTransientAccessContext(this_00)->AccessContext;
    if (this->bCustomAccessContext != false) {
      puVar2 = (this->AccessContext).AccessContext.StructMemory;
      if (((puVar2 != (uchar *)0x0) &&
          (pUVar3 = (this->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
          pUVar3 != (UScriptStruct *)0x0)) && (this_01 != &(this->AccessContext).AccessContext)) {
        FInstancedStruct::InitializeAs(this_01,pUVar3,puVar2);
      }
    }
    return (FNDCAccessContextInst *)this_01;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInstancedStruct::FInstancedStruct(&::Dummy.AccessContext);
      atexit(`FNiagaraDataChannelReference::GetUsableAccessContext'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
      return &::Dummy;
    }
  }
  return &::Dummy;
}

// InitAccessContext @ 1491144c0

void __thiscall
FNiagaraDataChannelReference::InitAccessContext(FNiagaraDataChannelReference *this,bool param_1)

{
  TObjectPtr<UNiagaraDataChannelAsset>_u_0 TVar1;
  longlong *plVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar3;
  uchar *puVar4;
  UScriptStruct *this_00;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  UPackage *pUVar10;
  undefined8 *puVar11;
  FProperty *pFVar12;
  uchar *_Dst;
  FName FVar13;
  uchar *_Src;
  FName FVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_60;
  longlong lStack_58;
  TObjectPtr<UScriptStruct_const_>_u_0 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  
  TVar1 = (this->DataChannel).field0_0x0;
  if ((TVar1.DebugPtr != (UNiagaraDataChannelAsset *)0x0) &&
     (plVar2 = *(longlong **)((longlong)TVar1 + 0x28), plVar2 != (longlong *)0x0)) {
    pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
             (**(code **)(*plVar2 + 0x2b0))(plVar2,local_res18);
    TVar3 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar9->DebugPtr;
    if (this->bCustomAccessContext != false) {
      if (Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextLegacy,(UObject *)pUVar10,
                             L"NDCAccessContextLegacy");
      }
      if (TVar3.DebugPtr != Z_Registration_Info_UScriptStruct_FNDCAccessContextLegacy.OuterSingleton
         ) {
        puVar4 = (this->AccessContext).AccessContext.StructMemory;
        if (((puVar4 == (uchar *)0x0) ||
            (this_00 = (this->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
            this_00 == (UScriptStruct *)0x0)) || (!param_1)) {
          puVar11 = (undefined8 *)(**(code **)(*plVar2 + 0x2b0))(plVar2,local_68);
          FNDCAccessContextInst::Init(&this->AccessContext,(UScriptStruct *)*puVar11);
        }
        else if (this_00 != TVar3.DebugPtr) {
          local_60.DebugPtr = (UScriptStruct *)0x0;
          lStack_58 = 0;
          FInstancedStruct::InitializeAs((FInstancedStruct *)&local_60.ObjectPtr,this_00,puVar4);
          puVar11 = (undefined8 *)(**(code **)(*plVar2 + 0x2b0))(plVar2,local_res20);
          FNDCAccessContextInst::Init(&this->AccessContext,(UScriptStruct *)*puVar11);
          lVar6 = lStack_58;
          FVar14.ComparisonIndex.Value = 0;
          FVar14.Number = 0;
          puVar4 = (this->AccessContext).AccessContext.StructMemory;
          if (TVar3.DebugPtr == (UScriptStruct *)0x0) {
            local_48 = (longlong *)0x0;
          }
          else {
            local_48 = (longlong *)(TVar3.DebugPtr)->_padding_;
          }
          local_40 = 0xffffffff;
          local_3c = 0x101;
          local_3a = 0;
          local_50 = TVar3;
          TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_50.ObjectPtr)
          ;
          plVar2 = local_48;
          while (local_48 = plVar2, plVar2 != (longlong *)0x0) {
            bVar7 = IsThisNotNull(plVar2,"FField::GetFName");
            FVar13 = FVar14;
            if (bVar7) {
              FVar13 = (FName)plVar2[4];
            }
            pFVar12 = UStruct::FindPropertyByName((UStruct *)this_00,FVar13);
            if ((pFVar12 != (FProperty *)0x0) &&
               (cVar8 = (**(code **)(pFVar12->_padding_ + 0x1a0))(pFVar12,plVar2), cVar8 != '\0')) {
              if ((pFVar12->ArrayDim < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((lVar6 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              _Src = (uchar *)(lVar6 + pFVar12->Offset_Internal);
              if (((int)plVar2[6] < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((puVar4 == (uchar *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              _Dst = puVar4 + *(int *)((longlong)plVar2 + 0x44);
              if (_Dst != _Src) {
                if (((uint)plVar2[7] >> 0x1e & 1) == 0) {
                  (**(code **)(*plVar2 + 0xf0))(plVar2,_Dst,_Src,(int)plVar2[6]);
                }
                else {
                  memcpy(_Dst,_Src,
                         (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
                }
              }
            }
            local_48 = (longlong *)plVar2[3];
            TFieldIterator<FProperty>::IterateToNext
                      ((TFieldIterator<FProperty> *)&local_50.ObjectPtr);
            plVar2 = local_48;
          }
          FInstancedStruct::Reset((FInstancedStruct *)&local_60.ObjectPtr);
        }
        return;
      }
    }
  }
  FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  return;
}

// OnValueChanged @ 14911abb0

void __thiscall FNiagaraDataChannelReference::OnValueChanged(FNiagaraDataChannelReference *this)

{
  if ((this->DataChannel).field0_0x0.DebugPtr != (UNiagaraDataChannelAsset *)0x0) {
    InitAccessContext(this,true);
    return;
  }
  FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  return;
}

// SetDataChannel @ 14912d360

void __thiscall
FNiagaraDataChannelReference::SetDataChannel
          (FNiagaraDataChannelReference *this,UNiagaraDataChannelAsset *param_1)

{
  UNiagaraDataChannelAsset *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->DataChannel).field0_0x0.DebugPtr;
  if (pUVar1 == (UNiagaraDataChannelAsset *)0x0) {
    bVar2 = param_1 == (UNiagaraDataChannelAsset *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraDataChannelAsset *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->DataChannel).field0_0x0.DebugPtr = param_1;
      InitAccessContext(this,true);
      return;
    }
    (this->DataChannel).field0_0x0.DebugPtr = param_1;
    if (param_1 != (UNiagaraDataChannelAsset *)0x0) {
      InitAccessContext(this,true);
      return;
    }
    FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  }
  return;
}

