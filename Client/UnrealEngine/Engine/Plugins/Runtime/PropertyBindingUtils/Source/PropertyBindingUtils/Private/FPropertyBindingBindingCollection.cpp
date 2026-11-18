// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 36

// StaticStruct @ 14d378340

UScriptStruct * __cdecl FPropertyBindingBindingCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingBindingCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingBindingCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingBindingCollection,
                         (UObject *)pUVar1,L"PropertyBindingBindingCollection");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingBindingCollection.OuterSingleton;
}

// GetNumBindableStructDescriptors @ 14d378380

int __thiscall
FPropertyBindingBindingCollection::GetNumBindableStructDescriptors
          (FPropertyBindingBindingCollection *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xa2,L"Pure virtual not implemented (%s)");
  return -1;
}

// GetBindableStructDescriptorFromHandle @ 14d3783c0

FPropertyBindingBindableStructDescriptor * __thiscall
FPropertyBindingBindingCollection::GetBindableStructDescriptorFromHandle
          (FPropertyBindingBindingCollection *this,FConstStructView *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xa4,L"Pure virtual not implemented (%s)");
  return (FPropertyBindingBindableStructDescriptor *)0x0;
}

// GetNumBindings @ 14d3783f0

int __thiscall
FPropertyBindingBindingCollection::GetNumBindings(FPropertyBindingBindingCollection *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xa7,L"Pure virtual not implemented (%s)");
  return -1;
}

// ForEachBinding @ 14d378430

void __thiscall
FPropertyBindingBindingCollection::ForEachBinding
          (FPropertyBindingBindingCollection *this,
          TFunctionRef<void___cdecl(FPropertyBindingBinding_const_&)> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xb0,L"Pure virtual not implemented (%s)");
  return;
}

// ForEachBinding @ 14d378460

void __thiscall
FPropertyBindingBindingCollection::ForEachBinding
          (FPropertyBindingBindingCollection *this,FPropertyBindingIndex16 param_1,
          FPropertyBindingIndex16 param_2,
          TFunctionRef<void___cdecl(FPropertyBindingBinding_const_&,int)> *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xbb,L"Pure virtual not implemented (%s)");
  return;
}

// ForEachMutableBinding @ 14d378490

void __thiscall
FPropertyBindingBindingCollection::ForEachMutableBinding
          (FPropertyBindingBindingCollection *this,
          TFunctionRef<void___cdecl(FPropertyBindingBinding_&)> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xc4,L"Pure virtual not implemented (%s)");
  return;
}

// VisitBindings @ 14d3784c0

void __thiscall
FPropertyBindingBindingCollection::VisitBindings
          (FPropertyBindingBindingCollection *this,
          TFunctionRef<FPropertyBindingBindingCollection::EVisitResult___cdecl(FPropertyBindingBinding_const_&)>
          *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xce,L"Pure virtual not implemented (%s)");
  return;
}

// VisitMutableBindings @ 14d3784f0

void __thiscall
FPropertyBindingBindingCollection::VisitMutableBindings
          (FPropertyBindingBindingCollection *this,
          TFunctionRef<FPropertyBindingBindingCollection::EVisitResult___cdecl(FPropertyBindingBinding_&)>
          *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingBindingCollection.h"
             ,0xd8,L"Pure virtual not implemented (%s)");
  return;
}

// OnReset @ 14d378520

void __thiscall FPropertyBindingBindingCollection::OnReset(FPropertyBindingBindingCollection *this)

{
  return;
}

// OnResolvingPaths @ 14d378530

bool __thiscall
FPropertyBindingBindingCollection::OnResolvingPaths(FPropertyBindingBindingCollection *this)

{
  return true;
}

// ResolveBindingCopyInfo @ 14d378540

bool __thiscall
FPropertyBindingBindingCollection::ResolveBindingCopyInfo
          (FPropertyBindingBindingCollection *this,FPropertyBindingBinding *param_1,
          FPropertyBindingPathIndirection *param_2,FPropertyBindingPathIndirection *param_3,
          FPropertyBindingCopyInfo *param_4)

{
  bool bVar1;
  
  bVar1 = ResolveCopyInfoBetweenIndirections(this,param_2,param_3,param_4);
  return bVar1;
}

// VisitSourceStructDescriptorInternal @ 14d378560

void __thiscall
FPropertyBindingBindingCollection::VisitSourceStructDescriptorInternal
          (FPropertyBindingBindingCollection *this,
          TFunctionRef<FPropertyBindingBindingCollection::EVisitResult___cdecl(FPropertyBindingBindableStructDescriptor_const_&)>
          *param_1)

{
  return;
}

// ~FPropertyBindingBindingCollection @ 14d37cf30

void __thiscall
FPropertyBindingBindingCollection::~FPropertyBindingBindingCollection
          (FPropertyBindingBindingCollection *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->PropertyReferenceResetFunc != 0) {
    plVar1 = *(longlong **)&(this->PropertyReferenceResetFunc).field_0x28;
    plVar3 = (longlong *)&(this->PropertyReferenceResetFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->PropertyReferenceCopyFunc != 0) {
    plVar1 = *(longlong **)&(this->PropertyReferenceCopyFunc).field_0x28;
    plVar3 = (longlong *)&(this->PropertyReferenceCopyFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->PropertyIndirections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPropertyBindingCopyInfo,int>
            ((FPropertyBindingCopyInfo *)(this->PropertyCopies).AllocatorInstance.Data,
             (this->PropertyCopies).ArrayNum);
  pFVar2 = (this->PropertyCopies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPropertyBindingCopyInfoBatch,int>
            ((FPropertyBindingCopyInfoBatch *)(this->CopyBatches).AllocatorInstance.Data,
             (this->CopyBatches).ArrayNum);
  pFVar2 = (this->CopyBatches).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator() @ 14d37d230

EVisitResult __thiscall
`FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_1>::operator()
          (void *this,FPropertyBindingBindableStructDescriptor *param_1)

{
  UStruct *pUVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  
  pUVar1 = (param_1->Struct).field0_0x0.DebugPtr;
  plVar2 = *(longlong **)this;
  uVar4 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar5 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar5 = plVar2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(UStruct **)(*plVar2 + (longlong)iVar3 * 0x10) == pUVar1) {
          **(undefined1 **)((longlong)this + 8) = 1;
          return Break;
        }
        iVar3 = *(int *)(*plVar2 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return Continue;
}

// operator() @ 14d37d440

EVisitResult __thiscall
`FPropertyBindingBindingCollection::DebugAsString'::__l5::<lambda_1>::operator()
          (void *this,FPropertyBindingBindableStructDescriptor *param_1)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  UStruct *pUVar2;
  FName local_res8;
  FString local_38;
  void *local_28 [2];
  
  pTVar1 = *(TStringBuilderBase<wchar_t> **)((longlong)this + 8);
  (**(code **)(param_1->_padding_ + 8))(param_1,local_28);
  pUVar2 = (param_1->Struct).field0_0x0.DebugPtr;
  if (pUVar2 == (UStruct *)0x0) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    local_res8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res8,&local_38);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"  | (%3d) | %-45s | % -80s |\n");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  **(int **)this = **(int **)this + 1;
  return Continue;
}

// operator() @ 14d37d520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPropertyBindingBindingCollection::ResolvePaths'::__l6::<lambda_1>::operator()
          (void *this,FPropertyBindingBinding *param_1,int param_2)

{
  longlong lVar1;
  UStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UStruct_const_>_u_0 TVar4;
  TObjectPtr<UStruct_const_>_u_0 TVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  FPropertyBindingBindableStructDescriptor *pFVar14;
  undefined1 *puVar15;
  FName *pFVar16;
  int iVar17;
  FName *pFVar18;
  int iVar19;
  int iVar20;
  FPropertyBindingPropertyIndirection *pFVar21;
  TStringBuilderBase<wchar_t> local_238;
  TStringBuilderBase<wchar_t> local_218;
  TStringBuilderBase<wchar_t> local_1f8;
  TStringBuilderBase<wchar_t> local_1d8;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FString local_198;
  TObjectPtr<UStruct_const_>_u_0 local_188;
  undefined8 uStack_180;
  FString local_178;
  TObjectPtr<UStruct_const_>_u_0 local_168;
  undefined8 uStack_160;
  FString local_158;
  FString local_148;
  longlong local_138;
  UStruct *local_130;
  FPropertyBindingPathIndirection local_128;
  FPropertyBindingPathIndirection local_f8;
  FConstStructView local_c8;
  FString local_b8;
  FString local_a8;
  TObjectPtr<UStruct_const_>_u_0 local_98;
  undefined8 uStack_90;
  TObjectPtr<UStruct_const_>_u_0 local_88;
  undefined8 uStack_80;
  FString local_78;
  void *local_68 [2];
  FScriptContainerElement *local_58 [2];
  undefined1 local_48 [16];
  
  lVar1 = *(longlong *)((longlong)this + 0x10);
  uVar10 = 0;
  if (param_2 < *(int *)(lVar1 + 0x28)) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar21 = (FPropertyBindingPropertyIndirection *)
            ((longlong)param_2 * 0x60 + *(longlong *)(lVar1 + 0x20));
  puVar12 = (undefined8 *)(**(code **)(param_1->_padding_ + 8))(param_1,local_48);
  local_c8.ScriptStruct = (UScriptStruct *)*puVar12;
  local_c8.StructMemory = (uchar *)puVar12[1];
  FInstancedStruct::operator=((FInstancedStruct *)(pFVar21 + 2),&local_c8);
  pUVar2 = pFVar21[2].InstanceStruct.field0_0x0.DebugPtr;
  iVar20 = 0;
  if ((pUVar2 == (UStruct *)0x0) ||
     (lVar1._0_2_ = pFVar21[2].ArrayIndex, lVar1._2_2_ = pFVar21[2].Offset,
     lVar1._4_2_ = pFVar21[2].NextIndex, lVar1._6_1_ = pFVar21[2].Type,
     lVar1._7_1_ = pFVar21[2].field_0x7, lVar1 == 0)) {
    if (1 < (byte)LogPropertyBindingUtils._0_1_) {
      iVar19 = (param_1->SourcePropertyPath).Segments.ArrayNum;
      pFVar3 = (param_1->SourcePropertyPath).Segments.AllocatorInstance.Data;
      local_1d8.End = (wchar_t *)0x0;
      local_1d8.bIsDynamic = false;
      local_1d8.bIsExternal = false;
      local_1d8.Base = (wchar_t *)0x0;
      local_1d8.CurPos = (wchar_t *)0x0;
      if ((iVar19 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar17 = iVar20;
      if (iVar19 < 0) {
        iVar17 = iVar19;
      }
      pFVar16 = (FName *)(pFVar3 + (longlong)iVar17 * 0x20);
      if (0 < iVar19 - iVar17) {
        iVar20 = iVar19 - iVar17;
      }
      if ((iVar20 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = 0;
      pFVar18 = pFVar16 + (longlong)iVar20 * 4;
      for (; pFVar16 != pFVar18; pFVar16 = pFVar16 + 4) {
        if (0 < iVar19) {
          if (local_1d8.End < local_1d8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
          }
          *local_1d8.CurPos = L'.';
          local_1d8.CurPos = local_1d8.CurPos + 1;
        }
        local_1a0 = *pFVar16;
        ::FName::AppendString(&local_1a0,&local_1d8);
        if (-1 < (int)pFVar16[1].ComparisonIndex.Value) {
          if (local_1d8.End < local_1d8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
          }
          *local_1d8.CurPos = L'[';
          local_1d8.CurPos = local_1d8.CurPos + 1;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_1d8,L"%d");
          if (local_1d8.End < local_1d8.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
          }
          *local_1d8.CurPos = L']';
          local_1d8.CurPos = local_1d8.CurPos + 1;
        }
        iVar19 = iVar19 + 1;
      }
      if (local_1d8.End < local_1d8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
      }
      *local_1d8.CurPos = L'\0';
      ::FString::FString(&local_148,local_1d8.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1d8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
      local_198.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
      goto LAB_14d37e126;
    }
  }
  else {
    local_138 = lVar1;
    local_130 = pUVar2;
    plVar13 = (longlong *)
              (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))
                        (*(longlong **)((longlong)this + 0x10),&local_138);
    if (plVar13 == (longlong *)0x0) {
      if (1 < (byte)LogPropertyBindingUtils._0_1_) {
        uVar10 = (param_1->SourcePropertyPath).Segments.ArrayNum;
        pFVar3 = (param_1->SourcePropertyPath).Segments.AllocatorInstance.Data;
        local_238.End = (wchar_t *)0x0;
        local_238.bIsDynamic = false;
        local_238.bIsExternal = false;
        local_238.Base = (wchar_t *)0x0;
        local_238.CurPos = (wchar_t *)0x0;
        if (((int)uVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = 0;
        if ((int)uVar10 < 0) {
          uVar11 = uVar10;
        }
        pFVar16 = (FName *)(pFVar3 + (longlong)(int)uVar11 * 0x20);
        if (0 < (int)(uVar10 - uVar11)) {
          iVar20 = uVar10 - uVar11;
        }
        if ((iVar20 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar19 = 0;
        pFVar18 = pFVar16 + (longlong)iVar20 * 4;
        for (; pFVar16 != pFVar18; pFVar16 = pFVar16 + 4) {
          if (0 < iVar19) {
            if (local_238.End < local_238.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_238,1);
            }
            *local_238.CurPos = L'.';
            local_238.CurPos = local_238.CurPos + 1;
          }
          local_1b8 = *pFVar16;
          ::FName::AppendString(&local_1b8,&local_238);
          if (-1 < (int)pFVar16[1].ComparisonIndex.Value) {
            if (local_238.End < local_238.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_238,1);
            }
            *local_238.CurPos = L'[';
            local_238.CurPos = local_238.CurPos + 1;
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_238,L"%d");
            if (local_238.End < local_238.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_238,1);
            }
            *local_238.CurPos = L']';
            local_238.CurPos = local_238.CurPos + 1;
          }
          iVar19 = iVar19 + 1;
        }
        if (local_238.End < local_238.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_238,1);
        }
        *local_238.CurPos = L'\0';
        ::FString::FString(&local_198,local_238.Base);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
        goto LAB_14d37e126;
      }
    }
    else {
      TVar4 = (TObjectPtr<UStruct_const_>_u_0)
              ((TObjectPtr<UStruct_const_>_u_0 *)(plVar13 + 1))->DebugPtr;
      pFVar14 = UE::StructUtils::GetStructRef<FPropertyBindingBindableStructDescriptor>
                          ((UScriptStruct *)**(undefined8 **)((longlong)this + 8),
                           (void *)(*(undefined8 **)((longlong)this + 8))[1]);
      TVar5 = (TObjectPtr<UStruct_const_>_u_0)(pFVar14->Struct).field0_0x0.DebugPtr;
      if (TVar4.DebugPtr == (UStruct *)0x0) {
        if (1 < (byte)LogPropertyBindingUtils._0_1_) {
          (**(code **)(*plVar13 + 8))(plVar13,local_68);
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
        }
        if (TVar5.DebugPtr != (UStruct *)0x0) goto LAB_14d37e130;
      }
      else if (TVar5.DebugPtr != (UStruct *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
        }
        pFVar21[3].InstanceStruct.field0_0x0.DebugPtr = (UStruct *)TVar4;
        bVar7 = true;
        uStack_180 = 0;
        uStack_160 = 0;
        local_188 = TVar4;
        local_168 = TVar5;
        if ((*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x48) != 0) &&
           (plVar13 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x50),
           plVar13 != (longlong *)0x0)) {
          cVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,param_1,0,&local_188);
          if (cVar8 == '\0') {
            if (1 < (byte)LogPropertyBindingUtils._0_1_) {
              FPropertyBindingBinding::ToString(param_1,&local_b8);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
            }
            bVar7 = false;
          }
          cVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,param_1,1,&local_168);
          if (cVar8 == '\0') {
            if (1 < (byte)LogPropertyBindingUtils._0_1_) {
              FPropertyBindingBinding::ToString(param_1,&local_a8);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
            bVar7 = false;
          }
        }
        local_f8.ArrayIndex = -1;
        local_f8.PropertyOffset = -1;
        local_f8.PathSegmentIndex = -1;
        local_f8.Property = (FProperty *)0x0;
        local_f8.ContainerAddress = (void *)0x0;
        local_128.Property = (FProperty *)0x0;
        local_128.ContainerAddress = (void *)0x0;
        local_f8.AccessType = Offset;
        local_98.DebugPtr = local_188.DebugPtr;
        uStack_90 = uStack_180;
        local_f8.ContainerStruct = (UStruct *)0x0;
        local_f8.InstanceStruct = (UStruct *)0x0;
        local_128.ArrayIndex = -1;
        local_128.PropertyOffset = -1;
        local_128.ContainerStruct = (UStruct *)0x0;
        local_128.InstanceStruct = (UStruct *)0x0;
        local_128.PathSegmentIndex = -1;
        local_128.AccessType = Offset;
        bVar9 = FPropertyBindingBindingCollection::ResolvePath
                          (*(FPropertyBindingBindingCollection **)((longlong)this + 0x10),
                           (FPropertyBindingDataView *)&local_98.ObjectPtr,
                           &param_1->SourcePropertyPath,pFVar21,&local_f8);
        if (!bVar9) {
          if (1 < (byte)LogPropertyBindingUtils._0_1_) {
            iVar20 = (param_1->SourcePropertyPath).Segments.ArrayNum;
            pFVar3 = (param_1->SourcePropertyPath).Segments.AllocatorInstance.Data;
            local_218.End = (wchar_t *)0x0;
            local_218.bIsDynamic = false;
            local_218.bIsExternal = false;
            local_218.Base = (wchar_t *)0x0;
            local_218.CurPos = (wchar_t *)0x0;
            if ((iVar20 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar19 = 0;
            if (iVar20 < 0) {
              iVar19 = iVar20;
            }
            pFVar16 = (FName *)(pFVar3 + (longlong)iVar19 * 0x20);
            iVar17 = 0;
            if (0 < iVar20 - iVar19) {
              iVar17 = iVar20 - iVar19;
            }
            if ((iVar17 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar20 = 0;
            pFVar18 = pFVar16 + (longlong)iVar17 * 4;
            for (; pFVar16 != pFVar18; pFVar16 = pFVar16 + 4) {
              if (0 < iVar20) {
                if (local_218.End < local_218.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_218,1);
                }
                *local_218.CurPos = L'.';
                local_218.CurPos = local_218.CurPos + 1;
              }
              local_1b0 = *pFVar16;
              ::FName::AppendString(&local_1b0,&local_218);
              if (-1 < (int)pFVar16[1].ComparisonIndex.Value) {
                if (local_218.End < local_218.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_218,1);
                }
                *local_218.CurPos = L'[';
                local_218.CurPos = local_218.CurPos + 1;
                TStringBuilderBase<wchar_t>::AppendfImpl(&local_218,L"%d");
                if (local_218.End < local_218.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_218,1);
                }
                *local_218.CurPos = L']';
                local_218.CurPos = local_218.CurPos + 1;
              }
              iVar20 = iVar20 + 1;
            }
            if (local_218.End < local_218.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_218,1);
            }
            *local_218.CurPos = L'\0';
            ::FString::FString(&local_178,local_218.Base);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_218);
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
          }
          bVar7 = false;
        }
        local_88.DebugPtr = local_168.DebugPtr;
        uStack_80 = uStack_160;
        bVar9 = FPropertyBindingBindingCollection::ResolvePath
                          (*(FPropertyBindingBindingCollection **)((longlong)this + 0x10),
                           (FPropertyBindingDataView *)&local_88.ObjectPtr,
                           &param_1->TargetPropertyPath,pFVar21 + 1,&local_128);
        if (!bVar9) {
          if (1 < (byte)LogPropertyBindingUtils._0_1_) {
            iVar20 = (param_1->TargetPropertyPath).Segments.ArrayNum;
            pFVar3 = (param_1->TargetPropertyPath).Segments.AllocatorInstance.Data;
            local_1f8.End = (wchar_t *)0x0;
            local_1f8.bIsDynamic = false;
            local_1f8.bIsExternal = false;
            local_1f8.Base = (wchar_t *)0x0;
            local_1f8.CurPos = (wchar_t *)0x0;
            if ((iVar20 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar19 = 0;
            if (iVar20 < 0) {
              iVar19 = iVar20;
            }
            pFVar16 = (FName *)(pFVar3 + (longlong)iVar19 * 0x20);
            iVar17 = 0;
            if (0 < iVar20 - iVar19) {
              iVar17 = iVar20 - iVar19;
            }
            if ((iVar17 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar20 = 0;
            pFVar18 = pFVar16 + (longlong)iVar17 * 4;
            for (; pFVar16 != pFVar18; pFVar16 = pFVar16 + 4) {
              if (0 < iVar20) {
                if (local_1f8.End < local_1f8.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
                }
                *local_1f8.CurPos = L'.';
                local_1f8.CurPos = local_1f8.CurPos + 1;
              }
              local_1a8 = *pFVar16;
              ::FName::AppendString(&local_1a8,&local_1f8);
              if (-1 < (int)pFVar16[1].ComparisonIndex.Value) {
                if (local_1f8.End < local_1f8.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
                }
                *local_1f8.CurPos = L'[';
                local_1f8.CurPos = local_1f8.CurPos + 1;
                TStringBuilderBase<wchar_t>::AppendfImpl(&local_1f8,L"%d");
                if (local_1f8.End < local_1f8.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
                }
                *local_1f8.CurPos = L']';
                local_1f8.CurPos = local_1f8.CurPos + 1;
              }
              iVar20 = iVar20 + 1;
            }
            if (local_1f8.End < local_1f8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_1f8,1);
            }
            *local_1f8.CurPos = L'\0';
            ::FString::FString(&local_158,local_1f8.Base);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1f8);
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
            if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.Data.AllocatorInstance.Data);
            }
          }
          bVar7 = false;
        }
        cVar8 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x58))
                          (*(longlong **)((longlong)this + 0x10),param_1,&local_f8,&local_128,
                           pFVar21);
        if (cVar8 == '\0') {
          if (1 < (byte)LogPropertyBindingUtils._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
            *(undefined1 *)((longlong)&pFVar21[3].ArrayProperty + 4) = 0;
            puVar15 = *(undefined1 **)this;
            goto LAB_14d37e142;
          }
        }
        else if (bVar7) {
          if ((byte)LogPropertyBindingUtils._0_1_ < 5) {
            return;
          }
          FPropertyBindingBinding::ToString(param_1,&local_78);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
          if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          return;
        }
        *(undefined1 *)((longlong)&pFVar21[3].ArrayProperty + 4) = 0;
        puVar15 = *(undefined1 **)this;
        goto LAB_14d37e142;
      }
      if (1 < (byte)LogPropertyBindingUtils._0_1_) {
        pFVar14 = UE::StructUtils::GetStructRef<FPropertyBindingBindableStructDescriptor>
                            ((UScriptStruct *)**(undefined8 **)((longlong)this + 8),
                             (void *)(*(undefined8 **)((longlong)this + 8))[1]);
        (**(code **)(pFVar14->_padding_ + 8))(pFVar14,local_58);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
        local_198.Data.AllocatorInstance.Data = local_58[0];
LAB_14d37e126:
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14d37e130:
  *(undefined1 *)((longlong)&pFVar21[3].ArrayProperty + 4) = 0;
  *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x40) = 0;
  puVar15 = *(undefined1 **)this;
LAB_14d37e142:
  *puVar15 = 0;
  return;
}

// operator() @ 14d37e8b0

bool __thiscall
`FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_2>::operator()
          (void *this,FPropertyBindingPath *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  iVar6 = (param_1->Segments).ArrayNum;
  pFVar9 = (param_1->Segments).AllocatorInstance.Data;
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar10 = pFVar9 + (longlong)iVar6 * 0x20;
  if (pFVar9 != pFVar10) {
    plVar1 = *(longlong **)this;
    do {
      uVar2 = *(ulonglong *)(pFVar9 + 0x10);
      uVar7 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar8 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar1[8];
        }
        iVar6 = *(int *)((longlong)plVar8 +
                        (ulonglong)((int)plVar1[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar6 != -1) {
          do {
            if (*(ulonglong *)(*plVar1 + (longlong)iVar6 * 0x10) == uVar2) {
              return true;
            }
            iVar6 = *(int *)(*plVar1 + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
      pFVar9 = pFVar9 + 0x20;
    } while (pFVar9 != pFVar10);
  }
  return false;
}

// operator() @ 14d37e9d0

void __thiscall
`FPropertyBindingBindingCollection::DebugAsString'::__l13::<lambda_2>::operator()
          (void *this,FPropertyBindingBinding *param_1)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  int iVar7;
  FName *pFVar8;
  int iVar9;
  int iVar10;
  FName local_res18;
  FName local_res20;
  FString local_b0;
  FString local_a0;
  TStringBuilderBase<wchar_t> local_90;
  TStringBuilderBase<wchar_t> local_70;
  
  pTVar1 = *(TStringBuilderBase<wchar_t> **)((longlong)this + 8);
  iVar10 = (param_1->TargetPropertyPath).Segments.ArrayNum;
  iVar9 = 0;
  pFVar2 = (param_1->TargetPropertyPath).Segments.AllocatorInstance.Data;
  local_90.End = (wchar_t *)0x0;
  local_90.bIsDynamic = false;
  local_90.bIsExternal = false;
  local_90.Base = (wchar_t *)0x0;
  local_90.CurPos = (wchar_t *)0x0;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = 0;
  if (iVar10 < 0) {
    iVar5 = iVar10;
  }
  pFVar6 = (FName *)(pFVar2 + (longlong)iVar5 * 0x20);
  iVar7 = 0;
  if (0 < iVar10 - iVar5) {
    iVar7 = iVar10 - iVar5;
  }
  if ((iVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = pFVar6 + (longlong)iVar7 * 4;
  for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 4) {
    if (0 < iVar9) {
      if (local_90.End < local_90.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_90,1);
      }
      *local_90.CurPos = L'.';
      local_90.CurPos = local_90.CurPos + 1;
    }
    local_res18 = *pFVar6;
    ::FName::AppendString(&local_res18,&local_90);
    if (-1 < (int)pFVar6[1].ComparisonIndex.Value) {
      if (local_90.End < local_90.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_90,1);
      }
      *local_90.CurPos = L'[';
      local_90.CurPos = local_90.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_90,L"%d");
      if (local_90.End < local_90.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_90,1);
      }
      *local_90.CurPos = L']';
      local_90.CurPos = local_90.CurPos + 1;
    }
    iVar9 = iVar9 + 1;
  }
  if (local_90.End < local_90.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_90,1);
  }
  *local_90.CurPos = L'\0';
  ::FString::FString(&local_a0,local_90.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_90);
  iVar10 = (param_1->SourcePropertyPath).Segments.ArrayNum;
  pFVar2 = (param_1->SourcePropertyPath).Segments.AllocatorInstance.Data;
  local_70.End = (wchar_t *)0x0;
  local_70.bIsDynamic = false;
  local_70.bIsExternal = false;
  local_70.Base = (wchar_t *)0x0;
  local_70.CurPos = (wchar_t *)0x0;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = 0;
  if (iVar10 < 0) {
    iVar9 = iVar10;
  }
  pFVar6 = (FName *)(pFVar2 + (longlong)iVar9 * 0x20);
  iVar5 = 0;
  if (0 < iVar10 - iVar9) {
    iVar5 = iVar10 - iVar9;
  }
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = 0;
  pFVar8 = pFVar6 + (longlong)iVar5 * 4;
  for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 4) {
    if (0 < iVar10) {
      if (local_70.End < local_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
      }
      *local_70.CurPos = L'.';
      local_70.CurPos = local_70.CurPos + 1;
    }
    local_res20 = *pFVar6;
    ::FName::AppendString(&local_res20,&local_70);
    if (-1 < (int)pFVar6[1].ComparisonIndex.Value) {
      if (local_70.End < local_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
      }
      *local_70.CurPos = L'[';
      local_70.CurPos = local_70.CurPos + 1;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_70,L"%d");
      if (local_70.End < local_70.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,1);
      }
      *local_70.CurPos = L']';
      local_70.CurPos = local_70.CurPos + 1;
    }
    iVar10 = iVar10 + 1;
  }
  if (local_70.End < local_70.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_70,1);
  }
  *local_70.CurPos = L'\0';
  ::FString::FString(&local_b0,local_70.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_70);
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"  | (%3d) | %-45s | %-45s |\n");
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  **(int **)this = **(int **)this + 1;
  return;
}

// ContainsAnyStruct @ 14d37efb0

bool __thiscall
FPropertyBindingBindingCollection::ContainsAnyStruct
          (FPropertyBindingBindingCollection *this,
          TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UStruct *pUVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  FPropertyBindingBindableStructDescriptor *pFVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> *local_48;
  TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> **local_40;
  TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> *local_38;
  TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> **local_30;
  
  local_40 = (TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> **)
             local_res8;
  local_30 = &local_48;
  local_res8[0] = '\0';
  local_38 = (TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_1>,enum_FPropertyBindingBindingCollection::EVisitResult,FPropertyBindingBindableStructDescriptor_const_&>
             ::Call;
  local_48 = param_1;
  (**(code **)(this->_padding_ + 0x60))(this,&local_38);
  if (local_res8[0] != '\0') {
    return true;
  }
  iVar2 = (this->CopyBatches).ArrayNum;
  pFVar9 = (this->CopyBatches).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->CopyBatches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPropertyBindingCopyInfoBatch_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar1) break;
    pFVar6 = UE::StructUtils::GetStructRef<FPropertyBindingBindableStructDescriptor>
                       (*(UScriptStruct **)pFVar9,*(void **)(pFVar9 + 8));
    pUVar3 = (pFVar6->Struct).field0_0x0.DebugPtr;
    uVar7 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      FVar4 = (param_1->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)&param_1->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar4;
      }
      iVar5 = *(int *)((longlong)FVar8 +
                      (ulonglong)(param_1->HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(UStruct **)(*(longlong *)&param_1->Elements + (longlong)iVar5 * 0x10) == pUVar3) {
            return true;
          }
          iVar5 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    pFVar9 = pFVar9 + 0x18;
  }
  local_30 = (TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> **)
             local_res10;
  local_res10[0] = 0;
  local_40 = &local_38;
  local_48 = (TSet<UStruct_const_*,DefaultKeyFuncs<UStruct_const_*,0>,FDefaultSetAllocator> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FPropertyBindingBindingCollection::ContainsAnyStruct'::__l2::<lambda_3>,enum_FPropertyBindingBindingCollection::EVisitResult,FPropertyBindingBinding_const_&>
             ::Call;
  local_38 = param_1;
  (**(code **)(this->_padding_ + 0x38))(this,&local_48);
  return (bool)local_res10[0];
}

// CopyProperty @ 14d37f120

bool __thiscall
FPropertyBindingBindingCollection::CopyProperty
          (FPropertyBindingBindingCollection *this,FPropertyBindingCopyInfo *param_1,
          FPropertyBindingDataView *param_2,FPropertyBindingDataView *param_3)

{
  int iVar1;
  UStruct *pUVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uchar *puVar7;
  uchar *puVar8;
  undefined1 local_res8 [8];
  FPropertyBindingDataView local_28;
  FPropertyBindingDataView local_18;
  
  if (this->bBindingsResolved == false) {
    local_res8[0] = 0;
    bVar5 = `FPropertyBindingBindingCollection::CopyProperty'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar5) {
      return false;
    }
  }
  if (param_1->Type == None) {
    return true;
  }
  if ((((param_2->Memory == (void *)0x0) || (pUVar2 = param_2->Struct, pUVar2 == (UStruct *)0x0)) ||
      (param_3->Memory == (void *)0x0)) || (param_3->Struct == (UStruct *)0x0)) {
    return false;
  }
  pUVar3 = (param_1->SourceStructType).field0_0x0.DebugPtr;
  if (pUVar3 != (UStruct *)0x0) {
    if (pUVar3 == pUVar2) goto LAB_14d37f1f3;
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14d37f1f3;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("SourceStructView.GetStruct() == Copy.SourceStructType || (SourceStructView.GetStruct() && SourceStructView.GetStruct()->IsChildOf(Copy.SourceStructType))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                     ,0x4bc,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_14d37f1f3:
  local_28.Struct = param_2->Struct;
  local_28.Memory = param_2->Memory;
  puVar7 = GetAddress(this,&local_28,&param_1->SourceIndirection,param_1->SourceLeafProperty);
  local_18.Struct = param_3->Struct;
  local_18.Memory = param_3->Memory;
  puVar8 = GetAddress(this,&local_18,&param_1->TargetIndirection,param_1->TargetLeafProperty);
  bVar5 = PerformCopy(this,param_1,puVar7,puVar8);
  return bVar5;
}

// DebugAsString @ 14d37f500

FString * __thiscall
FPropertyBindingBindingCollection::DebugAsString
          (FPropertyBindingBindingCollection *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  UStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FPropertyBindingBindableStructDescriptor *pFVar7;
  UPackage *pUVar8;
  UEnum *pUVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  TStringBuilderBase<wchar_t> local_128;
  undefined4 local_108;
  undefined4 local_104;
  FScriptContainerElement *local_100;
  longlong local_f8;
  FName local_f0;
  FString local_e8;
  undefined4 *local_d8;
  TStringBuilderBase<wchar_t> *local_d0;
  code *local_c8;
  undefined4 **local_c0;
  undefined4 *local_b8;
  TStringBuilderBase<wchar_t> *local_b0;
  code *local_a8;
  undefined4 **local_a0;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  void *local_58 [3];
  
  uVar12 = 0;
  local_128.Base = (wchar_t *)0x0;
  local_128.CurPos = (wchar_t *)0x0;
  local_128.End = (wchar_t *)0x0;
  local_128.bIsDynamic = false;
  local_128.bIsExternal = false;
  (**(code **)(this->_padding_ + 8))();
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"\nSourceStructs (%d)\n");
  iVar5 = (**(code **)(this->_padding_ + 8))(this);
  if (iVar5 != 0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"  [ (Idx) | %-45s | % -80s ]\n");
    local_d8 = &local_108;
    local_108 = 0;
    local_d0 = &local_128;
    local_c0 = &local_d8;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPropertyBindingBindingCollection::DebugAsString'::__l5::<lambda_1>,enum_FPropertyBindingBindingCollection::EVisitResult,FPropertyBindingBindableStructDescriptor_const_&>
               ::Call;
    (**(code **)(this->_padding_ + 0x60))(this,&local_c8);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"\nCopyBatches (%d)\n");
  if (((this->CopyBatches).ArrayNum != 0) &&
     (TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_128,L"  [ (Idx) | %-45s | %-45s | %-8s [%-5s:%-5s[ | %-8s [%-5s:%-5s[ ]\n"),
     uVar13 = uVar12, uVar14 = uVar12, 0 < (this->CopyBatches).ArrayNum)) {
    do {
      uVar11 = (uint)uVar12;
      uVar15 = 0;
      if ((int)uVar11 < (this->CopyBatches).ArrayNum) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar10 = (this->CopyBatches).AllocatorInstance.Data + uVar13;
      pFVar7 = UE::StructUtils::GetStructRef<FPropertyBindingBindableStructDescriptor>
                         (*(UScriptStruct **)pFVar10,*(void **)(pFVar10 + 8));
      (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_58);
      pUVar2 = (pFVar7->Struct).field0_0x0.DebugPtr;
      if (pUVar2 != (UStruct *)0x0) {
        local_f0 = (FName)pUVar2->_padding_;
        uVar14 = 1;
        ::FName::ToString(&local_f0,&local_e8);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_128,L"  | (%3d) | %-45s | %-45s | %8s [%5d:%-5d[ | %8s [%5d:%-5d[ |\n");
      if ((uVar14 != 0) &&
         (uVar14 = 0, local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 0x18;
    } while ((int)(uVar11 + 1) < (this->CopyBatches).ArrayNum);
  }
  uVar15 = 0;
  (**(code **)(this->_padding_ + 0x18))(this);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"\nPropertyPathBindings (%d)\n");
  iVar5 = (**(code **)(this->_padding_ + 0x18))(this);
  if (iVar5 != 0) {
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"  [ (Idx) | %-45s | %-45s | %-45s ]\n");
    local_b8 = &local_104;
    local_104 = 0;
    local_b0 = &local_128;
    local_a0 = &local_b8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPropertyBindingBindingCollection::DebugAsString'::__l13::<lambda_2>,void,FPropertyBindingBinding_const_&>
               ::Call;
    (**(code **)(this->_padding_ + 0x28))(this,&local_a8);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"\nPropertyCopies (%d)\n");
  if (((this->PropertyCopies).ArrayNum != 0) &&
     (TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_128,
                 L"  [ (Idx) | %-7s | %-4s | %-7s | %-10s | %-7s | %-4s | %-7s | %-10s | %-20s | %-4s ]\n"
                ), 0 < (this->PropertyCopies).ArrayNum)) {
    local_f8 = 0;
    do {
      lVar16 = local_f8;
      uVar11 = 0;
      if ((int)uVar15 < (this->PropertyCopies).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      pFVar10 = (this->PropertyCopies).AllocatorInstance.Data;
      FVar1 = pFVar10[lVar16 + 0x5c];
      pUVar9 = Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton;
      if (Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton == (UEnum *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_PropertyBindingUtils();
        pUVar9 = GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyCopyType,
                               (UObject *)pUVar8,L"EPropertyCopyType");
        Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton = pUVar9;
        if ((pUVar9 == (UEnum *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
      }
      UEnum::GetDisplayNameTextByValue(pUVar9,&local_78,(ulonglong)(byte)FVar1);
      pFVar6 = FText::ToString(&local_78);
      if ((pFVar6->Data).ArrayNum == 0) {
        local_100 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_100 = (pFVar6->Data).AllocatorInstance.Data;
      }
      FVar1 = pFVar10[lVar16 + 0x1e];
      pUVar9 = Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton;
      if (Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton ==
          (UEnum *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_PropertyBindingUtils();
        pUVar9 = GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyBindingPropertyAccessType
                               ,(UObject *)pUVar8,L"EPropertyBindingPropertyAccessType");
        Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton = pUVar9;
        if ((pUVar9 == (UEnum *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
      }
      UEnum::GetDisplayNameTextByValue(pUVar9,&local_88,(ulonglong)(byte)FVar1);
      FText::ToString(&local_88);
      FVar1 = pFVar10[lVar16 + 6];
      pUVar9 = Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton;
      if (Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton ==
          (UEnum *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_PropertyBindingUtils();
        pUVar9 = GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyBindingPropertyAccessType
                               ,(UObject *)pUVar8,L"EPropertyBindingPropertyAccessType");
        Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton = pUVar9;
        if ((pUVar9 == (UEnum *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xd13,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
      }
      UEnum::GetDisplayNameTextByValue(pUVar9,&local_98,(ulonglong)(byte)FVar1);
      FText::ToString(&local_98);
      TStringBuilderBase<wchar_t>::AppendfImpl
                (&local_128,
                 L"  | (%3d) | %7d | %4d | %7d | %-10s | %7d | %4d | %7d | %-10s | %-20s | %4d |\n")
      ;
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      uVar15 = uVar15 + 1;
      local_f8 = local_f8 + 0x60;
    } while ((int)uVar15 < (this->PropertyCopies).ArrayNum);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_128,L"\nPropertyIndirections (%d)\n");
  if ((this->PropertyIndirections).ArrayNum != 0) {
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_128,L"[ (Idx) | %-4s | %-4s | %-4s | %-10s ] \n");
    uVar15 = 0;
    if (0 < (this->PropertyIndirections).ArrayNum) {
      lVar16 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar15 < (this->PropertyIndirections).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
        FVar1 = (this->PropertyIndirections).AllocatorInstance.Data[lVar16 + 6];
        pUVar9 = Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton;
        if (Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton ==
            (UEnum *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_PropertyBindingUtils();
          pUVar9 = GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyBindingPropertyAccessType
                                 ,(UObject *)pUVar8,L"EPropertyBindingPropertyAccessType");
          Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton = pUVar9;
          if ((pUVar9 == (UEnum *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("EnumClass != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd13,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
        }
        UEnum::GetDisplayNameTextByValue(pUVar9,&local_68,(ulonglong)(byte)FVar1);
        FText::ToString(&local_68);
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_128,L"  | (%3d) | %4d | %4d | %4d | %-10s |\n");
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x18;
      } while ((int)uVar15 < (this->PropertyIndirections).ArrayNum);
    }
  }
  if (local_128.End < local_128.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_128,1);
  }
  *local_128.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_128.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_128);
  return __return_storage_ptr__;
}

// GetAddress @ 14d380180

uchar * __thiscall
FPropertyBindingBindingCollection::GetAddress
          (FPropertyBindingBindingCollection *this,FPropertyBindingDataView *param_1,
          FPropertyBindingPropertyIndirection *param_2,FProperty *param_3)

{
  EArrayPropertyFlags EVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  UStruct *pUVar6;
  FArrayProperty *pFVar7;
  FProperty *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  uchar *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  UObject *pUVar17;
  FPropertyBindingPropertyIndirection *local_res10 [2];
  FProperty *local_res20;
  FPropertyBindingPropertyIndirection **local_48;
  FProperty **local_40;
  
  pUVar17 = param_1->Memory;
  local_res10[0] = param_2;
  local_res20 = param_3;
  if (pUVar17 == (UObject *)0x0) {
LAB_14d3802bf:
    pUVar17 = (UObject *)0x0;
  }
  else {
    while ((local_res10[0] != (FPropertyBindingPropertyIndirection *)0x0 &&
           (pUVar17 != (UObject *)0x0))) {
      switch(local_res10[0]->Type) {
      case Offset:
        pUVar17 = (UObject *)(&pUVar17->field_0x0 + local_res10[0]->Offset);
        break;
      case Object:
        pUVar17 = *(UObject **)(&pUVar17->field_0x0 + local_res10[0]->Offset);
        break;
      case WeakObject:
        pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      (&pUVar17->field_0x0 + local_res10[0]->Offset));
        break;
      case SoftObject:
        pUVar17 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)
                             (&pUVar17->field_0x0 + local_res10[0]->Offset));
        break;
      case ObjectInstance:
        if (((local_res10[0]->InstanceStruct).field0_0x0.DebugPtr == (UStruct *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indirection->InstanceStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                                ,0x3a2,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        pUVar17 = *(UObject **)(&pUVar17->field_0x0 + local_res10[0]->Offset);
        if ((pUVar17 == (UObject *)0x0) ||
           (pUVar6 = (local_res10[0]->InstanceStruct).field0_0x0.DebugPtr, pUVar6 == (UStruct *)0x0)
           ) goto LAB_14d3802bf;
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) goto LAB_14d3802bf;
        break;
      case StructInstance:
        if (((local_res10[0]->InstanceStruct).field0_0x0.DebugPtr == (UStruct *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indirection->InstanceStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                                ,0x3b2,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        lVar4 = *(longlong *)(&pUVar17->field_0x0 + local_res10[0]->Offset);
        if ((lVar4 == 0) ||
           (pUVar6 = (local_res10[0]->InstanceStruct).field0_0x0.DebugPtr, pUVar6 == (UStruct *)0x0)
           ) goto LAB_14d3802bf;
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) goto LAB_14d3802bf;
        pUVar17 = *(UObject **)((longlong)(&pUVar17->field_0x0 + local_res10[0]->Offset) + 8);
        break;
      case IndexArray:
        if ((local_res10[0]->ArrayProperty == (FArrayProperty *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indirection->ArrayProperty",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                                ,999,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        uVar15 = (ulonglong)local_res10[0]->Offset;
        pFVar7 = local_res10[0]->ArrayProperty;
        EVar1 = pFVar7->ArrayFlags;
        (**(code **)(pFVar7->Inner->_padding_ + 0x168))();
        pFVar8 = pFVar7->Inner;
        iVar3 = pFVar8->ElementSize;
        if ((iVar3 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementSize > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1177,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        if ((pFVar8 == (FProperty *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InnerProperty",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x1178,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        uVar2 = (local_res10[0]->ArrayIndex).Value;
        if (*(int *)(&pUVar17->field_0x8 + uVar15) <= (int)(uint)uVar2) goto LAB_14d3802bf;
        if (*(int *)(&pUVar17->field_0x8 + uVar15) == 0) {
          pUVar17 = (UObject *)0x0;
        }
        else {
          puVar14 = *(undefined1 **)(&pUVar17->field_0x0 + uVar15);
          if (((EVar1 & UsesMemoryImageAllocator) != None) && (((ulonglong)puVar14 & 1) != 0)) {
            puVar14 = &pUVar17->field_0x0 + ((longlong)puVar14 >> 0x18) + uVar15;
          }
          pUVar17 = (UObject *)(puVar14 + (longlong)iVar3 * (ulonglong)uVar2);
        }
        break;
      case SharedStruct:
        if (((local_res10[0]->InstanceStruct).field0_0x0.DebugPtr == (UStruct *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indirection->InstanceStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                                ,0x3d6,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        plVar16 = *(longlong **)(&pUVar17->field_0x0 + local_res10[0]->Offset);
        if (((plVar16 == (longlong *)0x0) || (lVar4 = *plVar16, lVar4 == 0)) ||
           (pUVar6 = (local_res10[0]->InstanceStruct).field0_0x0.DebugPtr, pUVar6 == (UStruct *)0x0)
           ) goto LAB_14d3802bf;
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) goto LAB_14d3802bf;
        pUVar17 = (UObject *)
                  ((longlong)*(short *)(lVar4 + 0x5c) + 7 + (longlong)plVar16 &
                  -(longlong)*(short *)(lVar4 + 0x5c));
        break;
      case StructInstanceContainer:
        if (((local_res10[0]->InstanceStruct).field0_0x0.DebugPtr == (UStruct *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indirection->InstanceStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                                ,0x3c3,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        uVar2 = (local_res10[0]->ArrayIndex).Value;
        plVar16 = (longlong *)(&pUVar17->field_0x0 + local_res10[0]->Offset);
        uVar11 = 0xffffffff;
        if (uVar2 != 0xffff) {
          uVar11 = (uint)uVar2;
        }
        if ((((*(int *)((longlong)plVar16 + 0xc) < 1) || ((int)uVar11 < 0)) ||
            (*(int *)((longlong)plVar16 + 0xc) <= (int)uVar11)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid() && IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                ,0x84,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        if (((*(int *)((longlong)plVar16 + 0xc) < 1) ||
            (*(int *)((longlong)plVar16 + 0xc) <= (int)uVar11)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumItems > 0 && Index < NumItems",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                ,0x100,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          puVar13 = (uchar *)(*pcVar9)();
          return puVar13;
        }
        lVar4 = *plVar16;
        lVar12 = (longlong)(int)((int)plVar16[1] + uVar11 * -0x10);
        lVar5 = *(longlong *)(lVar12 + -0x10 + lVar4);
        pUVar17 = (UObject *)(*(int *)(lVar12 + -8 + lVar4) + lVar4);
        if (((pUVar17 == (UObject *)0x0) || (lVar5 == 0)) ||
           (pUVar6 = (local_res10[0]->InstanceStruct).field0_0x0.DebugPtr, pUVar6 == (UStruct *)0x0)
           ) goto LAB_14d3802bf;
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) goto LAB_14d3802bf;
        break;
      default:
        local_48 = local_res10;
        local_40 = &local_res20;
        `FPropertyBindingBindingCollection::GetAddress'::__l9::<lambda_1>::operator()(&local_48);
      }
      uVar2 = (local_res10[0]->NextIndex).Value;
      if (uVar2 == 0xffff) {
        return (uchar *)pUVar17;
      }
      if (((this->PropertyIndirections).ArrayNum <= (int)(uint)uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        puVar13 = (uchar *)(*pcVar9)();
        return puVar13;
      }
      local_res10[0] =
           (FPropertyBindingPropertyIndirection *)
           ((this->PropertyIndirections).AllocatorInstance.Data + (ulonglong)uVar2 * 0x18);
    }
  }
  return (uchar *)pUVar17;
}

// GetLogOwner @ 14d380a30

UObject * __thiscall
FPropertyBindingBindingCollection::GetLogOwner(FPropertyBindingBindingCollection *this)

{
  return (UObject *)0x0;
}

// PerformCopy @ 14d380f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPropertyBindingBindingCollection::PerformCopy
          (FPropertyBindingBindingCollection *this,FPropertyBindingCopyInfo *param_1,uchar *param_2,
          uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  longlong lVar8;
  UObject *pUVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  FBoolProperty *_Dst;
  longlong *plVar14;
  FBoolProperty *_Src;
  FBoolProperty *pFVar15;
  FBoolProperty *pFVar16;
  FBoolProperty *pFVar17;
  ulonglong uVar18;
  bool bVar19;
  FBoolProperty *local_98;
  FBoolProperty *local_90;
  int local_88;
  UObject *local_80;
  UObject *local_78;
  FPropertyBindingCopyInfo *local_70;
  FBoolProperty **local_68;
  FBoolProperty **local_60;
  FString local_58;
  FString local_48;
  
  bVar19 = param_1->bCopyFromTargetToSource == false;
  pUVar9 = (UObject *)param_3;
  if (bVar19) {
    pUVar9 = (UObject *)param_2;
  }
  lVar8 = 0x48;
  if (bVar19) {
    param_2 = param_3;
  }
  uVar11 = 0x40;
  if (bVar19) {
    lVar8 = 0x40;
    uVar11 = 0x48;
  }
  local_98 = *(FBoolProperty **)((longlong)&(param_1->SourceIndirection).ArrayIndex.Value + lVar8);
  local_90 = *(FBoolProperty **)
              ((longlong)&(param_1->SourceIndirection).ArrayIndex.Value + (ulonglong)uVar11);
  if ((pUVar9 == (UObject *)0x0) && (param_1->Type != CopyObject)) {
    if ((byte)LogPropertyBindingUtils._0_1_ < 6) {
      return false;
    }
    UEnum::GetValueAsString<enum_EPropertyCopyType>(&local_58,param_1->Type);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
LAB_14d381013:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    return false;
  }
  if ((UObject *)param_2 == (UObject *)0x0) {
    if ((byte)LogPropertyBindingUtils._0_1_ < 6) {
      return false;
    }
    UEnum::GetValueAsString<enum_EPropertyCopyType>(&local_48,param_1->Type);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    goto LAB_14d381013;
  }
  if ((local_90 == (FBoolProperty *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetLeafProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                          ,0x417,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return (bool)uVar6;
  }
  switch(param_1->Type) {
  case CopyPlain:
    memcpy(param_2,pUVar9,(longlong)param_1->CopySize);
    break;
  case CopyComplex:
    if ((UObject *)param_2 != pUVar9) {
      if (((uint)local_90->_padding_ >> 0x1e & 1) == 0) {
        (**(code **)(local_90->_padding_ + 0xf0))(local_90,param_2,pUVar9,(int)local_90->_padding_);
      }
      else {
        memcpy(param_2,pUVar9,
               (longlong)*(int *)((longlong)&local_90->_padding_ + 4) *
               (longlong)(int)local_90->_padding_);
      }
    }
    break;
  case CopyBool:
    if (((local_90 == (FBoolProperty *)0x0) ||
        (pFVar17 = local_90, (*(uint *)(local_90->_padding_ + 0x18) >> 0x11 & 1) == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"),
       pFVar17 = (FBoolProperty *)0x0, bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    if (((local_98 == (FBoolProperty *)0x0) ||
        (pFVar15 = local_98, (*(uint *)(local_98->_padding_ + 0x18) >> 0x11 & 1) == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"),
       pFVar15 = (FBoolProperty *)0x0, bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    bVar19 = FBoolProperty::GetPropertyValue(pFVar15,pUVar9);
    if ((pFVar17->FieldSize == '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    uVar18 = (ulonglong)pFVar17->ByteOffset;
    if (bVar19) {
      *(byte *)((longlong)&((UObject *)param_2)->field_0x0 + uVar18) =
           ~pFVar17->FieldMask & *(byte *)((longlong)&((UObject *)param_2)->field_0x0 + uVar18) |
           pFVar17->ByteMask;
    }
    else {
      *(byte *)((longlong)&((UObject *)param_2)->field_0x0 + uVar18) =
           ~pFVar17->FieldMask & *(byte *)((longlong)&((UObject *)param_2)->field_0x0 + uVar18);
    }
    break;
  case CopyStruct:
    if ((local_90 == (FBoolProperty *)0x0) ||
       (pFVar17 = local_90, (*(uint *)(local_90->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx");
      pFVar17 = (FBoolProperty *)0x0;
      if (bVar19) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
    }
    UScriptStruct::CopyScriptStruct(*(UScriptStruct **)&pFVar17->FieldSize,param_2,pUVar9,1);
    break;
  case CopyObject:
    if ((local_98 == (FBoolProperty *)0x0) || (pUVar9 == (UObject *)0x0)) {
      if ((local_90 == (FBoolProperty *)0x0) ||
         (pFVar17 = local_90, (*(uint *)(local_90->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
        pFVar17 = (FBoolProperty *)0x0;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx");
        if (bVar19) {
          pcVar5 = (code *)swi(3);
          uVar6 = (*pcVar5)();
          return (bool)uVar6;
        }
      }
      FObjectPropertyBase::SetObjectPropertyValue((FObjectPropertyBase *)pFVar17,param_2,pUVar9);
    }
    else {
      if (((local_90 == (FBoolProperty *)0x0) ||
          (pFVar17 = local_90, (*(uint *)(local_90->_padding_ + 0x18) >> 0x1a & 1) == 0)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("CastResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x480,L"CastFieldChecked failed with 0x%016llx"),
         pFVar17 = (FBoolProperty *)0x0, bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      if (((local_98 == (FBoolProperty *)0x0) ||
          (pFVar15 = local_98, (*(uint *)(local_98->_padding_ + 0x18) >> 0x1a & 1) == 0)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("CastResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x480,L"CastFieldChecked failed with 0x%016llx"),
         pFVar15 = (FBoolProperty *)0x0, bVar19)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      pUVar9 = (UObject *)(**(code **)(pFVar15->_padding_ + 0x1f8))(pFVar15,pUVar9);
      FObjectPropertyBase::SetObjectPropertyValue((FObjectPropertyBase *)pFVar17,param_2,pUVar9);
    }
    break;
  case CopyName:
    if (((local_90 == (FBoolProperty *)0x0) ||
        ((*(uint *)(local_90->_padding_ + 0x18) >> 0xd & 1) == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    if (((local_98 == (FBoolProperty *)0x0) ||
        ((*(uint *)(local_98->_padding_ + 0x18) >> 0xd & 1) == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    *(ulonglong *)param_2 = *(ulonglong *)pUVar9;
    break;
  case CopyFixedArray:
    pFVar17 = (FBoolProperty *)0x0;
    if (((local_98 == (FBoolProperty *)0x0) ||
        (pFVar15 = local_98, (*(uint *)(local_98->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar15 = pFVar17,
       bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    if (((local_90 == (FBoolProperty *)0x0) ||
        (pFVar16 = local_90, (*(uint *)(local_90->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar16 = pFVar17,
       bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    bVar1 = pFVar15->FieldSize;
    (**(code **)(*(longlong *)pFVar15[1]._padding_ + 0x168))();
    lVar8 = pFVar15[1]._padding_;
    iVar3 = *(int *)(lVar8 + 0x34);
    if ((iVar3 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    if ((lVar8 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    bVar2 = pFVar16->FieldSize;
    (**(code **)(*(longlong *)pFVar16[1]._padding_ + 0x168))();
    lVar8 = pFVar16[1]._padding_;
    local_88 = *(int *)(lVar8 + 0x34);
    if ((local_88 < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1177,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    if ((lVar8 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InnerProperty",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1178,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    uVar11 = *(uint *)&((UObject *)param_2)->field_0x8;
    if (*(int *)&pUVar9->field_0x8 < (int)*(uint *)&((UObject *)param_2)->field_0x8) {
      uVar11 = *(uint *)&pUVar9->field_0x8;
    }
    if (0 < (int)uVar11) {
      uVar18 = (ulonglong)uVar11;
      pFVar15 = pFVar17;
      do {
        plVar4 = (longlong *)pFVar16[1]._padding_;
        _Src = pFVar17;
        if (*(int *)&pUVar9->field_0x8 != 0) {
          puVar12 = *(undefined1 **)pUVar9;
          if (((bVar1 & 1) != 0) && (((ulonglong)puVar12 & 1) != 0)) {
            puVar12 = &pUVar9->field_0x0 + ((longlong)puVar12 >> 0x18);
          }
          _Src = (FBoolProperty *)(puVar12 + (longlong)iVar3 * (longlong)pFVar15);
        }
        _Dst = pFVar17;
        if (*(int *)&((UObject *)param_2)->field_0x8 != 0) {
          uVar13 = *(ulonglong *)param_2;
          if (((bVar2 & 1) != 0) && ((uVar13 & 1) != 0)) {
            uVar13 = (longlong)&((UObject *)param_2)->field_0x0 + ((longlong)uVar13 >> 0x18);
          }
          _Dst = (FBoolProperty *)(uVar13 + (longlong)local_88 * (longlong)pFVar15);
        }
        if (_Dst != _Src) {
          if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar4 + 0xf0))(plVar4,_Dst,_Src,1);
          }
          else {
            memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
        pFVar15 = (FBoolProperty *)((longlong)&pFVar15->_padding_ + 1);
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    break;
  case StructReference:
    if ((*(longlong *)&this->PropertyReferenceCopyFunc == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("PropertyReferenceCopyFunc",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                            ,0x447,
                            L"Not expecting EPropertyCopyType::StructReference if copy functor was not provided"
                           ), bVar19)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    pFVar17 = local_98;
    if ((local_98 == (FBoolProperty *)0x0) ||
       ((*(uint *)(local_98->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar19) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9153851119221341111>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                          ,0x449,"SourceStructProperty");
      if (bVar19) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
    }
    else {
      local_80 = (UObject *)param_2;
      local_78 = pUVar9;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->PropertyReferenceCopyFunc);
      plVar4 = *(longlong **)&(this->PropertyReferenceCopyFunc).field_0x28;
      pcVar5 = *(code **)&this->PropertyReferenceCopyFunc;
      plVar14 = (longlong *)&(this->PropertyReferenceCopyFunc).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar14 = plVar4;
      }
      uVar10 = (**(code **)(*plVar14 + 8))();
      (*pcVar5)(uVar10,pFVar17,&local_78,&local_80);
    }
    break;
  case PromoteBoolToByte:
    if ((local_98 == (FBoolProperty *)0x0) ||
       ((*(uint *)(local_98->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar19) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      bVar19 = FBoolProperty::GetPropertyValue((FBoolProperty *)0x0,pUVar9);
      *param_2 = bVar19;
    }
    else {
      bVar19 = FBoolProperty::GetPropertyValue(local_98,pUVar9);
      *param_2 = bVar19;
    }
    break;
  case PromoteBoolToInt32:
    if (local_98 == (FBoolProperty *)0x0) goto LAB_14d381782;
    uVar11 = *(uint *)(local_98->_padding_ + 0x18);
joined_r0x00014d3817d6:
    pFVar17 = local_98;
    if ((uVar11 >> 0x11 & 1) == 0) goto LAB_14d381782;
    goto LAB_14d3817b0;
  case PromoteBoolToUInt32:
    if (local_98 != (FBoolProperty *)0x0) {
      uVar11 = *(uint *)(local_98->_padding_ + 0x18);
      goto joined_r0x00014d3817d6;
    }
LAB_14d381782:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("CastResult",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                        ,0x480,L"CastFieldChecked failed with 0x%016llx");
    pFVar17 = (FBoolProperty *)0x0;
    if (bVar19) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
LAB_14d3817b0:
    bVar19 = FBoolProperty::GetPropertyValue(pFVar17,pUVar9);
    *(uint *)param_2 = (uint)bVar19;
    break;
  case PromoteBoolToInt64:
    if ((local_98 == (FBoolProperty *)0x0) ||
       (pFVar17 = local_98, (*(uint *)(local_98->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx");
      pFVar17 = (FBoolProperty *)0x0;
      if (bVar19) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
    }
    bVar19 = FBoolProperty::GetPropertyValue(pFVar17,pUVar9);
    *(ulonglong *)param_2 = (ulonglong)bVar19;
    break;
  case PromoteBoolToFloat:
    if ((local_98 == (FBoolProperty *)0x0) ||
       (pFVar17 = local_98, (*(uint *)(local_98->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx");
      pFVar17 = (FBoolProperty *)0x0;
      if (bVar19) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
    }
    bVar19 = FBoolProperty::GetPropertyValue(pFVar17,pUVar9);
    *(float *)param_2 = (float)bVar19;
    break;
  case PromoteBoolToDouble:
    if ((local_98 == (FBoolProperty *)0x0) ||
       (pFVar17 = local_98, (*(uint *)(local_98->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx");
      pFVar17 = (FBoolProperty *)0x0;
      if (bVar19) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
    }
    bVar19 = FBoolProperty::GetPropertyValue(pFVar17,pUVar9);
    *(double *)param_2 = (double)bVar19;
    break;
  case PromoteByteToInt32:
  case PromoteByteToUInt32:
    *(uint *)param_2 = (uint)*(byte *)pUVar9;
    break;
  case PromoteByteToInt64:
    *(ulonglong *)param_2 = (ulonglong)*(byte *)pUVar9;
    break;
  case PromoteByteToFloat:
    *(float *)param_2 = (float)*(byte *)pUVar9;
    break;
  case PromoteByteToDouble:
    *(double *)param_2 = (double)*(byte *)pUVar9;
    break;
  case PromoteInt32ToInt64:
    *(longlong *)param_2 = (longlong)*(int *)pUVar9;
    break;
  case PromoteInt32ToFloat:
    *(float *)param_2 = (float)*(int *)pUVar9;
    break;
  case PromoteInt32ToDouble:
    *(double *)param_2 = (double)*(int *)pUVar9;
    break;
  case PromoteUInt32ToInt64:
    *(ulonglong *)param_2 = (ulonglong)*(uint *)pUVar9;
    break;
  case PromoteUInt32ToFloat:
    *(float *)param_2 = (float)*(uint *)pUVar9;
    break;
  case PromoteUInt32ToDouble:
    *(double *)param_2 = (double)*(uint *)pUVar9;
    break;
  case PromoteFloatToInt32:
    *(int *)param_2 = (int)*(float *)pUVar9;
    break;
  case PromoteFloatToInt64:
    *(longlong *)param_2 = (longlong)*(float *)pUVar9;
    break;
  case PromoteFloatToDouble:
    *(double *)param_2 = (double)*(float *)pUVar9;
    break;
  case DemoteDoubleToInt32:
    *(int *)param_2 = (int)*(double *)pUVar9;
    break;
  case DemoteDoubleToInt64:
    *(longlong *)param_2 = (longlong)*(double *)pUVar9;
    break;
  case DemoteDoubleToFloat:
    *(float *)param_2 = (float)*(double *)pUVar9;
    break;
  default:
    local_68 = &local_98;
    local_60 = &local_90;
    local_70 = param_1;
    `FPropertyBindingBindingCollection::PerformCopy'::__l56::<lambda_1>::operator()(&local_70);
  }
  return true;
}

// PerformResetObjects @ 14d381a90

void __thiscall
FPropertyBindingBindingCollection::PerformResetObjects
          (FPropertyBindingBindingCollection *this,FPropertyBindingCopyInfo *param_1,uchar *param_2)

{
  EPropertyCopyType EVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  FObjectPropertyBase *this_00;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uchar *puVar10;
  FProperty *pFVar11;
  FProperty *pFVar12;
  int iVar13;
  FProperty *pFVar14;
  uchar *local_res10;
  
  if ((param_1->TargetLeafProperty == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Copy.TargetLeafProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                         ,0x4ce,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetAddress",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                         ,0x4cf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar1 = param_1->Type;
  if (EVar1 == CopyComplex) {
    pFVar12 = param_1->TargetLeafProperty;
    if ((pFVar12->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) !=
        (CPF_NoDestructor|CPF_ZeroConstructor)) {
                    /* WARNING: Could not recover jumptable at 0x00014d381e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar12->_padding_ + 0x130))(pFVar12,param_2);
      return;
    }
    memset(param_2,0,(longlong)pFVar12->ElementSize);
    return;
  }
  if (EVar1 == CopyStruct) {
    pFVar12 = param_1->TargetLeafProperty;
    if ((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x14 & 1) == 0))
    {
      pFVar12 = (FProperty *)0x0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UScriptStruct::ClearScriptStruct((UScriptStruct *)pFVar12[1]._padding_,param_2,1);
    return;
  }
  if (EVar1 == CopyObject) {
    this_00 = (FObjectPropertyBase *)param_1->TargetLeafProperty;
    if ((this_00 != (FObjectPropertyBase *)0x0) &&
       ((*(uint *)(this_00->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
      FObjectPropertyBase::SetObjectPropertyValue(this_00,param_2,(UObject *)0x0);
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (!bVar7) {
      FObjectPropertyBase::SetObjectPropertyValue((FObjectPropertyBase *)0x0,param_2,(UObject *)0x0)
      ;
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (EVar1 == CopyFixedArray) {
    pFVar12 = param_1->TargetLeafProperty;
    pFVar11 = (FProperty *)0x0;
    if (((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("CastResult",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar12 = pFVar11,
          bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar6 = pFVar12[1]._padding_;
    (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
    lVar4 = pFVar12[1]._padding_;
    iVar2 = *(int *)(lVar4 + 0x34);
    if ((iVar2 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = pFVar11;
    if ((lVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    while( true ) {
      iVar13 = (int)pFVar14;
      if (*(int *)(param_2 + 8) <= iVar13) break;
      plVar3 = (longlong *)pFVar12[1]._padding_;
      pFVar14 = pFVar11;
      if (*(int *)(param_2 + 8) != 0) {
        puVar10 = *(uchar **)param_2;
        if (((lVar6 & 1) != 0) && (((ulonglong)puVar10 & 1) != 0)) {
          puVar10 = param_2 + ((longlong)puVar10 >> 0x18);
        }
        pFVar14 = (FProperty *)(puVar10 + (longlong)iVar2 * (longlong)iVar13);
      }
      if ((plVar3[7] & 0x1000000200U) == 0x1000000200) {
        memset(pFVar14,0,(longlong)*(int *)((longlong)plVar3 + 0x34));
        pFVar14 = (FProperty *)(ulonglong)(iVar13 + 1);
      }
      else {
        (**(code **)(*plVar3 + 0x130))(plVar3);
        pFVar14 = (FProperty *)(ulonglong)(iVar13 + 1);
      }
    }
  }
  else if (EVar1 == StructReference) {
    if ((*(longlong *)&this->PropertyReferenceResetFunc == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PropertyReferenceResetFunc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                           ,0x4dd,
                           L"Not expecting EPropertyCopyType::StructReference if reset object functor was not provided"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res10 = param_2;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PropertyReferenceResetFunc);
    pcVar5 = *(code **)&this->PropertyReferenceResetFunc;
    plVar3 = *(longlong **)&(this->PropertyReferenceResetFunc).field_0x28;
    plVar9 = (longlong *)&(this->PropertyReferenceResetFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar5)(uVar8,&local_res10);
    return;
  }
  return;
}

// Reset @ 14d382020

void __thiscall FPropertyBindingBindingCollection::Reset(FPropertyBindingBindingCollection *this)

{
  int *piVar1;
  int iVar2;
  FPropertyBindingCopyInfoBatch *pFVar3;
  FPropertyBindingCopyInfo *pFVar4;
  
  piVar1 = &(this->CopyBatches).ArrayMax;
  pFVar3 = (FPropertyBindingCopyInfoBatch *)(this->CopyBatches).AllocatorInstance.Data;
  iVar2 = (this->CopyBatches).ArrayNum;
  if ((this->CopyBatches).ArrayMax < 0) {
    DestructItems<FPropertyBindingCopyInfoBatch,int>(pFVar3,iVar2);
    (this->CopyBatches).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->CopyBatches).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPropertyBindingCopyInfoBatch,int>(pFVar3,iVar2);
    (this->CopyBatches).ArrayNum = 0;
  }
  piVar1 = &(this->PropertyCopies).ArrayMax;
  pFVar4 = (FPropertyBindingCopyInfo *)(this->PropertyCopies).AllocatorInstance.Data;
  iVar2 = (this->PropertyCopies).ArrayNum;
  if ((this->PropertyCopies).ArrayMax < 0) {
    DestructItems<FPropertyBindingCopyInfo,int>(pFVar4,iVar2);
    (this->PropertyCopies).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->PropertyCopies).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPropertyBindingCopyInfo,int>(pFVar4,iVar2);
    (this->PropertyCopies).ArrayNum = 0;
  }
  (this->PropertyIndirections).ArrayNum = 0;
  if ((this->PropertyIndirections).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PropertyIndirections).AllocatorInstance,0,
               &(this->PropertyIndirections).ArrayMax);
  }
  this->bBindingsResolved = false;
                    /* WARNING: Could not recover jumptable at 0x00014d382117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))(this);
  return;
}

// ResetObjects @ 14d382130

bool __thiscall
FPropertyBindingBindingCollection::ResetObjects
          (FPropertyBindingBindingCollection *this,FPropertyBindingIndex16 param_1,
          FPropertyBindingDataView *param_2)

{
  FScriptContainerElement *pFVar1;
  UStruct *pUVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FPropertyBindingBindableStructDescriptor *pFVar8;
  uchar *puVar9;
  uint uVar10;
  ulonglong uVar11;
  FPropertyBindingCopyInfo *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FPropertyBindingDataView local_28;
  
  if (this->bBindingsResolved == false) {
    local_res8[0] = 0;
    bVar5 = `FPropertyBindingBindingCollection::ResetObjects'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar5) {
      return false;
    }
  }
  if (param_1.Value == 0xffff) {
    return false;
  }
  if (((this->CopyBatches).ArrayNum <= (int)(uint)param_1.Value) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyBatches.IsValidIndex(TargetBatchIndex.Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                         ,0x4ff,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((this->CopyBatches).ArrayNum <= (int)(uint)param_1.Value) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar1 = (this->CopyBatches).AllocatorInstance.Data + (ulonglong)param_1.Value * 0x18;
  if (((param_2->Memory == (void *)0x0) || (param_2->Struct == (UStruct *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetStructView.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                         ,0x502,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar2 = param_2->Struct;
  pFVar8 = UE::StructUtils::GetStructRef<FPropertyBindingBindableStructDescriptor>
                     (*(UScriptStruct **)pFVar1,*(void **)(pFVar1 + 8));
  pUVar3 = (pFVar8->Struct).field0_0x0.DebugPtr;
  if (pUVar3 == (UStruct *)0x0) {
    bVar5 = pUVar2 == (UStruct *)0x0;
  }
  else {
    bVar5 = pUVar3 == pUVar2;
  }
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetStructView.GetStruct() == Batch.TargetStruct.Get().Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                         ,0x503,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar11 = (ulonglong)*(ushort *)(pFVar1 + 0x10);
  if (*(ushort *)(pFVar1 + 0x10) != *(ushort *)(pFVar1 + 0x12)) {
    lVar13 = uVar11 * 0x60;
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < (this->PropertyCopies).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar12 = (FPropertyBindingCopyInfo *)((this->PropertyCopies).AllocatorInstance.Data + lVar13)
      ;
      if (pFVar12->Type != None) {
        local_28.Struct = param_2->Struct;
        local_28.Memory = param_2->Memory;
        puVar9 = GetAddress(this,&local_28,&pFVar12->TargetIndirection,pFVar12->TargetLeafProperty);
        if (puVar9 != (uchar *)0x0) {
          PerformResetObjects(this,pFVar12,puVar9);
        }
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      lVar13 = lVar13 + 0x60;
    } while (uVar10 + 1 != (uint)*(ushort *)(pFVar1 + 0x12));
  }
  return true;
}

// ResolveCopyInfoBetweenIndirections @ 14d382520

bool __thiscall
FPropertyBindingBindingCollection::ResolveCopyInfoBetweenIndirections
          (FPropertyBindingBindingCollection *this,FPropertyBindingPathIndirection *param_1,
          FPropertyBindingPathIndirection *param_2,FPropertyBindingCopyInfo *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  UStruct *pUVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  ulonglong uVar6;
  EPropertyCompatibility EVar7;
  EPropertyCopyType EVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  bool bVar11;
  
  pFVar9 = param_1->Property;
  pFVar2 = param_2->Property;
  if ((param_1->ContainerStruct != (UStruct *)0x0) && (param_2->ContainerStruct != (UStruct *)0x0))
  {
    param_3->SourceLeafProperty = pFVar9;
    param_3->TargetLeafProperty = param_2->Property;
    param_3->CopySize = 0;
    param_3->Type = None;
    pFVar10 = pFVar2;
    if (param_3->bCopyFromTargetToSource != false) {
      pFVar10 = pFVar9;
      pFVar9 = pFVar2;
      param_1 = param_2;
    }
    pUVar3 = param_1->ContainerStruct;
    if (pFVar9 == (FProperty *)0x0) {
      if (pFVar10 != (FProperty *)0x0) {
        if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x14 & 1) == 0) {
          if (((pFVar10 != (FProperty *)0x0) &&
              ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x1a & 1) != 0)) &&
             (lVar4 = pFVar10[1]._padding_, lVar4 != 0)) {
            if (((int)pUVar3->_padding_ < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)(pUVar3->_padding_ + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) {
              param_3->Type = CopyObject;
              return true;
            }
          }
        }
        else {
          if ((UStruct *)pFVar10[1]._padding_ == (UStruct *)0x0) {
            bVar11 = pUVar3 == (UStruct *)0x0;
          }
          else {
            bVar11 = (UStruct *)pFVar10[1]._padding_ == pUVar3;
          }
          if (bVar11) {
LAB_14d3825b9:
            param_3->Type = CopyStruct;
            return true;
          }
        }
      }
    }
    else {
      pUVar5 = (this->PropertyReferenceStructType).field0_0x0.DebugPtr;
      if ((((pUVar5 != (UScriptStruct *)0x0) && (param_3->bCopyFromTargetToSource == false)) &&
          (pFVar10 != (FProperty *)0x0)) &&
         ((((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x14 & 1) != 0 &&
           ((UScriptStruct *)pFVar10[1]._padding_ == pUVar5)) &&
          (((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x14 & 1) != 0 &&
           ((UScriptStruct *)pFVar9[1]._padding_ != pUVar5)))))) {
        param_3->Type = StructReference;
        return true;
      }
      EVar7 = UE::PropertyBinding::GetPropertyCompatibility(pFVar9,pFVar10);
      if ((*(ulonglong *)(pFVar9->_padding_ + 0x18) & 0x1000000000000) != 0) {
        pFVar9 = (FProperty *)pFVar9[1]._padding_;
      }
      if ((pFVar10 != (FProperty *)0x0) &&
         ((*(ulonglong *)(pFVar10->_padding_ + 0x18) & 0x1000000000000) != 0)) {
        pFVar10 = (FProperty *)pFVar10[1]._padding_;
      }
      if (EVar7 == Compatible) {
        if (pFVar10 != (FProperty *)0x0) {
          if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0xd & 1) != 0) {
            param_3->Type = CopyName;
            return true;
          }
          if (pFVar10 != (FProperty *)0x0) {
            uVar1 = *(uint *)(pFVar10->_padding_ + 0x18);
            if ((uVar1 >> 0x11 & 1) != 0) {
              param_3->Type = CopyBool;
              return true;
            }
            if ((uVar1 >> 0x14 & 1) != 0) goto LAB_14d3825b9;
            uVar6 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
            if ((uVar6 >> 0x1a & 1) != 0) {
              if (((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x1d & 1) == 0) ||
                 (EVar8 = CopyComplex, (uVar6 >> 0x1d & 1) == 0)) {
                EVar8 = CopyObject;
              }
              param_3->Type = EVar8;
              return true;
            }
            if (((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
               ((pFVar10->PropertyFlags & CPF_EditFixedSize) != CPF_None)) {
              param_3->Type = CopyFixedArray;
              return true;
            }
          }
        }
        if (((uint)(int)pFVar10->PropertyFlags >> 0x1e & 1) != 0) {
          param_3->Type = CopyPlain;
          param_3->CopySize = pFVar9->ElementSize * pFVar9->ArrayDim;
          return true;
        }
        param_3->Type = CopyComplex;
        return true;
      }
      if (EVar7 == Promotable) {
        uVar6 = *(ulonglong *)(pFVar9->_padding_ + 0x18);
        if ((uVar6 >> 0x11 & 1) == 0) {
          if ((uVar6 & 0x40) == 0) {
            if ((char)uVar6 < '\0') {
              uVar6 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
              if ((uVar6 >> 0x16 & 1) != 0) {
                param_3->Type = PromoteInt32ToInt64;
                return true;
              }
              if ((uVar6 >> 8 & 1) != 0) {
                param_3->Type = PromoteInt32ToFloat;
                return true;
              }
              if ((uVar6 >> 0x20 & 1) != 0) {
                param_3->Type = PromoteInt32ToDouble;
                return true;
              }
            }
            else if ((uVar6 >> 0xb & 1) == 0) {
              if ((uVar6 >> 8 & 1) == 0) {
                if ((uVar6 >> 0x20 & 1) != 0) {
                  uVar6 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
                  if ((char)uVar6 < '\0') {
                    param_3->Type = DemoteDoubleToInt32;
                    return true;
                  }
                  if ((uVar6 >> 0x16 & 1) != 0) {
                    param_3->Type = DemoteDoubleToInt64;
                    return true;
                  }
                  if ((uVar6 >> 8 & 1) != 0) {
                    param_3->Type = DemoteDoubleToFloat;
                    return true;
                  }
                }
              }
              else {
                uVar6 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
                if ((char)uVar6 < '\0') {
                  param_3->Type = PromoteFloatToInt32;
                  return true;
                }
                if ((uVar6 >> 0x16 & 1) != 0) {
                  param_3->Type = PromoteFloatToInt64;
                  return true;
                }
                if ((uVar6 >> 0x20 & 1) != 0) {
                  param_3->Type = PromoteFloatToDouble;
                  return true;
                }
              }
            }
            else {
              uVar6 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
              if ((uVar6 >> 0x16 & 1) != 0) {
                param_3->Type = PromoteUInt32ToInt64;
                return true;
              }
              if ((uVar6 >> 8 & 1) != 0) {
                param_3->Type = PromoteUInt32ToFloat;
                return true;
              }
              if ((uVar6 >> 0x20 & 1) != 0) {
                param_3->Type = PromoteUInt32ToDouble;
                return true;
              }
            }
          }
          else {
            uVar6 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
            if ((char)uVar6 < '\0') {
              param_3->Type = PromoteByteToInt32;
              return true;
            }
            if ((uVar6 >> 0xb & 1) != 0) {
              param_3->Type = PromoteByteToUInt32;
              return true;
            }
            if ((uVar6 >> 0x16 & 1) != 0) {
              param_3->Type = PromoteByteToInt64;
              return true;
            }
            if ((uVar6 >> 8 & 1) != 0) {
              param_3->Type = PromoteByteToFloat;
              return true;
            }
            if ((uVar6 >> 0x20 & 1) != 0) {
              param_3->Type = PromoteByteToDouble;
              return true;
            }
          }
        }
        else {
          uVar6 = *(ulonglong *)(pFVar10->_padding_ + 0x18);
          if ((uVar6 & 0x40) != 0) {
            param_3->Type = PromoteBoolToByte;
            return true;
          }
          if ((char)uVar6 < '\0') {
            param_3->Type = PromoteBoolToInt32;
            return true;
          }
          if ((uVar6 >> 0xb & 1) != 0) {
            param_3->Type = PromoteBoolToUInt32;
            return true;
          }
          if ((uVar6 >> 0x16 & 1) != 0) {
            param_3->Type = PromoteBoolToInt64;
            return true;
          }
          if ((uVar6 >> 8 & 1) != 0) {
            param_3->Type = PromoteBoolToFloat;
            return true;
          }
          if ((uVar6 >> 0x20 & 1) != 0) {
            param_3->Type = PromoteBoolToDouble;
            return true;
          }
        }
      }
    }
  }
  return false;
}

// ResolvePath @ 14d382bb0

bool __thiscall
FPropertyBindingBindingCollection::ResolvePath
          (FPropertyBindingBindingCollection *this,UStruct *param_1,FPropertyBindingPath *param_2,
          FPropertyBindingPropertyIndirection *param_3,FPropertyBindingPathIndirection *param_4)

{
  bool bVar1;
  FPropertyBindingDataView local_18;
  
  local_18.Memory = (void *)0x0;
  local_18.Struct = param_1;
  bVar1 = ResolvePath(this,&local_18,param_2,param_3,param_4);
  return bVar1;
}

// ResolvePath @ 14d382bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPropertyBindingBindingCollection::ResolvePath
          (FPropertyBindingBindingCollection *this,FPropertyBindingDataView *param_1,
          FPropertyBindingPath *param_2,FPropertyBindingPropertyIndirection *param_3,
          FPropertyBindingPathIndirection *param_4)

{
  TArray<FPropertyBindingPropertyIndirection,TSizedDefaultAllocator<32>_> *pTVar1;
  short *psVar2;
  undefined2 *puVar3;
  FScriptContainerElement FVar4;
  char cVar5;
  UObject *pUVar6;
  UStruct *pUVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FPropertyBindingBindingCollection *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  void *pvVar14;
  uint uVar15;
  ForElementType<FPropertyBindingPropertyIndirection> FVar16;
  undefined2 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  FName *pFVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  FPropertyBindingPropertyIndirection *pFVar29;
  int iVar30;
  FName *pFVar31;
  ForAnyElementType FVar32;
  FScriptContainerElement *pFVar33;
  undefined1 auStackY_3a8 [32];
  undefined1 local_358 [8];
  TStringBuilderBase<wchar_t> local_350;
  TStringBuilderBase<wchar_t> local_330;
  TStringBuilderBase<wchar_t> local_310;
  TStringBuilderBase<wchar_t> local_2f0;
  TArray<FPropertyBindingPathIndirection,TSizedDefaultAllocator<32>_> local_2d0;
  FString local_2c0;
  FScriptContainerElement *local_2b0;
  FPropertyBindingBindingCollection *local_2a8;
  FPropertyBindingPropertyIndirection *local_2a0;
  FPropertyBindingPathIndirection *local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FPropertyBindingDataView *local_270;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238 [2];
  UStruct *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  FPropertyBindingDataView local_1f8;
  TArray<FPropertyBindingPropertyIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_298 = param_4;
  local_2a8 = this;
  local_2a0 = param_3;
  local_270 = param_1;
  if (param_1->Struct == (UStruct *)0x0) {
    if (1 < (byte)LogPropertyBindingUtils._0_1_) {
      iVar26 = (param_2->Segments).ArrayNum;
      pFVar33 = (param_2->Segments).AllocatorInstance.Data;
      iVar25 = 0;
      local_2f0.End = (wchar_t *)0x0;
      local_2f0.bIsDynamic = false;
      local_2f0.bIsExternal = false;
      local_2f0.Base = (wchar_t *)0x0;
      local_2f0.CurPos = (wchar_t *)0x0;
      if ((iVar26 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar27 = 0;
      if (iVar26 < 0) {
        iVar27 = iVar26;
      }
      pFVar21 = (FName *)(pFVar33 + (longlong)iVar27 * 0x20);
      iVar23 = 0;
      if (0 < iVar26 - iVar27) {
        iVar23 = iVar26 - iVar27;
      }
      if ((iVar23 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pFVar31 = pFVar21 + (longlong)iVar23 * 4;
      for (; pFVar21 != pFVar31; pFVar21 = pFVar21 + 4) {
        if (0 < iVar25) {
          if (local_2f0.End < local_2f0.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_2f0,1);
          }
          *local_2f0.CurPos = L'.';
          local_2f0.CurPos = local_2f0.CurPos + 1;
        }
        local_290 = *pFVar21;
        ::FName::AppendString(&local_290,&local_2f0);
        if (-1 < (int)pFVar21[1].ComparisonIndex.Value) {
          if (local_2f0.End < local_2f0.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_2f0,1);
          }
          *local_2f0.CurPos = L'[';
          local_2f0.CurPos = local_2f0.CurPos + 1;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_2f0,L"%d");
          if (local_2f0.End < local_2f0.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_2f0,1);
          }
          *local_2f0.CurPos = L']';
          local_2f0.CurPos = local_2f0.CurPos + 1;
        }
        iVar25 = iVar25 + 1;
      }
      if (local_2f0.End < local_2f0.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_2f0,1);
      }
      *local_2f0.CurPos = L'\0';
      ::FString::FString(&local_268,local_2f0.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2f0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  local_1f8.Struct = param_1->Struct;
  local_1f8.Memory = param_1->Memory;
  local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.Data.ArrayNum = 0;
  local_2c0.Data.ArrayMax = 0;
  local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.ArrayNum = 0;
  local_2d0.ArrayMax = 0;
  bVar12 = FPropertyBindingPath::ResolveIndirectionsWithValue<TSizedDefaultAllocator<32>_>
                     (param_2,&local_1f8,&local_2d0,&local_2c0,false);
  if (!bVar12) {
    if (1 < (byte)LogPropertyBindingUtils._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
    }
    bVar12 = false;
    goto LAB_14d383d81;
  }
  iVar26 = local_2d0.ArrayNum;
  local_1e8.AllocatorInstance.SecondaryData =
       (ForElementType<FPropertyBindingPropertyIndirection>)0x0;
  uVar24 = 1;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0x10;
  pFVar33 = local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayNum * 0x30;
  FVar32.Data = local_2d0.AllocatorInstance.Data;
LAB_14d382ed2:
  local_2b0 = FVar32.Data;
  if (local_2d0.ArrayNum != iVar26) {
    local_358[0] = 0;
    `TCheckedPointerIterator<FPropertyBindingPathIndirection,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_358);
  }
  if (FVar32.Data == pFVar33) {
    if (local_1e8.ArrayNum < 1) {
      uStack_210 = 0;
      local_208 = 0xffffffffffffffff;
      uStack_200 = 0xffffffff;
      local_2a0->Offset = 0;
      local_2a0->Type = Offset;
      uStack_1fc = uStack_1fc & 0xffffff00;
      local_218 = local_270->Struct;
      local_298->Property = (FProperty *)0x0;
      local_298->ContainerAddress = (void *)0x0;
      local_298->ContainerStruct = local_218;
      local_298->InstanceStruct = (UStruct *)0x0;
      local_298->ArrayIndex = -1;
      local_298->PropertyOffset = -1;
      local_298->PathSegmentIndex = 0xffffffff;
      local_298->AccessType = (char)uStack_1fc;
      *(int3 *)&local_298->field_0x2d = (int3)(uStack_1fc >> 8);
      goto LAB_14d383d6b;
    }
    uVar28 = 0;
    uVar19 = 0;
    iVar26 = local_1e8.ArrayNum;
    if (local_1e8.ArrayNum < 1) goto LAB_14d383a2a;
    uVar20 = 1;
    goto LAB_14d383800;
  }
  if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
    local_1e8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPropertyIndirection>_>
                   (0x818,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
  }
  FVar16 = (ForElementType<FPropertyBindingPropertyIndirection>)&local_1e8;
  if (local_1e8.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
    FVar16 = local_1e8.AllocatorInstance.SecondaryData;
  }
  psVar2 = (short *)((longlong)FVar16 + (longlong)local_1e8.ArrayNum * 0x18);
  local_1e8.ArrayNum = local_1e8.ArrayNum + 1;
  DefaultConstructItems<FPropertyBindingPropertyIndirection,int>(psVar2,1);
  if (((*(int *)(FVar32.Data + 0x24) < 0) || (0xffff < *(int *)(FVar32.Data + 0x24))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PathIndirection.GetPropertyOffset() >= ((uint16) 0x0000) && PathIndirection.GetPropertyOffset() <= ((uint16) 0xffff)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Private\\PropertyBindingBindingCollection.cpp"
                          ,0x1e4,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  psVar2[1] = *(short *)(FVar32.Data + 0x24);
  FVar4 = FVar32.Data[0x2c];
  *(FScriptContainerElement *)(psVar2 + 3) = FVar4;
  if (FVar4 == (FScriptContainerElement)0x6) {
    lVar18 = *(longlong *)FVar32.Data;
    if ((lVar18 == 0) || ((*(uint *)(*(longlong *)(lVar18 + 8) + 0x18) >> 0x15 & 1) == 0)) {
      if (1 < (byte)LogPropertyBindingUtils._0_1_) {
        iVar26 = (param_2->Segments).ArrayNum;
        iVar27 = 0;
        iVar25 = *(int *)(FVar32.Data + 0x28);
        pFVar33 = (param_2->Segments).AllocatorInstance.Data;
        local_330.End = (wchar_t *)0x0;
        local_330.bIsDynamic = false;
        local_330.bIsExternal = false;
        local_330.Base = (wchar_t *)0x0;
        local_330.CurPos = (wchar_t *)0x0;
        if ((iVar26 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar23 = 0;
        if (iVar26 < 0) {
          iVar23 = iVar26;
        }
        pFVar21 = (FName *)(pFVar33 + (longlong)iVar23 * 0x20);
        iVar30 = 0;
        if (0 < iVar26 - iVar23) {
          iVar30 = iVar26 - iVar23;
        }
        if ((iVar30 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar31 = pFVar21 + (longlong)iVar30 * 4;
        for (; pFVar21 != pFVar31; pFVar21 = pFVar21 + 4) {
          if (0 < iVar27) {
            if (local_330.End < local_330.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_330,1);
            }
            *local_330.CurPos = L'.';
            local_330.CurPos = local_330.CurPos + 1;
          }
          if (iVar27 == iVar25) {
            if (local_330.End < local_330.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_330,1);
            }
            pvVar14 = FGenericPlatformString::Memcpy(local_330.CurPos,L"<",2);
            local_330.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
          }
          local_280 = *pFVar21;
          ::FName::AppendString(&local_280,&local_330);
          if (-1 < (int)pFVar21[1].ComparisonIndex.Value) {
            if (local_330.End < local_330.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_330,1);
            }
            *local_330.CurPos = L'[';
            local_330.CurPos = local_330.CurPos + 1;
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_330,L"%d");
            if (local_330.End < local_330.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_330,1);
            }
            *local_330.CurPos = L']';
            local_330.CurPos = local_330.CurPos + 1;
          }
          if (iVar27 == iVar25) {
            if (local_330.End < local_330.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_330,1);
            }
            pvVar14 = FGenericPlatformString::Memcpy(local_330.CurPos,L">",2);
            local_330.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
          }
          iVar27 = iVar27 + 1;
        }
        if (local_330.End < local_330.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_330,1);
        }
        *local_330.CurPos = L'\0';
        ::FString::FString(&local_248,local_330.Base);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_330);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
        local_258.Data.AllocatorInstance.Data = local_248.Data.AllocatorInstance.Data;
        goto LAB_14d3837cc;
      }
    }
    else {
      *(longlong *)(psVar2 + 8) = lVar18;
      uVar19 = *(uint *)(FVar32.Data + 0x20);
      if (((uVar19 != 0xffffffff) && (0xfffe < uVar19)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InIndex == INDEX_NONE || IsValidIndex(InIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingTypes.h"
                              ,0x4e,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      if (uVar19 == 0xffffffff) {
        uVar19 = 0xffff;
      }
      *psVar2 = (short)uVar19;
      if ((short)uVar19 != -1) goto LAB_14d38330f;
      if (1 < (byte)LogPropertyBindingUtils._0_1_) {
        iVar26 = (param_2->Segments).ArrayNum;
        iVar25 = *(int *)(FVar32.Data + 0x28);
        pFVar33 = (param_2->Segments).AllocatorInstance.Data;
        local_350.End = (wchar_t *)0x0;
        local_350.bIsDynamic = false;
        local_350.bIsExternal = false;
        local_350.Base = (wchar_t *)0x0;
        local_350.CurPos = (wchar_t *)0x0;
        if ((iVar26 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar27 = 0;
        if (iVar26 < 0) {
          iVar27 = iVar26;
        }
        pFVar21 = (FName *)(pFVar33 + (longlong)iVar27 * 0x20);
        iVar23 = 0;
        if (0 < iVar26 - iVar27) {
          iVar23 = iVar26 - iVar27;
        }
        if ((iVar23 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar26 = 0;
        pFVar31 = pFVar21 + (longlong)iVar23 * 4;
        for (; pFVar21 != pFVar31; pFVar21 = pFVar21 + 4) {
          if (0 < iVar26) {
            if (local_350.End < local_350.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_350,1);
            }
            *local_350.CurPos = L'.';
            local_350.CurPos = local_350.CurPos + 1;
          }
          if (iVar26 == iVar25) {
            if (local_350.End < local_350.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_350,1);
            }
            pvVar14 = FGenericPlatformString::Memcpy(local_350.CurPos,L"<",2);
            local_350.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
          }
          local_288 = *pFVar21;
          ::FName::AppendString(&local_288,&local_350);
          if (-1 < (int)pFVar21[1].ComparisonIndex.Value) {
            if (local_350.End < local_350.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_350,1);
            }
            *local_350.CurPos = L'[';
            local_350.CurPos = local_350.CurPos + 1;
            TStringBuilderBase<wchar_t>::AppendfImpl(&local_350,L"%d");
            if (local_350.End < local_350.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_350,1);
            }
            *local_350.CurPos = L']';
            local_350.CurPos = local_350.CurPos + 1;
          }
          if (iVar26 == iVar25) {
            if (local_350.End < local_350.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_350,1);
            }
            pvVar14 = FGenericPlatformString::Memcpy(local_350.CurPos,L">",2);
            local_350.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
          }
          iVar26 = iVar26 + 1;
        }
        if (local_350.End < local_350.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_350,1);
        }
        *local_350.CurPos = L'\0';
        ::FString::FString(&local_258,local_350.Base);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_350);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
LAB_14d3837cc:
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
      }
    }
    goto LAB_14d3837d6;
  }
  if ((1 < (byte)((char)FVar4 - 4U)) && (1 < (byte)((char)FVar4 - 7U))) goto LAB_14d38330f;
  pUVar6 = *(UObject **)(FVar32.Data + 0x18);
  if (pUVar6 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    *(UObject **)(psVar2 + 4) = pUVar6;
    uVar19 = *(uint *)(FVar32.Data + 0x20);
    if (((uVar19 != 0xffffffff) && (0xfffe < uVar19)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InIndex == INDEX_NONE || IsValidIndex(InIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingTypes.h"
                            ,0x4e,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    if (uVar19 == 0xffffffff) {
      uVar19 = 0xffff;
    }
    *psVar2 = (short)uVar19;
LAB_14d38330f:
    FVar32.Data = FVar32.Data + 0x30;
    goto LAB_14d382ed2;
  }
  if (1 < (byte)LogPropertyBindingUtils._0_1_) {
    iVar26 = (param_2->Segments).ArrayNum;
    iVar27 = 0;
    iVar25 = *(int *)(FVar32.Data + 0x28);
    pFVar33 = (param_2->Segments).AllocatorInstance.Data;
    local_310.End = (wchar_t *)0x0;
    local_310.bIsDynamic = false;
    local_310.bIsExternal = false;
    local_310.Base = (wchar_t *)0x0;
    local_310.CurPos = (wchar_t *)0x0;
    if ((iVar26 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    iVar23 = iVar27;
    if (iVar26 < 0) {
      iVar23 = iVar26;
    }
    pFVar21 = (FName *)(pFVar33 + (longlong)iVar23 * 0x20);
    iVar30 = iVar27;
    if (0 < iVar26 - iVar23) {
      iVar30 = iVar26 - iVar23;
    }
    if ((iVar30 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    pFVar31 = pFVar21 + (longlong)iVar30 * 4;
    for (; pFVar21 != pFVar31; pFVar21 = pFVar21 + 4) {
      if (0 < iVar27) {
        if (local_310.End < local_310.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_310,1);
        }
        *local_310.CurPos = L'.';
        local_310.CurPos = local_310.CurPos + 1;
      }
      if (iVar27 == iVar25) {
        if (local_310.End < local_310.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_310,1);
        }
        pvVar14 = FGenericPlatformString::Memcpy(local_310.CurPos,L"<",2);
        local_310.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
      }
      local_278 = *pFVar21;
      ::FName::AppendString(&local_278,&local_310);
      if (-1 < (int)pFVar21[1].ComparisonIndex.Value) {
        if (local_310.End < local_310.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_310,1);
        }
        *local_310.CurPos = L'[';
        local_310.CurPos = local_310.CurPos + 1;
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_310,L"%d");
        if (local_310.End < local_310.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_310,1);
        }
        *local_310.CurPos = L']';
        local_310.CurPos = local_310.CurPos + 1;
      }
      if (iVar27 == iVar25) {
        if (local_310.End < local_310.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_310,1);
        }
        pvVar14 = FGenericPlatformString::Memcpy(local_310.CurPos,L">",2);
        local_310.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
      }
      iVar27 = iVar27 + 1;
    }
    if (local_310.End < local_310.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_310,1);
    }
    *local_310.CurPos = L'\0';
    ::FString::FString(local_238,local_310.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_310);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPropertyBindingUtils);
    local_258.Data.AllocatorInstance.Data = local_238[0].Data.AllocatorInstance.Data;
    goto LAB_14d3837cc;
  }
LAB_14d3837d6:
  bVar12 = false;
  goto LAB_14d383d6d;
LAB_14d383800:
  do {
    uVar15 = 0;
    if ((int)uVar28 < iVar26) {
      uVar15 = ~uVar28 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar26 = local_1e8.ArrayNum, bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    FVar16 = (ForElementType<FPropertyBindingPropertyIndirection>)&local_1e8;
    if (local_1e8.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
      FVar16 = local_1e8.AllocatorInstance.SecondaryData;
    }
    puVar17 = (undefined2 *)((longlong)FVar16 + (longlong)(int)uVar28 * 0x18);
    if ((int)uVar20 < iVar26) {
      uVar15 = 0;
      if ((int)uVar20 < iVar26) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar26 = local_1e8.ArrayNum, bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      FVar16 = (ForElementType<FPropertyBindingPropertyIndirection>)&local_1e8;
      if (local_1e8.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
        FVar16 = local_1e8.AllocatorInstance.SecondaryData;
      }
      puVar3 = (undefined2 *)((longlong)FVar16 + (longlong)(int)uVar20 * 0x18);
      cVar5 = *(char *)(puVar17 + 3);
      if (cVar5 == '\0') {
        if (*(char *)(puVar3 + 3) != '\0') {
LAB_14d38393f:
          if ((((cVar5 != '\b') && (cVar5 != '\x01')) && (cVar5 != '\x04')) ||
             ((*(char *)(puVar3 + 3) != '\0' || (puVar3[1] != 0)))) goto LAB_14d383a1e;
          goto LAB_14d383967;
        }
        psVar2 = puVar17 + 1;
        *psVar2 = *psVar2 + puVar3[1];
        TArray<FPropertyBindingPropertyIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAt(&local_1e8,uVar20,Default);
      }
      else {
        if ((((cVar5 != '\x06') && (cVar5 != '\x05')) && (cVar5 != '\a')) ||
           ((*(char *)(puVar3 + 3) != '\0' || (puVar3[1] != 0)))) goto LAB_14d38393f;
LAB_14d383967:
        uVar15 = uVar19;
        if ((int)uVar20 < iVar26) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar26 = local_1e8.ArrayNum, bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        FVar16 = (ForElementType<FPropertyBindingPropertyIndirection>)&local_1e8;
        if (local_1e8.AllocatorInstance.SecondaryData !=
            (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
          FVar16 = local_1e8.AllocatorInstance.SecondaryData;
        }
        puVar17 = (undefined2 *)((longlong)FVar16 + (longlong)(int)uVar20 * 0x18);
        iVar25 = (iVar26 - uVar20) + -1;
        if (iVar25 != 0) {
          memmove(puVar17,puVar17 + 0xc,(longlong)iVar25 * 0x18);
          iVar26 = local_1e8.ArrayNum;
        }
        local_1e8.ArrayNum = iVar26 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPropertyIndirection>_>
                  (0x18,8,&local_1e8.AllocatorInstance,local_1e8.ArrayNum,&local_1e8.ArrayMax);
      }
      uVar28 = uVar28 - 1;
      uVar20 = uVar20 - 1;
      iVar26 = local_1e8.ArrayNum;
    }
LAB_14d383a1e:
    uVar28 = uVar28 + 1;
    uVar20 = uVar20 + 1;
  } while ((int)uVar28 < iVar26);
LAB_14d383a2a:
  uVar28 = uVar19;
  if ((int)(local_2d0.ArrayNum - 1U) < local_2d0.ArrayNum) {
    uVar28 = ~(local_2d0.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar26 = local_1e8.ArrayNum, bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  lVar18 = (longlong)(local_2d0.ArrayNum + -1);
  pvVar14 = *(void **)(local_2d0.AllocatorInstance.Data + lVar18 * 0x30 + 8);
  local_298->Property = *(FProperty **)(local_2d0.AllocatorInstance.Data + lVar18 * 0x30);
  local_298->ContainerAddress = pvVar14;
  pUVar7 = *(UStruct **)(local_2d0.AllocatorInstance.Data + lVar18 * 0x30 + 0x10 + 8);
  local_298->ContainerStruct =
       *(UStruct **)(local_2d0.AllocatorInstance.Data + lVar18 * 0x30 + 0x10);
  local_298->InstanceStruct = pUVar7;
  uVar9 = *(undefined8 *)(local_2d0.AllocatorInstance.Data + lVar18 * 0x30 + 0x20);
  uVar10 = *(undefined8 *)(local_2d0.AllocatorInstance.Data + lVar18 * 0x30 + 0x20 + 8);
  local_298->ArrayIndex = (int)uVar9;
  local_298->PropertyOffset = (int)((ulonglong)uVar9 >> 0x20);
  local_298->PathSegmentIndex = (int)uVar10;
  local_298->AccessType = (char)((ulonglong)uVar10 >> 0x20);
  *(int3 *)&local_298->field_0x2d = (int3)((ulonglong)uVar10 >> 0x28);
  if ((iVar26 < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     iVar26 = local_1e8.ArrayNum, bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  pFVar29 = local_2a0;
  FVar16 = (ForElementType<FPropertyBindingPropertyIndirection>)&local_1e8;
  if (local_1e8.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
    FVar16 = local_1e8.AllocatorInstance.SecondaryData;
  }
  (local_2a0->ArrayIndex).Value = *(ushort *)FVar16;
  local_2a0->Offset = *(ushort *)((longlong)FVar16 + 2);
  (local_2a0->NextIndex).Value = *(ushort *)((longlong)FVar16 + 4);
  local_2a0->Type = *(uchar *)((longlong)FVar16 + 6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)((longlong)FVar16 + 8) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)((longlong)FVar16 + 8));
    iVar26 = local_1e8.ArrayNum;
  }
  pFVar11 = local_2a8;
  (pFVar29->InstanceStruct).field0_0x0 = *(TObjectPtr<UStruct_const_>_u_0 *)((longlong)FVar16 + 8);
  pFVar29->ArrayProperty = *(FArrayProperty **)((longlong)FVar16 + 0x10);
  if (1 < iVar26) {
    lVar18 = 0x18;
    pTVar1 = &local_2a8->PropertyIndirections;
    do {
      uVar28 = (local_2a8->PropertyIndirections).ArrayNum;
      if (((uVar28 != 0xffffffff) && (0xfffe < uVar28)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InIndex == INDEX_NONE || IsValidIndex(InIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingTypes.h"
                              ,0x4e,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      if (uVar28 == 0xffffffff) {
        uVar28 = 0xffff;
      }
      (pFVar29->NextIndex).Value = (ushort)uVar28;
      uVar28 = uVar19;
      if ((int)uVar24 < local_1e8.ArrayNum) {
        uVar28 = ~uVar24 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pFVar33 = (pTVar1->AllocatorInstance).Data;
      FVar16 = (ForElementType<FPropertyBindingPropertyIndirection>)&local_1e8;
      if (local_1e8.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
        FVar16 = local_1e8.AllocatorInstance.SecondaryData;
      }
      pFVar22 = (FScriptContainerElement *)((longlong)FVar16 + lVar18);
      if (((pFVar33 <= pFVar22) &&
          (pFVar22 < pFVar33 + (longlong)(pFVar11->PropertyIndirections).ArrayMax * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      iVar26 = (pFVar11->PropertyIndirections).ArrayNum;
      if (iVar26 == (pFVar11->PropertyIndirections).ArrayMax) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar1->AllocatorInstance,
                            &(pFVar11->PropertyIndirections).ArrayMax);
      }
      (pFVar11->PropertyIndirections).ArrayNum = iVar26 + 1;
      pFVar29 = (FPropertyBindingPropertyIndirection *)
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar26 * 0x18);
      (pFVar29->ArrayIndex).Value = *(ushort *)pFVar22;
      pFVar29->Offset = *(ushort *)(pFVar22 + 2);
      (pFVar29->NextIndex).Value = *(ushort *)(pFVar22 + 4);
      pFVar29->Type = (EPropertyBindingPropertyAccessType)pFVar22[6];
      pUVar7 = *(UStruct **)(pFVar22 + 8);
      (pFVar29->InstanceStruct).field0_0x0.DebugPtr = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      uVar24 = uVar24 + 1;
      pFVar29->ArrayProperty = *(FArrayProperty **)(pFVar22 + 0x10);
      lVar18 = lVar18 + 0x18;
    } while ((int)uVar24 < local_1e8.ArrayNum);
  }
LAB_14d383d6b:
  bVar12 = true;
LAB_14d383d6d:
  if (local_1e8.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
    FMemory::Free((void *)local_1e8.AllocatorInstance.SecondaryData);
  }
LAB_14d383d81:
  if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.AllocatorInstance.Data);
  }
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  return bVar12;
}

// ResolvePaths @ 14d383dd0

bool __thiscall
FPropertyBindingBindingCollection::ResolvePaths(FPropertyBindingBindingCollection *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  code *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  FScriptContainerElement *local_40;
  FPropertyBindingBindingCollection *local_38;
  undefined8 local_30;
  
  (this->PropertyIndirections).ArrayNum = 0;
  if ((this->PropertyIndirections).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PropertyIndirections).AllocatorInstance,0,
               &(this->PropertyIndirections).ArrayMax);
  }
  uVar8 = (**(code **)(this->_padding_ + 0x18))(this);
  iVar3 = (this->PropertyCopies).ArrayNum;
  piVar1 = &(this->PropertyCopies).ArrayNum;
  if (iVar3 < (int)uVar8) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,uVar8 - iVar3,&(this->PropertyCopies).AllocatorInstance,piVar1,
                       &(this->PropertyCopies).ArrayMax);
    DefaultConstructItems<FPropertyBindingCopyInfo,int>
              ((this->PropertyCopies).AllocatorInstance.Data + (longlong)iVar9 * 0x60,uVar8 - iVar3)
    ;
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar3) {
      uVar10 = iVar3 - uVar8;
      if ((int)(uVar10 | uVar8) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      if (uVar10 != 0) {
        TArray<FPropertyBindingCopyInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->PropertyCopies,uVar8,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,&(this->PropertyCopies).AllocatorInstance,*piVar1,
                   &(this->PropertyCopies).ArrayMax);
      }
    }
  }
  this->bBindingsResolved = true;
  iVar3 = (this->CopyBatches).ArrayNum;
  pFVar11 = (this->CopyBatches).AllocatorInstance.Data;
  local_res8[0] = 1;
  pFVar2 = pFVar11 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->CopyBatches).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FPropertyBindingCopyInfoBatch,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar2) break;
    local_48 = local_res8;
    local_50 = &local_48;
    local_30 = 0;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPropertyBindingBindingCollection::ResolvePaths'::__l6::<lambda_1>,void,FPropertyBindingBinding_const_&,int>
               ::Call;
    local_40 = pFVar11;
    local_38 = this;
    (**(code **)(this->_padding_ + 0x20))
              (this,*(undefined2 *)(pFVar11 + 0x10),*(undefined2 *)(pFVar11 + 0x12),&local_58);
    pFVar11 = pFVar11 + 0x18;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x50))(this);
  uVar6 = 0;
  if (cVar7 != '\0') {
    uVar6 = local_res8[0];
  }
  return (bool)uVar6;
}

// operator() @ 15057ab80

bool __thiscall
`FPropertyBindingBindingCollection::CopyProperty'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9153851119221341012>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9153851119221341012>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057abc0

bool __thiscall
`FPropertyBindingBindingCollection::ResetObjects'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9153851119221340939>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9153851119221340939>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057ac00

bool __thiscall
`FPropertyBindingBindingCollection::GetAddress'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  UEnum *this_00;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9153851119221341194>);
  if (bVar3) {
    FProperty::GetNameCPP((FProperty *)**(undefined8 **)((longlong)this + 8),&local_18);
    if (Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton == (UEnum *)0x0)
    {
      pUVar6 = Z_Construct_UPackage__Script_PropertyBindingUtils();
      Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyBindingPropertyAccessType,
                         (UObject *)pUVar6,L"EPropertyBindingPropertyAccessType");
    }
    this_00 = Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton;
    if (Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton == (UEnum *)0x0)
    {
      pUVar6 = Z_Construct_UPackage__Script_PropertyBindingUtils();
      this_00 = GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyBindingPropertyAccessType
                              ,(UObject *)pUVar6,L"EPropertyBindingPropertyAccessType");
      Z_Registration_Info_UEnum_EPropertyBindingPropertyAccessType.OuterSingleton = this_00;
      if ((this_00 == (UEnum *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xca4,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_28);
    bVar2 = true;
    bVar4 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9153851119221341194>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15057ad41;
    }
  }
  bVar3 = false;
LAB_15057ad41:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15057ad90

bool __thiscall
`FPropertyBindingBindingCollection::PerformCopy'::__l56::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9153851119221341022>);
  if (bVar5) {
    FProperty::GetNameCPP((FProperty *)**(undefined8 **)((longlong)this + 0x10),&local_28);
    FProperty::GetNameCPP((FProperty *)**(undefined8 **)((longlong)this + 8),&local_38);
    if (Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton == (UEnum *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_PropertyBindingUtils();
      Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyCopyType,(UObject *)pUVar7,
                         L"EPropertyCopyType");
    }
    UEnum::GetValueAsString<enum_EPropertyCopyType>
              (&local_48,*(EPropertyCopyType *)(*(longlong *)this + 0x5c));
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9153851119221341022>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15057ae98;
    }
  }
  bVar5 = false;
LAB_15057ae98:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

