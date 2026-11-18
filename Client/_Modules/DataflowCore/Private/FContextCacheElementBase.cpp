// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 66

// GetTypedData<signed_char> @ 144414830

schar * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<signed_char>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          schar *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  schar *psVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (schar *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    psVar5 = (schar *)(*pcVar2)();
    return psVar5;
  }
  return param_3;
}

// GetTypedData<unsigned_char> @ 1444148e0

uchar * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_char>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          uchar *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  uchar *puVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (uchar *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
  return param_3;
}

// GetTypedData<short> @ 144414990

short * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<short>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          short *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (short *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    psVar5 = (short *)(*pcVar2)();
    return psVar5;
  }
  return param_3;
}

// GetTypedData<unsigned_short> @ 144414a40

ushort * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_short>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          ushort *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (ushort *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (ushort *)(*pcVar2)();
    return puVar5;
  }
  return param_3;
}

// GetTypedData<int> @ 144414af0

int * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<int>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          int *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (int *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    piVar5 = (int *)(*pcVar2)();
    return piVar5;
  }
  return param_3;
}

// GetTypedData<unsigned_int> @ 144414ba0

uint * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned_int>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          uint *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (uint *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uint *)(*pcVar2)();
    return puVar5;
  }
  return param_3;
}

// GetTypedData<float> @ 144414c50

float * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<float>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          float *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (float *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pfVar5 = (float *)(*pcVar2)();
    return pfVar5;
  }
  return param_3;
}

// GetTypedData<double> @ 144414d00

double * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<double>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          double *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (double *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pdVar5 = (double *)(*pcVar2)();
    return pdVar5;
  }
  return param_3;
}

// GetTypedData<UE::Math::TIntPoint<int>_> @ 144414db0

TIntPoint<int> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntPoint<int>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TIntPoint<int> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TIntPoint<int> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TIntPoint<int> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TIntPoint<int> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TIntPoint<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TIntPoint<int> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TIntPoint<int> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TIntPoint<int> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntPoint<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TIntVector3<int>_> @ 144414fc0

TIntVector3<int> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntVector3<int>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TIntVector3<int> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TIntVector3<int> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TIntVector3<int> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TIntVector3<int> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TIntVector3<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TIntVector3<int> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TIntVector3<int> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TIntVector3<int> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TIntVector4<int>_> @ 1444151d0

TIntVector4<int> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TIntVector4<int>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TIntVector4<int> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TIntVector4<int> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TIntVector4<int> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TIntVector4<int> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TIntVector4<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TIntVector4<int> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TIntVector4<int> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TIntVector4<int> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector4<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<TObjectPtr<UObject>_> @ 1444153e0

TObjectPtr<UObject> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TObjectPtr<UObject>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TObjectPtr<UObject> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TObjectPtr<UObject> *pTVar5;
  undefined8 unaff_RDI;
  
  while (EVar1 = this->Type, EVar1 == CacheElementReference) {
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUObject) {
      return (TObjectPtr<UObject> *)&this[1].NodeGuid.B;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UObject> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TQuat<float>_> @ 144415490

TQuat<float> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<float>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TQuat<float> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TQuat<float> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TQuat<float> *)&this[1].Type;
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TQuat<float> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<UE::Math::TQuat<double>_> @ 144415540

TQuat<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TQuat<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TQuat<double> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TQuat<double> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TQuat<double> *)&this[1].Type;
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TQuat<double> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TQuat<double> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TQuat<double> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TQuat<double> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TQuat<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TQuat<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TRotator<double>_> @ 144415750

TRotator<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TRotator<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TRotator<double> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TRotator<double> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TRotator<double> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TRotator<double> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TRotator<double> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TRotator<double> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TRotator<double> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TRotator<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TRotator<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TTransform<double>_> @ 144415960

TTransform<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TTransform<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TTransform<double> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TTransform<double> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TTransform<double> *)&this[1].Type;
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TTransform<double> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TTransform<double> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TTransform<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TVector2<float>_> @ 144415b70

TVector2<float> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector2<float>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TVector2<float> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TVector2<float> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TVector2<float> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TVector2<float> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<UE::Math::TVector2<double>_> @ 144415c20

TVector2<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector2<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TVector2<double> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TVector2<double> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TVector2<double> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TVector2<double> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TVector2<double> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector2<double> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector2<double> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector2<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector2<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TVector4<float>_> @ 144415e30

TVector4<float> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector4<float>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TVector4<float> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TVector4<float> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TVector4<float> *)&this[1].Type;
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TVector4<float> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<UE::Math::TVector4<double>_> @ 144415ee0

TVector4<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector4<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TVector4<double> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TVector4<double> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TVector4<double> *)&this[1].Type;
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TVector4<double> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TVector4<double> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<double> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector4<double> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector4<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector4<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<UE::Math::TVector<float>_> @ 1444160f0

TVector<float> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector<float>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TVector<float> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TVector<float> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TVector<float> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TVector<float> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<UE::Math::TVector<double>_> @ 1444161a0

TVector<double> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<UE::Math::TVector<double>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TVector<double> *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  TVector<double> *pTVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TVector<double> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pTVar6 = *(TVector<double> **)&this[1].NodeGuid.D;
      if ((pTVar6 == (TVector<double> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
      pUVar7 = TBaseStructure<UE::Math::TVector<double>_>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<UE::Math::TVector<double>_>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pTVar6;
          }
        }
        pUVar7 = TBaseStructure<UE::Math::TVector<double>_>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector<double> *)(*pcVar3)();
          return pTVar6;
        }
      }
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowCurveSelection> @ 1444163b0

FDataflowCurveSelection * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowCurveSelection>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowCurveSelection *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowCurveSelection *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowCurveSelection *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowCurveSelection>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowCurveSelection *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowFaceSelection> @ 144416480

FDataflowFaceSelection * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowFaceSelection>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowFaceSelection *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowFaceSelection *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowFaceSelection *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowFaceSelection>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowFaceSelection *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowGeometrySelection> @ 144416550

FDataflowGeometrySelection * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowGeometrySelection>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowGeometrySelection *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowGeometrySelection *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowGeometrySelection *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowGeometrySelection>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowGeometrySelection *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowImage> @ 144416620

FDataflowImage * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowImage>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowImage *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowImage *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowImage *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowImage>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowImage *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowMaterialSelection> @ 1444166f0

FDataflowMaterialSelection * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowMaterialSelection>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowMaterialSelection *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowMaterialSelection *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowMaterialSelection *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowMaterialSelection>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowMaterialSelection *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowTransformSelection> @ 1444167c0

FDataflowTransformSelection * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowTransformSelection>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowTransformSelection *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowTransformSelection *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowTransformSelection *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowTransformSelection>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowTransformSelection *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FDataflowVertexSelection> @ 144416890

FDataflowVertexSelection * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FDataflowVertexSelection>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FDataflowVertexSelection *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FDataflowVertexSelection *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FDataflowVertexSelection *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      pFVar5 = StructUtils::GetStructRef<FDataflowVertexSelection>
                         (*(UScriptStruct **)&this[1].NodeGuid.B,*(void **)&this[1].NodeGuid.D);
      return pFVar5;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowVertexSelection *)(*pcVar2)();
      return pFVar5;
    }
  }
  return param_3;
}

// GetTypedData<FLinearColor> @ 144416960

FLinearColor * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FLinearColor>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FLinearColor *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FLinearColor *pFVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FLinearColor *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pFVar6 = *(FLinearColor **)&this[1].NodeGuid.D;
      if ((pFVar6 == (FLinearColor *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FLinearColor *)(*pcVar3)();
        return pFVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FLinearColor *)(*pcVar3)();
        return pFVar6;
      }
      pUVar7 = TBaseStructure<FLinearColor>::Get();
      if (this_00 != pUVar7) {
        pUVar7 = TBaseStructure<FLinearColor>::Get();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pFVar6;
          }
        }
        pUVar7 = TBaseStructure<FLinearColor>::Get();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FLinearColor *)(*pcVar3)();
          return pFVar6;
        }
      }
      return pFVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FLinearColor *)(*pcVar3)();
      return pFVar6;
    }
  }
  return param_3;
}

// GetTypedData<FManagedArrayCollection> @ 144416b70

FManagedArrayCollection * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FManagedArrayCollection>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FManagedArrayCollection *param_3)

{
  EType EVar1;
  int iVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  FManagedArrayCollection *pFVar6;
  UScriptStruct *pUVar7;
  FString local_28;
  FString local_18;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FManagedArrayCollection *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)(**(code **)*param_1)(param_1,(int)this[1]._padding_);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 != CacheElementNull) {
    if (EVar1 == CacheElementUStruct) {
      this_00 = *(UScriptStruct **)&this[1].NodeGuid.B;
      pFVar6 = *(FManagedArrayCollection **)&this[1].NodeGuid.D;
      if ((pFVar6 == (FManagedArrayCollection *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x22,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FManagedArrayCollection *)(*pcVar3)();
        return pFVar6;
      }
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScriptStruct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                             ,0x23,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FManagedArrayCollection *)(*pcVar3)();
        return pFVar6;
      }
      pUVar7 = FManagedArrayCollection::StaticStruct();
      if (this_00 != pUVar7) {
        pUVar7 = FManagedArrayCollection::StaticStruct();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar2 = (int)pUVar7->_padding_;
          if (((int)this_00->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            return pFVar6;
          }
        }
        pUVar7 = FManagedArrayCollection::StaticStruct();
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_18,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FManagedArrayCollection *)(*pcVar3)();
          return pFVar6;
        }
      }
      return pFVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                       ,0x24a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FManagedArrayCollection *)(*pcVar3)();
      return pFVar6;
    }
  }
  return param_3;
}

// GetTypedData<TArray<signed_char,TSizedDefaultAllocator<32>_>_> @ 144416d80

TArray<signed_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<signed_char,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 144416e30

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<short,TSizedDefaultAllocator<32>_>_> @ 144416ee0

TArray<short,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<short,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<short,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<short,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<short,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<short,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 144416f90

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<int,TSizedDefaultAllocator<32>_>_> @ 144417040

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<int,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 1444170f0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<float,TSizedDefaultAllocator<32>_>_> @ 1444171a0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<float,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<double,TSizedDefaultAllocator<32>_>_> @ 144417250

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<double,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<double,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 144417300

TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 1444173e0

TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_> @ 1444174c0

TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 1444175a0

TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 144417650

TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 144417730

TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 144417810

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
              &this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 1444178f0

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 1444179a0

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 144417a80

TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 144417b30

TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 144417c10

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 144417cc0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 144417da0

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  UScriptStruct *pUVar6;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar7;
  char *pcVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar5 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar5 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar5;
  }
  if (EVar1 == CacheElementNull) {
    return param_3;
  }
  if (EVar1 == CacheElementUStructArray) {
    pUVar2 = (UScriptStruct *)this[1].Property;
    param_3 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)&this[1].NodeGuid.B;
    if (pUVar2 == (UScriptStruct *)0x0) {
      return param_3;
    }
    pUVar6 = TBaseStructure<FLinearColor>::Get();
    if (pUVar6 == pUVar2) {
      return param_3;
    }
    iVar9 = 0x201;
    pcVar8 = "!ScriptStruct || TBaseStructure<T>::Get() == ScriptStruct";
  }
  else {
    iVar9 = 0x24a;
    pcVar8 = "false";
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                     ,iVar9,L"");
  if (!bVar4) {
    return param_3;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar7;
}

// GetTypedData<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 144417e80

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FName,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 144417f30

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<FString,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 144417fe0

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<__int64,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 144418090

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::
GetTypedData<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 144418140

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (TArray<bool,TSizedDefaultAllocator<32>_> *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  return param_3;
}

// GetTypedData<FName> @ 1444181f0

FName * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FName>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FName *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FName *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FName *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FName *)(*pcVar2)();
    return pFVar5;
  }
  return param_3;
}

// GetTypedData<FString> @ 1444182a0

FString * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FString>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FString *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FString *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FString *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  return param_3;
}

// GetTypedData<FText> @ 144418350

FText * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<FText>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          FText *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FText *pFVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (FText *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  return param_3;
}

// GetTypedData<enum_EDataflowImageResolution> @ 144418400

EDataflowImageResolution * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<enum_EDataflowImageResolution>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          EDataflowImageResolution *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  EDataflowImageResolution *pEVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (EDataflowImageResolution *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pEVar5 = (EDataflowImageResolution *)(*pcVar2)();
    return pEVar5;
  }
  return param_3;
}

// GetTypedData<__int64> @ 1444184b0

long64 * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<__int64>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          long64 *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  long64 *plVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return &this[1]._padding_;
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    plVar5 = (long64 *)(*pcVar2)();
    return plVar5;
  }
  return param_3;
}

// GetTypedData<unsigned___int64> @ 144418560

ulong64 * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<unsigned___int64>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          ulong64 *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 *puVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (ulong64 *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (ulong64 *)(*pcVar2)();
    return puVar5;
  }
  return param_3;
}

// GetTypedData<bool> @ 144418610

bool * __thiscall
UE::Dataflow::FContextCacheElementBase::GetTypedData<bool>
          (FContextCacheElementBase *this,IContextCacheStore *param_1,FProperty *param_2,
          bool *param_3)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  bool *pbVar5;
  undefined8 unaff_RDI;
  
  while( true ) {
    EVar1 = this->Type;
    if (EVar1 == CacheElementTyped) {
      return (bool *)(this + 1);
    }
    if (EVar1 != CacheElementReference) break;
    puVar4 = (undefined8 *)
             (**(code **)*param_1)(param_1,(int)this[1]._padding_,param_2,param_3,unaff_RDI);
    if (puVar4 == (undefined8 *)0x0) {
      return param_3;
    }
    this = (FContextCacheElementBase *)*puVar4;
  }
  if ((EVar1 != CacheElementNull) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowContextCache.h"
                         ,0x24a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pbVar5 = (bool *)(*pcVar2)();
    return pbVar5;
  }
  return param_3;
}

// ~FContextCacheElementBase @ 144433690

void __thiscall
UE::Dataflow::FContextCacheElementBase::~FContextCacheElementBase(FContextCacheElementBase *this)

{
  this->_padding_ = (longlong)&___7FContextCacheElementBase_Dataflow_UE__6B_;
  return;
}

