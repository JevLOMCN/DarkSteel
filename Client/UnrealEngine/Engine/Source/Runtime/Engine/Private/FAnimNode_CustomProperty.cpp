// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetTargetInstance<UAnimInstance> @ 14742d140

UAnimInstance * __thiscall
FAnimNode_CustomProperty::GetTargetInstance<UAnimInstance>(FAnimNode_CustomProperty *this)

{
  TObjectPtr<UObject> *this_00;
  UObject *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  pUVar1 = (this->TargetInstance).field0_0x0.DebugPtr;
  this_00 = &this->TargetInstance;
  if (((pUVar1 != (UObject *)0x0) && ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0)) &&
     ((this_00->field0_0x0).DebugPtr != (UObject *)0x0)) {
    pUVar3 = UAnimInstance::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UAnimInstance *)(this_00->field0_0x0).DebugPtr;
    }
  }
  return (UAnimInstance *)0x0;
}

// StaticStruct @ 14749de60

UScriptStruct * __cdecl FAnimNode_CustomProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CustomProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_CustomProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CustomProperty,(UObject *)pUVar1,
                         L"AnimNode_CustomProperty");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_CustomProperty.OuterSingleton;
}

// PropagateInputProperties @ 14749dea0

void __thiscall
FAnimNode_CustomProperty::PropagateInputProperties(FAnimNode_CustomProperty *this,UObject *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  FProperty *this_00;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  void *_Src;
  void *_Dst;
  FBoolProperty *this_01;
  FProperty *pFVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((this->TargetInstance).field0_0x0.DebugPtr != (UObject *)0x0) {
    if (((this->SourceProperties).ArrayNum != (this->DestProperties).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceProperties.Num() == DestProperties.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_CustomProperty.cpp"
                           ,0x1f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = 0;
    if (0 < (this->SourceProperties).ArrayNum) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->SourceProperties).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar10 < (this->DestProperties).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        this_00 = *(FProperty **)((this->SourceProperties).AllocatorInstance.Data + lVar9);
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this_00 != (FProperty *)0x0) &&
           (this_01 = *(FBoolProperty **)((this->DestProperties).AllocatorInstance.Data + lVar9),
           this_01 != (FBoolProperty *)0x0)) {
          _Src = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,0);
          _Dst = FProperty::ContainerUObjectPtrToValuePtrInternal
                           ((FProperty *)this_01,(this->TargetInstance).field0_0x0.DebugPtr,0);
          pFVar8 = this_00;
          if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0) {
            pFVar8 = (FProperty *)0x0;
          }
          if ((*(uint *)(this_01->_padding_ + 0x18) >> 0x11 & 1) == 0) {
            this_01 = (FBoolProperty *)0x0;
          }
          if ((pFVar8 == (FProperty *)0x0) || (this_01 == (FBoolProperty *)0x0)) {
            if (_Dst != _Src) {
              if (((uint)(int)this_00->PropertyFlags >> 0x1e & 1) == 0) {
                (**(code **)(this_00->_padding_ + 0xf0))(this_00,_Dst,_Src,this_00->ArrayDim);
              }
              else {
                memcpy(_Dst,_Src,(longlong)this_00->ElementSize * (longlong)this_00->ArrayDim);
              }
            }
          }
          else {
            if ((pFVar8->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((param_1 == (UObject *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = pFVar8->Offset_Internal;
            if (((char)pFVar8[1]._padding_ == '\0') &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FieldSize != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0xa4b,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar1 = (&param_1->field_0x0)
                    [(ulonglong)*(byte *)((longlong)&pFVar8[1]._padding_ + 1) + (longlong)iVar3];
            bVar2 = *(byte *)((longlong)&pFVar8[1]._padding_ + 3);
            pUVar4 = (this->TargetInstance).field0_0x0.DebugPtr;
            if (((int)this_01->_padding_ < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((pUVar4 == (UObject *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FBoolProperty::SetPropertyValue
                      (this_01,&pUVar4->field_0x0 + *(int *)((longlong)&this_01->_padding_ + 4),
                       (bVar2 & bVar1) != 0);
          }
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar10 < (this->SourceProperties).ArrayNum);
    }
  }
  return;
}

// FAnimNode_CustomProperty @ 1474b0ff0

FAnimNode_CustomProperty * __thiscall
FAnimNode_CustomProperty::FAnimNode_CustomProperty
          (FAnimNode_CustomProperty *this,FAnimNode_CustomProperty *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  
  pTVar1 = &this->SourcePropertyNames;
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FAnimNode_CustomProperty__6B_;
  piVar2 = &(this->SourcePropertyNames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->SourcePropertyNames).ArrayNum;
  pFVar5 = (param_1->SourcePropertyNames).AllocatorInstance.Data;
  (this->SourcePropertyNames).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar1 = &this->DestPropertyNames;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DestPropertyNames).ArrayMax;
  iVar4 = (param_1->DestPropertyNames).ArrayNum;
  pFVar5 = (param_1->DestPropertyNames).AllocatorInstance.Data;
  (this->DestPropertyNames).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pUVar6 = (param_1->TargetInstance).field0_0x0.DebugPtr;
  (this->TargetInstance).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  pTVar3 = &this->SourceProperties;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SourceProperties).ArrayMax;
  iVar4 = (param_1->SourceProperties).ArrayNum;
  pFVar5 = (param_1->SourceProperties).AllocatorInstance.Data;
  (this->SourceProperties).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar3 = &this->DestProperties;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DestProperties).ArrayMax;
  iVar4 = (param_1->DestProperties).ArrayNum;
  pFVar5 = (param_1->DestProperties).AllocatorInstance.Data;
  (this->DestProperties).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  return this;
}

// FAnimNode_CustomProperty @ 1474b11c0

FAnimNode_CustomProperty * __thiscall
FAnimNode_CustomProperty::FAnimNode_CustomProperty(FAnimNode_CustomProperty *this)

{
  this->_padding_ = (longlong)&___7FAnimNode_CustomProperty__6B_;
  this->_padding_ = 0;
  (this->SourcePropertyNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcePropertyNames).ArrayNum = 0;
  (this->SourcePropertyNames).ArrayMax = 0;
  (this->DestPropertyNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestPropertyNames).ArrayNum = 0;
  (this->DestPropertyNames).ArrayMax = 0;
  (this->TargetInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->SourceProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceProperties).ArrayNum = 0;
  (this->SourceProperties).ArrayMax = 0;
  (this->DestProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestProperties).ArrayNum = 0;
  (this->DestProperties).ArrayMax = 0;
  return this;
}

// ~FAnimNode_CustomProperty @ 1474b4ae0

void __thiscall FAnimNode_CustomProperty::~FAnimNode_CustomProperty(FAnimNode_CustomProperty *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAnimNode_CustomProperty__6B_;
  pFVar1 = (this->DestProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestPropertyNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourcePropertyNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 1474b62b0

FAnimNode_CustomProperty * __thiscall
FAnimNode_CustomProperty::operator=
          (FAnimNode_CustomProperty *this,FAnimNode_CustomProperty *param_1)

{
  UObject *pUVar1;
  
  this->_padding_ = param_1->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->SourcePropertyNames,&param_1->SourcePropertyNames);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->DestPropertyNames,&param_1->DestPropertyNames);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->TargetInstance).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->TargetInstance).field0_0x0 = (param_1->TargetInstance).field0_0x0;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->SourceProperties,&param_1->SourceProperties);
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->DestProperties,&param_1->DestProperties);
  return this;
}

// GetTargetClass @ 1474e0160

UClass * __thiscall FAnimNode_CustomProperty::GetTargetClass(FAnimNode_CustomProperty *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNode_CustomProperty.h"
             ,0x59,L"Pure virtual not implemented (%s)");
  return (UClass *)0x0;
}

// InitializeProperties @ 1474e8c60

void __thiscall
FAnimNode_CustomProperty::InitializeProperties
          (FAnimNode_CustomProperty *this,UObject *param_1,UClass *param_2)

{
  int *piVar1;
  int *piVar2;
  UStruct *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FProperty *local_48;
  FProperty *local_40;
  
  if (param_2 != (UClass *)0x0) {
    uVar9 = (this->SourcePropertyNames).ArrayNum;
    pUVar3 = *(UStruct **)&param_1->field_0x10;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &(this->SourceProperties).ArrayMax;
    (this->SourceProperties).ArrayNum = 0;
    if ((this->SourceProperties).ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&(this->SourceProperties).AllocatorInstance,0,piVar1);
    }
    uVar9 = (this->SourcePropertyNames).ArrayNum;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar2 = &(this->DestProperties).ArrayMax;
    (this->DestProperties).ArrayNum = 0;
    if ((this->DestProperties).ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&(this->DestProperties).AllocatorInstance,0,piVar2);
    }
    if (((this->SourcePropertyNames).ArrayNum != (this->DestPropertyNames).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourcePropertyNames.Num() == DestPropertyNames.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_CustomProperty.cpp"
                           ,0x4c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = 0;
    if (0 < (this->SourcePropertyNames).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->DestPropertyNames).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_40 = FindFProperty<FProperty>
                             ((UStruct *)param_2,
                              *(FName *)((this->DestPropertyNames).AllocatorInstance.Data +
                                        (longlong)(int)uVar9 * 8),Default);
        if (local_40 != (FProperty *)0x0) {
          uVar7 = 0;
          if ((int)uVar9 < (this->SourcePropertyNames).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_48 = FindFProperty<FProperty>
                               (pUVar3,*(FName *)((this->SourcePropertyNames).AllocatorInstance.Data
                                                 + (longlong)(int)uVar9 * 8),Default);
          if (local_48 != (FProperty *)0x0) {
            pFVar4 = (this->SourceProperties).AllocatorInstance.Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (this->SourceProperties).ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->SourceProperties).AllocatorInstance,piVar1);
            }
            (this->SourceProperties).ArrayNum = iVar8 + 1;
            *(FProperty **)((this->SourceProperties).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                 local_48;
            pFVar4 = (this->DestProperties).AllocatorInstance.Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
                ((FScriptContainerElement *)&local_40 < pFVar4 + (longlong)*piVar2 * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = (this->DestProperties).ArrayNum;
            if (iVar8 == *piVar2) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->DestProperties).AllocatorInstance,piVar2);
            }
            (this->DestProperties).ArrayNum = iVar8 + 1;
            *(FProperty **)((this->DestProperties).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                 local_40;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (this->SourcePropertyNames).ArrayNum);
    }
  }
  return;
}

// SetTargetInstance @ 1474f9c50

void __thiscall
FAnimNode_CustomProperty::SetTargetInstance(FAnimNode_CustomProperty *this,UObject *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
    (this->TargetInstance).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->TargetInstance).field0_0x0.DebugPtr = param_1;
  return;
}

