#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.UnityEngineModuleAssembly
struct UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF;
// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.UnityEngineModuleAssembly
struct UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityEngineModuleAssembly::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineModuleAssembly__ctor_m76C129AC6AA438BE601F5279EE9EB599BEF90AF9 (UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.UsedByNativeCodeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8 (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
static void UnityEngine_TextCoreModule_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x65\x68\x69\x63\x6C\x65\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[1];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x69\x64\x65\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[2];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x57\x69\x6E\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[3];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x73\x73\x65\x74\x42\x75\x6E\x64\x6C\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[4];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x74\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[5];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x61\x6D\x65\x43\x65\x6E\x74\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[6];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x4D\x47\x55\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[7];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6D\x62\x72\x61\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[8];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6E\x70\x75\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[9];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x4E\x61\x74\x69\x76\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[10];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x4E\x45\x54\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[11];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x41\x6E\x61\x6C\x79\x74\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[12];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x41\x73\x73\x65\x74\x42\x75\x6E\x64\x6C\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[13];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x57\x57\x57\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[14];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x58\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[15];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[16];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x72\x61\x73\x68\x52\x65\x70\x6F\x72\x74\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[17];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x52\x65\x70\x6F\x72\x74\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[18];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[19];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[20];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x77\x69\x74\x63\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[21];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x56\x46\x58\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[22];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x54\x65\x78\x74\x75\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[23];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x41\x75\x64\x69\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[24];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x57\x65\x62\x52\x65\x71\x75\x65\x73\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[25];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x2E\x42\x75\x69\x6C\x64\x65\x72\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[26];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x37"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[27];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[28];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[29];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[30];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[31];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[32];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x43\x6F\x72\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[33];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[34];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x45\x6E\x74\x69\x74\x69\x65\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[35];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x58\x62\x6F\x78\x4F\x6E\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[36];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x75\x63\x67\x2E\x51\x6F\x53"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[37];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[38];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[39];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[40];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73\x47\x61\x6D\x65\x4F\x62\x6A\x65\x63\x74\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[41];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x36"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[42];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[43];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[44];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x43\x6F\x6E\x6E\x65\x63\x74\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[45];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x43\x75\x72\x6C\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[46];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x6E\x69\x74\x79\x54\x65\x73\x74\x50\x72\x6F\x74\x6F\x63\x6F\x6C\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[47];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x69\x6E\x67\x2E\x54\x72\x61\x6E\x73\x70\x6F\x72\x74"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[48];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x34\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[49];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[50];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x55\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[51];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x75\x62\x73\x74\x61\x6E\x63\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[52];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x75\x62\x73\x79\x73\x74\x65\x6D\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[53];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x4C\x53\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[54];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x72\x72\x61\x69\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[55];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x72\x72\x61\x69\x6E\x50\x68\x79\x73\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[56];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4C\x6F\x63\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[57];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[58];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x35\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[59];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[60];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x46\x6F\x6E\x74\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[61];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x74\x72\x65\x61\x6D\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[62];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x54\x65\x78\x74\x45\x6E\x67\x69\x6E\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[63];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x2E\x46\x6F\x6E\x74\x45\x6E\x67\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[64];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x65\x78\x74\x4D\x65\x73\x68\x50\x72\x6F"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[65];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[66];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x65\x78\x74\x43\x6F\x72\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[67];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x53\x75\x62\x73\x79\x73\x74\x65\x6D\x2E\x52\x65\x67\x69\x73\x74\x72\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[68];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[69];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[70];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[71];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[72];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x44\x65\x76\x2E\x30\x30\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[73];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x2E\x46\x6F\x6E\x74\x45\x6E\x67\x69\x6E\x65\x2E\x54\x6F\x6F\x6C\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[74];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x38"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[75];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x72\x69\x74\x65\x53\x68\x61\x70\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[76];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x63\x72\x65\x65\x6E\x43\x61\x70\x74\x75\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[77];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x78\x74\x52\x65\x6E\x64\x65\x72\x69\x6E\x67\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[78];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x68\x61\x72\x65\x64\x49\x6E\x74\x65\x72\x6E\x61\x6C\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[79];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6F\x72\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[80];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[81];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x63\x63\x65\x73\x73\x69\x62\x69\x6C\x69\x74\x79\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[82];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x64\x72\x6F\x69\x64\x4A\x4E\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[83];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x69\x6D\x61\x74\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[84];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x75\x64\x69\x6F\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[85];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x44\x53\x50\x47\x72\x61\x70\x68\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[86];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x44\x69\x72\x65\x63\x74\x6F\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[87];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x72\x69\x74\x65\x4D\x61\x73\x6B\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[88];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x49\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[89];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x48\x6F\x74\x52\x65\x6C\x6F\x61\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[90];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6D\x61\x67\x65\x43\x6F\x6E\x76\x65\x72\x73\x69\x6F\x6E\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[91];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x49\x6E\x70\x75\x74\x4C\x65\x67\x61\x63\x79\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[92];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x69\x6C\x65\x6D\x61\x70\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[93];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4A\x53\x4F\x4E\x53\x65\x72\x69\x61\x6C\x69\x7A\x65\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[94];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x61\x72\x74\x69\x63\x6C\x65\x53\x79\x73\x74\x65\x6D\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[95];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x68\x79\x73\x69\x63\x73\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[96];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x68\x79\x73\x69\x63\x73\x32\x44\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[97];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x72\x6F\x66\x69\x6C\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[98];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x52\x75\x6E\x74\x69\x6D\x65\x49\x6E\x69\x74\x69\x61\x6C\x69\x7A\x65\x4F\x6E\x4C\x6F\x61\x64\x4D\x61\x6E\x61\x67\x65\x72\x49\x6E\x69\x74\x69\x61\x6C\x69\x7A\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[99];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x47\x72\x69\x64\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF * tmp = (UnityEngineModuleAssembly_t33CB058FDDDC458E384578147D6027BB1EC86CFF *)cache->attributes[100];
		UnityEngineModuleAssembly__ctor_m76C129AC6AA438BE601F5279EE9EB599BEF90AF9(tmp, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[101];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x30\x39"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[102];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x34\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[103];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x44\x65\x70\x6C\x6F\x79\x6D\x65\x6E\x74\x54\x65\x73\x74\x73\x2E\x53\x65\x72\x76\x69\x63\x65\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[104];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[105];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x54\x69\x6D\x65\x6C\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[106];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x2E\x42\x75\x69\x6C\x64\x65\x72\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[107];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[108];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[109];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[110];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[111];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x50\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x54\x65\x73\x74\x73\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x52\x75\x6E\x6E\x65\x72\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[112];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x42\x75\x72\x73\x74\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[113];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73\x2E\x41\x6C\x6C\x49\x6E\x31\x52\x75\x6E\x6E\x65\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[114];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x73\x65\x6D\x62\x6C\x79\x2D\x43\x53\x68\x61\x72\x70\x2D\x74\x65\x73\x74\x61\x62\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[115];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x73\x65\x6D\x62\x6C\x79\x2D\x43\x53\x68\x61\x72\x70\x2D\x66\x69\x72\x73\x74\x70\x61\x73\x73\x2D\x74\x65\x73\x74\x61\x62\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[116];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x53\x70\x61\x74\x69\x61\x6C\x54\x72\x61\x63\x6B\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[117];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x47\x6F\x6F\x67\x6C\x65\x41\x52\x2E\x55\x6E\x69\x74\x79\x4E\x61\x74\x69\x76\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[118];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x57\x69\x6E\x64\x6F\x77\x73\x4D\x52\x41\x75\x74\x6F\x6D\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[119];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x32\x44\x2E\x53\x70\x72\x69\x74\x65\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[120];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x32\x44\x2E\x53\x70\x72\x69\x74\x65\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[121];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[122];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x30"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[123];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x69\x6D\x65\x6C\x69\x6E\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[124];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x42\x75\x72\x73\x74"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[125];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x54\x65\x78\x74\x43\x6F\x72\x65\x2E\x46\x6F\x6E\x74\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[126];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x54\x65\x73\x74\x52\x75\x6E\x6E\x65\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[127];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x32"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[128];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x33"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[129];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x34"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[130];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x35"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[131];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x36"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[132];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x37"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[133];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x39"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[134];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x30"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[135];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x32\x31"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[136];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x55\x49\x45\x6C\x65\x6D\x65\x6E\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[137];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x72\x6E\x61\x6C\x41\x50\x49\x45\x6E\x67\x69\x6E\x65\x42\x72\x69\x64\x67\x65\x2E\x30\x31\x38"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[138];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x49\x6E\x74\x65\x67\x72\x61\x74\x69\x6F\x6E\x54\x65\x73\x74\x73\x2E\x55\x6E\x69\x74\x79\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[139];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x75\x72\x63\x68\x61\x73\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[140];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x64\x69\x74\x6F\x72\x2E\x55\x49\x42\x75\x69\x6C\x64\x65\x72\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[141];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x64\x76\x65\x72\x74\x69\x73\x65\x6D\x65\x6E\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[142];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[143];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x41\x6E\x61\x6C\x79\x74\x69\x63\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[144];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x41\x75\x74\x6F\x6D\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[145];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x75\x64"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[146];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x69\x6E\x67"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[147];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x50\x53\x35\x56\x52\x4D\x6F\x64\x75\x6C\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[148];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x43\x6C\x6F\x75\x64\x2E\x53\x65\x72\x76\x69\x63\x65"), NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_FaceIndex(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_FamilyName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_StyleName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_PointSize(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_Scale(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_LineHeight(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_AscentLine(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_CapLine(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_MeanLine(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_Baseline(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_DescentLine(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SuperscriptOffset(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SuperscriptSize(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SubscriptOffset(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SubscriptSize(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_UnderlineOffset(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_UnderlineThickness(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_StrikethroughOffset(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_StrikethroughThickness(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_TabWidth(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_X(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_Y(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_Width(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_Height(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_Width(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_Height(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_HorizontalBearingX(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_HorizontalBearingY(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_HorizontalAdvance(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_Index(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_Metrics(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_GlyphRect(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_Scale(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_AtlasIndex(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FontFeatureLookupFlags_t37E41419FC68819F0CA4BD748675CE571DEA2781_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_XPlacement(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_YPlacement(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_XAdvance(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_YAdvance(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphAdjustmentRecord_tF7DD4F1F660B62990292705F25D43A7EF3ED35EA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void GlyphAdjustmentRecord_tF7DD4F1F660B62990292705F25D43A7EF3ED35EA_CustomAttributesCacheGenerator_m_GlyphIndex(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphAdjustmentRecord_tF7DD4F1F660B62990292705F25D43A7EF3ED35EA_CustomAttributesCacheGenerator_m_GlyphValueRecord(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator_m_FirstAdjustmentRecord(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator_m_SecondAdjustmentRecord(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator_m_FeatureLookupFlags(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GlyphLoadFlags_t4F6D16E7D35F02D6D5F6A61CC1FE6F2D37BA52E1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[1];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void GlyphRenderMode_t43D8B1ECDEC4836D7689CB73D0D6C1EF346F973C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void GlyphPackingMode_tA3FDD5F4AE57836F61A43B17443DCE931CE6B292_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
static void GlyphMarshallingStruct_t6944FAFBC02A2747B49417BF23EBA14EB5FE7A19_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 * tmp = (UsedByNativeCodeAttribute_t604CF4E57FB3E7BCCCF0871A9B526472B2CDCB92 *)cache->attributes[0];
		UsedByNativeCodeAttribute__ctor_mA8236FADF130BCDD86C6017039295F9D521EECB8(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_UnityEngine_TextCoreModule_AttributeGenerators[];
const CustomAttributesCacheGenerator g_UnityEngine_TextCoreModule_AttributeGenerators[56] = 
{
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator,
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator,
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator,
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator,
	FontFeatureLookupFlags_t37E41419FC68819F0CA4BD748675CE571DEA2781_CustomAttributesCacheGenerator,
	GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator,
	GlyphAdjustmentRecord_tF7DD4F1F660B62990292705F25D43A7EF3ED35EA_CustomAttributesCacheGenerator,
	GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator,
	GlyphLoadFlags_t4F6D16E7D35F02D6D5F6A61CC1FE6F2D37BA52E1_CustomAttributesCacheGenerator,
	GlyphRenderMode_t43D8B1ECDEC4836D7689CB73D0D6C1EF346F973C_CustomAttributesCacheGenerator,
	GlyphPackingMode_tA3FDD5F4AE57836F61A43B17443DCE931CE6B292_CustomAttributesCacheGenerator,
	GlyphMarshallingStruct_t6944FAFBC02A2747B49417BF23EBA14EB5FE7A19_CustomAttributesCacheGenerator,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_FaceIndex,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_FamilyName,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_StyleName,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_PointSize,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_Scale,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_LineHeight,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_AscentLine,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_CapLine,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_MeanLine,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_Baseline,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_DescentLine,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SuperscriptOffset,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SuperscriptSize,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SubscriptOffset,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_SubscriptSize,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_UnderlineOffset,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_UnderlineThickness,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_StrikethroughOffset,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_StrikethroughThickness,
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_CustomAttributesCacheGenerator_m_TabWidth,
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_X,
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_Y,
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_Width,
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_CustomAttributesCacheGenerator_m_Height,
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_Width,
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_Height,
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_HorizontalBearingX,
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_HorizontalBearingY,
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B_CustomAttributesCacheGenerator_m_HorizontalAdvance,
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_Index,
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_Metrics,
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_GlyphRect,
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_Scale,
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_CustomAttributesCacheGenerator_m_AtlasIndex,
	GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_XPlacement,
	GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_YPlacement,
	GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_XAdvance,
	GlyphValueRecord_tC3EE2C6CB47827CE4BD352D84B3E9E540567DAB3_CustomAttributesCacheGenerator_m_YAdvance,
	GlyphAdjustmentRecord_tF7DD4F1F660B62990292705F25D43A7EF3ED35EA_CustomAttributesCacheGenerator_m_GlyphIndex,
	GlyphAdjustmentRecord_tF7DD4F1F660B62990292705F25D43A7EF3ED35EA_CustomAttributesCacheGenerator_m_GlyphValueRecord,
	GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator_m_FirstAdjustmentRecord,
	GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator_m_SecondAdjustmentRecord,
	GlyphPairAdjustmentRecord_tAD8F88FFC3A19DFDC31C2E0FA901E7CEAEE8A169_CustomAttributesCacheGenerator_m_FeatureLookupFlags,
	UnityEngine_TextCoreModule_CustomAttributesCacheGenerator,
};
